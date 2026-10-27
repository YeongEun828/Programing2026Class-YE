#include <stdio.h>

#define PRICE_POTION 1000
#define PRICE_SCROLL 2000
#define PRICE_ELIXIR 3000

int main(void)
{
	int balance;
	int choice;
	int count = 0;                               // 성공한 구매 횟수
	int price;
	const char* name;

	printf("Insert coins (Current Balance): ");
	scanf_s("%d", &balance);

	printf("\n--- Goblin's Vending Machine ---\n");
	printf("1.Red Potion (%d G)\n", PRICE_POTION);
	printf("2.Magic Scroll (%d G)\n", PRICE_SCROLL);
	printf("3.Elixir (%d G)\n", PRICE_ELIXIR);
	printf("0. Exit\n");
	printf("--------------------------------\n");

	while (1)
	{
		printf("\nSelect an item: ");
		scanf_s("%d", &choice);

		if (choice == 0)
		{
			printf("Returning %d G. GGoodbye!\n", balance);
			break;
		}

		switch (choice)
		{
		case 1:
			name = "Red Potion";
			price = PRICE_POTION;
			break;
		case 2:
			name = "Magic_scroll";
			price = PRICE_SCROLL;
			break;
		case 3:
			name = "Elixir";
			price = PRICE_ELIXIR;
			break;
		default:
			printf("Invalid choice!\n");
			continue;               //다시 입력받기
		}
		//이번이 3의 배수 번째 구매라면 50%할인
		int discounted = ((count + 1) % 3 == 0);
		if (discounted)
		{
			price = price / 2;
		}
		if (balance < price)
		{
			printf("Not enough balance!\n");
			continue;              //구매 실패: count 증가 없음
		}

		balance -= price;
		count++;
		if (discounted)
		{
			printf("*** GOBLIN'S BLESSING! 50%% DISCOUNT! ***\n");
			printf("[Purchased] %s for %d G. Balance: %d G\n", name, price, balance);
		}
		else
		{
			printf("[Purchased] %s. Balance: %d G\n", name, balance);
		}
	}
	return 0;
}
