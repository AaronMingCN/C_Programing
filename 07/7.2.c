#include <stdio.h>
int max(int x,int y) {
	int z;
	z = x>y?x:y;
	return(z);
}


int main() {
	int max(int x,int y);
	int a,b,c;
	printf("please input two integer numbers:");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max is %d\n",c);
	return 0;
}

