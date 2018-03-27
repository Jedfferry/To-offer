#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double Power(double base,unsigned int exp)
{
	if(exp==0)
		return 0;
	if(exp==1)
		return base;
		
	double result=Power(base,exp>>1);
	result*=result;
	if(exp&0x1==1)
		result*=base;
	return result;
}

void PrintNumber(char *number)
{
	bool isBeginning0=true;
	int n=strlen(number);
	
	for(int i=0;i<n;i++)
	{
		if(isBeginning0 && number[i]!='0')
			isBeginning0=false;
		if(!isBeginning0)
		{
			printf("%c",number[i]);
		 } 
	}
	printf("\t");
}
void Tomax(char *number,int length,int index)
{
	if(index==length-1)
	{
		PrintNumber(number);
		return ;
	}
	for(int i=0;i<10;i++)
	{
		number[index+1]=i+'0';
		Tomax(number,length,index+1);
	}
}


void Print(int n)
{
	if(n<0)
		return ;
		
    char *number=new char[n+1];
    number[n]='\0';
    
    for(int i=0;i<10;i++)
    {
    	number[0]=i+'0';
    	Tomax(number,n,0);
	}
	delete []number;
}


int main(int argc, char** argv) {
	Print(3);
	return 0;
}
