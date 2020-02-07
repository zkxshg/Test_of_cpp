#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;
int demo3_1();
int demo3_2();
int demo3_3();
int demo3_4();
int demo3_5();
int demo3_6();
int demo3_7();

int main()
{
    int t31 = demo3_1();
    //int t32 = demo3_2();
    //int t33 = demo3_3();
    //int t34 = demo3_4();
    //int t35 = demo3_5();
    //int t36 = demo3_6();
    //int t37 = demo3_7();
    return 0;
}

int demo3_7()
{
    // 初始化和赋值-自动转换
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 32;
    int fti = 3.12;
    int dti = 6.2E15;
    cout << tree << endl;
    cout << fti << endl;
    cout << dti << endl;
    // 列表初始化-自动转换
    const int code = 66;
    int x = 66;
    char c1 {31312};
    char c2 = {66};
    char c3 {code};
    char c4 {x};
    x = 31312;
    char c5 = x;
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;
    // typename : 强制转换
    cout << int('W') << endl;
    cout << (int)'W' << endl;
    cout << static_cast<int>('W') << endl;
    return 0;
}

int demo3_6()
{
    // 基本运算
    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter X : ";
    cin >> hats;
    cout << "Enter Y : ";
    cin >> heads;
    cout << "X + Y : " << hats + heads << endl;
    cout << "X - Y : " << hats - heads << endl;
    cout << "X * Y : " << hats * heads << endl;
    cout << "X / Y : " << hats / heads << endl;
    // overloading
    cout << " 123 / 5 " << 123 / 5 << endl;
    cout << " 123.0 / 5 " << 123.0 / 5 << endl;
    cout << " 123 / 5 " << 123 / 5 << endl;
    cout << " 1.23e5 / 7.0 " << 1.23e5 / 7.0 << endl;
    cout << " 1.23e5f / 7.0f " << 1.23e5f / 7.0f << endl;
    // mod 
    const int L_p_s = 14;
    int lbs;
    cout << "Your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / L_p_s;
    int pounds = lbs % L_p_s;
    cout << lbs << " are " << stone << " stones and " << pounds << " pounds. \n";
    return 0;
}

int demo3_5()
{
    //cout << 1.67e12 << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    cout << "tub : " << tub << ", a millon tub : " << million * tub;
    cout << ", \n and ten million tubs = " << 10 * million * tub << endl;
    cout << "mint : " << mint << " and a million mint = " << million * mint << endl;
    // float overloading 浮点数过载
    float a = 2.35E+22f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}

int demo3_4()
{
    // char, int = char , \a , \b , \n , \".
    char ch;
    cout << "Enter a char : " << endl;
    cin >> ch;
    int i = ch;
    cout << "The char is : " << ch << endl;
    cout << "The ascii of ch is : " << i << endl;
    ch = ch + 1;
    i = ch;
    cout << "The char+1 is : " << ch << endl;
    cout << "The ascii of ch+1 is : " << i << endl;
    cout << "The put of ch+1 is : ";
    // cout.put()
    cout.put(ch);
    cout << endl;
    // \a : alarm ; \b : back.
    char alarm = '\a';
    cout << alarm << "Test of alarm! \n ";
    cout << " \" 1 \" enter your account : _______\b\b\b\b\b\b\b ";
    long code;
    cin >> code;
    cout << "Your account is : " << code << "...\n";
    return 0;
}

int demo3_3()
{
    // 42 / 042 / 0x42
    cout << "42: " << 42 << endl;
    cout << "042: " << 042 << endl;
    cout << "0x42: " << 0x42 << endl;
    // 10 / hex / oct
    cout << "42:" << 42 << endl;
    cout << hex;
    cout << "hex 42:" << 42 << endl;
    cout << oct;
    cout << "oct 42:" << 42 << endl;
    return 0;
}

int demo3_2()
{
    // unsigned short 非负类型
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam : " << sam << " and sue : " << sue <<endl;
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam+1 : " << sam << " and sue+1 : " << sue << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam : " << sam << " and sue : " << sue <<endl;
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam-1 : " << sam << " and sue-1 : " << sue << endl;
    return 0;
}

int demo3_1()
{
    // int / short / long / long long
    // climits: SHRT_MAX / SHRT_MIN / CHAR_BIT
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong  = LLONG_MAX;
    // sizeof (int); sizeof n_short;
    cout << "int is" << sizeof (int) << "bytes." <<endl;
    cout << "short is" << sizeof n_short << "bytes." <<endl;
    cout << "long is" << sizeof n_llong << "bytes." <<endl;
    cout << " long long is" << sizeof n_llong << "bytes." <<endl;
    cout << endl;
    cout << "Max of: " << endl;
    cout << "int is " << n_int <<endl;
    cout << "short is" << n_short <<endl;
    cout << "long is" << n_long  <<endl;
    cout << "llong is" << n_llong  <<endl<<endl;
    cout << "Min int is" << INT_MIN <<endl;
    cout << "Bit per byte = " << CHAR_BIT <<endl;
    cin.get();
    return 0;
}
