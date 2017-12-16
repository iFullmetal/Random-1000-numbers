#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int minNum, int maxNum) {
	int result;
	int lowNum = 0;
	int hiNum = 0;
	if (minNum < maxNum) {
		lowNum = minNum;
		hiNum = maxNum;
	}
	else {
		lowNum = maxNum;
		hiNum = minNum;
	}
	result = 1 + (rand() % (hiNum - lowNum)) + lowNum;
	return result;
}

void main() {
	srand(time(NULL));
	int password[50];
	for (int i = 0; i < sizeof(password) / sizeof(password[0]); i++)
	{
			password[i] = randomNumber(0, 1000);
			int x;
			x++;
			printf("%d", x ,"Random numbers:");
			printf("%d", password[i]);
			printf("\n");
			
			
	}

	printf("\n");

	for (int i = 0; i < sizeof(password) / sizeof(password[0]); i++)
	{
		printf("+20%:");
		printf("%d", (password[i] * 120) / 100);
		printf("\n");
	}
	system("pause");
	return 0;
}