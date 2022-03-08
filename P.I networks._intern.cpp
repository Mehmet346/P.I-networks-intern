
#include<iostream>
using namespace std;
#define N 4
 
int maxSum(int triangle[][N], int i, int j, int row, int col){
   
     if(i == row-1 ){
         return triangle[i][j] ;   // if there is only one line it returns it
     }
   
     return triangle[i][j] + max(maxSum(triangle, i+1, j, row, col),maxSum(triangle, i+1, j+1, row, col)) ; // result called recursively
}
 
int main()
{
   int triangle[N][N] = {  	{1, 0, 0},   // we define our matrix
                      		{8, 4, 0},
                      		{2, 6, 9}, 
							{8, 5, 9, 3} };
                      		
   cout << maxSum(triangle, 0, 0, 4, 4);  // We pass parameters to the function
   
}
