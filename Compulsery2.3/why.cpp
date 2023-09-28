#include<iostream>

/// <summary>
/// Addition
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
/// <param name="polySum"></param>
/// <param name="n"></param>
void polyAdd(int poly1[], int poly2[], int polySum[], int n)									//Calls out the different functions
{
	for (int i = 0; i < n; i++)												//This runns the code below 4 times
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";							//Displays the text and decreases the x^ from 3 to 0
		std::cin >> poly1[i];												//stores the new value for the array "poly1"
	}
	std::cout << "Second function:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly2[i];
	}
	for (int i = 0; i < n; i++)												
	{
		polySum[i] = poly1[i] + poly2[i];										//the sum is poly1 plus poly2
	}
}
/// <summary>
/// Subtraction
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
/// <param name="polySum"></param>
/// <param name="n"></param>
void polySub(int poly1[], int poly2[], int polySum[], int n)
{
	for (int i = 0; i < n; i++)												//This runns the code below 4 times
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";							//Displays the text and decreases the x^ from 3 to 0
		std::cin >> poly1[i];												//stores the new value for the array "poly1"
	}
	std::cout << "Second function:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly2[i];
	}
	for (int i = 0; i < n; i++)
	{
		polySum[i] = poly1[i] - poly2[i];										//Same as polyAdd, just changed "+" to "-"
	}
}
/// <summary>
/// Multiply
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
/// <param name="polySum"></param>
/// <param name="polyArray"></param>
/// <param name="n"></param>
void polyMultiply(int poly1[], int poly2[], int polySum[], int polyArray[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly1[i];
	}
	std::cout << "Second function:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly2[i];
	}
	for (int i = 0; i < n; i++)													//
	{
		for (int j = 0; j < n; j++)
		{
			polyArray[i + j] += poly1[i] * poly2[j];
		}
	}
}
/// <summary>
/// Derive
/// </summary>
/// <param name="poly"></param>
/// <param name="n"></param>
void polyDerive(int poly1[], int polySum[], int n)
{
	for (int i = 0; i < n; i++)												//This runns the code below 4 times
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";							//Displays the text and decreases the x^ from 3 to 0
		std::cin >> poly1[i];												//stores the new value for the array "poly1"
	}
	for (int i = 0; i < n; i++)
	{
		{
			poly1[i] = poly1[i] * (3-i);
		}
		if (poly1[i] != 0)
		{
			std::cout << poly1[i];
			if (i < 1)
				std::cout << "x^2";
			if (i == 1)
				std::cout << "x";

			if (i < 2)
				std::cout << " + ";
		}
	}
}
/// <summary>
/// Ptrint answer
/// </summary>
/// <param name="poly"></param>
/// <param name="n"></param>
void polyPrint(int poly[], int n)
{

	for (int i = 0; i < n; i++)
	{
		if (poly[i] != 0)
		{
			std::cout << poly[i];
			if (i < 2)
				std::cout << "x^" << n - (i+1);
			if (i == 2)
				std::cout << "x";

			if(i != 3)
				std::cout << " + ";
		}	
		
	}
}
/// <summary>
/// Print answer for multiplication
/// </summary>
/// <param name="poly"></param>
void polyPrintM(int poly[])
{
	for (int i = 0; i < 7; i++)
	{
		if (poly[i] != 0)
		{
			std::cout << poly[i];
			if (i < 5)
				std::cout << "x^" << 7 - (i + 1);
			if (i == 5)
				std::cout << "x";

			if (i != 6)
				std::cout << " + ";
		}

	}
}
/// <summary>
/// Polynome menu
/// </summary>
void polymenu()
{
	int menu = 0;
	int auxValue = 0;
	int n = 4;
	int polyArray[7]{ 0, 0, 0, 0, 0, 0, 0 };											//Empty array to fill in the sum of two arrays multiplyed
	int poly1[4] = { 0, 0, 0, 0 };													//Empty array 
	int poly2[4] = { 0, 0, 0, 0 };
	int polySum[4] = {};														//empty array to fill in the sum of two arrays

	std::cout << "Polynom\n";
	std::cout << "1. Addition\n";
	std::cout << "2. Subtraction\n";
	std::cout << "3. Multiplication\n";
	std::cout << "4. Derivative\n";
	std::cout << "5. Exit\n";
	std::cin >> menu;
	std::cout << "\n";
	
	switch (menu)
	{

	case 1:
		polyAdd(poly1, poly2, polySum, n);										//
		polyPrint(polySum, n);
		std::cout << "\n\n";
		break;

	case 2:
		polySub(poly1, poly2, polySum, n);
		polyPrint(polySum, n);
		std::cout << "\n\n";
		break;

	case 3:
		polyMultiply(poly1, poly2, polySum, polyArray, n);
		polyPrintM(polyArray);
		std::cout << "\n\n";

	case 4:
		polyDerive(poly1, polySum, n);
		std::cout << "\n\n";

	case 5:
		return;

	}


}

/// <summary>
/// The main boody
/// </summary>
/// <returns></returns>
int main()
{
	bool isAlive = true;
	int menu = 0;
	char op;
	float num1, num2;
	int n= 0;
	long factorial = 1.0;


	
	
	while (isAlive)
	{
		std::cout << "Welcome to the shitiest calculator you'll ever use!\n\n";
		std::cout << "Please choose one of the below\n";
		std::cout << "1. Simple math\n";
		std::cout << "2. Polynomials\n";
		std::cout << "3. Factorial\n";
		std::cout << "4. Quit\n";
		std::cin >> menu;
		std::cout << "\n";
		
		switch (menu)
		{
			case 1:
				std::cout << "Enter operator: +, -, *, /:";								
				std::cin >> op;

				if (op == '+' || op == '-' || op == '*' || op == '/')
				{

					std::cout << "Enter two operands: ";
					std::cin >> num1 >> num2;

					switch (op)
					{
					case'+':
						std::cout << num1 << " + " << num2 << " = " << num1 + num2;
						break;

					case'-':
						std::cout << num1 << " - " << num2 << " = " << num1 - num2;
						break;

					case'*':
						std::cout << num1 << " * " << num2 << " = " << num1 * num2;
						break;

					case'/':
						std::cout << num1 << " / " << num2 << " = " << num1 / num2;
						break;
				

					}
					return 0;
				}
			default:
				std::cout << "Error\n";
				break;

			case 2:
				polymenu();
				break;
			case 3:

				std::cout << "Enter a positive integer: ";
				std::cin >> n;

				if (n < 0)
					std::cout << "Error! Fractorial of a negative number doesn't exist.\n";
				else if (n >= 20)
					std::cout << "This program cant calculate factorals over 20.\n";
				else
				{
					for (int i = 1; i <= n; ++i)
					{
						factorial *= i;
					}
					std::cout << "Factorial of " << n << " = " << factorial;
				}

				return 0;
			case 4:
				return 0;
		}

	
	}
}
