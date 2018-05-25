//明明想在学校中请一些同学一起做一项问卷调查，
//为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤1000），
//对于其中重复的数字，只保留一个，把其余相同的数去掉，
//不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，
//按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。

#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int num_flag=0;//重复数字的个数
int flag=0;//判断是否真的全部都不重复 
int num_all=0;
int num_check(int *a,int num)//判断是否含有重复的数字 
{
	flag=0;
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
				a[i]=-1;//重复数变为-1 
				num_flag++;//重复的个数 
				flag=1;//有重复 
			}
		}
	}
	return flag;
}
int num_check1(int *a,int num)//判断是否含有重复的数字 
{
	for(int i=0;i<num-num_all;i++)
	{
		for(int j=i+1;j<num-num_all;j++)
		{
			if(a[i]==a[j])
			{
				num_all++;
				for(int k=i;k<num-1;k++)
				{
					a[k]=a[k+1];
				}	
				break;
			}
		}
	}
	for(int key=num;key>num-num_all-1;key--)
	{
		a[key]=-1;
	}
	cout<<endl<<"1.the num_all is:"<<num_all<<endl;
}
int num_change(int *a,int num)//填充元素 
{
	int key_repeat;
	for(int i=0;i<num;i++)
	{
		if(a[i]==-1)
		{
			key_repeat=rand()%1000+1;//重新随机获取数据 
			a[i]=key_repeat;
		}
		else
			continue;
	}
}
void quick_sort(int s[], int l, int r)  
{  
    int i, j, x;  
    if (l < r)  
    {  
        i = l;  
        j = r;  
        x = s[i];  
        while (i < j)  
        {  
            while(i < j && s[j] > x)   
                j--; /* 从右向左找第一个小于x的数 */  
            if(i < j)   
                s[i++] = s[j];  
      
  
            while(i < j && s[i] < x)   
                i++; /* 从左向右找第一个大于x的数 */  
            if(i < j)   
                s[j--] = s[i];  
  
        }  
        s[i] = x;  
        quick_sort(s, l, i-1); /* 递归调用 */  
        quick_sort(s, i+1, r);  
    }  
} 
int main(int argc, char** argv) {
	int num;
	cout<<"Please input a number:";
	cin>>num;
	int *a=new int [num];
	for(int i=0;i<num;i++)
	{
		a[i]=rand()%15+1;
	}
	cout<<"you have input an array:"<<endl;
	for(int k=0;k<num;k++)
	{
		cout<<a[k]<<"     ";
	}
	cout<<endl;
	/*do{	
		num_check(a,num);
		num_change(a,num);
		num_check(a,num);
	}while(flag==1);*/
	num_check1(a,num);
	cout<<"the final is:"<<endl;
	for(int j=0;j<num;j++)
	{
		cout<<a[j]<<"     ";
	}
	cout<<endl<<"the num_all is:"<<num_all<<endl;
	quick_sort(a,0,num-num_all);
	cout<<"the last is:"<<endl;
	for(int j=1;j<num-num_all+1;j++)
	{
		cout<<a[j]<<"     ";
	}
	cout<<endl;
	return 0;
}
