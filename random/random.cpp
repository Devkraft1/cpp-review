#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int random = rand()%100+1; // 1 - 100
    int random2 = rand()%26+50; // 50 - 75
    cout<<random <<"\n"<<random2;
    return 0;
}