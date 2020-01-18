#include<iostream>
#include <string>
using namespace std;
int main()
{
	string header = "****************Calculater*******************";
	string a, b;
	cout << header<<endl;
	cout << "Enter the a Number :"<<endl;
	cin >> a; 
	/*while(a==char)
	{
		cin>>a;

	}*/
	cout << "Enter the a Number :"<<endl;
	cin >> b;
	cout << "Do you Operating choice : + / * -" << endl;
	char  choice;
	cin >> choice;
	switch (choice)
	{
	case '+':
		cout<< a + b;
		break;
	case '-':
		cout<< a - b;
		break;
	case '/':
		cout << a / b;
		break;
	case '*':
		cout << a * b;
		break;
	default:
		cout << "Please Enter  the character";
		break;
	}

	cout << "2020 © BARIŞ KARAPELİT";

	return 0;

}
