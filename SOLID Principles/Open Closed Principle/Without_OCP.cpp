#include<bits/stdc++.h>
using namespace std;

class Payments{
    string type;
    public:

    void paymentMethod(string type)
    {
        if(type == "UPI")
        {
            cout<<"payment will be done by UPI\n";
        }
        else if(type == "Card")
        {
            cout<<"payemnt will be done by Card\n";
        }
        else{
            cout<<"pls select a valid payment method\n";
        }
    }
};

int main(){

   Payments pay;
   pay.paymentMethod("UPI");

   return 0;
}