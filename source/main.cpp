#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int age;

	cout << "Enter your name, please: ";
	cin >> name;
	cout << "Welcome, ", name, "! Enter your age, please: ";
	cin >> age;
	cout << "Your age is ", age;
	return 0;
}
