#include<iostream>
using namespace std;
class area
{
    public:
        float area_calc(float l,float b)
        {
            return l*b;
        }
};
class perimeter
{
    public:
        float peri_calc(float l,float b)
        {
            return 2 *(l*b);
        }
};
class rectangle
