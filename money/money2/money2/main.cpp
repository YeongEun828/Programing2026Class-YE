#include <stdio.h>

int main(void)
{
	int price, quantity, received;
	int total, discount, payment, change;
	int won1000, won500, won100, won50, remain;

	printf("unit price: ");
	scanf_s("%d", &price);
	
	printf("quantity: ");
	scanf_s("%d", &quantity);

	printf("total: %d\n", price * quantity);
	printf("discoun(10%): -%d\n", price * quantity * 10 / 100);
	printf("payment: %d\n", price * quantity - price * quantity * 10 / 100);

	printf("received: ");
	scanf_s("%d", &received);
	printf("change: %d\n", received -( price * quantity- price * quantity * 10 / 100));

	total = price * quantity;
	discount = total * 10 / 100;
	payment = total - discount;
	change = received - payment;

	won1000 = change / 1000;
	remain = change % 1000;
	
	won500= remain / 500;
	remain = remain % 500;

	won100= remain/ 100;
	remain = remain % 100;

	won50 = remain / 50;
	remain = remain % 50;

	printf("1000 won: %d\n", won1000);
	printf("500 won: %d\n", won500);
	printf("100 won: %d\n", won100);
	printf("50 won: %d\n", won50);
	printf("remain: %d\n", remain);

	return 0;
}