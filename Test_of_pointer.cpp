#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>

using namespace std;
int demo4_1();
int demo4_2();
int demo4_3();
int demo4_4();
int demo4_5();
int demo4_6();
int demo4_7();
int demo4_8();
int demo4_9();
int demo4_10();
char * getname();

struct infl
{
    char name[30];
    float vol;
    double price;
};

struct year_rec
{
    int year;
};

int main()
{
    //int t1  = demo4_1();
    //int t2  = demo4_2();
    //int t3  = demo4_3();
    //int t4  = demo4_4();
    //int t5  = demo4_5();
    //int t6  = demo4_6();
    //int t7  = demo4_7();
    //int t8  = demo4_8();
    //int t9  = demo4_9();
    int t10  = demo4_10();
    return 0;
}

int demo4_10()
{
    // a1:double[]; a2:vector; a3 / a4 :array
    double a1[4] = {1.2, 3.4, 23.4, 5.2};
    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    array<double, 4> a3 = {13.2, 23.2, 2.2, 6.3};
    array<double, 4> a4;
    a4 = a3;
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    // a1[-2] memory overloading
    a1[-2] = 233.33;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;
}

int demo4_9()
{
    year_rec s1, s2, s3;
    s1.year = 1996;
    // 结构指针
    year_rec * py = &s2;
    // 间接成员关系
    py->year = 2000;
    // 结构数组
    year_rec tr[3];
    tr[0].year = 2199;
    cout << tr->year << endl;
    // 结构指针数组
    const year_rec * arp[3] = {&s1, &s2, &s3};
    cout << arp[1]->year << endl;
    // 结构指针指针
    const year_rec ** ppa = arp;
    const year_rec ** ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))->year << endl;
    return 0;
}

int demo4_8()
{
    // 自动存储、静态存储 和 动态存储
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete [] name;
    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete [] name;
    return 0;
}

char * getname()
{
    char temp[100];
    cout << "Enter last name : ";
    cin >> temp;
    char * pn = new char[strlen(temp)+1];
    strcpy(pn, temp);
    return pn;
}

int demo4_7()
{
    // 箭头成员运算符
    infl * ps = new infl;
    cout << "Enter name of infl : ";
    cin.get(ps->name, 20);
    cout << "Enter vol : ";
    cin >> (*ps).vol;
    cout << "Enter price : ";
    cin >> ps->price;
    cout << "Name : " << (*ps).name << " and vol=" << ps->vol << " amd price=" << ps->price <<endl;
    delete ps;
    return 0;
}

int demo4_6()
{
    // 字符串指针
    char ani[20] = "dog";
    const char * bird = "wren";
    char * ps;
    cout << "animal : " << ani << " and " << bird <<endl;
    cout << "Enter an animal :" ;
    cin >> ani;
    ps = ani;
    cout << "ps : " << ps << "!\n";
    cout << ani << " at " << (int *) ani << endl;
    cout << ps << " at " << (int *) ps << endl;
    ps = new char[strlen(ani)+1];
    strcpy(ps, ani);
    cout << ani << " at " << (int *) ani << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete[] ps;
    return 0;
}

int demo4_5()
{
    double wages[3] = {100.0, 200.0, 300.0};
    short stacks[3] = {3, 2, 1};
    // get the addr of array
    double *pw = wages;
    short *ps = &stacks[0];
    // pointer elements
    cout << "pw = " << pw << " *pw = " << *pw << " \n pw + 1 = "
    << pw+1 << " *pw+1 = " << *(pw+1) <<endl;
    cout << "ps = " << ps << " *ps = " << *ps << " \n ps + 1 = "
    << ps+1 << " *ps+1 = " << *(ps+1) <<endl;
    // array to pointer
    cout << "stacks[1] : "  << stacks[1] << " and *(stacks +1) = " << *(stacks+1) << endl;
    cout << sizeof wages << " and " << sizeof pw << endl;
    return 0;
}

int demo4_4()
{
    double *p3 = new double[3];
    // Equality of array and pointer
    p3[0] = 0.2; p3[1] = 23; p3[2] = 13;
    cout << "p3[1] : " << p3[1] << endl;
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << " and p3[1] is " << p3[1] << endl;
    p3 = p3 -1 ;
    delete p3;
    cout << "Now p3 = " << p3 << endl;
    return 0;
}

int demo4_3()
{
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;
    // use new to dynamic assign
    cout << "nights : " << nights << " and loc in " << &nights <<endl;
    cout << "pt value = " << *pt << " and loc in " << pt << endl;
    cout << "loc of pt : " << &pt << " and size of pt : " << sizeof pt <<
    " and size of *pt : " << sizeof *pt << endl;
    return 0;
}

int demo4_2()
{
    int updates = 6;
    int *p_updates;
    p_updates = &updates;
    // initial pointer
    cout << "updates : " << updates;
    cout << "*p_updates : " << *p_updates << endl;
    int hid = 5;
    int *pt = &hid;
    cout << "hid : " << hid << " in " << &hid << endl;
    cout << "*pt : " << pt << " for " << *pt << endl;
}

int demo4_1()
{
    int donuts = 6;
    double cups = 4.5;
    // &int -> address
    cout << "donuts : " << donuts;
    cout << " and donuts address : " << &donuts << endl;
    cout << "cups : " << cups << " and cups address ：" << &cups << endl;
    return 0;
}
