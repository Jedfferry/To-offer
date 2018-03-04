#include<iostream>
using namespace std;
struct A{  
	void foo()
	{printf("foo");}  
	virtual void bar()
	{printf("bar");}  
	A(){bar();}  
};  
struct B:A{  
	void foo(){printf("b_foo");}  
	void bar(){printf("b_bar");}  
};  
int main() 
{ 
 	A *p=new B;
	p->foo();
	p->bar();
	return 0;
} 

