/*************************************************************************
	> File Name: main.c
	> Author: hl
	> Mail:910161359@qq.com 
	> Created Time: Fri 20 Jun 2014 01:07:22 AM CST
 ************************************************************************/

#include<stdio.h>
typedef struct data
{
	int year;
	int mouth;
	int day;
}Data;
int main()
{
	Data now;
	int twomouth,i,days=0;
	int arv[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int arvl[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	printf("putin date");
	scanf("%d %d %d",&now.year,&now.mouth,&now.day);
	if((now.year%4==0)&&(now.year%100!=0)||now.year%400==0)
	{
		
		for(i=0;i<now.mouth-1;i++)
		{
			days+=arvl[i];
		}
		days=days+now.day;
	}
	else
	{
		
		for(i=0;i<now.mouth-1;i++)
		{
			days+=arv[i];
		}
		days=days+now.day;
	}
	printf("days=%d",days);

	printf("CHANGE");
}
