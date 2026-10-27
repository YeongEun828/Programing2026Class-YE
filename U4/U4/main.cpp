#include <stdio.h>

int main(void)
{
	int energy;
	int steps = 0;
	int max;

	printf("Enter the initial engine energy: ");
	scanf_s("%d", &energy);

	max = energy;

	printf("Sequence: %d", energy);

	while (energy != 1)
	{
		if (energy % 2 == 0)
		{
			energy = energy / 2;
		}
		else
		{
			energy = (energy * 3) + 1;
		}

		printf(" -> %d", energy);
		steps++;

		if (energy > max)
		{
			max = energy;
		}
	}
		printf("\n");
		printf("Escape successful!\n");
		printf("Total steps: %d\n", steps);
		printf("Maximum altitude reached: %d\n", max);
	
	return 0;
}