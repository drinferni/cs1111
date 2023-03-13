#include <stdio.h>
#include <stdlib.h>
int t;
void bubble (int a[]);
void insertion (int a[]);
void selection (int a[]);
void shell (int a[]);
void heap (int a[]);
void quick (int a[]);
void merge (int a[]);
void bucket (int a[]);
void counting (int a[]);
void radix (int a[]);
void copy (int a[],int b[]) {
	printf("%d\n",t);
	for (int x=0;x<t;++x) {
		b[x]=a[x];
	}
}

int main () {
	int a[]={1,4,55,2,45,22,66,87,54,74,43,15,73,23,66,263,606};
	t=sizeof(a)/sizeof(a[0]);
	printf("%d\n",t);
	printf("Original array\n");
	for (int x=0;x<t;++x) {
		printf("%d\t",a[x]);
	}
	printf("\n");
	printf("Sorted by bullble sort\n");
	bubble(a);
	printf("Sorted by insertion sort\n");
	insertion(a);
	printf("Sorted by selection sort\n");
	selection(a);
	printf("Sorted by shell sort\n");
	shell(a);
	printf("Sorted by heap sort\n");
	heap(a);
	printf("Sorted by quick sort\n");
	quick(a);
	printf("Sorted by merge sort\n");
	merge(a);
	printf("Sorted by bucket sort\n");
	bucket(a);
	printf("Sorted by counting sort\n");
	counting(a);
	printf("Sorted by radix sort\n");
	radix(a);
}


void bubble (int a[]) {
	int b[t];
	copy(a,b);
	for (int x=0;x<t;++x) {
		for (int y=0;y<t-1;++y) {
			if (b[y]>b[y+1]) { int u=b[y]; b[y]=b[y+1]; b[y+1]=u;}
		}
	}
	for (int x=0;x<t;++x) {
		printf("%d\t",b[x]);
	}
	printf("\n");
}


void insertion (int a[]) {
	int b[t];
	copy(a,b);
	for (int x=1;x<t;++x) {
		int k=b[x];
		int i=x;
		while (k<=b[i] && i>=0) {
			b[i]=b[i-1];
			--i;
		} 
		b[i+1]=k;

	}	
	for (int x=0;x<t;++x) {
		printf("%d\t",b[x]);
	}
	printf("\n");

}


void selection (int a[]) {
	int b[t];
	copy(a,b);

	for (int x=0;x<t;++x) {
		int k=b[x];
		int h=x;
		for (int y=x;y<t;++y) {
			if (b[y]<k) {k=b[y]; h=y;}
		}
		{int p=b[x];  b[x]=b[h]; b[h]=p;}
	}
	for (int x=0;x<t;++x) {
		printf("%d\t",b[x]);
	}
	printf("\n");

}

void shell (int a[]){
	int b[t];
	copy(a,b);

	int g=t/2;
	for (g;g>0;--g) {
		for (int i=t-1;i>=0;--i) {
			int k=b[i];
			int h=i;
			while (b[h-g]>k && h-g>=0) {
				b[h]=b[h-g];
				h=h-g;
			}
			b[h]=k;
		}

	}
	for (int x=0;x<t;++x) {
		printf("%d\t",b[x]);
	} printf("\n");
}








void heap (int a[]){}
void quick (int a[]){}
void merge (int a[]){}
void bucket (int a[]){}
void counting (int a[]){}
void radix (int a[]){}


