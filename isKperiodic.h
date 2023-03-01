#pragma once
#include <string>

using namespace std;

bool isKperiodic(const string& str, int k)
{
	setlocale(LC_ALL, "");
	if (k <= 0)
	{
		cout << " k <= 0 " << endl;

		return false;
	}
	for (int i = 0; i < str.size() - k; i++)
	{
		if (str[i] != str[i + k])
		{
			return false;
		}
	}
	return true;
}