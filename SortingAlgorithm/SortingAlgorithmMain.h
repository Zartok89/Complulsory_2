#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
#include<string>
#include <chrono>
#include <typeinfo>

using namespace std;

class SortingAlgorithmMain
{

public:
	SortingAlgorithmMain();
	SortingAlgorithmMain(vector<int> Vector);
	int AlgorithmChoice = 1;

	vector<int> MainVector = {};

	void SortingChoices(int SortingChoice, shared_ptr<SortingAlgorithmMain> AlgorithmMainPointer);
	void GenerateElements(int MaxIntSize, int VectorSize, vector<int> Vector);

	int LoggingChoice;
};