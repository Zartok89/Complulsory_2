#include "SelectionSort.h"

SelectionSort::SelectionSort()
= default;

void SelectionSort::SelectionSortAlgorithm(vector<int>& Vector, int Length)
{
	for (int i = 0; i < Length - 1; i++)
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

	// Logging output implementation
	//cout << "Do you wish to enable logging outputs in the console? (1 for Yes, 2 for No)\n ";
	//while (!(cin >> AlgorithmMainPtr->LoggingChoice) || (AlgorithmMainPtr->LoggingChoice < 1 || AlgorithmMainPtr->LoggingChoice > 2))
	//{
	//	cin.clear();
	//	cin.ignore(1000, '\n');
	//	cout << "Invalid input. Try again. " << endl;
	//}

	if (AlgorithmMainPtr->LoggingChoice == 1)
	{
		for (int i = 0; i < Length; i++)
		{
			cout << "Vector[" << i << "] = " << Vector[i] << endl;
		}
	}
}