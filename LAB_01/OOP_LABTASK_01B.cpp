#include <iostream>
using namespace std;

struct Student 
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() 
	{
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() 
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];  
    for (int i = 0; i < n; i++)
	 {
        cout << "\nEnter details for student " << i + 1 << ":\n";

        cout << "First Name: ";
        cin >> students[i].firstName;

        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Marks: ";
        cin >> students[i].marks;
    }
    cout << "\nStudent Information:\n";
    for (int i = 0; i < n; i++) 
	{
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].displayStudentInfo();
    }

    return 0;
}
