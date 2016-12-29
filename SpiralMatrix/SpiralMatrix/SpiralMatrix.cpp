// SpiralMatrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
using std::vector;
vector<int> res;
void printSpiralArray(vector<vector<int>> A,int i, int j,int m,int n)
{

	int var1 = 0;
	if (A.size() % 2 == 0)
		var1 = (A.size() / 2) - 1;
	else
		var1 = A.size() / 2;
	int k=1,l=n-2;
	if (i == m - 1 && j == n - 1)
	{
		printf("%d\t", A[i][j]);
		res.push_back(A[i][j]);
		
	}
	else if (i <= var1 && j <= var1)
	{
		for (j; j < n; j++)
		{
			printf("%d\t", A[i][j]);
			res.push_back(A[i][j]);
			if (j == n - 1)
				break;
		}
		for (k = i + 1; k < m; k++)
		{
			printf("%d\t", A[k][j]);
			res.push_back(A[k][j]);
			if (k == m - 1)
				break;
		}
		for (l = n - 2; l >= 0 + i; l--)
		{
			printf("%d\t", A[k][l]);
			res.push_back(A[k][l]);
			if (l == 0 + i)
				break;
		}

		for (int a = m - 2; a > 0 + i; a--)
		{
			printf("%d\t", A[a][l]);
			res.push_back(A[a][l]);
		}
		
	}
	
}

void main()
{
	
	vector<vector<int>> a = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int m = a.size(), n = a.size();
	printf("\tPrinting Original Array\n\n");
	for (int i = 0; i < a.size(); i++)
	{
		printf("\t");
		for (int j = 0; j < a.size(); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\tPrinting Spiral Array\n\n");
	int size = 0;
	if (a.size() % 2 == 0)
		size = (a.size() / 2) - 1;
	else
		size = a.size() / 2;
	for (int i = 0; i <= size; i++)
	{
		
		printSpiralArray(a, i, i,m-i,n-i);
	}

	a = { { 1 } };
	m = a.size(), n = a.size();
	printf("\nPrinting Original Array\n\n");
	for (int i = 0; i < a.size(); i++)
	{
		printf("\t");
		for (int j = 0; j < a.size(); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\tPrinting Spiral Array\n\n");
	size = 0;
	if (a.size() % 2 == 0)
		size = (a.size() / 2) - 1;
	else
		size = a.size() / 2;
	for (int i = 0; i <= size; i++)
	{
		printSpiralArray(a, i, i, m - i, n - i);
	}

	a = { { 1, 2 }, { 3, 4 } };
	m = a.size(), n = a.size();
	printf("\nPrinting Original Array\n\n");
	for (int i = 0; i < a.size(); i++)
	{
		printf("\t");
		for (int j = 0; j < a.size(); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\tPrinting Spiral Array\n\n");
	size = 0;
	if (a.size() % 2 == 0)
		size = (a.size() / 2) - 1;
	else
		size = a.size() / 2;
	for (int i = 0; i <= size; i++)
	{
		printSpiralArray(a, i, i, m - i, n - i);
	}

	a = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	m = a.size(), n = a.size();
	printf("\nPrinting Original Array\n\n");
	for (int i = 0; i < a.size(); i++)
	{
		printf("\t");
		for (int j = 0; j < a.size(); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\tPrinting Spiral Array\n\n");
	size = 0;
	if (a.size() % 2 == 0)
		size = (a.size() / 2) - 1;
	else
		size = a.size() / 2;
	for (int i = 0; i <= size; i++)
	{
		printSpiralArray(a, i, i, m - i, n - i);
	}

	a = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 }, { 16, 17, 18, 19, 20 }, { 21, 22, 23, 24, 25} };
	m = a.size(), n = a.size();
	printf("\nPrinting Original Array\n\n");
	for (int i = 0; i < a.size(); i++)
	{
		printf("\t");
		for (int j = 0; j < a.size(); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\tPrinting Spiral Array\n\n");
	size = 0;
	if (a.size() % 2 == 0)
		size = (a.size() / 2) - 1;
	else
		size = a.size() / 2;
	for (int i = 0; i <= size; i++)
	{
		printSpiralArray(a, i, i, m - i, n - i);
	}
	getchar();
}

