#include<iostream>

using namespace std;
int main()
{
	int val = 5;
	int* ptr = &val;
	cout << *ptr<<endl;			//Output is 5
	cout << ptr;				//Output is the address

}