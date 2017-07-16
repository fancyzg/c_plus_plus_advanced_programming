#include<iostream>
#include<string>
#include<memory>
#include"smart_pointer_auto_ptr.h"
using namespace std;

extern void Test_AutoPrt();
extern void Test_AutoPrt2();
extern void Test_AutoPrt3();

int main()
{
    Test_AutoPrt();
    Test_AutoPrt2();
    Test_AutoPrt3();
    return 0;
}
