#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE * in, * out;
	char ch,infile[10],outfile[10];
	
	printf("�����ȡ�ļ������֣�");
	scanf("%s",infile);
	printf("��������ļ������֣�");
	scanf("%s",outfile);
	
	if ((in=fopen(infile,"r")) == NULL) {
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	
	if ((out=fopen(outfile,"w")) == NULL) {
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	
	ch = fgetc(in);
	
	while(!feof(in)) {
		fputc(ch,out);
		putchar(ch);
		ch = fgetc(in);
	}
	
	
	
	putchar(10);
	fclose(in);
	fclose(out);
	
	return 0;
}