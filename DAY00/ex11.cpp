#include <iostream>

int calc()
{
    int x;
    std::cout << "entrez un valeur:";
    std::cin >> x;
    for (int i = 0; i <= 10; i++)
    {
        std::cout << i * x << "\n";
    }
    return 0;
}

int main()
{

    calc();

    return 0;
}