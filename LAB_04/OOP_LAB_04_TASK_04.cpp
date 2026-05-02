#include <iostream>
using namespace std;

class Locker {
public:
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() 
{
    cout << "Inside block:" << endl;
    {
        Locker l1; 
    } 
    cout << endl;
    cout << "Using new and delete:" << endl;
    Locker* l2 = new Locker(); 

    delete l2; 

    return 0;
}
