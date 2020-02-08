#include <iostream>
#include <cstring>  // for strcmp()
#include <ctime>  // for block()
#include <array>
using namespace std;
const int ArSize = 16;
int demo5_1();
int demo5_2();
int demo5_3();
int demo5_4();
int demo5_5();
int demo5_6();
int demo5_7();
int demo5_8();

int main()
{
    //int t1  = demo5_1();
    //int t2  = demo5_2();
    //int t3  = demo5_3();
    //int t4  = demo5_4();
    //int t5  = demo5_5();
    //int t6  = demo5_6();
    //int t7  = demo5_7();
    int t8  = demo5_8();
    return 0;
}

int demo5_8()
{
    //range-based for loop
    array<double, 5> prices = {12.2, 24.2, 3.1, 45.2, 5.2};
    for (double x : prices)
        cout << "Price is " << x << endl;
    // do-while
    int n;
    cout << "Enter number in range 1:10 to find aim number.\n";
    do
    {
        cin >> n;
    } while (n != 6);
    cout << "Yes! Aim is 6.";
    return 0;
}

int demo5_7()
{
    // 倒计时
    cout << "Enter the delay time in sec : ";
    float secs;
    cin >> secs;
    // Transform secs to clock ticks
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting ! \a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "done \a\n";
    return 0;
}

int demo5_6()
{
    // for-loop for char[]
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop Word is " << word << endl;
    string str = "?ate";
    // while loop for string
    char ch2 = 'a';
    while (str != "mate")
    {
        cout << str << endl;
        str[0] = ch2;
        ch2++;
    }
    cout << "After loop str is " << str << endl;
    return 0;
}

int demo5_5()
{
    // sum and mean
    cout << "How many number do want sum ?";
    int num;
    cin >> num;
    cout << "Enter " << num << " numbers: ";
    double number;
    double sum = 0.0;
    for (int i = 0; i < num; i++)
    {
        cout << "Value" << i << " : ";
        cin >> number;
        sum += number;
    }
    cout << "Sum of value is : " << sum << endl;
    cout << "and mean is : " << (sum / num) << ".\n";
    return 0;
}

int demo5_4()
{
    cout << "Enter a word:";
    string word;
    cin >> word;
    // 1.Use cout to reverse
//    for (int i = word.size() - 1; i >= 0; i--)
//        cout << word[i];
//    cout << "\nover. \n";
    // 2.Use index to inside reverse
    char temp;
    int i,j;
    for (j = 0, i = word.size() - 1; j<i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << "Reverse word : " << word << endl;
    return 0;
}

int demo5_3()
{
    // change the update-expr
    cout << "Enter the step length: ";
    int by;
    cin >> by;
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}

int demo5_2()
{
    // 阶乘计算
    long long fac[ArSize];
    fac[1] = fac[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        fac[i] = fac[i-1] * i;
    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << fac[i] << endl;
    return 0;
}

int demo5_1()
{
    // basic loop
    for (int i = 0; i < 5; i++)
        cout << "This is loop " << i << endl;
    cout << "Loop stop!" << endl;
    // change test expr
    cout << "Enter the coutdown value:";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)
        cout << "i = " << i << endl;
    cout << "Down while i = " << i <<endl;
    // Test of nool
    int x;
    cout << "x = 100 : " << (x = 100) << endl;
    cout << "x > 3 : " << (x > 3) << endl;
    cout << "x < 3 : " << (x < 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "x > 3 : " << (x > 3) << endl;
    cout << "x < 3 : " << (x < 3) << endl;
    return 0;
}
