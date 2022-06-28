#include <iostream>
using namespace std;
int main()
{
	int number=1;
	int num=0;
	
 	while(number)
	 {
	 	system("cls");
	 	cout << "insert number task, from out press 0\n";
	 	cout << "1. enter three-digit number, for out 2d digit\n"
 			"2. enter namber, from out 3d digit or no digit\n"
 			"3. enter number day of the week, from out day off or working day\n"
 			"0. exit\n";
	 	cin>>number;

if(number==1)
{					//принимает на вход трехзначное число, на выходе вторая цифра. 456=5
					//while()
	cout <<  "enter three-digit number, for out 2d digit\n";
	cin>>num;
	if((num>-999 & num<-99) | ( num < 999 & num > 99))
	{
		num=(num%100)/10;
		cout << num<<endl;
		
	}
	else cout << "number error!\n";
	system("pause");
}
else if(number==2)
{	/*выводит третью цифру заданного числа или сообщает что такой нет
	4578=7
	56=нет
	564=4*/
	cout <<"insert number\n out 3-th dig, or not digital\n";
	cin>>num;//ограничивает только вместимость inta
	if (num<99 & num>-99)
		cout << "no digital\n";
	else 
	{
		if(num>999 | num<-999)
			{
				for(;num>1000|num<-1000;)
					 num/=10;
			}
		 cout<< num%10;
	}
	cout << endl;
	system("pause");
}	
else if(number==3)
{	/*принимает цифру, обозначающую день недели и проверяет, 
	является ли этот день выходным.
	6->выходной
	7- выходной
	4 - нет*/
	cout<<"insert num day\n";
	cin>> num;
	switch (num)
	{
		case 1:
			cout<< "it`s working day. name monday\n";
			break;
		case 2:
			cout<< "it`s working day. name tuesday\n";
			break;
		case 3:
			cout<< "it`s working day. name wednesday\n";
			break;
		case 4:
			cout<< "it`s working day. name thursday\n";
			break;
		case 5:
			cout<< "it`s working day. name friday. tommorrow is a day off\n";
			break;
		case 6:
			cout<< "it`s off day. name satuday\n";
			break;
		case 7:
			cout<< "it`s off day. name sunday. i have to go to work tommorrow\n";
			break;
			default: cout << "only 7 days\n";
	}system("pause");
}

}
	system ("pause");
	return 0;
}