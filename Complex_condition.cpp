#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

int demo62_1();
int demo62_2();
int demo62_3();
int demo62_4();
int demo62_5();
int demo62_6();
int demo62_7();

void showmenu();
void report();
void comfort();

enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    //int t1  = demo62_1();
    //int t2  = demo62_2();
    //int t3  = demo62_3();
    //int t4  = demo62_4();
    //int t5  = demo62_5();
    //int t6  = demo62_6();
    int t7  = demo62_7();
    return 0;
}

//=============================================
// file input
int demo62_7()
{
    int SIZE = 60;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter file path: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Terminated by data mismatch.\n";
    else
        cout << "Terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}

//=============================================
// file output
int demo62_6()
{
    char autophone[50];
    int year;
    double a_price;
    double b_price;

    ofstream outFile;
    outFile.open("D:/carinfo.txt");
    cout << "Enter the make and model of automobile: ";
    cin.getline(autophone, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout <<  "Enter the original asking price: ";
    cin >> a_price;
    b_price = 0.913 * a_price;

    cout << fixed; // 一般方式输出浮点数
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << autophone << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << b_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << autophone << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << b_price << endl;

    outFile.close();
    return 0;
}

//=============================================
// 读入数字及处理非数字字符
//=============================================
int demo62_5()
{
    int Max = 5;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    // 用 clear() 处理非数字输入
    for (i = 0; i < Max; i++)
    {
        cout << "Round #" << i+1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Please enter a number: ";
        }
    }
    double total  = 0.0;
    for (i = 0; i < Max; i++) total += golf[i];
    cout << total / Max << " = average score " << Max << " rounds\n";
    return 0;
}


int demo62_4()
{
    int maxFish = 5;
    double fish[maxFish];
    cout << "Enter the weight of the fish or q to terminate.\n";
    cout << "Fish #1: ";
    int i = 0;
    // 读取数字数组
    while (i < maxFish && cin >> fish[i])
    {
        if (++i < maxFish)
            cout << "fish #" << i+1 << ": ";
    }
    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += fish[j];
    if (i == 0) cout << "No fish today.\n";
    else cout << "Average " << total / i << " weight " << i << " fishes today.\n";
    return 0;
}

//=============================================
// break & continue
int demo62_3()
{
    int ArSize = 80;
    char line[ArSize];
    int spaces = 0;
    cout << "Enter a  line of text:\n";
    cin.get(line, ArSize);
    cout << "Complete line : \n" << line << endl;
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if (line[i] == '.') break;
        if (line[i] != ' ') continue;
        spaces++;
    }
    cout << "\n" << spaces << " spaces.\n";
    return 0;
}

//=============================================
// switch with enum
int demo62_2()
{
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red : cout << "Her lips were red.\n"; break;
            case orange : cout << "Her hair was orange.\n"; break;
            case yellow : cout << "Her shoes were yellow.\n"; break;
            case green : cout << "Her nails were green.\n"; break;
            case blue    : cout << "Her sweatsuit was blue.\n"; break;
            case violet  : cout << "Her eyes were violet.\n"; break;
            case indigo  : cout << "Her mood was indigo.\n"; break;
        }
        cout << "Enter color code :";
        cin >> code;
    }
    cout << "The emd. \n";
    return 0;
}

//=============================================
// Use switch to create a menu
//=============================================
int demo62_1()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1 : cout << "\a\n"; break;
            case 2 : report(); break;
            case 3 : cout << "Pic in beach.\n"; break;
            case 4 : comfort(); break;
            default : cout << "Wrong choice !\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "The end.\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5: \n"
            "1) alarm   2) report\n"
            "3) alibi   4) comfort\n"
            "5) quit\n";
}
void report()
{
    cout << "The NCP patients are decreasing today.\n";
}
void comfort()
{
    cout << "You are alive.\n";
}

