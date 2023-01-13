#include"Matrix.h"

template<typename type, int maxRows, int maxCols>
matrix< type, maxRows, maxCols>::matrix() 
{
	type arr[maxRows][maxCols];
	rows = 0;
	cols = 0;
}
template<typename type, int maxRows, int maxCols>
void matrix<type, maxRows, maxCols>::setElement(int row, int col, type val) {
	arr[row][col] = val;
}
template<typename type, int maxRows, int maxCols>
type matrix<type, maxRows, maxCols>::getElement(int row, int col) {
	return arr[row][col];
}