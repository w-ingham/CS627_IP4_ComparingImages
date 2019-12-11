// CS627_IP4_ComparingImages.cpp

#include "pch.h"
#include <iostream>
using namespace std;

int const jCol = 4;
int const jRow = 4;
int const kCol = 4;
int const kRow = 5;
int const jTotal = jCol * jRow; // (image 1 row) x (image 1 column) = the total elements in image 1 array
int const kTotal = kCol * kRow; // (image 2 row) x (image 2 column) = the total elements in image 2 array

int comparison(int image1[], int image2[], int i, int j, int k)
{ 
	i = 0;// needs to increment 16
	j = 0;//needs to increment 16
	k = 0;// needs to increment 20, skipping 1 space after every 4th element

	if (jTotal<kTotal)
	{
		while (j<jTotal)
		{
			
			for(j = 0; j<jCol; j++)
			{
				cout << image1[j]<<" ";
				cout << image2[k];
				k++;
			}
			//k++;
			return 0;
		}
		
	}
	else if (j > k)
	{
		cout << "j > k";
	}
	else
	{
		cout << "j == k";
	}
	
	return 0;
}


int main()
{
	int i = 0, j = 0, k = 0;
	//        [c][r]
	int image1[jCol][jRow] = { {0,1,1,0}, {0,1,0,1}, {0,1,1,0}, {1,0,1,1} };
	int image2[kCol][kRow] = { {0,1,0,0,1}, {0,1,1,1,0}, {1,1,1,0,1}, {1,0,1,1,0} };
	comparison(image1[j], image2[k], i, j, k);
}
