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
	QuickSort();
	void QuickSortAlgorithm(vector<int> &Vector, int LeftIndex, int RightIndex);
	int Partition(vector<int> &Vector, int LeftValue, int RightValue);

	shared_ptr<SortingAlgorithmMain> AlgorithmMainPtr = make_shared<SortingAlgorithmMain>();
};

