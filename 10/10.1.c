#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE * fp;
	char ch,filename[10];
	printf("���������õ��ļ�����");
	scanf("%s",filename);
	getchar();
	if ((fp=fopen(filename,"w")) == NULL) {
		printf("can not open file\n");
		exit(0);
	}
	printf("������һ��׼���洢�����̵��ַ�������#��������");
	ch = getchar();
	while(ch!='#') {
		fputc(ch,fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}