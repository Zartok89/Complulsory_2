#pragma once
#include <memory>
#include <iostream>
#include <vector>
#include "SortingAlgorithmMain.h"

class SortingAlgorithmMain;
using namespace std;

class SelectionSort
{
public:
	SelectionSort(shared_ptr<SortingAlgorithmMain> AlgorithmMainPointer);
	void SelectionSortAlgorithm(vector<int> &Vector, int Length);

	shared_ptr<SortingAlgorithmMain> AlgorithmMainPtr;
};