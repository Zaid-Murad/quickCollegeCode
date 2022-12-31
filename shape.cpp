#include <iostream>
#include <iomanip>

int main()
{
	char first = '@';
	char second = '*';
	char space = ' ';
	bool flip = 0;
	int stars = 1;
	int lines = 3;
	int w = lines + stars + 1;
	for (int i = 0; i < lines; i++)
	{
		std::cout << std::setw(w);
		w -= 2;
		for (int x = 0; x < stars; x++)
		{

			if (!flip)
			{

				std::cout << first << space;
				flip = 1;
			}

			else
			{
				std::cout << second << space;
				flip = 0;
			}

		}
		flip = 0;
		stars += 2;
		std::cout << "\n\n";
	}


}
