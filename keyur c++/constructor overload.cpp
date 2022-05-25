//constructer overload
#include<iostream>
using namespace std;
class test
{
        public :
            test()
            {
                cout<<"\n Default consructor called ";
            }
            test(int n)
            {
                cout<<"\n one param int "<<n;
            }
            test(int n,int m)
            {
                cout<<"\n two param int "<<"-"<<m;
            }
            test(string str)
            {
                cout<<"\n one param string : "<<str;
            }
};
int main()
{
    test t1,t2(12),t3(2,4),t4("skill");
}