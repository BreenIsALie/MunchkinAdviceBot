/*Munchkin Advice Bot 2.0*/

#include <stdio.h>

int main(void)
{
	int Sel;	/*Declare selection variable*/

	printf("\nIs there a chance to play Munchkin? 1=YES 2=NO 3=EXIT\n");	/*Present user with selection*/
	scanf_s("%d", &Sel);

	while (Sel != 3)	/*Run loop as long as Sel isn't 3*/
	{
		if (Sel == 1);	/*Run if Sel is 1*/
		{
			printf("\nPlay Munchkin");
			printf("\nIs there still a chance to play Munchkin? 1=YES 2=NO 3=EXIT\n");
			scanf_s("%d", &Sel);
		}

		if (Sel == 2)	/*Run if Sel is 2*/
		{
			printf("\nStill play Munchkin");
			printf("\nIs there still a chance to play Munchkin? 1=YES 2=NO 3=EXIT\n");
			scanf_s("%d", &Sel);
		}
			
	}
	
}