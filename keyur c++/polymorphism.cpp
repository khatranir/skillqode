#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "\n base class is call";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "\n derived class is call";
    }
};
int main()
{
    base *p, b;
    derived c;
    p = &b;
    p->display();
    p = &c;
    p->display();
}