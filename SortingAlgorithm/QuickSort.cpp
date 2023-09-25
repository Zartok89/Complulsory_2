#include "QuickSort.h"

QuickSort::QuickSort()
= default;

int QuickSort::Partition(vector<int>& Vector, int LeftValue, int RightValue)
{
	int PivotValue = Vector[LeftValue];

	int Counter = 0;

	for (int i = LeftValue + 1; i <= RightValue; i++)
	{
		if (Vector[i] <= PivotValue)
		{
			Counter++;
		}
	}

	int PivotIndex = LeftValue + Counter;
	swap(Vector[PivotIndex], Vector[LeftValue]);

	int i = LeftValue;
	int j = RightValue;

	while (i < PivotIndex && j > PivotIndex)
	{
		while (Vector[i] <= PivotValue)
		{
			i++;
		}

		while (Vector[j] > PivotValue)
		{
			j--;
		}

		if (i < PivotIndex && j > PivotIndex)
		{
			swap(Vector[i++], Vector[j--]);
		}
	}

	return PivotIndex;
}

void QuickSort::QuickSortAlgorithm(vector<int>& Vector, int LeftIndex, int RightIndex)
{
	if (LeftIndex >= RightIndex)
		return;

	int PartitionIndex = Partition(Vector, LeftIndex, RightIndex);

	// Sorting Left Part
	QuickSortAlgorithm(Vector, LeftIndex, PartitionIndex - 1);

	// Sorting Right Part
	QuickSortAlgorithm(Vector, PartitionIndex + 1, RightIndex);

	for (int i = 0; i < Vector.size(); i++)
	{
		cout << "Vector[" << i << "] = " << Vector[i] << endl;
	}
}