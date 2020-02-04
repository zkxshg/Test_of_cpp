#include <iostream>
#include <climits>
#include <cstring>
#include <string>
#define ZERO 0
using namespace std;
int demo1();
int demo2();
int demo3();
int demo4();
int demo5();
int demo6();
int demo7();
int demo8();
int demo9();
int demo10();

struct infl
{
    char name[30];
    float vol;
    double price;
};

int main()
{
    //int t1 = demo1();
    //int t2 = demo2();
    //int t3 = demo3();
    //int t4 = demo4();
    //int t5 = demo5();
    //int t6 = demo6();
    //int t7 = demo7();
    //int t8 = demo8();
    //int t9 = demo9();
    int t10 = demo10();
    return 0;
}

int demo10()
{
    // 结构数组
    infl guests[2] =
    {
        {"BB", 0.5, 21.23},
        {"Dog", 2000, 4342.23}
    };
    cout << "The guests " << guests[0].name << " and " << guests[1].name << endl;
    cout << "have a combined cal of " << guests[0].vol + guests[1].vol << endl;
    return 0;
}

int demo9()
{
    infl guest =
    {
        "GG",
        1.66,
        2.3E4
    };
    infl pal =
    {
        "AA",
        3.12,
        3.2E4
    };
    //  结构初始化
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}

int demo8()
{
    char charr[30];
    string str;
    // string vs. char[]
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 30);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    return 0;
}

int demo7()
{
    // strcat() str1+str2 / strcpy() str1=str2 / strlen() str.size()
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    str1 = str2;
    strcpy(charr1, charr2); // copy char[]
    str1 += " paster";
    strcat(charr1, " juice"); // char[] add
    int len1 = str1.size(); // size of string
    int len2 = strlen(charr1); // length of char[]
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
    return 0;
}
int demo6()
{
    // io of string
    string s1 = "penguin";
    string s2, s3;
    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + " " + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout <<"s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout <<"s2 += \" for a day\" yields s2 = " << s2 << endl;
    return 0;
}

int demo5()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "partner";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // use cout for output
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;    // use array notation
    return 0;
}

int demo4()
{
    // cin >> / cin.getLine() / cin.get()
    cout << "What year was your house built?\n";
    int year;
    //cin >> year; cin.get();
    (cin >> year).get();
    cout << "What is its street address?\n";
    char address[60];
    cin.getline(address, 60);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}

int demo3()
{
    const int ArSize = 5;
    char name[ArSize];
    char dessert[ArSize];
    // cin.clear()
    cout << "Enter your name:\n";
    //cin >> name;
    cin.getline(name, ArSize);
    cin.clear();  // clear failbit
    //cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert:\n";
    //cin >> dessert;
    cin.getline(dessert, ArSize);
    //cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}

int demo2()
{
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++Test";
    cout << "Hi, im " << name2 << " ! whats your name? \n";
    cin >> name1;
    cout << "Well, " << name1 << " Your name has " << strlen(name1) << " letters.\n";
    cout << "And stored in an array of " << sizeof name1 << " bytes. \n";
    name1[3] = '\0';
    cout << "your first 3 char are " << name1 << endl;
    return 0;
}

int demo1()
{
    int yams[3] = {7,8,6};
    int yamcosts[3] = {29,31,24};
    cout << yams << endl;
    cout << sizeof yams << endl;
    cout << yams[2] * yamcosts[2] << endl;
    // array 
    short things[] = {1, 2, 3, 4};
    int num_elements = sizeof things / sizeof (short);
    cout << num_elements <<endl;
    return 0;
}
