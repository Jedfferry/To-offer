#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void change(char *a,int num)
{
	if(num==0||a=='\0')
		return;
	int ch_num=0;
	int i=0;
	while(i<num){
		if(a[i]==' ')
			ch_num++;
		i++;
	}
	int newlength=ch_num*2+num;
	int newptr=newlength,oldptr=num;
	while(oldptr>=0 && newptr>oldptr){
		if(a[oldptr]==' '){
			a[newptr--]='0';
			a[newptr--]='2';
			a[newptr--]='%';
		}
		else
			a[newptr--]=a[oldptr];
		oldptr--;
	}
}
int main(int argc, char** argv) {
	char a[100]="ni shi shui?";
	change(a,strlen(a));
	cout<<a<<endl;
	return 0;
}
