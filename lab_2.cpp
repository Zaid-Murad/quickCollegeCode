#include <iostream>


double fun1(double& untilX)
{
	double sum = 0;
	double fact = 1;

	for (double i = 1; i < untilX + 1; i++)
	{

		for (double x = 1; x < i + 1; x++)
			fact *= x;

		sum += fact / i;

		fact = 1;
		
	}

	return sum;
}

int main()
{
	double requiredInput = 5;

	// To make sure it all works just right
	std::cout << fun1(requiredInput) << std::endl;

}
