#include<iostream>

/// <summary>
/// Addition
/// </summary>
/// <param name="poly1"></param>
/// <param name="poly2"></param>
/// <param name="polySum"></param>
/// <param name="n"></param>
void polyAdd(int poly1[], int poly2[], int polySum[], int n)				//Calls out the different functions
{
	for (int i = 0; i < n; i++)												//
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
	for (int i = 0; i < n; i++)
	{
		polySum[i] = poly1[i] + poly2[i];
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
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly1[i];
	}
	std::cout << "Second function:\n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly2[i];
	}
	for (int i = 0; i < n; i++)
	{
		polySum[i] = poly1[i] - poly2[i];
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
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly1[i];
	}
	std::cout << "Second function:\n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Decide the number n * (x)^" << 3 - i << " ";
		std::cin >> poly2[i];
	}
	for (int i = 0; i < n; i++)
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
void polyDerive(int poly[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (0 < i * poly[i])
		{
			std::cout << i * poly[i];
			if (1 < i - 1)
				std::cout << "x^" << 3 - i;
			if (i == 2)
				std::cout << "x";
			if ((i != n - 1) && (poly[i + 1] != 0))
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
	for (int i = n-1; i >=0; i--)
	{
		if (poly[i] != 0)
		{
			std::cout << poly[i];
			if (i > 1)
				std::cout << "x^" << i;
			if (i == 1)
				std::cout << "x";
			if ((i != n + 1) && (poly[i + 1] != 0) && i != 0)
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
	for (int i = 7 - 1; i >= 0; i--)
	{
		if (poly[i] != 0)
		{
			std::cout << poly[i];
			if (i > 1)
				std::cout << "x^" << i;
			if (i == 1)
				std::cout << "x";
			if ((i != 7 + 1) && (poly[i + 1] != 0) && i != 0)
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
	std::string letters[4] = { "a", "b", "c", "d" };
	int selectedMenu = 0; //defines a value to switch between menus
	int selectedPoly = 0;
	int polyArray[7]{ 0, 0, 0, 0, 0, 0, 0 };
	int poly1[4] = { 0, 0, 0, 0 };
	int poly2[4] = { 0, 0, 0, 0 };
	int polySum[4] = {}; //empty array to fill in the sum of two arrays
	int polyResult[4] = {}; // empty array to fill in two arrays multiplied with each other

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
		polyAdd(poly1, poly2, polySum, n);
		polyPrint(polySum, n);
		std::cout << "\n\n";
		break;

	case 2:
		polySub(poly1, poly2, polySum, n);
		polyPrint(polySum, n);
		std::cout << "\n\n";

	case 3:
		polyMultiply(poly1, poly2, polySum, polyArray, n);
		polyPrintM(polyArray);
		std::cout << "\n\n";

	case 4:


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
	int n=0;
	long factorial = 1.0;


	
	
	while (isAlive)
	{
		std::cout << "Welcome to the shitiest calculator you'll ever use!\n\n";
		std::cout << "Please choose one of the below\n";
		std::cout << "1. Simple meth\n";
		std::cout << "2. Polynomunsnsns\n";
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

					default:
						std::cout << "Error";
						break;
					}
					return 0;
				}
				return 0;
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