#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;


Rectangle::Rectangle(long w, long l)
{
	width = w;
	length = l;

}

void Rectangle::setLength(double w)
{
	if (len>=0)
		width = len;
	else
	{
		cout<< "Invalid width\n";
		exit(EXIT_FALLURE);
	}


}

void Rectangle::setLength(double l)
{
	if (len>=0)
		length = len;
	else
	{
		cout<< "Invalid length\n";
		exit(EXIT_FALLURE);
	}


}
