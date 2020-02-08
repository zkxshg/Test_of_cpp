#include <iostream>
#define EOF -1
using namespace std;
const int Cities = 5;
const int Years = 4;
int demo52_1();
int demo52_2();
int demo52_3();
int demo52_4();
int demo52_5();

int main()
{
    //int t1  = demo52_1();
    //int t2  = demo52_2();
    //int t3  = demo52_3();
    //int t4  = demo52_4();
    int t5  = demo52_5();
    return 0;
}

int demo52_5()
{
    // char 指针数组
    const char * cities[Cities] =
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    // 二维数组
    int maxtemps[Years][Cities] =
    {
        {96, 100, 87, 101, 105},    // values for maxtemps[0]
        {96, 98, 91, 107, 104},     // values for maxtemps[1]
        {97, 101, 93, 108, 107},    // values for maxtemps[2]
        {98, 103, 95, 109, 108}     // values for maxtemps[3]
    };
    for (int city = 0; city < Cities; city++)
    {
        cout << "Maximum temperatures for city " << cities[city]
        << " during 2008-2010 :\n";
        // nested loop
        for (int year = 0; year < Years; year++)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    //cout << (2*7+4+6*6*4+6*6*6*4+36*36*4);
    return 0;
}

int demo52_4()
{
    int ch;
    int counter = 0;
    // Use EOF to stop
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        counter++;
    }
    cout << endl << counter <<" character read \n";
    return 0;
}

int demo52_3()
{
    // cin.fail() to test EOF
    char ch;
    int counter = 0;
    cout << "Enter characters. Enter # to exist: \n";

    // Use cin.fail() to test
    //cin.get(ch);
    //while (cin.fail() == false){cout << ch; ++counter; cin.get(ch);}

    // Use istream to simply
    while (cin.get(ch))
    {
        cout << ch;
        ++counter;
        //cin.get(ch);
    }
    cout << endl << "character read \n";
    return 0;
}

int demo52_2()
{
    // cin.get() in loop
    char ch;
    int counter = 0;
    cout << "Enter characters. Enter # to exist: \n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++counter;
        cin.get(ch);
    }
    cout << endl << "character read \n";
    return 0;
}

int demo52_1()
{
    // gin in loop
    char ch;
    int counter = 0;
    cout << "Enter characters. Enter # to exist: \n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch ;
        ++counter;
        cin >> ch;
    }
    cout << endl << "character read \n";
    return 0;
}
