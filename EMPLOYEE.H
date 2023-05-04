
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <cstring>

class EMPOLYEE
{
private:
	char name;
	double pay;
	double hour;

public:
	EMPLOYEE(str n, double p, double h)
		{
		
		name=n;
		pay= p;
		hour=h;
		}

	~InventoryItem()
		{delete[]description;}
	const char getName() const
		{return name;}
	double getPay () const
		{return pay;}
	double getHour () const
		{return hour;}

};
#endif
