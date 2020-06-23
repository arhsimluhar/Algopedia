//
// Created by Rahul Mishra on 22/6/20.
//
#include <iostream>

using namespace std;

int digitsInFactorial(int N)
{
    if (N == 1 || N == 0)
        return 1;

    // Kamenetsky formula for counting digits in N Factorial
    double x = N*log10(N/M_E) + log10(2*M_PI*N)/2.0;
    return floor(x)+1;
}

//
//Alternative method:
//
//    N! = N * (N - 1) * (N - 2) * ...... 1
//    Applying log10 both sides
//    log10(N!) = log10(N) + log10(N-1) + log10(N-2) + ..... log10(2) + 0
//
//    we know, number of digits in N is equal to floor(log10(N)) + 1
//    so, Number of digits in N factorial is floor(log10(n!)) + 1  = floor(log10(n)+log10(N-1)+......+log10(2)) + 1