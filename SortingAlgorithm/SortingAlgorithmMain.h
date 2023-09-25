#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
#include<string>
#include <chrono>
#include <typeinfo>



/*
 * TODO: 1. Adding a case for 10, 100, 1000 and 10000 int elements
 * TODO: 2. Find and create 3 different sorting algorithms
 * TODO: -- Using: Selection Sort, Merge Sort, Quick Sort.
 * 
 */

using namespace std;

class SortingAlgorithmMain
{

public:
	SortingAlgorithmMain();
	SortingAlgorithmMain(vector<int> Vector);
	int AlgorithmChoice = 1;

	vector<int> MainVector = {};

	void SortingChoices(int SortingChoice);
	void GenerateElements(int MaxIntSize, int VectorSize, vector<int> Vector);
};