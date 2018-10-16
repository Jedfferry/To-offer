#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Beverage
{
	public:
		char description[5];
	    int getCost(){
			return 0;
		};
};
class mocha:public Beverage
{
	public:
		int num;
		int price;
		mocha(){
			num=0;price=3;
		}
		void add()
		{
			num++;
		}
		 
};
class cha:public Beverage
{
	public :
		int num;
		int price;
		cha(){
			num=0;price=5;
		}
		void add()
		{
			num++;
		}
};
class kafei:public Beverage
{
	public:
		int heikafei;
		kafei(){
			heikafei=28;
		}
};
int main(int argc, char** argv) {
	return 0;
}
