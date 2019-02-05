#include <stdio.h>
#include <string.h>
#include "operators.h"
#include "calculator.h"


int readNumber(char* printMessage) {
	printf("%s\n", printMessage);
	int number;
	scanf("%d", &number);
	return number;
}

void readOperand(char* printMessage, char* operandStorage) {
	printf("%s\n", printMessage);
	scanf("%s", operandStorage);
}

void calculator() {
	char operand[1];
	int result;
	int firstnum = readNumber("What is the first number?");
	int secondnum = readNumber("What is the second number?");
	readOperand("What is the operation?", operand);
	if(strcmp(operand,PLUS) == 0) {
		result = firstnum + secondnum;
	} else if(strcmp(operand, MINUS) == 0) {
		result = firstnum - secondnum;
	} else if(strcmp(operand, TIMES) == 0) {
		result = firstnum * secondnum;
	} else if(strcmp(operand, DIVIDE) == 0) {
		result = firstnum / secondnum;
	} else if(strcmp(operand, REMAINDER) == 0) {
		result = firstnum % secondnum;
	}
	printf("The result of %d %s %d is %d.\n", firstnum, operand, secondnum, result);
}
