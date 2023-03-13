#include <stdio.h>
int main () {
	int n;
	scanf("%d",&n);
	int a[n];
	for (int x=0;x<n;++x) {
		scanf("%d",&a[x]);
	}
	int s=a[0];
	for (int x=0;x<n;++x) {
		if (s<a[x]) s=a[x];
	}
	printf("%d\n",s);
}
