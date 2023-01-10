#include <iostream>
const int Max_Bits = 8;

using namespace std;

void binary (unsigned char* ptr, int bites)
{
    for (int i=bites-1; i>=0; --i)
    {
        for (int j=Max_Bits-1; j>=0; --j)
        {
            cout << (ptr[i] >> j)%2;
        }
        cout << " ";
    }
    cout << endl << endl << endl;
}

void FloatBinary(unsigned char* ptr, int bites)
{

}

int main()
{

    signed int si = -2'147'483'600;
    unsigned int ui = 4'294'967'200;

    char c = -40;
    unsigned char uc = 128;

    short s = -32'700;
    unsigned short us = 65'520;

    long long ll = -9'223'372'036'854'775'675;
    unsigned long long ull = 18'446'744'073'709'551'350;

    float f = 1.546;
    double d = 8.23;

    cout << "Signed int " << (signed int)si << "= ";
    binary((unsigned char*)&si, sizeof(si));
    cout << "Unsigned int " << (unsigned int)ui << "= ";
    binary((unsigned char*)&ui, sizeof(ui));
    cout << "Signed char " << (signed short)c << "= ";
    binary((unsigned char*)&c, sizeof(c));
    cout << "Unsigned char " << (unsigned short)uc <<"= ";
    binary((unsigned char*)&uc, sizeof(uc));
    cout << "Short " << (signed short)s << "= ";
    binary((unsigned char*)&s, sizeof(s));
    cout << "Unsigned short " << (unsigned short)us << "= ";
    binary((unsigned char*)&us, sizeof(us));
    cout << "Long long " << (signed long long)ll << "= ";
    binary((unsigned char*)&ll, sizeof(ll));
    cout << "Unsigned long long " << (unsigned long long)ull << "= ";
    binary((unsigned char*)&ull, sizeof(ull));
    cout << "Float " << (float)f << "= ";
    binary((unsigned char*)&f, sizeof(f));
    cout << "Double " << (double)d << "= ";
    binary((unsigned char*)&d, sizeof(d));


    return 0;
}
