#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;

public:
    void setlength(float l) 
    {
        length = l;
    }
    void setwidth(float w) 
    {
        width = w;
    }
    float Perimeter() 
    {
        return 2 * (length + width);
    }
    float Area() 
    {
        return length * width;
    }
    void show() 
    {
        cout <<"Length: "<<length<<endl;
        cout <<"Width: "<<width<<endl;
    }
    int sameArea(Rectangle r) {
        if(Area() == r.Area())
        {
            return 1;
        }
        else
        {
            return 0;
        }
        }            
};


int main()
{
    Rectangle r1,r2;
    cout<<"Details of rectangle 1"<<endl;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);
    r1.show();
    cout<<"Perimeter of Rectangle 1: "<<r1.Perimeter()<<endl;
    cout<<"Area of Rectangle 1: "<<r1.Area()<<endl;
    cout<<"Comparision result: "<<r1.sameArea(r2)<<endl;
    cout<<endl<<endl<<endl<<"*********************************************"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"Details of rectangle 2"<<endl;
    r2.setlength(5);
    r2.setwidth(18.9);
    r2.show();
    cout<<"Perimeter of Rectangle 2: "<<r2.Perimeter()<<endl;
    cout<<"Area of Rectangle 2: "<<r2.Area()<<endl;
    cout<<"Comparision result: "<<r2.sameArea(r1)<<endl;
    cout<<endl<<endl<<endl<<"*********************************************"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"Details of rectangle 1 and comparision after changing the value"<<endl;
    r1.setlength(15);
    r1.setwidth(6.3);   
    r1.show();
    cout<<"Perimeter of Rectangle 1: "<<r1.Perimeter()<<endl;
    cout<<"Area of Rectangle 1: "<<r1.Area()<<endl;
    cout<<"Comparision result: "<<r1.sameArea(r2)<<endl;
    return 0;
}
