#include "MergeSort.h"

MergeSort::MergeSort(shared_ptr<SortingAlgorithmMain> AlgorithmMainPointer)
{
	AlgorithmMainPtr = AlgorithmMainPointer;
}

void MergeSort::MergeSortSorting(vector<int> &Vector, int LeftIndex, int MiddleIndex, int RightIndex)
{
	int LeftSizeAvailable = MiddleIndex - LeftIndex + 1;
	int RightSizeAvailable = RightIndex - MiddleIndex;

	vector<int> LeftVector(LeftSizeAvailable);
	vector<int> RightVector(RightSizeAvailable);

	// Copy data to temporary vectors
	for (int i = 0; i < LeftSizeAvailable; i++)
	{
		LeftVector[i] = Vector[LeftIndex + i];
	}
	for (int i = 0; i < RightSizeAvailable; i++)
	{
		RightVector[i] = Vector[MiddleIndex + 1 + i];
	}

	int i = 0;
	int j = 0;
	int k = LeftIndex;

	// Merge the vectors
	while (i < LeftSizeAvailable && j < RightSizeAvailable)
	{
		if (LeftVector[i] <= RightVector[j]) {
			Vector[k] = LeftVector[i];
			i++;
		}
		else {
			Vector[k] = RightVector[j];
			j++;
		}
		k++;
	}

	// Copy any remaining elements
	while (i < LeftSizeAvailable)
	{
		Vector[k] = LeftVector[i];
		i++;
		k++;
	}
	while (j < RightSizeAvailable)
	{
		Vector[k] = RightVector[j];
		j++;
		k++;
	}
}

void MergeSort::MergeSortAlgorithm(vector<int>& Vector, int LeftIndex, int RightIndex)
{
	if (LeftIndex < RightIndex)
	{
		// Find the middle
		int MiddleIndex = LeftIndex + (RightIndex - LeftIndex) / 2;

		MergeSortAlgorithm(Vector, LeftIndex, MiddleIndex);
		MergeSortAlgorithm(Vector, MiddleIndex + 1, RightIndex);

		MergeSortSorting(Vector, LeftIndex, MiddleIndex, RightIndex);
	}

	if (AlgorithmMainPtr->LoggingChoice == 1)
	{
		for (int i = 0; i < Vector.size(); i++)
		{
			cout << "Vector[" << i << "] = " << Vector[i] << endl;
		}
	}
}