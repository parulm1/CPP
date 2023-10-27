#include<iostream>
#include<fstream>
using namespace std;
/* class Sum
{
    private:
    int a,b,c;
    public:
    void add()
    {   
        cout<<"Enter two numbers :\n";
        cout<<"A = ";
        cin>>a;
        cout<<"\nB = ";
        cin>>b;
        c=a+b;
        cout<<"Addition = "<<c;
    }
}; */
int main()
{
    ofstream obj;
    obj.open("First_File.txt");
    obj<<"Hello File Handling"<<endl;
    /* Sum s;
    s.add();
    obj<<add(); */
    obj.close(); 
    cout<<"File Created Successfully";
    
    /* int z;
    z= add();
    cout<<"Addition = "<<z; */
}