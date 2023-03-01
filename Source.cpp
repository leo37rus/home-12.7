#include <iostream>
#include <string>
#include "isKperiodic.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	string str{ "abcabcabcabc" };
	bool k = isKperiodic(str, 3);
	cout << " K кратна 3?" << endl;
	if (k)
	{
		cout << "да" << endl;
	}
	if (!k)
	{
		cout << "нет" << endl;
	}

	k = isKperiodic(str, 4);
	cout << " K кратна 4?" << endl;

	if (k)
	{
		cout << "да" << endl;
	}
	if (!k)
	{
		cout << "нет" << endl;
	}

	cout << " K кратна 0?" << endl;
	k = isKperiodic(str, 0);
	if (k)
	{
		cout << "да" << endl;
	}
	if (!k)
	{
		cout << "другая строка кратная 0" << endl;
	}

	return 0;
}
