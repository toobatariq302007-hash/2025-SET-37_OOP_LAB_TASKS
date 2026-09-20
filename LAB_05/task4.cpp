#include<iostream>
using namespace std;
class Printer{
    public:
    void print(){
        cout<<"Printing document..."<<endl;
    }
};
class Scanner{
    public:
    void scan(){
        cout<<"Scanning document..."<<endl;
    }
};
class Photocopier: public Printer, public Scanner{
    public:
      void photocopy() {
        cout << "Photocopying process started..." << endl;
        
        print();
        scan();
      }
};
int main(){
   Photocopier pc;
   pc.photocopy();
   pc.print();
   pc.scan();
   return 0;
}