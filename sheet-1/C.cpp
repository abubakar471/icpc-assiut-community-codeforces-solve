#include<iostream>

using namespace std;

int main(){
	long long a,b, sum, mul, sub;

	cin >> a >> b;

	sum = a + b;
	mul = a * b;
	sub = a - b;

	cout << a << " + " << b << " = " << sum << endl;
	cout << a << " * " << b << " = " << mul << endl;
	cout << a << " - " << b << " = " << sub << endl;

	return 0;
}

