#include <iostream>

bool IsPointInFigure(float x, float y)
{
	if (x <= 1 and x >= 0 and y <= 0 and y >= -1) return false;
	if (x <= 1 and x >= -1 and y <= 1 and y >= -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// друге завдання
int FunctionValue(int x, int y)
{
	switch (x)
	{
	case 0:
		switch (y)
		{
		case 0:
			return 2;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		default:
			return -1;
		}
		break;
	case 1:
		switch (y)
		{
		case 0:
			return 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		default:
			return -1;
		}
		break;
	case 2:
		switch (y)
		{
		case 0:
			return 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 2;
			break;
		default:
			return -1;
		}
		break;
	default:
		return -1;
	}
}

int main()
{
	// задача 1
	float x, y;
tryAgain:
	std::cout << "Enter the coordinates of the point\n"; 
	std::cin >> x >> y;
	bool result = IsPointInFigure(x, y);
	std::cout << "result of funtion  true or false\n";
	std::cout << result;

	bool ToContinue;
 
	std::cout << "\nEnter 1 to try again or 0 to continue\n";
	std::cin >> ToContinue; 

	if (ToContinue)
		goto tryAgain;

	// задача 2

	}
