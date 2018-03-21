#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void * strcpy(char *dst,const char *src)   //[1]
{

    while ((*dst++=*src++)!='\0'); //[4]
}

int main(int argc, char** argv) {
	const char *str1="heihei";
	char *newstr;
	strcpy(newstr,str1);
	cout<<newstr<<endl;
	return 0;
}
