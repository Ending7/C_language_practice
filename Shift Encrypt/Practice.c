#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

#define SHIFT 3
void encrypt(char ch[]);
void decrypt(char ch[]);

int main(void)
{
	char choise;
	char ch[60];
	printf("문자 입력: ");
	gets_s(ch, 60);

	while (1)
	{		
		system("cls");
		printf("인크, 디크: ");
		scanf_s("%c", &choise);
		switch (choise)
		{
		case '1':
			encrypt(ch);
			break;

		case '2':
			decrypt(ch);
			break;
		}
		
	}
}

void encrypt(char ch[])
{
	int len = strlen(ch);
	int i;
	for (i = 0; i < len; i++)
	{
		if (isalpha(ch[i]))
			ch[i] += SHIFT;

		if (ch[i] > 'z' || ch[i] > 'Z')
			ch[i] -= 26;
	}
	puts(ch);
	Sleep(1000);
}
void decrypt(char ch[])
{
	int len = strlen(ch);
	int i;
	for (i = 0; i < len; i++)
	{
		if (isalpha(ch[i]))
			ch[i] -= SHIFT;

		if (ch[i] < 'A' || ch[i] < 'a')
			ch[i] += 26;
	}
	puts(ch);
	Sleep(1000);
}
