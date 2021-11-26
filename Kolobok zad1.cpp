
#include <iostream>

using namespace std;

int main()
{
	int etazh; 
	int chel;
	long long s = 0;
	cin >> etazh >> chel;
	int* array = new int[etazh];
	int temp = chel;
	
	for (int i = 0; i < etazh; ++i) 
	{
		array[i] = temp;
		temp += 4;
	}
	
	for (int i = 1; i < etazh; ++i) 
	{
		s += array[i];
	}
	
	cout << s;
	
	delete[] array;
}