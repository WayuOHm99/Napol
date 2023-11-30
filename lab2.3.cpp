/* LANG : C++ */
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;
main(){
	int a,b,c,d, sum=0,num;
	
	scanf("%d",&num);
	a=num / 1000;
	b=(num % 1000) /100;
	c=(num % 100) /10;
	d=num % 10;
	sum = a+b+c+d;
	printf("%d+%d+%d+%d=%d\n",a,b,c,d,sum);
	
	return 0;
}
