#include <iostream>
#include <iomanip>

void sumIt(double& untilX, double& sum, double& manipulated)
{
	for (int i = 0; i < untilX; i++)
	{
		sum += 1 / (4 * manipulated + 3);
		manipulated++;
	}
}
int main()
{
	
	double sum = 0;
	double untilX;
	double manipulated = 1;
	std::cin >> untilX;
	sumIt(untilX, sum, manipulated);
	std::cout << sum << std::endl;

}
