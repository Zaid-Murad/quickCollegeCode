#include <iostream>

int Fibonacci(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int main()
{
    int n, i = 0, c;

    std::cin >> n;

    for (c = 1; c < n + 1; c++)
    {
        std::cout << Fibonacci(i) << " ";
        i++;
    }

    return 0;
}

