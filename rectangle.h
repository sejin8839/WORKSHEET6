#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double width;
		double length;
	public:
		Rectangle();
		void setWidth(double);
		void setLengh(double);

		double getWidth() const
			{return length;}
		double getArea() const
			{return width * length;}

};
#endif