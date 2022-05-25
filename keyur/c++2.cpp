#include <iostream>
using namespace std;
class test
{
    int x;

public:
    int getter()
    {
        return x;
    }
    void setter(int x1)
    {
        x = x1;
    }
};
int main()
{
    test t1;
    t1.setter(10);
    cout << "\n x : " << t1.getter();
}