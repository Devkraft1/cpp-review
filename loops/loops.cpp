#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cout<<i<<" ";
        if(i == 6)
        {
            break;
        }
    }
    cout << endl;
    int number = 0;
    while(number < 10)
    {
        number++;
        if(number == 8)
        {
            continue;
        }
        cout << number << " ";
    }
    cout << endl;
    number = 1;
    do
    {
        cout << number << " ";
        number++;
    } 
    while (number <= 10);
    return 0;
}