#include<iostream>
using namespace std;
int main() {
	int age;
	int accidents;
	int Insurance =500;
	cout << "Enter your age";
	cin>> age;
	cout << "Enter the number of incidents";
	cin >> accidents;
	if (age <= 24)
	{
		Insurance = Insurance +100;
		switch (accidents)
		{
		case 0:
			cout << "Insurance value:" << Insurance;
			break;
		case 1:
			cout << "Insurance value:" << Insurance + 50;
			break;
		case 2:
			cout << "Insurance value:" << Insurance + 125;
			break;
		case 3:
			cout << "Insurance value:" << Insurance + 225;
			break;
		case 4:
			cout << "Insurance value:" << Insurance + 375;
			break;
		case 5:
			cout << "Insurance value:" << Insurance + 575;
			break;
		default:
			cout << "No insurance";
		}

	}
	else
	{
		switch (accidents)
		{
		case 0:
			cout <<"Insurance value:"<< Insurance;
			break;
		case 1:
			cout << "Insurance value:" << Insurance + 50;
			break;
		case 2:
			cout << "Insurance value:" << Insurance + 125;
			break;
		case 3:
			cout << "Insurance value:"<< Insurance + 225;
			break;
		case 4:
			cout << "Insurance value:" << Insurance + 375;
			break;
		case 5:
			cout << "Insurance value:" << Insurance + 575;
			break;
		default:
			cout << "No insurance";
		}
	}






}