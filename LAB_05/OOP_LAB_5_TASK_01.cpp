#include <iostream>
using namespace std;

// Base class
class Person
 {
private:
    string name;
    int age;

public:
    void get_person_info()
	 {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person_info() 
	{
        cout << "\n--- Person Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person
 {
private:
    int student_id;

public:
    void get_student_info()
	 {
        get_person_info(); // access through public function
        cout << "Enter Student ID: ";
        cin >> student_id;
    }

    void display_student_info() 
	{
        display_person_info(); // access through public function
        cout << "--- Student Information ---" << endl;
        cout << "Student ID: " << student_id << endl;
    }
};

int main() 
{
    Student s;

    s.get_student_info();
    s.display_student_info();

    return 0;
}
