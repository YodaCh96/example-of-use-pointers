#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int chapter1 = 1;
	int chapter2 = 3;
	int chapter3 = 5;
	int chapter4 = 7;

	do {
		int *page = NULL;

		printf("\tTable of contents\n");
		printf("\t********************\n\n");
		printf("\t-1- Chapter 1\n");
		printf("\t-2- Chapter 2\n");
		printf("\t-3- Chapter 3\n");
		printf("\t-4- Chapter 4\n");
		printf("\t-0- EXIT\n");
		printf("\n");
		printf("\tInput : ");
		scanf_s("%d", &input);

		switch (input) {
		case 1:
			page = &chapter1;
			break;
		case 2:
			page = &chapter2;
			break;
		case 3:
			page = &chapter3;
			break;
		case 4:
			page = &chapter4;
			break;
		default:
			break;
		}

		if (page != NULL) {
			printf("\n\tYou'll find chapter %d on page %d\n\n", input, *page);
		}
		else if (input != 0) {
			printf("\n\tInvalid input for chapter!\n\n");
		}

	} while (input >= 1 && input <= 4);

	return EXIT_SUCCESS;
}
