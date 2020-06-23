#include <algorithm>
#include <vector>
#include <cmath>

// Lowest common multiple in array
template <class T> T lcmOfVector (std::vector <T> arr)  // Lowest common multiple for vector elements
{
    T ans = arr.at(0);
    for (int i = 1;i<arr.size();i++)
    {
        ans = ((ans)/__gcd(ans,arr.at(i))) * arr.at(i);
    }
    return ans;
}
template <class T> T LCM (T n)                  // Lowest common multiple for (1..N) Numbers
{

    T ans = 1;
    for (T i = 2;i <= n; i++)
    {
        ans = ((ans)/__gcd(ans,i)) * i;
    }
    return ans;
}
template <class T> 
T NumberOfDigits(T n)                        // Number of digits in Number n
{
    return  floor(log10(n)) + 1;
}