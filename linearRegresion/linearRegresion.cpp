#include <iostream>
#include "matrix.h"



int main()
{
    Matrix mat;
    mat.init(3, 3);
    mat(1,2) = 5;


    return 0;
}