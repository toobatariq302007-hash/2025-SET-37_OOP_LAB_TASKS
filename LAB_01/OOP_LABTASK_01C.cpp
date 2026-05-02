#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function
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
    // Create pointer to structure
    Student *ptr;

    // Dynamically allocate memory
    ptr = new Student;

    // Assign values using pointer
    cout << "Enter First Name: ";
    cin >> ptr->firstName;

    cout << "Enter Last Name: ";
    cin >> ptr->lastName;

    cout << "Enter Roll Number: ";
    cin >> ptr->rollNumber;

    cout << "Enter Marks: ";
    cin >> ptr->marks;

    // Call member function using pointer
    ptr->displayStudentInfo();-

    return 0;
}
