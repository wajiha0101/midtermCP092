#include<iostream>
using namespace std;
int main() {
	int salary, bonus, i=1, year;
	cout << "enter your salary: ";
	cin >> salary;
	year = 0;
	cout << "enter a year: ";
	cin >> year;
	for (; 0.05 + salary;salary+year) {//0.05 is the increase in salary of 5%
	
		if (i = 1) {
			cout << "you get a bonus of 2%for your performance: ";
			salary = salary + 0.02;//0.02 is the 2%
		}
		cout << "your whole month salary is: " << salary << endl;
	}
	
	return 0;
}
