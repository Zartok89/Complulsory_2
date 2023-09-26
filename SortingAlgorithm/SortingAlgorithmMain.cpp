#include "SortingAlgorithmMain.h"

#include "MergeSort.h"
#include "QuickSort.h"
#include "SelectionSort.h"

int main()
{
	//Smart pointers to the Main Class
	shared_ptr<SortingAlgorithmMain> AlgorithmMainPtr = make_shared<SortingAlgorithmMain>();

	cout << "Do you wish to enable logging outputs in the console? (1 for Yes, 2 for No)\n ";
	while (!(cin >> AlgorithmMainPtr->LoggingChoice) || (AlgorithmMainPtr->LoggingChoice < 1 || AlgorithmMainPtr->LoggingChoice > 2))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Try again. " << endl;
	}

	AlgorithmMainPtr->GenerateElements(150, 20, AlgorithmMainPtr->MainVector);
	AlgorithmMainPtr->SortingChoices(AlgorithmMainPtr->AlgorithmChoice, AlgorithmMainPtr);
}

void SortingAlgorithmMain::SortingChoices(int SortingChoice, shared_ptr<SortingAlgorithmMain> AlgorithmMainPointer)
{
	//Smart pointers to the other algorithms classes
	const shared_ptr<SelectionSort> SelectionSortPtr = make_shared<SelectionSort>(AlgorithmMainPointer);
	const shared_ptr<MergeSort> MergeSortPtr = make_shared<MergeSort>(AlgorithmMainPointer);
	const shared_ptr<QuickSort> QuickSortPtr = make_shared<QuickSort>(AlgorithmMainPointer);

	cout << "--Choose your Sorting Algorithm--\n";
	cout << "1. Selection Sort Algorithm\n";
	cout << "2. Merge Sort Algorithm\n";
	cout << "3. Quick Sort Algorithm\n";
	cout << "Enter your choice (1-3):\n ";
	cin >> SortingChoice;
	AlgorithmChoice = SortingChoice;
	while (SortingChoice < 1 || SortingChoice > 3)
	{
		cout << endl;
		cout << "ERROR: Enter a value between 1 and 3!" << endl;
		cin >> SortingChoice;
	}
	cout << endl;
	chrono::time_point<chrono::steady_clock> Start = chrono::high_resolution_clock::now();
	switch (SortingChoice)
	{
	case 1:
		cout << "Selection Sort Algorithm Selected" << endl;
		SelectionSortPtr->SelectionSortAlgorithm(MainVector, MainVector.size());
		break;

	case 2:
		cout << "Merge Sort Algorithm Selected" << endl;
		MergeSortPtr->MergeSortAlgorithm(MainVector, 0, MainVector.size() - 1);
		MainVector.size();
		break;

	case 3:
		cout << "Quick Sort Algorithm Selected" << endl;
		QuickSortPtr->QuickSortAlgorithm(MainVector, 0, MainVector.size() - 1);
		break;

	default:;
	}
	chrono::time_point<chrono::steady_clock> End = chrono::high_resolution_clock::now();
	std::cout << "Time to complete sorting algorithm: " << chrono::duration_cast<chrono::milliseconds>((End)-(Start)).count() << " ms" << endl;
}

void SortingAlgorithmMain::GenerateElements(int MaxIntSize, int VectorSize, vector<int> Vector)
{
	// Providing a seed value
	srand((unsigned)time(NULL));

	cout << "Enter the maximum value of the int size " << endl;
	while (!(cin >> MaxIntSize))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Try again. " << endl;
	}

	//while (MaxIntSize < 1 || MaxIntSize > 999999)
	//{
	//	/*std::cin >> std::ws;
	//	MaxIntSize = cin.peek();*/
	//	if (isdigit(MaxIntSize) || MaxIntSize == '-')
	//	{
	//		cout << "ERROR: Please enter a number between 1 - 999999\n ";
	//		cin >> MaxIntSize;
	//		std::cout << "\033c";
	//	}
	//	else
	//	{
	//	}
	//}

	cout << "Enter the size of the vector:\n ";
	while (!(cin >> VectorSize))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Try again. " << endl;
	}
	cout << endl;
	for (int i = 0; i < VectorSize + 1; i++)
	{
		int RandomInts = 1 + (rand() % MaxIntSize);
		//cout << RandomInts << endl;
		Vector.push_back(RandomInts);
	}

	MainVector = Vector;
}

SortingAlgorithmMain::SortingAlgorithmMain()
= default;

SortingAlgorithmMain::SortingAlgorithmMain(vector<int> Vector)
{
	MainVector = Vector;
}