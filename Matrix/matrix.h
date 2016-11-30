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
	Matrix(int row = 0, int col = 0);
	void SetMatrixSize(int row, int col);
	void SetMatrixData(double data, int row, int col);
	void ShowData(void) const;
	void ShowMatrix(int row, int col) const;
	~Matrix();
};

#endif
