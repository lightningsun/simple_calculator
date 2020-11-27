#include <iostream>
#include <cmath>

/*Simple Calculator									|Identifiers:		|
|Takes a single number input (can accept decimals!)	|first_input		|
|Then asks for an operator							|selected_operator	|
|Then ANOTHER decimal input							|second_input		|
|Does calculating magic and you have your answer.	|result				|
*/

//Function declarations
//Input gathering  
int request_first_number_input();
int request_operator_input();
int operator_validator(char user_input);
int request_second_numberinput();
int calculate_result(double first_input, char operator_input, double second_input);
int init();

//Variable declarations
double first_input;
char operator_input;
double second_input;
double result;

int main()
{
	init();
}

int init()
{
	std::cout << "===============\nSimple Calculator :)\n===============" << std::endl;
	request_first_number_input();
	return 0;
}

int request_first_number_input()
{
	std::cout << "Please enter FIRST INPUT: " << std::endl;
	std::cin >> first_input;
	request_operator_input();
	return 0;
}

int request_operator_input()
{
	std::cout << "Please select an OPERATOR: " << std::endl;
	std::cin >> operator_input;
	operator_validator((char)operator_input);
	return 0;
}

int operator_validator(char user_input)
{
	if (user_input == '+' 
		|| user_input == '-' 
		|| user_input == '*' 
		|| user_input == '/')
	{
		request_second_numberinput(); 
		return 0;
	}
	else
	{
		std::cout << "Invalid operator - please input one of the following: +, -, *, /" << std::endl;
		request_operator_input();
		return 0;
	}
}

int request_second_numberinput()
{
	std::cout << "Please enter SECOND INPUT: " << std::endl;
	std::cin >> second_input;
	calculate_result(first_input, operator_input, second_input);
	return 0;
}

int calculate_result(double first_input, char operator_input, double second_input)
{
	if (operator_input == '+') 
	{
		result = first_input + second_input;
	}
	if (operator_input == '-')
	{
		result = first_input - second_input;
	}
	if (operator_input == '*')
	{
		result = first_input * second_input;
	}
	if (operator_input == '/')
	{
		result = first_input / second_input;
	}

	std::cout << "\t" << first_input << std::endl;
	std::cout << "    " << operator_input << "\t" << second_input << std::endl;
	std::cout << "    =\t" << result << std::endl;
	std::cout << "This calculator shall now restart..!" << std::endl;
	std::system("pause");
	init();
	return 0;
}