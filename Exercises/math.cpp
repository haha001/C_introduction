#include <math.h>
#include <stdio.h>
const float X = 7; //Declare constant 7

int main()
{

	double squared;
	double square_root;
	double power;

	squared = pow(X,2);
	printf("7 squared is %f \n", squared);

	square_root = sqrt(X);
	printf("The square root of 7 is %f \n", square_root);

	power = pow(X, 3);
	printf("The power of 7 to 3 is %f \n", power);

	return 0;


}
