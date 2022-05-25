#include <iostream>
using namespace std;
class kk
{
    string name;
    string brand;

public:
    kk(string n, string b)
    {
        brand = b;
        name = n;
    }
    int mykk()
    {
        cout << "\n"
             << brand << " " << name;
    }
};
int main()
{
    kk bhavin("honda", "activa"), yaman("hero", "passion");
    bhavin.mykk();
    yaman.mykk();
}
