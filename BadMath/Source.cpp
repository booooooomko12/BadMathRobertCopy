#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return ((float)i1 + (float)i2 + (float)i3) / 3;
}

int main()
{
	int n1 = 0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout<< "The average is " << setprecision(1) << fixed << a << endl;

	return 0;
}