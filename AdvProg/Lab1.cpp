// Author			:: Christopher Byrne 
// Date Started		:: 15/09/2023
// Date Last Update :: 15/09/2023
// Purpose			:: Lab assignment 1 due October 3rd 2023


#include <iostream>;

// Question 1 --------------------------------------------------------------
bool isLeapYear(int year) {
	if (year % 4 != 0) 
	{
		return false;
	}
	if (year % 100 != 0) 
	{
		return true;
	}
	if (year % 400 != 0) 
	{
		return false;
	}
	return true;
}

// Question 2 ------------------------------------------------------------
bool IsPalindrome(int num) {
	int forwardNum = num;
	int reverseNum = 0;
	while (num > 0) 
	{
		reverseNum = reverseNum * 10;
		reverseNum = reverseNum + (num % 10);
		num = num / 10;
	}

	if (reverseNum == forwardNum) 
	{
		return true;
	}

	else 
	{
		return false;
	}
}

// Question 3 -------------------------------------------------------

bool IsPrime(int num) {
	int divKey = 2;
	while (divKey <= num / 2) 
	{
		divKey++;
		if (num % divKey == 0) 
		{
			return false;
			break;
		}
	}
	return true;
}

// Question 4 -----------------------------------------------

int BinaryConverter(int binNum) {
	int powerOfTwo = 1;
	int multiplier = 0;
	int decNum = 0;
	while (binNum > 0) 
	{
		multiplier = binNum % 10;
		binNum = binNum / 10;
		decNum = decNum + (powerOfTwo * multiplier);
		powerOfTwo = powerOfTwo * 2;
	}
	return decNum;
}

// Question 5 --------------------------------------------------------

int charConverter() {

	int convertedInt = 0;
	char keyIn;
	bool noChars = true;

	while (true) 
	{
		std::cout << "Press 'e' to exit! enter a number: ";
		std::cin >> keyIn;
		keyIn -= '0';
		if (keyIn < 10) 
		{
			convertedInt += keyIn;
			convertedInt *= 10;
		}
		else if (keyIn == 'e' - '0') 
		{
			convertedInt /= 10;
			break;
		}
		else 
		{
			noChars = false;
			convertedInt /= 10;
		}

	}

	if (noChars == true) 
	{
		std::cout << convertedInt;
	}

	else 
	{
		std::cout << 0;
	}

	return convertedInt;

}

// Question 6 ------------------------------------

void drawWithAze() {
	int rows = 0;
	int cols = 0;
	char toPrint = 'A';

	for (rows; rows <= 4; rows++) 
	{
		for (cols; cols < rows; cols++) 
		{
			std::cout << toPrint;
		}
		std::cout << std::endl;
		cols = 0;
	}
}


int main() {

	//Question 1 ------------------------------------------------------
	
	int year = 0;
	std::cout << "Enter a year to check if it is a leap year: ";
	std::cin >> year;

	if (isLeapYear(year) == true) 
	{
		std::cout << "The year " << year << " is a leap year, it has 366 days!";
	}
	else 
	{
		std::cout << "The year " << year << " is not a leap year, it has 365 days!";
	}

	std::cout << std::endl;

	//Question 2 ------------------------------------------------------

	int num1 = 0;

	std::cout << "Enter a number to see of it is a palindrome: ";
	std::cin >> num1;

	if (IsPalindrome(num1)) 
	{
		std::cout << "This number '" << num1 << "' is a palindrome!";
	}
	else 
	{
		std::cout << "This number '" << num1 << "' is not a palindrome!";
	}

	std::cout << std::endl;

	//Question 3 -----------------------------------------------------------

	int num2 = 0;

	std::cout << "Enter a number to  test if it is prime: ";
	std::cin >> num2;
	if (IsPrime(num2)) 
	{
		std::cout << "The number: " << num2 << " is Prime!";
	}
	else 
	{
		std::cout << "The number: " << num2 << " is not Prime!";
	}
	std::cout << std::endl;

	int primeCount = 0;
	for (int i = 2; i < 1000; i++) 
	{
		if (IsPrime(i)) 
		{
			primeCount++;
		}
	}
	std::cout << std::endl;
	std::cout << primeCount;
	std::cout << std::endl;


	//Question 4 ---------------------------

	int binNum = 0;
	int decNum = 0;

	std::cout << "Enter a number in Binary format to recieve the Decimal format: ";
	std::cin >> binNum;

	decNum = BinaryConverter(binNum);

	std::cout << "The binary number ' " << binNum << " ' is equal to ' " << decNum << " ' in Decimal!";
	std::cout << std::endl;
	
	//Question 5 --------------------------------

	charConverter();
	std::cout << std::endl;

	//Question 6 ------------------------------------
	
	drawWithAze();
	std::cout << std::endl;
}