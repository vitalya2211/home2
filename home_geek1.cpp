#include <iostream>
using namespace std;
int main()
{
	int num=0;
	//принимает на вход трехзначное число, на выходе вторая цифра. 456=5
	//while()
	cout <<  "insert number\n";
	cin>>num;
	num=(num%100)/10;
	cout << num;
	
	system ("pause");
	return 0;
}