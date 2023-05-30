#include <iostream>

void FirstF(double firstNum, double secondNum)
{
	std::cout << "\nСложение: " <<
		firstNum + secondNum << std::endl;
}

void SecondF(double firstNum, double secondNum)
{
	std::cout << "\nВычитание: " <<
		firstNum - secondNum << std::endl;
}

void ThirdF(double firstNum, double secondNum)
{
	std::cout << "\nУмножение: " <<
		firstNum * secondNum << std::endl;
}

void FourthF(double firstNum, double secondNum)
{
	if(secondNum == 0)
	{
		std::cout << "\nНа ноль делить нельзя!" << std::endl;
	}
	else
	{
		std::cout << "\nУмножение: " <<
			firstNum / secondNum << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	float firstNum = 0, secondNum = 0;
	int choose = 0;

	const int size = 4;
	int arr[size];

	std::cout << "Введите 1 число: ";
	std::cin >> firstNum;
	std::cout << "Введите 2 число: ";
	std::cin >> secondNum;

	std::cout << "Выберите действие: \n" <<
		"1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление\n";
	std::cin >> choose;

	void(*fullF[4])(double firstNum, double secondNum) =
	{FirstF, SecondF, ThirdF, FourthF};

	fullF[choose - 1](firstNum, secondNum);


	return 0;
}