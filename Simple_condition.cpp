#include <iostream>
#include <climits>
#include <cctype>
using namespace std;

const char * qualify[4] =
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int demo6_1();
int demo6_2();
int demo6_3();
int demo6_4();
int demo6_5();
int demo6_6();
int demo6_7();
int demo6_8();
int demo6_9();
bool is_int(double);

int main()
{
    //int t1  = demo6_1();
    //int t2  = demo6_2();
    //int t3 = demo6_3();
    //int t4 = demo6_4();
    //int t5 = demo6_5();
    //int t6 = demo6_6();
    //int t7 = demo6_7();
    //int t8 = demo6_8();
    int t9 = demo6_9();
    return 0;
}

int demo6_9()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of a " << a << "and b " << b;
    // Use ?: to get the bigger one
    int c = a > b ? a : b;
    cout << " is " << c << endl;
    return 0;
}

int demo6_8()
{
    cout << "Enter text to get type, or @ to exist.";
    char ch;
    int whitespace = 0;
    int digit = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    // Use func of cctype to get type of input
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch)) chars++;
        else if (isspace(ch)) whitespace++;
        else if (isdigit(ch)) digit++;
        else if (ispunct(ch)) punct++;
        else others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digit << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}

int demo6_7()
{
    double num;
    cout << "Enter an integer : ";
    cin >> num;
    // use ! not tp judge if int
    while (!is_int(num))
    {
        cout << "Enter again!";
        cin >> num;
    }
    int val = int(num);
    cout << "Int you entered is : " << val << endl;
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}

int demo6_6()
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;
    // use && to classfication
    if (age > 17 && age < 35) index = 0;
    else if (age >= 35 && age < 50) index = 1;
    else if (age >= 50 && age < 65) index = 2;
    else index = 3;
    cout << "Your qualify for the " << qualify[index];
    return 0;
}


int demo6_5()
{
    int ArSize = 6;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
         << "of\nyour neighbors. Program terminates "
         << "when you make\n" << ArSize << " entries "
         << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First :";
    cin >> temp;
    // && 读入数组
    while (i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
        i++;
        if (i < ArSize)
        {
            cout << "Next : ";
            cin >> temp;
        }
    }
    if (i == 0)
        cout << "No data ! \n";
    else
    {
        cout << "Enter your NAAQ";
        float you;
        cin >> you;
        int counter = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > i)
                ++counter;
        cout << counter << " of your neighbors higher than you. \n";
    }
    return 0;
}

int demo6_4()
{
    // or ||
    cout << "Enter a number between and 10 and 20 \n";
    int n;
    cin >> n;
    if (n < 10 || n > 20)
        cout << "Wrong number ! \n";
    else
        cout << "Right! \n";
    // and && 设置取值范围
    cout << "Enter a number between and 40 and 50 \n";
    int n2;
    cin >> n2;
    if (n2 > 39 && n2 < 51)
        cout << "Right! \n";
    else
        cout << "Wrong number! \n";
    return 0;
}

int demo6_3()
{
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    int Fave = 21;
    int n;
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too Low ! \n";
        else if (n > Fave)
            cout << "Too big ! \n";
        else
            cout << Fave << " is right! \n";
    } while (n != Fave);
    return 0;
}



int demo6_2()
{
    // if-else
    char ch;
    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }
    cout << "OK." <<endl;
    return 0;
}

int demo6_1()
{
    // while-if
    char ch;
    int spaces = 0;
    int total = 0;
    cout << "Enter the sentences : ";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << "Spaces : " << spaces << " and total : " << total <<endl;
    return 0;
}
