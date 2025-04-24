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

void rekurs_calc(int nmax, int n, float q, float& b, float& s) 
{

    if (n) {
        b = b * q;
        s = s + b;
        std::cout << "n = " << nmax - n << " b = " << b << " q = " << q << " sum = " << s << std::endl;
    }

}

void task2() 
{
    int nmax, n;
    float b, q, s;
    std::cin >> nmax >> n >> b >> q >> s;
    rekurs_calc(nmax, n, q, b, s);
}

int main()
{
    task1();
    task2();

    return 0;
}
