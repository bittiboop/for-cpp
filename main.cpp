#include <iostream>
using namespace std;

int main()
{

	float userDig;
	float doll = 39.5;
	float euro = 42.3;
	bool userChoice;
	

	for (;;)
	{
		cout << "Hello, what summ you wan`t to convert?\n";
		cin >> userDig;
		
		bool a = true;
		cout << "Convert it to dollars or euros?\nDollars - 1\nEuros - 0" << endl;
		cin >> userChoice;
		if (userChoice == false)
		{
			userDig = userDig / doll;
			cout << "The result with exchange rate " << doll << " is: " << userDig << endl;
			cout << "Do you want to do convert in other values?\nYes - 1, No - 0" << endl;
			cin >> a;
			if (a == 1) {
				continue;
			}
			else if (a == 0) {
				break;
			}
		}
		if(userChoice = true) {
			userDig = userDig / euro;
			cout << "The result with exchange rate " << euro << " is: " << userDig << endl;
			cout << "Do you want to do convert in other values?\nYes - 1, No - 0" << endl;
			cin >> a;
			if (a == 1) {
				continue;
			}
			else if (a == 0){
				break;
			}
		}

	}

	return 0;
}