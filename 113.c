/*************************************************************************
	> File Name: 113.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 08时20分52秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int y,m,days;
scanf("%d %d", &y, &m);
if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)

    days = 31; 


else if (m==4 || m==6 || m==9 || m==11)
 days = 30;
else  if (m==2)
 {
     if((y%100!=0&&y%4==0)  || (y%100==0 && y%400==0)) 
     days = 29;
     else
     days = 28;
 }
    printf("%d\n",days);
return 0;
}
