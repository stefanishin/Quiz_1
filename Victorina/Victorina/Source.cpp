#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main(void)
{
	int year;
	cout << "Enter a year:";
	cin >> year;
	if(year>2000)
	{
		cout << "Common year";
	}
	else
	{
		cout << "no";
	}

	system("pause");
return 0;
}