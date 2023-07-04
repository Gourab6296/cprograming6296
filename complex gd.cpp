#include<iostream>
using namespace std;
class Complex
{
    int real;
    int imz;
    public :
        void set(int r,int i)
          {
            real=r;
            imz=i;
          }
        void print(Complex c)
           {
            cout<<real<<" + "<<imz<<"i"<<endl;
            cout<<c.real<<" + "<<c.imz<<"i"<<endl;
           }
        void add(Complex c)
        {
            cout<<real + c.real<<" + "<<imz + c.imz<<"i";
        }
};
int main()
{
    Complex c1,c2;
    c1.set(8,9);
    c2.set(5,7);
    c1.print(c2);
    c1.add(c2);
    return 0;
}
