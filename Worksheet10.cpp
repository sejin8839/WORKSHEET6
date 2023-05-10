#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
protected:
    int id;
    string name;
    float salary;
    int manager_id;

public:
    void read_employee_details() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee salary: ";
        cin >> salary;
        cout << "Enter manager ID: ";
        cin >> manager_id;
    }

    void display_employee_details() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Manager ID: " << manager_id << endl;
    }

    int get_manager_id() {
        return manager_id;
    }

    float get_salary() {
        return salary;
    }
};

class Manager : public Employee {
private:
    vector<Employee> employees;

public:
    void read_manager_details() {
        cout << "Enter manager ID: ";
        cin >> id;
        cout << "Enter manager name: ";
        cin >> name;
        cout << "Enter manager salary: ";
        cin >> salary;
    }

    void add_employee(Employee emp) {
        if (emp.get_manager_id() == id) {
            employees.push_back(emp);
        }
        else {
            cout << "Error: This employee does not report to this manager." << endl;
        }
    }

    void display_manager_details() {
        cout << "Manager ID: " << id << endl;
        cout << "Manager Name: " << name << endl;
        cout << "Manager Salary: " << salary << endl;
        cout << "Employees: " << endl;
        for (int i = 0; i < employees.size(); i++) {
            employees[i].display_employee_details();
        }
    }

    float sum_salaries() {
        float total = 0;
        for (int i = 0; i < employees.size(); i++) {
            total += employees[i].get_salary();
        }
        return total;
    }
};

int main() {
    int num_employees;
    cout << "Enter the number of employees: ";
    cin >> num_employees;

    vector<Employee> employees(num_employees);
    for (int i = 0; i < num_employees; i++) {
        cout << "Enter details of employee " << i+1 << ":" << endl;
        employees[i].read_employee_details();
    }

    int num_managers;
    cout << "Enter the number of managers: ";
    cin >> num_managers;

    vector<Manager> managers(num_managers);
    for (int i = 0; i < num_managers; i++) {
        cout << "Enter details of manager " << i+1 << ":" << endl;
        managers[i].read_manager_details();
        for (int j = 0; j < num_employees; j++) {
            managers[i].add_employee(employees[j]);
        }
    }

    for (int i = 0; i < num_managers; i++) {
        cout << "Details of manager " << i+1 << ":" << endl;
        managers[i].display_manager_details();
        cout << "Total salary of employees: " << managers[i].sum_salaries() << endl;
    }

    return 0;
}
