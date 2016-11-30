#include "matrix.h"
#include <iostream>
using std::cout;
using std::endl;

Matrix::Matrix(const int & row, const int & col)
{
	SetMatrixSize(row, col);
}

void Matrix::SetMatrixSize(const int & row, const int & col)
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

void Matrix::ShowAllData(void) const
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

void Matrix::ShowData(int row, int col) const
{
	cout << this->m[row][col] << endl;
}

Matrix& Matrix::Add(const Matrix & m)
{
	/*if (this->row != m.row && this->col != m.col)
	{
		cout << "더할 수 없음" << endl;
		return Matrix();
	}

	Matrix temp(row, col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			temp.SetMatrixData(this->m[i][j] + m.m[i][j], i, j);
		}
	}
	return temp;*/
}

Matrix Matrix::Sub(const Matrix & m)
{
	return Matrix();
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
