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
	k = 0;// needs to increment 20, skipping 1 space after every 4th element
	int tempRow = jRow;

	
	if (jTotal<=kTotal)
	{
		int ctr = 1;
		cout << "--- Array Comparison ---";
		while (j<jTotal)
		{
			cout << "\n\nrow "<< ctr <<": " << endl;
			for(j; j<tempRow; j++)
			{
				if(arr1[j]==arr2[k])
				{
					cout << "  0";
				}
				else
				{
					cout << " -1";
				}
				k++;
			}
			if (tempRow<jTotal)
			{
				tempRow = tempRow + jCol;
				k++; //skips k array index after every 4th step since k has more columns than j
				ctr++;
			}
			else
			{
				return 0;
			}			
		}	
	}
	else
	{

	}

	
	return 0;
}


int main()
{
	int i = 0, j = 0, k = 0;
	//        [c][r]
	int arr1[jCol][jRow] = { {0,1,1,0}, {0,1,0,1}, {0,1,1,0}, {1,0,1,1} };
	int arr2[kCol][kRow] = { {0,1,0,0,1}, {0,1,1,1,0}, {1,1,1,0,1}, {1,0,1,1,0} };
	comparison(arr1[j], arr2[k], i, j, k);
}
