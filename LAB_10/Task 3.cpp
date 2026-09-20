#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("students.txt");

    file << "Name: Uzma" << endl;
    file << "Roll No: 17" << endl;

    file << "Name: Tooba Tariq" << endl;
    file << "Roll No: 37" << endl;

    file << "Name: Kiran" << endl;
    file << "Roll No: 36" << endl;

    file.close();

    ifstream readFile("students.txt");

    string line;

    cout << "Student Details:" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
