/*************************************************************************
	> File Name: 100.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 17时38分39秒
 ************************************************************************/

#include<stdio.h>
int main()
{  int n;
   double sum;
	scanf("%d",&n);
    sum = n*(1+0.00417);
    sum = (n+sum)*(1+0.00417);
    sum = (n+sum)*(1+0.00417);
    sum = (n+sum)*(1+0.00417);
    sum = (n+sum)*(1+0.00417);
    sum = (n+sum)*(1+0.00417);
	printf("$%.2lf\n",sum);
    return 0;
}
