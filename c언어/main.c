#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int ch, i, nwhite, nother, ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;
	printf("Input characters : \n");
	while ((ch = getchar()) != '\n') {
		if (ch >= '0' && ch <= '9')
			ndigit[ch - '0']++;
		else if (ch == ' ' || ch == '\t')
			nwhite++;
		else
			nother++;
	}
	for (i = 0; i < 10; i++)
		printf("숫자의 %d의 갯수 : %d\n", i, ndigit[i]);
	printf("공백문자의 갯수 : %d\n", nwhite);
	printf("나머지 문자의 갯수 : %d\n", nother);
}