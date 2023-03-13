#include <stdio.h>
int main () {
	int t;
	scanf("%d",&t);
	if (t>=90) printf("%c",'S');
	else if (t>=80) printf("%c",'A');
	else if (t>=75) printf("%c",'B');
	else if (t>=50) printf("%c",'C');
	else if (t>=30) printf("%c",'D');
	else if (t>=25) printf("%c",'E');
	else printf("%c",'F');
}
