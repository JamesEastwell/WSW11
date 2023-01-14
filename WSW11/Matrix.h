#pragma once


template<typename type, int maxRows, int maxCols>
class matrix
{
private:
	int rows;
	int cols;
	type arr[maxRows][maxCols];
public:
	matrix<type, maxRows, maxCols>();
	void setElement(int row, int col, type val);
	type getElement(int row, int col);
};