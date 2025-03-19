#include <iostream>
#include "matrix.h"

Matrix addOneAtStartOfMatrix(Matrix mat) {
    Matrix mat_b;
    mat_b.init(mat.rows + 1, mat.cols);
    for (int i = 0;i < mat.cols;i++) {
		mat_b(0, i) = 1;
    }
    for (int i = 1;i < mat.rows;i++) {
		for (int j = 0;j < mat.cols;j++) {
			mat_b(i, j) = mat(i - 1, j);
		}
    }
	return mat_b;
}

int main()
{
    Matrix mat;
    mat.init(3, 3);
    mat(1,2) = 5;
	Matrix mat_b = addOneAtStartOfMatrix(mat);
	std::cout << mat_b(2, 2) << std::endl;


    return 0;
}