#include <iostream>
#include <cmath>

using namespace std;

main()

{
	int number[10];
	int i,low,high;
	
	
	
	for(i=0; i < 10; ++i)
	{
	cout << "Enter the value of int " << i + 1 << ": ";
	cin >> number[i];
	}
	
	high = number[0];
	low = number[0];	
	
	for(i = 1; i < 10; ++i)
	{
		if(number[i] > high)
		{
			high = number[i];
		}else {
			if(number[i] < low)
		{
			low = number[i];
		}
		}
	}
	
	
	
	cout << endl << "Highest: " << high;
	cout << endl << "Lowest: " << low;
	
	
	
	
}
