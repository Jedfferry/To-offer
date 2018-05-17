#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		char **ch=new char *[num];
		for(int i=0;i<num;i++)
		{
			ch[i]=new char [5000];
		}
		for(int i=0;i<num;i++)
		{
			cin>>ch[i];
		}
	}
	return 0;
}
