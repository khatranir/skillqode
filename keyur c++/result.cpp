#include <iostream>
using namespace std;
class detail
{
    string name;
    int s1, s2, s3, r, per, total;

public:
    void choices()
    {
        cout << " \n 1 : sellect number";
        cout << " \n 0 : Exit ";
        cout << " Choice the number";
    }

    void setter()
    {
        cout << "student name : ";
        cin >> name;
        cout << "Roll no. : ";
        cin >> r;
        cout << "Chemistry : ";
        cin >> s1;
        cout << "physics : ";
        cin >> s2;
        cout << "Biology : ";
        cin >> s3;
        total = s1 + s2 + s3;
        per = total / 3;
    }
    void getter()
    {
        cout << "\nstudent name : " << name;
        cout << " \nRoll no. : " << r;
        cout << " \nchemistry : " << s1;
        cout << " \nphysics : " << s2;
        cout << " \nBiology : " << s3;
        cout << " \nTotal : " << total;
        cout << " \nPersentage : " << per;
        if (s1 > 33 && s2 > 33 & s3 > 33)
        {
            cout << "Result : Pass";
            {
                if (per <= 100 && per >= 90)
                {
                    cout << " \nGrade a";
                }
                else if (per < 90 && per > 79)
                {
                    cout << "\ngrade B";
                }
                else if (per < 80 && per > 69)
                {
                    cout << "\ngrade C";
                }
                else if (per < 70 && per > 59)
                {
                    cout << "\ngrade D";
                }
            }
        }
        else
        {
            cout << "Result : fail";
        }
    }
};
int main()
{
    detail student[3];
    int i, choice;
    for (i = 0; i < 2; i++)
        student[i].setter();
    do
    {
        student[i].choices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << " \n Enter the roll no. : ";
            cin >> i;
            student[i].getter();
            break;
        case 0: 
            break;
        default:
            cout << " Invalid number";
        }
    } while (choice != 0);

    return 0;
}