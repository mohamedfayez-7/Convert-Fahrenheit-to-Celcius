#include<iostream>
#include<cmath>
using namespace std;

double tocelcius(double fahren)
{
	cout << "F\t\t  C" << endl;
	for (int i = 20; i <= 40; i++)
	{
		cout << i << " \t\t" << (5.0 / 9.0)*(i - 32)<<endl;
	}
	return (5.0 / 9.0)*(fahren - 32);
}

void main()
{
	double f;
	double c;
	cout << "Please Enter The Fahrenheit Temp " << endl;
	cin >> f;
	c = tocelcius(f);
	cout << "The Temperature you entered" << f << " and in celcius =" << c << endl;
	system("pause");

}