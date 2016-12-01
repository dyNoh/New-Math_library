#include "matrix.h"
#include <iostream>
using std::cout;
using std::endl;

Matrix::Matrix(const int & row, const int & col)
{
	SetMatrixSize(row, col);
}

Matrix::Matrix(const int & row, const int & col, double **& m)
{
	SetMatrixSize(row, col);
	double **matrix = m;
	this->m = m;
}

Matrix::Matrix(Matrix& m)
{
	SetMatrixSize(m.row, m.col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			this->m[i][j] = m.m[i][j];
		}
	}
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

double **& Matrix::GetMatrix(void)
{
	return this->m;
}

Matrix Matrix::Add(const Matrix & m)
{
	if (this->row != m.row && this->col != m.col)
	{
		cout << "Add not Working" << endl;
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
	return Matrix(temp);
}

Matrix Matrix::Sub(const Matrix & m)
{
	if (this->row != m.row && this->col != m.col)
	{
		cout << "Sub not Working" << endl;
		return Matrix();
	}

	Matrix temp(row, col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			temp.SetMatrixData(this->m[i][j] - m.m[i][j], i, j);
		}
	}
	return Matrix(temp);
}

Matrix Matrix::Mul(const Matrix & m)
{
	if (this->col != m.row)
	{
		cout << "Mul not Working" << endl;
		return Matrix();
	}

	Matrix temp(row, m.col);

	double sum = 0;

	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < m.col; j++)
		{
			for (int k = 0; k < this->col; k++)
			{
				sum += this->m[i][k] * m.m[k][j];
			}
			temp.SetMatrixData(sum, i, j);
			sum = 0;
		}
	}

	return Matrix(temp);
}

Matrix Matrix::Inverse(const Matrix & m)
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
