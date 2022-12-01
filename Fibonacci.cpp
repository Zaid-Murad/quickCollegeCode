#include <iostream>
#include <iomanip>

int main()
{

	int n;
	int n1 = 1;
	int n2 = 2;
	int current;
	int x;

	std::cin >> n;
	std::cin >> x;

	for (int i = 3; i <= n; i++)
	{

		current = n1 + n2;

		if (current > x)
		{
			std::cout << "not found" << std::endl;
			return 0;
		}

		else
		{
			if (current == x)
			{
				std::cout << "found" << std::endl;
				return 0;
			}
			else
			{
				n1 = n2;
				n2 = current;
			}
		}
	}

}
