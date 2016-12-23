//Using a third variable.

#include<iostream>
using namespace std;
int a=10, b=20;
int swap(int x, int y)
	{ int temp;
	temp = x;
	x = y;
	y = temp;
	a = x;
	b = y;
	return 0;
	}
int main()
	{ cout<<a<<" "<<b<<"\n";
	swap(a, b);
	cout<<a<<" "<<b;
	return 0;
	}
