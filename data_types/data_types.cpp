#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 10;
    short s = 100;
    long l = 100000;
    long long big = 1e18;
    unsigned u = 42;

    char c = 'A';
    wchar_t wc = L'Ż';
    
    string name = "Matt";
    wstring polish = L"Żółć";
    u16string uni16 = u"żółć";
    u32string uni32 = U"żółć";

    bool blue = false;

    float pi = 3.14f;
    double d = 3.14159;
    long double ld = 3.1415926535;

    return 0;
}