#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum=0;
int temp=0;
int fun(int x1,int y1,int x2,int y2,int step)
{
	if(x1<0||y1<0)
		return 0;
	fun(x1,y1,x2,y2,step)=fun(x1-1,y1-2,x2,y2,step)+fun(x1-2,y1-1,x2,y2,step)+fun(x1-2,y1+1,x2,y2,step)+fun(x1-1,y1+2,x2,y2,step)
	           +fun(x1+1,y1+2,x2,y2,step)+fun(x1+2,y1+1,x2,y2,step)+fun(x1+2,y1-1,x2,y2,step)+fun(x1+1,y1-2,x2,y2,step);
	if(x1==x2 && y1==y2 && fun(x1,y1,x2,y2,step)==step)
		sum++;
	return 1;
}
int main(int argc, char** argv) {
	int num;
	cin>>num;
	int *a=new int [num];
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	if(a[0]==a[1])
		cout<<"2"<<endl;
		
		
		
	fun(0,0,a[0],a[1],num);	
	cout<<sum<<endl;
	return 0;
}
