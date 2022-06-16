#include <iostream>
#include <list>
#include <ctime>
#include <Windows.h>

using namespace std;

void create(list<int>& list, int n)
{
	for (int i = 0; i < n; i++)
		list.push_back(rand() % 10 - 5);
}

void print(list<int> list, int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = list.front();
		list.pop_front();
		cout << k << " ";
		list.push_back(k);
	}
	cout << endl;
}

bool Task(list<int> list, int k)
{
	
	for (int i = 0; i < k; i++)
	{
		int p = list.front();
		list.pop_front();
		int n = list.front();
		if (p == n)
		{
			return true;
		}
		list.push_back(p);
		list.push_back(n);
	}
	return false;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned int)time(NULL));

	int n;

	cout << "n = "; cin >> n;
	cout << endl;

	list<int> arr;

	create(arr, n);

	print(arr, n);
	cout << endl;

	if (Task(arr, n))
	{
		cout << "Список містить пару сусідніх елементів з однаковими значеннями" << endl;
	}
	else
	{
		cout << "Список НЕ містить пару сусідніх елементів з однаковими значеннями" << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}