#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<typename type, int maxRows, int maxCols>
class matrix
{
private:
	int rows;
	int cols;
	type arr[maxRows][maxCols];
public:
	matrix() {
		type arr[maxRows][maxCols];
		rows = 0;
		cols = 0;
	}
	void setElement(int row, int col, type val) {
		arr[row][col] = val;
	}
	type getElement(int row, int col) {
		return arr[row][col];
	}
};

int main()
{
	matrix<int, 5, 5> i_mat;
	i_mat.setElement(0, 0, 10);
	cout << i_mat.getElement(0, 0) << endl;

	matrix<float, 7, 7> f_mat;
	f_mat.setElement(0, 0, 7.5);
	cout << f_mat.getElement(0, 0) << endl;
}