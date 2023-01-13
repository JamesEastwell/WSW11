#include<iostream>
#include<string>
#include<vector>
#include"Matrix.h"
using namespace std;

int main()
{
	matrix<int, 5, 5> i_mat;
	i_mat.setElement(0, 0, 10);
	cout << i_mat.getElement(0, 0) << endl;

	matrix<float, 7, 7> f_mat;
	f_mat.setElement(0, 0, 7.5);
	cout << f_mat.getElement(0, 0) << endl;
}