#pragma once

#include <algorithm>
#include <vector>
#include <cctype>
#include <string.h>
#include <stdexcept>
#include <math.h>

bool isPositive(int x);

int countPositives(std::vector<int> const& inputVector);

void toUpper(char *inputString);

double mySqrt(double input);