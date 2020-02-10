#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <array>

using namespace std;

const int ArSize = 20;
const int arrSize = 8;
int demo7_1();
string GenerStr();
int demo7_2();
void cheers(int);
double cube(double);
int demo7_3();
void n_chars(char c, int n);
int demo7_4();
long double prob(unsigned numbers, unsigned picks);
int demo7_5();
int sum_arr(int arr[], int n);
int demo7_6();
int fill_arr(double ar[], int limit);
void show_arr(const double ar[], int n);
void revalue(double r, double ar[], int n);
int demo7_7();
int sum_array(const int * begin, const int * end);
int demo7_8();
unsigned int c_in_str(const char * str, char ch);
int demo7_9();
char * buildstr(char c, int n);
int demo7_10();
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
polar rect_to_polar(rect pos);
void show_polar(polar pol);
int demo7_11();
void display(const string sa[], int n);
int demo7_12();
const int Seasons = 4;
const array<string, Seasons> Snames =
    {"Spring", "Summer", "Autumn", "Winter"};
void fill(array<double, Seasons> * pa);
void show(array<double, Seasons> * pa);
int demo7_13();
int fibo(int n, array<int, ArSize> * fa);
void showfibo(array<int, ArSize> pa, int n);

int main()
{
    //int t1 = demo7_1();
    //int t2 = demo7_2();
    //int t3 = demo7_3();
    //int t4 = demo7_4();
    //int t5 = demo7_5();
    //int t6 = demo7_6();
    //int t7 = demo7_7();
    //int t8 = demo7_8();
    //int t9 = demo7_9();
    //int t10 = demo7_10();
    //int t11 = demo7_11();
    //int t12 = demo7_12();
    int t13 = demo7_13();
    return 0;
}

// ===============================================================
// recursive
int demo7_13()
{
    int len;
    cout << "Enter the length of fibo array : ";
    cin >> len;
    array<int, ArSize> fiboarr;
    fiboarr[len - 1] = fibo(len-1, &fiboarr);
    cout << "The fibo array are: " << endl;
    showfibo(fiboarr, len);
    return 0;
}

int fibo(int n, array<int, ArSize> * fa)
{
    int result;
    if (n == 0 || n == 1)   result = 1;
    else    result = fibo(n-1, fa) + fibo(n-2, fa);
    (*fa)[n] = result;
    //cout << "!!!!! n : " << n << "; result : " << result << endl;
    //cout << "fa[n]: " << (*fa)[n] << endl;
    return result;
}

void showfibo(array<int, ArSize> pa, int n)
{
    for (int i = 0; i < n; i++) cout << pa[i] << " ";
    cout << endl;
}
// ===============================================================
// array<> func
int demo7_12()
{

    array<double, Seasons> expenses;
    fill(&expenses);
    show(&expenses);
    return 0;
}

void fill(array<double, Seasons> * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter the expenses of " << Snames[i] << endl;
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> * pa)
{
    double total = 0.0;
    cout << "\nExpenses\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << (*pa)[i] << endl;
        total += (*pa)[i];
    }
    cout << "Total expenses : " << total << endl;
}
// ===============================================================
// String func
int demo7_11()
{
    int SIZE = 5;
    string List[SIZE];
    cout << "Enter your " << SIZE << "favo stars : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << " star : ";
        getline(cin, List[i]);
    }
    cout << "Your list :\n";
    display(List, SIZE);
    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++) cout << i+1 << ": " << sa[i] << endl;
}
// ===============================================================
// 结构：角度转换为弧度
int demo7_10()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect pos)
{
    polar trans;
    trans.distance = sqrt(pos.x*pos.x + pos.y*pos.y);
    trans.angle = atan2(pos.y, pos.x);
    return trans;
}

void show_polar(polar pol)
{
    const double pitodeg = 57.29578;
    cout << "Distance: " << pol.distance << endl;
    cout << "Angle: " << pol.angle * pitodeg << " degrees.\n";
}
// ===============================================================
// 传递字符串地址
int demo7_9()
{
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = buildstr('F', 30);
    cout << ps << "-***-" << ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char[n+1];
    pstr[n] = '\0';
    while(n-- > 0) pstr[n] = c;
    return pstr;
}
// ===============================================================
// 字符串参数
int demo7_8()
{
    using namespace std;
    char mmm[15] = "minimum";
    char *wail = "ululate";
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

 unsigned int c_in_str(const char * str, char ch)
{
    unsigned int counter = 0;
    while(*str)
    {
        if (*str == ch) counter++;
        str++;
    }
    return counter;
}
// ===============================================================
// 数组区间
int demo7_7()
{
    int cookies[arrSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_array(cookies, cookies + arrSize);
    cout << "Sum of all is : " << sum << endl;
    sum = sum_array(cookies, cookies + 3);
    cout << "Sum of 3th is : " << sum << endl;
    return 0;
}
int sum_array(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)   total += *pt;
    return total;
}
// ===============================================================
// 数组赋值/显示/修改
int demo7_6()
{
    int MAX = 5;
    double proper[MAX];
    int size = fill_arr(proper, MAX);
    show_arr(proper, size);
    if (size > 0)
    {
        cout << "Enter revaluation factoe: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input.\n";
        }
        revalue(factor, proper, size);
        show_arr(proper, size);
    }
    cout << "The end.\n";
    cin.get();
    return 0;
}

int fill_arr(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input, terminated.\n";
            break;
        }
        else if (temp < 0) break;
        ar[i] = temp;
    }
    return i;
}

void show_arr(const double ar[], int n)
{
    for (int i = 0; i <n; i++)
        cout << "Property #"<< (i + 1) << ": $" << ar[i] << endl;
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++) ar[i] *= r;
}
// ===============================================================
// 数组传参
int demo7_5()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies, 8);
    cout << "Total eat " << sum << " cookies.\n";
    int i = 4;
    cout.setf(ios_base::boolalpha);
    cout << "cookies [i] == *(cookies + i) : "
        << (cookies[i] == *(cookies + i))<< endl;
    cout << "&cookies[i] == cookies + i : "
        << (&cookies[i] == cookies + i) << endl;
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) total = total + arr[i];
    return total;
}
// ===============================================================
// 多参数计算阶乘
int demo7_4()
{
    double total, choices;
    cout << "Enter the total number of choices and \n"
            "the number of picks allowed:\n";
    while (cin >> total >> choices && choices <= total)
    {
        cout.setf(ios_base::fixed);
        cout << "The prob of win is : ";
        cout << prob(total, choices) * 100 << "\%.\n";
        cout << "Next two numbers or q to quit.\n";
    }
    cout << "The end.\n";
    return 0;
}

long double prob(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--) result = result * p / n;
    return result;
}
// ===============================================================
// 多参数调用
int demo7_3()
{
    int times;
    char ch;
    cout << "Enter a char : ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter the repeat times ；";
        cin >> times;
        n_chars(ch, times);
        cout << "\nAnother char or q to quit. \n";
        cin >> ch;
    }
    cout << "The end.\n";
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0) cout << c;
}
// ===============================================================
// 多函数调用
int demo7_2()
{
    cheers(5);
    cout << "Rntet the times : ";
    double times;
    cin >> times;
    cheers(cube(times));
    return 0;
}

void cheers(int n)
{
    for (int i = 0; i < n; i++) cout << "Cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x*x*x;
}
// ===============================================================
// 函数定义-原型-调用
int demo7_1()
{
    char arr[ArSize];
    string str;
    str = GenerStr();
    cout << str << endl;
    return 0;
}

string GenerStr()
{
    string tempstr = "Hello CPP!";
    return tempstr;
}
