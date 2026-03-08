#include<bits/stdc++.h>
using namespace std;

class Print{
    public:
    virtual void print() = 0;
};
class Scan{
    public:
    virtual void scan() = 0;
};
class Fax{
    public:
    virtual void fax() = 0;
};

class BasicPrinter : public Print{
    public:
    void print() override{
        cout<<"printing from basic printer\n";
    }
};

class AdvPrinter : public Print, Scan, Fax{
    public:
    void print() override{
        cout<<"printing from adv printer\n";
    }
    void scan() override{
        cout<<"scaning from adv printer\n";
    }
    void fax() override{
        cout<<"faxing from adv printer\n";
    }
};

int main(){

    BasicPrinter basic;
    AdvPrinter adv;

    cout<<"BASIC PRINTER\n";
    basic.print();

    cout << "\n=== Advanced Printer ===\n";
    adv.print();
    adv.scan();
    adv.fax();

   return 0;
}