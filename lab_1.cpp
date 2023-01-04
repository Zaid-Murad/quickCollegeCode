#include <iostream>


double fun1(double& A, double& B, double& C)
{
	double x = 2 * B + A * C;
	return x;
}

double fun2(double& A, double& B, double& C)
{
	double y = (A * C - 2 * C) / fun1(A, B, C);
	return y;
}


int main()
{
	// To make sure it all works just right
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << fun1(a, b, c) << std::endl;

	std::cout << fun2(a, b, c);
} 
