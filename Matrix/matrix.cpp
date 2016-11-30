#include "matrix.h"
#include <iostream>
using std::cout;
using std::endl;

Matrix::Matrix(int row, int col)
{
	this->row = row;
	this->col = col;
	SetMatrixSize(row, col);
}

void Matrix::SetMatrixSize(int row, int col)
{
	if (this->row != 0 && this->col != 0)
	{
		for (int i = 0; i < this->row; ++i)
		{
			delete[] m[i];
		}
		delete[] m;
	}

	this->row = row;
	this->col = col;

	this->m = new double*[row];
	for (int i = 0; i < row; ++i)
	{
		this->m[i] = new double[col];
	}
}

void Matrix::SetMatrixData(double data, int row, int col)
{
	this->m[row][col] = data;
}

void Matrix::ShowData(void) const
{
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			cout << this->m[i][j] << ' ';
		}
		cout << endl;
	}
}

void Matrix::ShowMatrix(int row, int col) const
{
	cout << this->m[row][col] << endl;
}

Matrix::~Matrix()
{
	if (this->row != 0 && this->col != 0)
	{
		for (int i = 0; i < row; ++i)
		{
			delete[] m[i];
		}
		delete[] m;
	}
}
