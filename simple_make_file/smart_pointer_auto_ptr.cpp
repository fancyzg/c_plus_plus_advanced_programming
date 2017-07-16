/*
 * File name    : smart_ponit_auto_ptr.cpp
 * Decription   : Simply use the function of auto_ptr, the code shows that it needs not to release memory already allocted.
 * Author       : Avanty
 * Date         : 2014/4/21
*/

#include<iostream>
#include<string>
#include<memory>
#include"smart_pointer_auto_ptr.h"
using namespace std;

//class Simple{
//    public:
//	Simple(int param = 0){
//	    number = param;
//	    cout<<"Simple:"<<number<<endl;
//	}
//	~Simple(){
//	    cout<<"~Simple:"<<number<<endl;
//	}
//	void PrintSomething(){
//	    cout<<"PrintSomething:"<<info_extend.c_str()<<endl;
//	}
//
//	string info_extend;
//	int number;
//};

/* the basic usage auto_ptr*/
void Test_AutoPrt(){
    auto_ptr<Simple> my_memory(new Simple(1));
    if(my_memory.get()){
	my_memory->PrintSomething();
	my_memory.get()->info_extend = "Addition";
	my_memory->PrintSomething();
	(*my_memory).info_extend += " other";
	my_memory->PrintSomething();
    }
}

/* can not use "operator="*/
void Test_AutoPrt2(){
    auto_ptr<Simple> my_memory(new Simple(1));
    if(my_memory.get()){
	auto_ptr<Simple> my_memory2;
	my_memory2 = my_memory;
	my_memory2->PrintSomething();
	/*Pointer is NULL*/
	my_memory->PrintSomething();
    }
}

/* can not use "relese" to release the resouce*/
void Test_AutoPrt3(){
    auto_ptr<Simple> my_memory(new Simple(1));
    if(my_memory.get()){
	my_memory.release();
    }
}

/* The right way to release resource*/
void Test_AutoPrt4(){
    auto_ptr<Simple> my_memory(new Simple(1));
    if(my_memory.get()){
	Simple * temp_memory = my_memory.release();
	delete temp_memory;
    }
}

//int main()
//{
//    Test_AutoPrt();
//    Test_AutoPrt2();
//    Test_AutoPrt3();
//    return 0;
//}
