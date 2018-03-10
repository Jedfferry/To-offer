/*#include<iostream>
using namespace std;
int main()
{
	int ge=0,shi=0,bai=0,qian=0,wan=0,temp=0;
	for(long i=10000;i<100000;i++)
	{
		wan=i/10000;
		qian=i%10000/1000;
		bai=i%10000%1000/100;
		shi=i%10000%1000%100/10;
		ge=i%10;
		if(wan==4||qian==4||bai==4||shi==4||ge==4)
			continue;
		else
			temp++;
	}
	printf("%d\n",temp);
	
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	for(int a=1;a<10;a++)
		for(int b=1;b<10;b++)
			for(int c=1;c<10;c++)
				for(int d=1;d<10;d++)
					for(int e=1;e<10;e++)
						for(int f=1;f<10;f++)
							for(int g=1;g<10;g++)
								for(int h=1;h<10;h++)
									for(int i=1;i<10;i++)
									{
										if((a*1000+b*100+c*10+d+e*1000+f*100+g*10+h==e*10000+f*1000+c*100+b*10+i)
										&&(a!=b) &&(a!=c) &&(a!=d) &&(a!=e) &&(a!=f) &&(a!=g) &&(a!=h) &&(a!=i)  
										&&(b!=c) &&(b!=d) &&(b!=e) &&(b!=f) &&(b!=g) &&(b==h) &&(b!=i) 
										&&(c!=d) &&(c!=e) &&(c!=f) &&(c!=g) &&(c!=h) &&(c!=i)
										&&(d!=e) &&(d!=f) &&(d!=g) &&(d!=h) &&(d!=i)
										&&(e!=f) &&(e!=g) &&(e!=h) &&(e!=i)
										&&(f!=g) &&(f!=h) &&(f!=i)
										&&(g!=h) &&(g!=i)
										&&(h!=i))
											cout<<e<<f<<g<<h<<endl;
									}
	return 0;
} 
















 
