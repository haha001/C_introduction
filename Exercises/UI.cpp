#include <stdio.h>
#include "functions1.h"

//This program needs to use the circleArea() function from keyboard input and then print it

int main()
{
	float radius;
	unsigned int length, height;
	signed int sideA, sideB, sideC;
	char number1, number2;
	char character;
	/*
	printf("Please enter the radius \n");
	scanf("%f", &radius);

	printf("The area is %f \n", circleArea(radius));

	*/
	/*
	printf("Please enter the length of the rectangle \n");
	scanf("%d", &length);

	printf("Please enter the height of the rectangle \n");
	scanf("%d", &height);

	printf("The area is %d \n", rectangleArea(length, height));

	*/
	/*
	printf("Please enter the A side of the triangle \n");
	scanf("%d", &sideA);

	printf("Please enter the B side of the triangle \n");
	scanf("%d", &sideB);

	printf("Please enter the C side of the triangle \n");
	scanf("%d", &sideC);

	printf("The area is %f \n", triangleArea(sideA, sideB, sideC));

	*/
	/*
	printf("Please enter value 1");
	scanf("%c", &number1);

	printf("Please enter value 2");
	scanf(" %c", &number2);

	printf(" %d \n", isEqual(number1, number2));
	*/

	printf("What should be converted to ASCII? \n");
	scanf(" %c", &character);

	charToASCII(character);

	return 0;
}
