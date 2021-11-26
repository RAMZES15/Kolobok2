#include <iostream>

using namespace std;

int main()
{
	int a; 
	int b; 
	int c;

	cin >> a;
	int* abc = new int[a];
	int max = -1, min = 10000;
	
	for (int i = 0; i < a; ++i) 
	{
		cin >> abc[i];	
	}
	
	for (int i = 0; i < a; ++i) 
	{
		if (abc[i] > max) 
		{
			max = abc[i];
			b = i;
		}
		if (abc[i] < min) 
		{
			min = abc[i];
			c = i;
		}
	}
	
	std::swap(abc[c], abc[b]);
	
	for (int i = 0; i < a; ++i) 
	{
		cout << abc[i]<<" ";
	}
	
	delete[] abc;
}
