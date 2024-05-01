#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	
	for (size_t i = 0; i < 100; i++)
	{
		int r = rand() % 800 + 100;
		cout << r << "  ";
	}
	cout << endl;

	return 0;
}