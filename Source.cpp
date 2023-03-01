#include <iostream>
#include <string>
#include "isKperiodic.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	string str{ "abcabcabcabc" };
	bool k = isKperiodic(str, 3);
	cout << " K ������ 3?" << endl;
	if (k)
	{
		cout << "��" << endl;
	}
	if (!k)
	{
		cout << "���" << endl;
	}

	k = isKperiodic(str, 4);
	cout << " K ������ 4?" << endl;

	if (k)
	{
		cout << "��" << endl;
	}
	if (!k)
	{
		cout << "���" << endl;
	}

	cout << " K ������ 0?" << endl;
	k = isKperiodic(str, 0);
	if (k)
	{
		cout << "��" << endl;
	}
	if (!k)
	{
		cout << "������ ������ ������� 0" << endl;
	}

	return 0;
}
