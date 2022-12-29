#include<iostream>
using namespace std;
class complex
{
public:
    float real,img;
    complex()
    {
        real=0;
        img=0;
    }
    complex operator +(complex obj)
    {
        complex t;
        t.real=real+obj.real;
        t.img=img+obj.img;
        return t;
    }
    complex operator *(complex obj)
    {
        complex t;
        t.real=(real*obj.real)-(img*obj.img);
        t.img=(real*obj.img)+(img*obj.real);
        return t;
    }
    friend istream& operator >>(istream &in, complex &obj);
    friend ostream& operator <<(ostream &out, complex &obj);
};
istream& operator >>(istream &in, complex &obj)
{
    in>>obj.real;
    in>>obj.img;
    return in;
}
ostream& operator <<(ostream &out, complex &obj)
{
    out<<obj.real;
    out<<"+"<<obj.img<<"i";
    return out;
}

int main()
{
    complex a,b,c,d;
    cout<<"Enter complex no.1 :"<<endl;
    cin>>a;
    cout<<"Enter complex no.2 :"<<endl;
    cin>>b;
    c=a+b;
    cout<<"addition: "<<c<<endl;
    d=a*b;
    cout<<"multiplication: "<<d<<endl;
    return 0;
}