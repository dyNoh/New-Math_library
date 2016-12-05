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

Matrix Matrix::Inverse(void)
{
	if (this->row == 2 && this->col == 2)
	{
		double A = (this->m[0][0] * this->m[1][1]) - (this->m[0][1] * this->m[1][0]);
		if (A == 0)
		{
			cout << "Inverse not Working" << endl;
			return Matrix();
		}
		double swap = this->m[0][0];
		this->m[0][0] = this->m[1][1];
		this->m[1][1] = swap;
		this->m[0][1] = -(this->m[0][1]);
		this->m[1][0] = -(this->m[1][0]);
		Matrix temp(this->row, this->col);
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				temp.SetMatrixData(this->m[i][j] / A, i, j);
			}
		}
		return Matrix(temp);
	}
	else if (this->row == 3 && this->col == 3)
	{
		double A = (this->m[0][0] * this->m[1][1] * this->m[2][2]) + (this->m[1][0] * this->m[2][1] * this->m[0][2]) + (this->m[2][0] * this->m[0][1] * this->m[1][2])
			- (this->m[0][0] * this->m[2][1] * this->m[1][2]) - (this->m[2][0] * this->m[1][1] * this->m[0][2]) - (this->m[1][0] * this->m[0][1] * this->m[2][2]);
		if (A == 0)
		{
			cout << "Inverse not Working" << endl;
			return Matrix();
		}
		double dev[3][3] = {
			{ (this->m[1][1] * this->m[2][2]) - (this->m[1][2] * this->m[2][1]), (this->m[0][2] * this->m[2][1]) - (this->m[0][1] * this->m[2][2]), (this->m[0][1] * this->m[1][2]) - (this->m[0][2] * this->m[1][1]) },
			{ (this->m[1][2] * this->m[2][0]) - (this->m[1][0] * this->m[2][2]), (this->m[0][0] * this->m[2][2]) - (this->m[0][2] * this->m[2][0]), (this->m[0][2] * this->m[1][0]) - (this->m[0][0] * this->m[1][2]) },
			{ (this->m[1][0] * this->m[2][1]) - (this->m[1][1] * this->m[2][0]), (this->m[0][1] * this->m[2][0]) - (this->m[0][0] * this->m[2][1]), (this->m[0][0] * this->m[1][1]) - (this->m[0][1] * this->m[1][0]) }
		};
		Matrix temp(this->row, this->col);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp.SetMatrixData(dev[i][j] / A, i, j);
			}
		}
		return Matrix(temp);
	}
	else
	{
		cout << "Inverse not Working" << endl;
		return Matrix();
	}
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
