#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string replaceSpace(string iniString, int length) {
        // write code here
        int knum=0;
        int i=0;
        do{
            if(iniString[i]==' ')
            {
                knum++;
            }
            i++;    
        }while(i<iniString.size());
        i=iniString.size()-1;
        int sum=length+knum*3;
        string newstring;
        do{
            if(iniString[i]==' ')
            {
                newstring[sum]='0';sum--;
                newstring[sum]='2';sum--;
                newstring[sum]='%';
            }
            else
                newstring[sum]=iniString[i];
            sum--;i--;
        }while(i>=0);
        return newstring;
    }
int main(int argc, char** argv) {
	string abc="hi,my name is zhangsan.";
	cout<<abc<<endl;
	replaceSpace(abc,abc.size());
	cout<<abc<<endl;
	return 0;
}
