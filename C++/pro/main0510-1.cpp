#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int zhengchuer(int num)
{
	int nn;
	do{
		if(num==1)
			return 1;
		nn=num%2;
		num/=2;
	}while((nn==0)&&(num!=0));
	if(nn==0)
		return 1;
	else 
		return 0;
}
int main(int argc, char** argv) {
	int n;
	while(cin>>n)
	{
		int *num=new int [n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<n;i++)
		{
			int temp=num[i]%2;
			int ff=1;
			if(zhengchuer(num[i])==1)
				cout<<"lucky"<<endl;
			else{
				for(int q=1;q<num[i];q++)
				{
					for(int r=1;r<num[i];r++)
					{
						for(int ss=1;ss<num[i];ss++)
						{
							/*if((q+r+ss==num[i])&&(zhengchuer(q)==1)&&(zhengchuer(num[i]-q)==0)&&(zhengchuer(r)==1)&&(zhengchuer(ss)==1))
							{
								ff=1;
							}*/
							if((q+r+ss==num[i])&&(zhengchuer(q)==1)&&(zhengchuer(num[i]-q)==1))
							{
								ff=0;
							}
							else if((q+r+ss==num[i])&&(zhengchuer(q)==1)&&(zhengchuer(num[i]-q)==0)&&(zhengchuer(r)==1)&&(zhengchuer(ss)==1))
							{
								ff=1;
							}
						}
					}
				}
				if(ff==1)
					cout<<"lucky"<<endl;
				else
					cout<<"don't be disouraged"<<endl;
			}	
			
		/*	else if((zhengchuer(num[i]/2)==1 )&& (zhengchuer(num[i]-num[i]/2)==0) && (zhengchuer(temp)==1))
				cout<<"lucky"<<endl;
			else
				cout<<"don't be disouraged"<<endl; */
		}

	}
	return 0;
}
