#pragma once
#include <memory>
#include <iostream>
#include <vector>

#include "SortingAlgorithmMain.h"

class SortingAlgorithmMain;
using namespace std;

class QuickSort
{
public:
	QuickSort(shared_ptr<SortingAlgorithmMain> AlgorithmMainPointer);
	void QuickSortAlgorithm(vector<int> &Vector, int LeftIndex, int RightIndex);
	int Partition(vector<int> &Vector, int LeftValue, int RightValue);

	shared_ptr<SortingAlgorithmMain> AlgorithmMainPtr;
};

