#include <stdio.h>
int main() {
	float a,b,c,t;
	scanf("%f,%f,%f",&a,&b,&c);
	if (a>b) {
		t = a;
		a = b;
		b = t;
	}
	return 0;
}