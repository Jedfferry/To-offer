#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int num1,num2,s_num;
    cin>>s_num;
    int *a=new int[3*s_num];
    for(int i=0;i<3*s_num;i++)
    {
    	cin>>a[i];
	}
	for(int j=0,num=0;j<3*s_num;num++)
	{
		if(a[j]+a[j+1]>a[j+2])
		{
			cout<<"Case #"<<num+1<<":true"<<endl;
		}
		else
			cout<<"Case #"<<num+1<<":false"<<endl;
		j=j+3;
	}
    return 0;
}
