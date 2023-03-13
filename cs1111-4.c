#include <stdio.h>

void add(int a,int b);
void subtract(int a,int b);
void multiply(int a,int b);
void divide(int a,int b);

int main () {
	char cur='y';
	while(cur=='y' || cur=='Y') {
	printf("Choose the opertion\n1 : Add\n2 : Subtract\n3 : Multiply\n4 : Divide\n");
	int t;
	scanf("%d",&t);
	int a,b;
	printf("Enter the two integers\n");
	scanf("%d%d",&a,&b);
	printf("Answer : ");
	switch (t) {
		case 1:add(a,b); break;
		case 2:subtract (a,b); break;
		case 3:multiply(a,b); break;
		case 4:divide(a,b); break;
		default: printf("ERROR\n");
	}
	printf("Do you wish to continue (y/n) ");
	scanf("\n%c",&cur);

	}
}

void add(int a,int b) {
	printf("%d\n",a+b);
}

void subtract(int a,int b) {
	printf("%d\n",a-b);
}
void multiply (int a,int b) {
	printf("%d\n",a*b);
}
void divide(int a,int b) {
	printf("%d\n",a/b);
}


