//file1.c
#include <stdio.h>
int main() {
	extern void enter_string(char str[]);
	extern void delete_string(char str[],char ch);
	extern void print_string(char str[]);
	char c,str[80];
	enter_string(str);
	scanf("%c",&c);
	delete_string(str,c);
	print_string(str);
	return 0;	
}

//file2.c
void enter_string(char str[80]) {
	gets(str);
}


//file3.c
void delete_string(char str[],char ch) {
	int i,j;
	for (i=j=0;str[i]!='\0';i++)
		if(str[i]!=ch)
			str[j++] = str[i];
	str[j] = '\0';
}

//file4.c
void print_string(char str[]) {
	printf("%s\n",str);
}