#include <stdio.h>
int max(float x,float y) {
	float z;
	z = x>y?x:y;
	return(z);
}


int main() {
	int max(float x,float y);
	float a,b;
	int c;
	printf("please input two numbers:");
	scanf("%f,%f",&a,&b);
	c=max(a,b);
	printf("max is %d\n",c);
	return 0;
}

