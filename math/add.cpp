//
// Created by wrightchen on 2021/9/24.
//

#include <iostream>

#include "add.h"

int Add(int t1, int t2)
{
    int result = t1 + t2;

    std::cout << t1 << " + " << t2 << " is: " << result << std::endl;

    return result;
}