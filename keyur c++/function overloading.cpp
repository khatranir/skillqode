#include<iostream>
using namespace std;
class shape
{
        public :
            void area(int n)
            {
                cout<<"\n Area of squre "<<n;
            }
            void area(double n)
            {
                cout<<"\n squre : "<<n*n*3.14;
            }
            void area(int base,int height)
            {
                cout<<"\n Area of triangle "<<0.5*base*height;
            }
            
};
int main()
{
    shape circle,triangle,squre;
    circle.area(3);
    triangle.area(10,10);
    squre.area(5.0);
}