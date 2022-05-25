#include <iostream>
using namespace std;
class kk
{
    int x;

public:
    void setter(int c)
    {
        x = c;
    }
    int getter()
    {
        return x;
    }
};
int main()
{
    kk t1;
    t1.setter(100);
    cout << "\n x= " << t1.getter();
}
