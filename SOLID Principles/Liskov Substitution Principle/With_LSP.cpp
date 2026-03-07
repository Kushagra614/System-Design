#include<bits/stdc++.h>
using namespace std;

class Shape {
    protected:
    int h; 
    int w;
    public:
    Shape(int x, int y) : h(x), w(y) {}

    virtual void area() = 0;
    virtual ~Shape() {}
};


class Rectangle : public Shape {
    public:
    Rectangle(int x, int y) : Shape(x, y) {}

    void setHeight(int x) { h = x; }
    void setWidth(int y) { w = y; }

    void area() override
    {
        cout<<"Rectangle Area is: "<<(h*w)<<endl;
    }
};


class Square : public Shape {
    public:
    Square(int x) : Shape(x, x) {}
    
    void setSide(int x) { h = x; w = x; }

    void area() override
    {
        cout<<"Square Area is: "<<(h*w)<<endl;
    }
};


int main(){
    Rectangle rect(5, 10);
    rect.setHeight(5);
    rect.setWidth(10);
    rect.area();  // Rectangle Area is: 50
    
    Square sq(5);
    sq.setSide(5);  // Now Square has its own method, doesn't break Rectangle's contract
    sq.area();      // Square Area is: 25

    return 0;
}
