#include <iostream>
using namespace std;
class sum
{
    int x;

public:
    void set_val()
    {
        cout << "\n Enter x : ";
        cin >> x;
    }
    int get_val()
    {
        return x;
    }
};
int main()
{
    sum obj1[5];
    int i;
    for (i = 0; i < 3; i++)
        obj1[i].set_val();
    for (i = 0; i < 3; i++)
        cout << "\n x : " << obj1[i].get_val();
}