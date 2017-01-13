// Disarium Number
// http://www.geeksforgeeks.org/disarium-number/

#include<iostream>
#include<math.h>
using namespace std;
int main()
	{ int num;
	cin>>num;
	int digits = 0, temp = num;
	while(1)
		{ if(temp==0)
			break;
		temp /= 10;
		digits += 1;
		}
	temp = num;
	int i, newNum = 0, a;
	for(i=digits; i>0; --i)
		{ a = temp%10;
		newNum += pow(a,i);
		temp /= 10;
		}
	if(newNum==num)
		cout<<"Disarium\n";
	else
		cout<<"Not Disarium\n";
	return 0;
	}
