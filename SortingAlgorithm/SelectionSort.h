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
	SelectionSort();
	void SelectionSortAlgorithm(vector<int> &Vector, int Length);

	SortingAlgorithmMain &AlgorithmMainPtr = AlgorithmMainPtr.LoggingChoice;
};