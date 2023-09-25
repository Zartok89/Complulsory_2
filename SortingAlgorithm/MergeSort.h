#pragma once
#include <memory>
#include <iostream>
#include <vector>
#include "SortingAlgorithmMain.h"

class SortingAlgorithmMain;
using namespace std;

class MergeSort
{
public:
	MergeSort();
	void MergeSortSorting(vector<int>& Vector, int LeftIndex, int MiddleIndex, int RightIndex);
	void MergeSortAlgorithm(vector<int>& Vector, int LeftIndex, int RightIndex);

	shared_ptr<SortingAlgorithmMain> AlgorithmMainPtr = make_shared<SortingAlgorithmMain>();
};
