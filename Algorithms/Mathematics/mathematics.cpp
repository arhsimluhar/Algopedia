//
// Created by Rahul Mishra on 12/6/20.
//

#include "mathematics.h"
#include <cmath>

template <class T> T LCM(T n)
{

    T ans = 1;
    for (T i = 2;i <= n; i++)
    {
        ans = ((ans)/__gcd(ans,i))*i;
    }
    return ans;
}

template <class T>
T LCM (std::vector<T> arr)
{
    T ans = arr.at[0];
    for (int i = 1;i<arr.size();i++)
    {
        ans = ((ans)/__gcd(ans,arr.at[i]))*arr.at[i];
    }
    return ans;
}

template <class T>
T NumberOfDigits(T n)
{
    return  floor(log10(n)) + 1;
}

