#include<iostream>
using namespace std;
void square(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0)
			{cout << "*";}
			else if (i == r - 1)
			{
				cout << "*";
			} else if (j == 0 )
			{
				cout << "*";
			} else if ( j == c - 1)
			{
				cout << "*";

			} else {
				cout << " ";
			}

		}
		cout << "\n";
	}


}
void circle(int r, int c) {
	int maxr = r / 2;
	maxr = r - maxr;
	int maxc = c / 2;
	int firstblock  = c - maxc - maxc / 2 - 1;//to find 1st block in 1st row where we should start priting the patter gt
	int lastblock = firstblock + maxc - 1;
	int firstleft = r - maxr - maxr / 2 ;//to find the 1st block colum wise to print * gt
	int lastleft = firstleft + maxr - 1;
	int binod1 = firstblock - 1;
	int binod2 = lastblock + 1;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j >= firstblock && j <= lastblock)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 1 || i == r - 2)
			{
				if ( j == binod2 || j == binod1)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (i >= firstleft && i <= lastleft)
				{
					if (j == 0 || j == c - 1)
					{
						cout << "*";
					} else {
						cout << " ";
					}
				}
			}

		}
		cout << "\n";
	}

}
void arrow(int r, int c)
{
	int midrow = c / 2 ;

	int secondblock = midrow + 2;
	int secondlastblock = midrow + 2;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{

			if (i == 1) {
				if ( j == midrow - 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow - 1)
				{
					cout << "*";
				}
				if ( j == midrow - 2)
				{
					cout << "*";
				}


			}
			if (j == midrow )
			{
				cout << " *";
			}
			else {
				cout << " ";
			}

			if (i == 1)
			{

				if ( j == midrow + 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow + 1)
				{
					cout << "*";
				}
				if ( j == midrow + 2)
				{
					cout << "*";
				}


			}

		}
		cout << "\n";
	}


}
void binod(int r, int c)
{
	int midline = r / 2;
	int consti = r * 1.4;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j == midline)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			}
			else {

				if (j == midline - i || j == midline + i)
				{
					cout << "*";
				} else if (i - j == midline)
				{
					cout << "*";

				}
				else if (i + j == consti)
				{
					cout << "*";

				}
				else {
					cout << " ";

				}
			}
		}
		cout << "\n";
	}

}

int main()
{


	int r, c;
	cout << "enter number of rows and Column of sqaure \n";
	cin >> r >> c  ;
	square(r, c);
	int r1, c1;
	cout << "enter number of rows and Column of Circle \n";
	cin >> r1 >> c1  ;
	circle(r1, c1);

	int r2, c2;
	cout << "enter number of rows and Column of Arrow \n";
	cin >> r2 >> c2  ;
	arrow(r2, c2);

	int r3, c3;
	cout << "enter number of rows and Column of Dimond \n";
	cin >> r3 >> c3  ;
	binod(r3, c3);







	return 0;
}
