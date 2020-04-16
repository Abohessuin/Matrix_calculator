#include "Matrix.h"
                                                                                        ///* -------------- Student #1 ---------------- *///




            ///*** Adding  two matrices and return their adding***///
    Matrix Matrix:: operator+  (Matrix mat1)
    {
        // assert(row==mat1.row&&col==mat1.col);

         Matrix c;
         c.data = new int* [mat1.row];
         for (int i = 0; i < row; i++)
            c.data[i] = new int [mat1.col];
           c.row=mat1.row;
           c.col=mat1.col;
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                c.data[i][j]=data[i][j]+mat1.data[i][j];
            }
        }
        return c;
     }
          ///***************************************************///

        /*


               1    1      1    1         2     2
          f=            +           =
               1    1      1    1         2     2


        */


        ///*** subtract  two matrices and return their adding***///
     Matrix Matrix:: operator-  (Matrix mat1)
    {

         //kassert(row==mat1.row&&col==mat1.col);

         Matrix c;
         c.data = new int* [mat1.row];
         for (int i = 0; i < row; i++)
            c.data[i] = new int [mat1.col];
           c.row=mat1.row;
           c.col=mat1.col;
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                c.data[i][j]=data[i][j]-mat1.data[i][j];
            }
        }
        return c;
    }

        ///***************************************************///



        /*


               1    1      1    1         0   0
          f=            -          =
               1    1      1    1         0   0


        */




       ///*** Multiplying  two matrices and return their adding***///
    Matrix Matrix:: operator*  (Matrix mat1)
    {
          Matrix c;
          c.row=row;
          c.col=mat1.col;
        c.data = new int* [row];
         for (int i = 0; i < row; i++)
            c.data[i] = new int [mat1.col];
           if(col==mat1.row){

            for(int i = 0; i < row; ++i){
        for(int j = 0; j < mat1.col; ++j){
            c.data[i][j] = 0;
            for(int k = 0; k < col; ++k)
            {

                c.data[i][j] += data[i][k] * mat1.data[k][j];
            }
           }
           }
           return c;

    }
    }



      ///***************************************************///






     ///**
        /*


               1    1      1    1         2     2
          f=            +           =
               1    1      1    1         2     2


        */
        ///***Adding Matrices with scalar( single number) and return their adding***///
    Matrix Matrix:: operator+  (int scalar)
      {
          Matrix c;
         c.data = new int* [row];
         for (int i = 0; i < row; i++)
            c.data[i] = new int [col];
           c.row=row;
           c.col=col;
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                c.data[i][j]=data[i][j]+scalar;
            }
        }
        return c;
     }
        ///***************************************************///

       /*


               1    1                   2     2
          f=            +     1      =
               1    1                   2     2


        */

      ///***subtract Matrices with scalar( single number) and return their adding***///
    Matrix Matrix:: operator-  (int scalar)
    {
          Matrix c;
         c.data = new int* [row];
         for (int i = 0; i < row; i++)
            c.data[i] = new int [col];
           c.row=row;
           c.col=col;
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                c.data[i][j]=data[i][j]-scalar;
            }
        }
        return c;
        }
         ///***************************************************///

           /*


               1    1                   0     0
          f=            -     1      =
               1    1                   0     0

          */

      ///*** Multiply Matrices with scalar( single number) and return their adding***///
    Matrix Matrix::operator*(int scalar)
    {
          Matrix c;
         c.data = new int* [row];
         for (int i = 0; i < row; i++)
            c.data[i] = new int [col];
           c.row=row;
           c.col=col;
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                c.data[i][j]=data[i][j]*scalar;
            }
        }
        return c;
    }
        ///***************************************************///







       ///*** Check if the Matrices is square or not (ROW=COLUMN)***///
    	bool Matrix ::  isSquare ()
    	{
    	    bool x=false;
    	    if(row==col)
            {
               x=true;
               return x;


            }
            else
            {
              return x;

            }
    	}
    	///***************************************************///

           /*
                as 3*3,4*4,5*5......

           */



        ///*** check about identity as diagonal =1 and  the rest is zero***///

    		bool Matrix ::    isIdentity ()
    		{
    		     bool x=false;
    	         if(row==col)
                  {
                    x=true;

                  }
                 else
                 {
                     x=false;


                 }
                 if(x==true)
                 {
                     bool check1=true;

                         for(int i=0;i<row;++i)
                        {
                            for(int j=0;j<col;++j)
                           {
                               if(i==j)
                               {
                                   if(data[i][j]==1)
                                   {
                                       continue;

                                   }
                                   else
                                   {
                                       check1=false;
                                       break;
                                   }
                               }
                               else
                               {
                                   if(data[i][j]==0)
                                   {
                                       continue;
                                   }
                                   else
                                   {
                                       check1=false;
                                       break;
                                   }
                               }





                           }
                        }

                        return check1;



                 }
                 else
                 {
                     return x;

                 }

    		}

            ///***************************************************///
         /*


              1   2    3

        M=    5   1    5

              8   9    1


        */



        ///*** transpose the matrices make col is row and row is col ***///

    		Matrix Matrix:: transpose  ()  /*make row col and col row */
    		{
    		      Matrix c;
    		      c.row=col;
    		      c.col=row;
                  c.data = new int* [c.row];
                  for (int i = 0; i < c.row; i++)
                     c.data[i] = new int [c.col];
                for(int i=0;i<row;++i)
                {
                    for(int j=0;j<col;++j)
                    {
                       c.data[j][i]=data[i][j];
                    }
                }
               return c;

    		}

          ///***************************************************///




                                                                                          ///* -------------- Student #2 ---------------- *///



    			Matrix Matrix:: operator+=(Matrix mat1)  /*adding and store in same matrices add with matrices */
    			{

                      for(int i=0;i<row;++i)
                    {
                         for(int j=0;j<col;++j)
                         {
                            data[i][j]+=mat1.data[i][j];
                         }
                    }
                    return *this;


    			}

    			///*************************************///

    			Matrix Matrix:: operator-=(Matrix mat1)  /*subtract and store in same matrices add with Matrices */
    			{

                      for(int i=0;i<row;++i)
                    {
                         for(int j=0;j<col;++j)
                         {
                            data[i][j]-=mat1.data[i][j];
                         }
                    }
                    return *this;


    			}

    			///************************************///


    			Matrix Matrix:: operator+= (int scalar) /*adding and store in same matrices add with scalar */
    			{

    			    for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                           data[i][j]+=scalar;
                         }
                      }

                      return *this;


    			}




    			Matrix Matrix:: operator-= (int scalar)   /*subtract and store in same matrices add with scalar */
    			{

    			    for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                           data[i][j]-=scalar;
                         }
                      }

                      return *this;


    			}

    			///************************************///


    			Matrix Matrix:: operator++ ()  /*decrement each element in data by 1*/
    			{
    			     for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                           data[i][j]++;
                         }
                      }

                      return *this;



    			}

                 ///************************************///




    			Matrix Matrix:: operator-- () /*increment each element in data by 1*/
    			{
    			     for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                           data[i][j]--;
                         }
                      }

                      return *this;



    			}


                ///************************************///


    			bool Matrix::  operator== (Matrix mat1)  /*true if matrices  equal to matrices*/
    			{
    			    bool check=true;
    			    if(mat1.row==row&&mat1.col==col)
                    {
                        for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                           if(mat1.data[i][j]==data[i][j])
                           {
                               continue;
                           }
                           else
                           {
                               check=false;
                               break;
                           }
                        }
                      }
                         return check;

                    }
                    else
                    {
                        check=false;
                        return check;
                    }

    			}


             ///************************************///

    			bool Matrix::   operator!= (Matrix mat1)  /*true if matrices not equal to matrices*/
    			{
    			    bool check=false;
    			    if(mat1.row==row&&mat1.col==col)
                    {
                        for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                           if(mat1.data[i][j]!=data[i][j])
                           {
                               check=true;
                               break;
                           }

                        }
                      }
                         return check;

                    }
                    else
                    {
                        check=true;
                        return check;
                    }

    			}

    			bool Matrix::   isSymmetric () /*check if number and it is inverse location is equal*/
    			{
    			     bool x=false;
    	            if(row==col)
                    {
                      x=true;

                    }
                    else
                    {
                       x=false;


                    }
                    if(x==true)
                    {

    			     for(int i=0;i<row;++i)
                      {
                         for(int j=0;j<col;++j)
                         {
                            if(data[i][j]==data[j][i])
                            {
                                continue;
                            }
                            else
                            {
                                x=false;
                                break;

                            }
                         }
                      }


                            return x;
                     }

    			    else
                    {
                        return x;
                    }

    			}


                ///************************************///




                                                                        ///Public functions for all class for print and get the matrices value///






          istream& operator>> (istream& in, Matrix& mat)  /*printing function*/
		 {
		       in>>mat.row>>mat.col;
		       mat.data = new int* [mat.row];
		       for (int i = 0; i < mat.row; i++)
                {
                   mat.data[i] = new int [mat.col];
                }

                for (int i = 0; i < mat.row; i++)
                 {
                     for (int j = 0; j < mat.col; j++)
                    {
                      in>>mat.data[i][j];
                    }
                }

            return in;

		 }




		 ostream& operator<< (ostream& out, const Matrix& mat) /*get value function*/
		 {
		    for(int i=0;i<mat.row;++i)
            {
               for(int j=0;j<mat.col;++j)
               {
                  out<<mat.data[i][j]<< " ";
               }
               out<<endl;
            }
            return out;

		 }




    void createMatrix (int row, int col, int num[], Matrix& mat)  /*creating matrices function*/
    {

        mat.row = row;
        mat.col = col;
        mat.data = new int* [row];

        for (int i = 0; i < row; i++)
            mat.data[i] = new int [col];

        for (int i = 0; i < row; i++)
           for (int j = 0; j < col; j++)
                mat.data[i][j] = num[i * col + j];
    }






