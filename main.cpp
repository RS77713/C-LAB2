#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


using namespace std;



int main() {
	int taskVarCount = 20;
	int studentCode = 83994;

	int taskNr = studentCode % taskVarCount;
	cout << "Task number is: " << taskNr << endl;
//taskNr 14



	double userInput;
	double z1;
	double z2;

	cout << "Enter alfa value for the calculation" << endl;
	cin >> userInput;

	double senctantOfInput = 1.0/cos(2.0*userInput);

	z1 = ((cos(userInput) + sin(userInput))) / (cos(userInput) - sin(userInput));


	z2 = tan(2.0 * userInput) + senctantOfInput;
	cout << "z1 is: " << z1 << endl;
	cout << "z2 is: " << z2 << endl;

	return 0;

}
