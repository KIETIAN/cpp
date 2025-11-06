// Create a class Matrix and overload the * operator to perform multiplication of two matrices.
#include <iostream>
using namespace std;

class Matrix {
    int mat[10][10];
    int rows, cols;

public:
    Matrix(int r = 2, int c = 2) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                mat[i][j] = 0;
    }

    void input() {
        cout << "Enter elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator*(const Matrix &m) {
        if (cols != m.rows) {
            cout << "Matrix multiplication not possible.\n";
            return Matrix();
        }

        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix m1(2, 3), m2(3, 2);
    cout << "Enter elements for first matrix:\n";
    m1.input();
    cout << "Enter elements for second matrix:\n";
    m2.input();

    cout << "\nFirst Matrix:\n";
    m1.display();
    cout << "\nSecond Matrix:\n";
    m2.display();

    Matrix m3 = m1 * m2;
    cout << "\nProduct Matrix:\n";
    m3.display();

    return 0;
}