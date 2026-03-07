#include<bits/stdc++.h>
using namespace std;

class Rectangle {
    protected:
    int h; 
    int w;
    public:
    Rectangle(int x, int y) : h(x), w(y) {}

    void setHeight(int x) { h = x; }
    void setWidth(int y) { w = y; }

    void area()
    {
        cout<<"Area is: "<<(h*w)<<endl;
    }
};


class Square : public Rectangle{
    public:
    Square(int x) : Rectangle(x, x) {}
    
    void setHeight(int x) override { h = x; w = x; }
    void setWidth(int y) override { h = y; w = y; }
};


int main(){
    Rectangle rect(5, 10);
    rect.setHeight(5);
    rect.setWidth(10);
    rect.area();  // Area is: 50
    
    Square sq(5);
    sq.setHeight(5);
    sq.setWidth(10);  // This violates LSP! Square forces both to be 10
    sq.area();  // Area is: 100 (not 50)

    return 0;
}