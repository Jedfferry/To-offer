#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a="hello";
	char ch1[500];
	gets(ch1);
	cout<<ch1<<endl;
	cout<<"a="<<a<<"   ch1="<<ch1<<endl;
	return 0;
}
