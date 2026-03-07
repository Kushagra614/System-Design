#include<bits/stdc++.h>
using namespace std;

class PaymentMethod{
    public:
    virtual void pay() = 0;
    virtual ~PaymentMethod() {}
};

class UPI : public PaymentMethod{
    public:
    void pay() override {
        cout<<"Payment will be done by UPI\n";
    }
};

class Card : public PaymentMethod
{
    public:
    void pay() override{
        cout<<"Payment will be done by Card\n";
    }
};

class Cash : public PaymentMethod{
    public:
    void pay() override{
        cout<<"Payment will be done my Cash\n";
    }
};

class Payments {
    PaymentMethod* paymentMethod; // pointer to the abstract class
    public:
    Payments(PaymentMethod* method) : paymentMethod(method) {}

    void processPayment()
    {
        paymentMethod->pay();
    }
};

int main(){

    UPI upi;
    Payments pay1(&upi);
    pay1.processPayment();

    Card card;
    Payments pay2(&card);
    pay2.processPayment();
    
    Cash wallet;
    Payments pay3(&wallet);
    pay3.processPayment();

   return 0;
}