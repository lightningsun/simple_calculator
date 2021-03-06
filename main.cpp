#include <iostream>
#include <cmath>

/*
* Initalise function.
*/
void init();

/*
* Ask user for first number (placed into variable firstInput).
*/
void requestFirstNumberInput(); 

/*
* Ask user for what operator they want to use.
*/
void requestOperatorInput();

/*
* Check the operatorInput value is acceptable to continue, otherwise user retries.
*/
void operatorValidator(char userInput); 

/*
* Ask user for second number.
*/
void requestSecondNumberInput();

/*
* Perform calculation and display result.
*/
void calculateResult(double firstInput, char operatorInput, double secondInput); 

//Variable declarations
double firstInput;
char operatorInput;
double secondInput;
double result;

int main()
{
	init();
}

void init()
{
	std::cout << "===============\nSimple Calculator :)\n===============" << std::endl;
	requestFirstNumberInput();
}

void requestFirstNumberInput()
{
	std::cout << "Please enter FIRST INPUT: " << std::endl;
	std::cin >> firstInput;
	requestOperatorInput();
}

void requestOperatorInput()
{
	std::cout << "Please select an OPERATOR: " << std::endl;
	std::cin >> operatorInput;
	operatorValidator(operatorInput);
}

void operatorValidator(char userInput)
{
	if (userInput == '+' 
		|| userInput == '-'
		|| userInput == '*'
		|| userInput == '/')
	{
		requestSecondNumberInput();
	}
	else
	{
		std::cout << "Invalid operator - please input one of the following: +, -, *, /" << std::endl;
		requestOperatorInput();
	}
}

void requestSecondNumberInput()
{
	std::cout << "Please enter SECOND INPUT: " << std::endl;
	std::cin >> secondInput;
	calculateResult(firstInput, operatorInput, secondInput);
}

void calculateResult(double firstInput, char operatorInput, double secondInput)
{
	if (operatorInput == '+')
	{
		result = firstInput + secondInput;
	}
	if (operatorInput == '-')
	{
		result = firstInput - secondInput;
	}
	if (operatorInput == '*')
	{
		result = firstInput * secondInput;
	}
	if (operatorInput == '/')
	{
		result = firstInput / secondInput;
	}

	std::cout << "\t" << firstInput << std::endl;
	std::cout << "    " << operatorInput << "\t" << secondInput << std::endl;
	std::cout << "    =\t" << result << std::endl;
	std::cout << "This calculator shall now restart..!" << std::endl;
	std::system("pause");
	init();
}