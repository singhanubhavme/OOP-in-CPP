#include <iostream>
using namespace std;
int main()
{
    char ch = 'F';
    bool b = true;
    short s = 1212;
    int i = 561269456;
    long l = 65218974232;
    float f = 456.56f;
    double d = 631.455;
    long double ld = 45354.669954;
    wchar_t wc = L'X';
    cout << "Character : " << ch << endl;
    cout << "Size of Character : " << sizeof(char) << endl;
    cout << "Boolean : " << b << endl;
    cout << "Size of Boolean : " << sizeof(bool) << endl;
    cout << "Short Integer : " << s << endl;
    cout << "Size of Short Integer : " << sizeof(short) << endl;
    cout << "Integer : " << i << endl;
    cout << "Size of Integer : " << sizeof(int) << endl;
    cout << "Long : " << l << endl;
    cout << "Size of Long : " << sizeof(long) << endl;
    cout << "Float : " << f << endl;
    cout << "Size of Float : " << sizeof(float) << endl;
    cout << "Double : " << d << endl;
    cout << "Size of Double : " << sizeof(double) << endl;
    cout << "Long Double : " << ld << endl;
    cout << "Size of Long Double : " << sizeof(long double) << endl;
    cout << "Wide Character : " << wc << endl;
    cout << "Size of Wide Character : " << sizeof(wchar_t) << endl;
    return 0;
}

