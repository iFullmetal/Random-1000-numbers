#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int minNum, int maxNum) {
	int result;
	int lowNum = 0;
	int hiNum = 0;
	if (minNum < maxNum) {
		lowNum = minNum;
		hiNum = maxNum + 1;
	}
	else {
		lowNum = maxNum + 1;
		hiNum = minNum;
	}
	result = (rand() % (hiNum - lowNum)) + lowNum;
	return result;
}

void main() {
	
	srand(time(NULL));
				
	int password[1000];

	for (int i = 0; i < sizeof(password) / sizeof(password[0]); i++)
	{
			password[i] = randomNumber(48, 57);
			printf("Random number:");
			printf("%d", password[i]);
			printf("\n");
			printf("+20%:");
			printf("%d", (password[i] * 120)/100);
			printf("\n");
			
	}
	printf("\n");
	system("pause");
	return 0;

}