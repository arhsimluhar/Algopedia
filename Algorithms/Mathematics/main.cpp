//
// Created by Rahul Mishra on 12/6/20.
//

#include "mathematics.h"
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 10, 20, 30 };
    vector<int> vec(arr);
    assert(LCM(vec) == 60);
    assert(LCM(6)) == 60);
    return 0;
}