
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "operators.h"
#include "calculator.h"

/**

Purpose: checks if the string is a number or not, and returns a boolean

char* possible_number: input string from user with intention of being a number.

**/
bool check_number(char* possible_number) {
	int i = 0;
	for(i = 0; i < strlen(possible_number); i++) {
		if(possible_number[i] < '0' || possible_number[i] > '9'){
			printf("This number is invalid\n");
			return false;
		}
	}
	return true;
}



/**

Purpose: reads in a number, validates it is an integer, and returns a new value.

char* printMessage - the message to be printed out when querying a number.

**/
int readNumber(char* printMessage) {
	char numberString[10]= "oooooooooo";
	bool done = false;
	while(done == false) {
		printf("%s\n", printMessage);
		scanf("%s", numberString);
		if(check_number(numberString) == true) {
			done = true;
		}
	}
	return atoi(numberString);
}


/**

Purpose: reads in the operand, validates it, and places it in the operandStorage.

char* printMessage - message to be printed when querying operand
char* operandStorage - place to store valid operand to be used in other methods.

**/
void readOperand(char* printMessage, char* operand) {
	bool done = false;
	while(done == false) {
		printf("%s\n", printMessage);
		scanf("%s", operand);
		if(strcmp(operand,PLUS) == 0 || strcmp(operand,MINUS) == 0 || strcmp(operand,TIMES) == 0 || strcmp(operand,DIVIDE) == 0 || strcmp(operand,REMAINDER) == 0) {
			done = true;
		}
	}
}


/**
Purpose: run entire calculator operation. Find two numbers, operation, and calculate them.
**/
void calculator() {
	char operand[1];
	int result;
	int firstnum = readNumber("What is the first number?");
	int secondnum = readNumber("What is the second number?");
	readOperand("What is the operation?", operand);
	printf("The result of %d %s %d is %d.\n", firstnum, operand, secondnum, result);
}
