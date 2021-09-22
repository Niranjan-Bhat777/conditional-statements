#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number between 1 to 5 and I will choose your food\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("Food item: Sandwich\n price:Rs 149");
		break;
		case 2:printf("Food item: Pasta\n price:Rs 179");
		break;
		case 3:printf("Food item: French Fries \n price:Rs 99");
		break;
		case 4:printf("Food item: Pizza\n price:Rs 239");
		break;
		case 5:printf("Food item: Burger\n price:Rs 129");
		break;
		default: printf("Invalid input\n");
		break;
	}
}
