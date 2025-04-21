//Topic 8. Recursive functions
#include <iostream>
#include <cmath>

// Task 1. Develop a recursive function that returns the value
// 2) to calculate the nth term of the sequence: 
// b1 = 5, b_n+1 = (b_n / n^2 + n + 1)

double calculatingB(size_t n)
{
    if (n == 1) {
        return 5.;
    }
    return calculatingB(n - 1) / ((n - 1) * (n - 1)) + n;
}

void task1()
{
    std::cout << calculatingB(2) << " " << calculatingB(3) << " " << calculatingB(4) << std::endl;
}

// Task 2. Develop a recursive function that does not return values
// 2)  The first term and denominator of the geometric progression are given. 
// Write a recursive function to find the nth term and the sum of the first 
// n terms of the progression

void Progres(int n, float q, float b1, int i)
{
    float b, s;
    if (i == 1)
    {
        b = b1;
        s = b1;
    }
    else if (i > 1)
    {
        b = b1 * pow(q, i - 1);
        s += b;

    }
    i--;
    if (i == 0) {
        std::cout << "b=" << b << "\ts=" << s << std::endl;
    }
    Progres(i, q, b1, i);
}
void task2()
{
    int n; float q, b1;
    std::cout << "b1=";
    std::cin >> b1;
    std::cout << "q=";
    std::cin >> q;
    std::cout << "n=";
    std::cin >> n;
    Progres(n, q, b1, n);
}

int main()
{
    task1();
    task2();

    return 0;
}