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
