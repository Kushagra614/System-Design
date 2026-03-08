#include <bits/stdc++.h>
using namespace std;

class Office{
    public:
    virtual void print(){}
    virtual void fax(){}
    virtual void scan(){}
};

class BasicPrinter : public Office{
    public:
    void print() override
    {
        cout<<"Printing with Basic Printer\n";
    }
     void fax() override
    {
        throw runtime_error("BasicPrinter does not support faxing");
    }
     void scan() override
    {
        throw runtime_error("BasicPrinter does not support scanning");
    }
};

class AdvancedPrinter : public Office{
    public:
    void print() override
    {
        cout<<"Printing with adv Printer\n";
    }
     void fax() override
    {
        cout<<"faxing with adv Printer\n";
    }
     void scan() override
    {
        cout<<"Scaning with adv Printer\n";
    }
};

int main(){

   BasicPrinter basic;
   AdvancedPrinter adv;

   cout<<"Working with basic Printer\n";

   
   basic.print();
    try {
        basic.fax();
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << "\n";
    }
    try {
        basic.scan();
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << "\n";
    }

    cout<<"Working with adv Printer\n";

   adv.print();
   adv.fax();
   adv.scan();

   return 0;
}