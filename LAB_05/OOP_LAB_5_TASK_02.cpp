#include <iostream>
using namespace std;
class Person
 {
private:
    string name;
    int age;

public:
    void get_person() 
	{
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person() 
	{
        cout << "\n--- Person Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Employee : public Person 
{
private:
    int employee_id;

public:
    void get_employee() 
	{
        get_person();
        cout << "Enter Employee ID: ";
        cin >> employee_id;
    }

    void display_employee()
	 {
        display_person();
        cout << "--- Employee Information ---" << endl;
        cout << "Employee ID: " << employee_id << endl;
    }
};
class Manager : public Employee
 {
private:
    string department;

public:
    void get_manager() 
	{
        get_employee();
        cout << "Enter Department: ";
        cin >> department;
    }

    void display_manager() 
	{
        display_employee();
        cout << "--- Manager Information ---" << endl;
        cout << "Department: " << department << endl;
    }
};

int main() 
{
    Manager m;

    m.get_manager();
    m.display_manager();

    return 0;
}
