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
	cout << num<<endl;
	/*выводит третью цифру заданного числа или сообщает что такой нет
	4578=7
	56=нет
	564=4*/
	cout <<"insert number3\n";
	cin>>num;
	if ((num<99)&(num>-99))
		cout << "no digital\n";
	else 
	cout << endl;
	/*принимает цифру, обозначающую день недели и проверяет, 
	является ли этот день выходным.
	6->выходной
	7- выходной
	4 - нет*/
	cout<<"insert num day\n";
	cin>> num;
	while(num>0&num<8)
	{
		if(num<6)
		cout<<"work\n";
		else cout << "weakend\n";
		system("pause");
		return 0;
		
	}
	cout << "error! no day\n";
	system ("pause");
	return 0;
}