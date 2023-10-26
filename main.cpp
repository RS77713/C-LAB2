#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;



int main() {
	/*int taskVarCount = 20;
	int studentCode = 83994;

	int taskNr = studentCode % taskVarCount;
	cout << studentCode % taskVarCount << endl;
	cin >> taskNr;*/
//taskNr 14



	double userInput;
	double z1;
	double z2;

	cout << "Enter a value for the calculation" << endl;
	cin >> userInput;

	double senctantOfInput = 1.0/cos(2.0*userInput);

	z1 = ((cos(userInput) + sin(userInput))) / (cos(userInput) - sin(userInput));


	z2 = tan(2.0 * userInput) + senctantOfInput;
	cout << "z1 is: " << z1 << endl;
	cout << "z2 is: " << z2 << endl;

	return 0;

}
//(!) NOTE: C/C++ trigonometric functions take as parameter value in radians and not in degrees! 
//User can enter initial data in radians, 
// but if he asked to make input in degrees then program has to convert degrees to radians.