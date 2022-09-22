#include <iostream>
#include <string>

bool is_prime(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return num < 2 ? false : true;
}

void printPrimeNumber(int num)
{
    std::cout << num << " is a prime: " << (is_prime(num) == 1 ? "True" : "False") << "\n"; 
}

int main()
{
    int n;
    while (std::cin >> n)
    {
        printPrimeNumber(n);
    }
    return 0;
}