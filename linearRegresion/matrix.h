#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    float** asArray;
    int rows, cols;

public:
    void init(int row, int col);

    float& operator()(int i, int j);

    ~Matrix();
};

#endif
