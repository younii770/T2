#include<iostream>
using namespace std;

int main()
{
	int seconds, hours, minutes;

	cout << " Please enter seconds : ";
	cin >> seconds;

	minutes = seconds / 60;
	hours = minutes / 60;

	cout << "\n The time is " <<hours%24<< " : " <<minutes%60<<" : " <<seconds%60;

	return 0;
}
