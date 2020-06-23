 
//
// Created by Rahul Mishra on 12/6/20.
//

#ifndef ALGOPEDIA_MATHEMATICS_H
#define ALGOPEDIA_MATHEMATICS_H

#include "mathematics_impl.h"
// Lowest common multiple in array
template <class T>  T LCM (std::vector <T> arr);  // Lowest common multiple for vector elements
template <class T> T LCM (T n);             // Lowest common multiple for (1..N) Numbers
template <class T> T NumberOfdigits(T n); // Number of digits in Number n

#endif //ALGOPEDIA_MATHEMATICS_H