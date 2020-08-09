#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle {
private:
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;
	int length;
	int width;
	int perimeter;
	int area;
	char bodyElement;
	char borderElement;



public:
	Rectangle(int p1x, int p2x, int p3x, int p4x , int p1y, int p2y, int p3y, int p4y)
	{

		setPoint(p1x, p2x, p3x, p4x, p1y, p2y, p3y, p4y);
	}
	void setPoint(int p1x, int p2x, int p3x, int p4x , int p1y, int p2y, int p3y, int p4y)
	{
		if (p1x >= 0 && p1x <= 20)
		{
			x1 = p1x;
		} else {
			cout << "please enter something valid";
		}
		if (p2x >= 0 && p2x <= 20)
		{
			x2 = p2x;
		} else {
			cout << "please enter something valid";
		}
		if (p3x >= 0 && p3x <= 20)
		{
			x3 = p3x;
		} else {
			cout << "please enter something valid";
		}
		if (p4x >= 0 && p4x <= 20)
		{
			x4 = p4x;
		} else {
			cout << "please enter something valid";
		}
		if (p1y >= 0 && p1y <= 20)
		{
			y1 = p1y;
		} else {
			cout << "please enter something valid";
		}
		if (p2y >= 0 && p2y <= 20)
		{
			y2 = p2y;
		} else {
			cout << "please enter something valid";
		}
		if (p3y >= 0 && p3y <= 20)
		{
			y3 = p3y;
		} else {
			cout << "please enter something valid";
		}
		if (p4x >= 0 && p4x <= 20)
		{
			y4 = p4y ;
		} else {
			cout << "please enter something valid";
		}

		if (x1 == x4 && y1 == y2 && x3 == x2 && y3 == y4)
		{
			cout << "it is a Rectangle\n";
		} else {
			cout << "it is not a Rectangle\n";
		}

	}
	void dimen()
	{
		int value1 = x2 - x1;
		if (value1 < 0)
		{
			value1 *= -1;
		}
		int value2 = y3 - y1;
		if (value2 < 0)
		{
			value2 *= -1;
		}

		if (value1 > value2)
		{
			length = value1;
			cout << "Length =>" << length << "\n";
			width = value2;
			cout << "Width => " << width << "\n";
		}
		else {
			length = value2;
			cout << "Length =>" << length << "\n";
			width = value1;
			cout << "width =>" << width << "\n";
		}



	}
	void peri()
	{

		perimeter = 2 * (length + width);
		cout << perimeter << "\n";
	}
	void area51()
	{
		area = length * width;
		cout << area;
	}
	void isSqaure()
	{
		if (length == width)
		{
			cout << "it is a Sqaure";
		} else {
			cout << "it is not a Sqaure";
		}
	}
	void setFillCharacter()
	{	char something;
		cout << "enter the element you want body to be made of...\n";
		cin >> something;
		bodyElement = something;
	}
	void setPerimeterCharacter()
	{
		char something;
		cout << "enter the element you want to display in perimeter \n";
		cin >> something;
		borderElement = something;

	}
	void printDiagram() {
		for (int i = 25 ; i >= 0; i--)
		{
			for (int j = 0; j <= 25 ; j++)
			{
				if ((i >= y1 && i <= y3) && (j >= x1 && j <= x2) )
				{
					if ( i == y1 || i == y3 || j == x1 || j == x2)
					{
						cout << borderElement;
					} else {
						cout << bodyElement;

					}
				} else {
					cout << " ";
				}
			}
			cout << "\n";
		}


	}
};
int main()
{


	int x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "enter the value of the points\n";
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Rectangle rat(x1, x2, x3, x4, y1, y2, y3, y4);
	rat.dimen();
	rat.isSqaure();
	cout << "\n";
	cout << "Area => ";
	rat.area51();
	cout << "\nperimeter=>";
	rat.peri();
	rat.setFillCharacter();
	rat.setPerimeterCharacter();
	rat.printDiagram();






	return 0;
}
