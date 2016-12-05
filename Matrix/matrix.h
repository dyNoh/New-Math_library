#ifndef __MATRIX_H__
#define __MATRIX_H__

/*
	행렬과 관련된 헤더파일
*/

class Matrix
{
private:
	int row;
	int col;
	double **m;

public:
	Matrix(const int& row = 0, const int& col = 0);
	Matrix(const int& row, const int& col, double**& m);
	Matrix(Matrix& m);
	void SetMatrixSize(const int& row, const int& col);
	void SetMatrixData(double data, int row, int col);
	void ShowAllData(void) const;
	void ShowData(int row, int col) const;
	double**& GetMatrix(void);
	Matrix Add(const Matrix& m);
	Matrix Sub(const Matrix& m);
	Matrix Mul(const Matrix& m);
	Matrix Inverse(void);
	~Matrix();
};

#endif
