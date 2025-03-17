#include "matrix.h"

void Matrix::init(int row, int col) {
    rows = row;
    cols = col;
    asArray = new float* [rows];
    for (int i = 0; i < rows; ++i) {
        asArray[i] = new float[cols];
    }
}

float& Matrix::operator()(int i, int j) {
    return asArray[i][j];
}

Matrix::~Matrix() {
    for (int i = 0; i < rows; ++i) {
        delete[] asArray[i];
    }
    delete[] asArray;
}