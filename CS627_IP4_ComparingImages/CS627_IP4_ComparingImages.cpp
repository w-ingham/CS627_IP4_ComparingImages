// CS627_IP4_ComparingImages.cpp

#include "pch.h"
#include <iostream>
using namespace std;
/*
 *I wanted to use global constants instead of integer values
 *for the matrix dimensions to eliminate any possibility of spaghetti code
 *and to also make the logical expressions easier to read
 */
int const jCol = 4;  
int const jRow = 4;
int const kCol = 4;
int const kRow = 5;
int const jTotal = jCol * jRow; // (image 1 row) x (image 1 column) = the total elements in image 1 array
int const kTotal = kCol * kRow; // (image 2 row) x (image 2 column) = the total elements in image 2 array

int comparison(int arr1[], int arr2[], int i, int j, int k)
{ 
	i = 0;// needs to increment 16
	j = 0;//needs to increment 16
	k = 0;
	

	
	int minVali = 0;
	int totalDifference = 0;
	int tempRow = jRow;
	int ctr = 0;
	cout << "--- Array Comparison ---";

	while (j<jTotal)
		
	{
		

		cout << "\n\nrow " << ctr << ": "<<endl;
			for(minVali=0; j<tempRow; j++)
			{
				
				if(arr1[j]==arr2[k])
				{
					cout << "  0";
				}
				else if (arr1[j] > arr2[k])
				{
					minVali++;
					totalDifference++;
					cout << " +1";
				}
				else
				{
					minVali--;
					totalDifference--;
					cout << " -1";
				}
				k++;// increments k after each iteration of the for loop to keep k incremented at the same rate as j
			}
			if (((jTotal / jCol - kTotal / kCol) <= -1) && minVali <= 1) // if k has a maximum of 1 row more than j and the sum of all values is less than 1
			{
				cout <<  " \nThis row is acceptable with a difference of: " << minVali << endl;
			}
			else if (((jTotal / jCol - kTotal / kCol) <= -1) && minVali > 1)
			{
				cout << " \n This row is not acceptable with a difference of:  " << minVali << endl;
			}
		
			if (tempRow<jTotal)
			{
				tempRow = tempRow + jCol;
				k++; //skips k array index after every 4th step since k has more columns than j
				ctr++;	
			}else
			{
				cout << "\n\nThe total difference between both arrays is: " << totalDifference<<"\n\n";
				return 0;
			}						
		}	
	
}


int main()
{
	int i = 0, j = 0, k = 0;
	//        [c][r]
	int arr1[jCol][jRow] = { {0,1,1,0  }, {0,1,0,1  }, {0,1,1,0  }, {1,0,1,1  } };
	int arr2[kCol][kRow] = { {0,1,0,0,1}, {0,1,1,1,0}, {1,1,1,0,1}, {1,0,1,1,0} };
	comparison(arr1[j], arr2[k], i, j, k);
}
