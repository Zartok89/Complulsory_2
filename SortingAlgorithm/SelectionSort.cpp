#include "SelectionSort.h"

SelectionSort::SelectionSort()
= default;

void SelectionSort::SelectionSortAlgorithm(vector<int> &Vector, int Length)
{
	for (int i = 0; i < Length - 1 ; i++)
	{
		int MinimumPositionValue = i;
		for (int j = i + 1; j < Length; j++)
		{
			if (Vector[j] < Vector[MinimumPositionValue])
			{
				MinimumPositionValue = j;
			}
		}

		if (MinimumPositionValue != i)
		{
			int TempInt = Vector[i];
			Vector[i] = Vector[MinimumPositionValue];
			Vector[MinimumPositionValue] = TempInt;
		}
	}
	for (int i = 0; i < Length; i++)
	{
		cout << "Vector[" << i << "] = " << Vector[i] << endl;
	}

}
