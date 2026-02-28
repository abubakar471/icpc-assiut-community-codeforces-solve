#include<iostream>

int main(){
	int a,b,c;
	int max, min;

	std::cin >> a >> b >> c;

	max = (a >= b && a >=c) ? a : ((b > a && b >= c) ? b : c);  
	min = (a <= b && a <=c) ? a : ((b < a && b <= c) ? b : c);

	std::cout << min << " " << max << std::endl;

	return 0;
}