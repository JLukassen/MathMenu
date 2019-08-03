#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
	int menuChoice;
	int guess;
	//time_t time_t;
	srand((unsigned)time(NULL));
	int number1 = rand() % 100;
	int number2 = rand() % 100;

	system("CLS");


	printf("Addition 1\n");
	printf("Subtraction 2\n");
	printf("Multiplication 3\n");
	printf("division 4\n");
	printf("exit 5\n");
	printf("Please select an option: ");

	scanf_s("%i", &menuChoice);

	while (menuChoice != 6)
	{
		switch (menuChoice)
		{


		case 1:
		{
			system("CLS");
			srand((unsigned)time(NULL));
			printf("\n\n %i + %i = ? Enter answer", number1, number2);
			scanf_s("%i", &guess);

			if (guess == number1 + number2)
			{
				printf("The guess is correct.");
				printf("\n");
			}
			else
			{
				printf("The guess is incorrect.");
				printf("\n");
			}
			break;
		}



		case 2:
		{
			system("CLS");
			srand((unsigned)time(NULL));
			printf("\n\n %i - %i = ? Enter answer", number1, number2);

			scanf_s("%i", &guess);

			if (guess == number1 - number2)
			{
				printf("The guess is correct.");
				printf("\n");
			}
			else
			{
				printf("The guess is incorrect.");
				printf("\n");
			}
			break;
		}

		case 3:
		{
			system("CLS");
			srand((unsigned)time(NULL));
			printf("\n\n %i * %i = ? Enter answer", number1, number2);
			scanf_s("%d", &guess);

			if (guess == number1 * number2)
			{
				printf("The guess is correct.");
				printf("\n");
			}
			else
			{
				printf("The guess is incorrect.");
				printf("\n");
			}
			break;
		}

		case 4:
		{
			system("CLS");
			srand((unsigned)time(NULL));
			printf("\n\n %i / %i = ? Enter answer", number1, number2);

			scanf_s("%d", &guess);

			if (guess == number1 / number2)
			{
				printf("The guess is correct.");
				printf("\n");
			}
			else
			{
				printf("The guess is incorrect.");
				printf("\n");
			}
			break;
		}

		case  5:
		{
			system("CLS");
			printf("Exiting program.\n");
			break;
		}



		default:
		{
			system("CLS");
			printf("invalid\n");
			break;
		}




		}
		return 0;
	}

}