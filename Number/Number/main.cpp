#include <stdio.h>

int main(void)
{
	int birth;
	int sum;
	
	printf("Enter your 8-digit birthdate (YYYYMMDD): ");
	scanf_s("%d", &birth);
	printf("Calculating...\n");

	int n = birth;


	// 한 자리 숫자가 될 때까지 반복
	while (n >= 10)
	{
		sum = 0;
			while(n > 0)
		{
				sum += n % 10;  // 끝자리 더하기
				n /= 10;        //끝자리 제거
		}
			printf("Sum of digits: %d\n", sum);
			n = sum;             //합을 다시 처리 대상으로 
	}

	printf("Your final number is: %d!\n\n", n);
	printf("[Destiny Message]\n");

	switch(n)
	{
	case 1:
		printf("New opportunities are always open");
		break;

	case 2:
		printf("You will be win, if you constantly work hard");
		break;

	case 3:
		printf("You are a good leader");
		break;
	case 4:
		printf("Pursue your dreams");
		break;
	case 5:
		printf("Your dreams will come true");
		break;
	case 6:
		printf("Don't give up, Until you will be achieve your goals");
		break;
	case 7:
		printf("You will become greater than your past");
		break;
	case 8:
		printf("You are an amazing person");
		break;
	case 9:
		printf("if you desire somethingearnestly, the world will grant it");
		break;
	case 10:
		printf("You can do it");
		break;
	}
	return 0;
}