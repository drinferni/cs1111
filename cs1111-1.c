#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    int a,b;
    if (t%10==6) {a=t/10; b=0;} 
    else {
    	int r=t%10;
	r=r-6;
	if (r>0) {b=r;}
	else b=r+10;
	t=t-b;
	a=t/10;
    }
    printf("%d %d",a,b);
    }
