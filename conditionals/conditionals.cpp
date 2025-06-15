#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    if(a == 10 || b == 9)
    {
        cout << "a = 10 or b = 9" << endl;
    }
    else if(a < 10 && b > 9)
    {
        cout << "a < 10 and b > 9" << endl;
    }
    else
    {
        cout << "a = " << a << " and b = " << b <<endl;
    }
    
    switch(a)
    {
        case 1:
        {
            cout << "a = 1";
            break;
        }
        case 2:
        {
            cout << "a = 2";
            break;
        }
        case 3:
        {
            cout << "a = 3";
            break;
        }
        case 4:
        {
            cout << "a = 4";
            break;
        }
        case 5:
        {
            cout << "a = 5";
            break;
        }
        default:
        {
            cout<< "a > 5 ";
            break;
        }
    }
    return 0;
}