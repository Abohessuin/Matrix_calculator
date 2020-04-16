ad#ifndef MATRIX_H
#define MATRIX_H
#include "Matrix.h"
#include <cassert>
#include <bits/stdc++.h>
using namespace std;

// A class to store a matrix
class Matrix {
	private:
		int** data;       // Pointer to 2-D array that will simulate matrix
		int row, col;

	public:
		/* -------------- Student #1 ---------------- */
		// The first 7 operations return a new matrix with the calculated result matrix
		Matrix operator+  (Matrix mat1); // Add if same dimensions
		Matrix operator-  (Matrix mat1); // Subtract if same dimensions
		Matrix operator*  (Matrix mat1); // Multiply if col1 == row2
		Matrix operator+  (int scalar);  // Adds a scalar
		Matrix operator-  (int scalar);  // Subtracts a scalar
		Matrix operator*  (int scalar);  // Multiplies by a scalar
		Matrix transpose  ();  // Return new matrix with the transpose
		bool   isSquare   ();  // True if square matrix
		bool   isIdentity ();  // True if square and identity

		friend istream& operator>> (istream& in, Matrix& mat);
       	// Input matrix like this (dim 2 x 3) cin >> 4 6 8 9 12 123
       	// and return istream to allow cascading input like cin >> matrix1 >> matrix2;

		/* -------------- Student #2 ---------------- */
		Matrix operator+= (Matrix mat1); // Current matrix changes & adds mat1 to itself and return *this
		Matrix operator-= (Matrix mat1); // Current matrix changes & subtracts mat1 from itself and return *this
		Matrix operator+= (int scalar);  // Current matrix changes & adds scalar to itself and return *this
		Matrix operator-= (int scalar);  // Current matrix changes & subtracts scalar from itself and return *this
		Matrix operator++ ();   		 // Adds 1 to each element and return *this
		Matrix operator-- ();    		 // Subtracts 1 from each element and return *this
		bool   operator== (Matrix mat1); // True if mat1 is identical to current matrix
		bool   operator!= (Matrix mat1); // True if mat1 is not same as current matrix
		bool   isSymmetric ();  		 // True if current matrix is square and symmetric

		friend ostream& operator<< (ostream& out, const Matrix& mat);
       	// Print matrix  as follows (2 x 3)			4	6	8
	    // and return ostream to cascade printing	9	12	123
		// like cout << matrix1 << matrix2 << endl;


		// Already implemented
		friend void createMatrix (int row, int col, int num[], Matrix& mat);
};


int main()
{
  int data1 [] = {1,2,3,4,5,6,7,8};
  int data2 [] = {13,233,3,4,5,6};
  int data3 [] = {10,100,10,100,10,100,10,100};

  Matrix mat1, mat2, mat3,mat4;
  createMatrix (4, 2, data1, mat1);
  createMatrix (2, 3, data2, mat2);
  createMatrix (4, 2, data3, mat3);

  //cin>>mat4;
  cout << mat1 << endl;
  cout << mat2 << endl;
  cout << mat3 << endl;
  //cout<<mat4<<endl;

  cout << (mat1 + mat3) << endl << endl;
  cout << (mat3 + mat3) << endl << endl;
  //cout << (mat3 + mat2) << endl << endl;


  ++mat1;
  cout << mat1 << endl;

  mat1+= mat3 += mat3;
  cout << mat1 << endl;
  cout << mat2 << endl;
  cout << mat3 << endl;

 /* bool x,y,z,l;

 x=mat1.isSquare();
 y=mat2.isIdentity();
 z=mat3.transpose();
 l=mat4==mat3;

 cout<<x<<" "<<y<<" "<<z<<" "<<l<<" ";
 */







  return 0;
}


#endif // MATRIX_H
