#include "Rectangle.cpp"
#include <iostream>
using namespace std;

int main()
{
    Rectangle box;
    box.setLength(30)
    box.setWidth(20)

}


#include "EMPLOYEE.H"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_ITEMS = 4;
	EMPLOYEE [NUM_ITEMS] = {
		EMPLOYEE(Jackson, $, 400.00),
		EMPLOYEE(Rodriguez, $, 365.75),
		EMPLOYEE(Chang, $ ,120.00),
		EMPLOYEE(Demos, $ ,213.75),


return 0;
}

int main()
{
    Employee emp[4]{{"Ackson",10,40},{"Rodriguez",13.5,35},{"Chang",12,37},{"Demos",19.5,45}};

    Employee emp[4];
    string name;
    double pay, hrs;
    for (int i=0;i<4;++i)
    {
        cout<<"Please enter payment info. for Employee #"<<i<<" : ";
        cin>>name>>pay>>hrs;
        emp[i].setName(name);
        emp[i].setHourlyPayRate(pay);
        emp[i].setHours_worked(hrs);
    }

    Employee emp[4]{
                Employee("Ackson",10,40),
                Employee("Rodriguez",13.5,35),
                Employee("Chang",12,37),
                Employee("Demos",19.5,45)
                };
    cout<<"-----------------------------------------------------"<<endl;
    cout<<setw(10)<<"Employee Name"<<setw(15)<<"Gross Pay"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    for (int i=0;i<4;i++)
    {
        cout<<left<<setw(10)<<emp[i].getName()<<setw(15)<<right<<"$"<<emp[i].totalPay()<<endl;
    }

}