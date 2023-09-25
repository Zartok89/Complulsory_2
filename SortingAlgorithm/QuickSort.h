#pragma once
#include <memory>
#include <iostream>
#include <vector>

class SortingAlgorithmMain;
using namespace std;

class QuickSort
{
public:
	QuickSort();
	void QuickSortAlgorithm(vector<int> &Vector, int LeftIndex, int RightIndex);
	int Partition(vector<int> &Vector, int LeftValue, int RightValue);
};

