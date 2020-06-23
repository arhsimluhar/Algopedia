//
// Created by Rahul Mishra on 12/6/20.
//


#include "mathematics.h"
#include <iostream>
#include <cassert>


using namespace std;
int main()
{
    vector <int> arr { 10, 20, 30 };
    assert(NumberOfDigits<int>(12345) == 5);
    assert(LCM<int>(6)==6);
    assert(lcmOfVector<int>(arr) == 10);
    return 0;
}