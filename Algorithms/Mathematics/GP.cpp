#include<cmath>

// Finding nth Term of GP when first two terms (A and B) are given 
double termOfGP(int A,int B,int N)
{

    double r = (double)B/A;
    double An = A*pow(r,N-1);
    return An;
}