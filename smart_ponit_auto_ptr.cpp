/*
 * File name    : smart_ponit_auto_ptr.cpp
 * Decription   : Simply use the function of auto_ptr, the code shows it need not to release memory allocted.
 * Author       : Avanty
 * Date         : 2014/4/21
*/

#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Simple{
    public:
	Simple(int param = 0){
	    number = param;
	    cout<<"Simple:"<<number<<endl;
	}
	~Simple(){
	    cout<<"~Simple:"<<number<<endl;
	}
	void PrintSomething(){
	    cout<<"PrintSomething:"<<info_extend.c_str()<<endl;
	}

	string info_extend;
	int number;
};

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

int main()
{
    Test_AutoPrt();
    return 0;
}
