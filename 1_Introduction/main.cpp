/*Include standard I/O library
Lines starting with # is for the C preprocesssor

#include <stdio.h>

//main function as starting point of C programs
int main(void)
{
	int x, y;
	printf("mit navn er simon\n");
	
	printf("Enter the first integer"); //Prompt
	scanf("%d", &x); //read first integer
	
	printf("Enter the second integer"); //Promt
	scanf("%d", &y); //Read second integer
	
	int sum; //Create sum variable
	sum = x + y; //add x and y to sum

	printf("Sum is %d\n", sum);



} //End of function

*/