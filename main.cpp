#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;


int main()
{
	srand(time(NULL));

	int r = rand() % 500;
	int num, trys = 0;
	

	chrono::steady_clock sc;
	auto start = sc.now();
	for (;;)
	{
		cout << "Enter number: ";
		cin >> num;
		if (num < r || num < 500)
		{
			cout << "Oh! Computer`s number is more than yours.\n" << endl;
			trys++;

			continue;
		}
		if (num > r || num < 500)
		{
			cout << "Oh! Computer`s number is less than yours.\n " << endl;
			trys++;

			continue;
		}
		else
		{
			auto end = sc.now();
			auto time_span = static_cast<chrono::duration<double>>(end - start);
			cout << "Right! It`s " << r << " your`e tries: " << trys << "\nYour`e time: " << time_span.count() << "seconds." << endl;
			
			break;
		}
	}

	return 0;
}