/*************************************************************************
	> File Name: 101.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月23日 星期二 18时12分54秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n,sum;
    scanf ("%d", &n);
    if ((n>=1000) && (n<10000)) 
        sum = n/1000+n%1000/100+n%1000%100/10+n%1000%100%10;
    else if (n>=100 && n<1000) 
        sum = n/100+n%100/10+n%100%10;
    else if (n>=10 && n<100) 
        sum = n/10+n%10;   
    else if (n>=1 && n<10) 
        sum = n;
    printf ("%d\n", sum);
    return 0;
}
