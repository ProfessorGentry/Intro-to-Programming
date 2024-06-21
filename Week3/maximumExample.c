//Find the maximum of three numbers

#include<stdio.h>

//Function Prototypes
int maximum (int, int, int);

int main(void){
    //Declare and Init variables
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    
    //User Input
    printf("Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);
    
    //Call function maximum
	printf("Maximum number is: %d", maximum(number1, number2, number3));
}

//Function Definition
/*
	Function maximum
	Parameters: 3 integer numbers
	Returns: maximum of the 3 numbers
*/
int maximum(int x, int y, int z){
	//Define variables
	int max;
	
	//Assume x is the max
	max = x;
	
	//Check to see if Y is greater than max
	if (y > max){
		max = y;
	}
	
	//Check to see if Z is greater than max
	if (z > max){
		max = z;
	}
	
	return max;
}




