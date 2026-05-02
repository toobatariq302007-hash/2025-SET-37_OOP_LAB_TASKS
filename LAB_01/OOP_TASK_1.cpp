 #include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function to display student information
    void displayStudentInfo()
    {
        cout << "\nStudent Information:" << endl;
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Structure variable
    Student s1;

    // Assign values to data members
    cout << "Enter First Name: ";
    cin >> s1.firstName;

    cout << "Enter Last Name: ";
    cin >> s1.lastName;

    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    // Call member function
    s1.displayStudentInfo();

    return 0;
}

