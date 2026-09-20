#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int salary;
    public:
    void inputEmployee(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void displayEmployee(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
class Developer: public Employee{
    private:
    string programmingLang;
    public:
    void inputDeveloper(){
        inputEmployee();
        cout<<"Enter programming language: ";
        cin>>programmingLang;
    }
    void displayDeveloper(){
        displayEmployee();
        cout<<"Programming Language: "<<programmingLang<<endl;
    }
};
class Designer: public Employee{
    private:
    string design_tool;
    public:
    void inputDesigner(){
        inputEmployee();
        cout<<"Enter design tool: ";
        cin>>design_tool;
    }
    void displayDesigner(){
        displayEmployee();
        cout<<"Design Tool: "<<design_tool<<endl;
    }
};
int main(){
    Developer dev;
    Designer des;
    cout<<"\nDeveloper details: "<<endl;
    dev.inputDeveloper();
    dev.displayDeveloper();
    cout<<"\nDesigner details: "<<endl;
    des.inputDesigner();
    des.displayDesigner();
    return 0;
}
