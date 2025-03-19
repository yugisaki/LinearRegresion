#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    float** asArray; 

public:
    int rows, cols;

    void init(int row, int col);

    float& operator()(int i, int j);

    ~Matrix();
};

#endif
