#include <iostream>

void FirstF(double firstNum, double secondNum)
{
	std::cout << "\n��������: " <<
		firstNum + secondNum << std::endl;
}

void SecondF(double firstNum, double secondNum)
{
	std::cout << "\n���������: " <<
		firstNum - secondNum << std::endl;
}

void ThirdF(double firstNum, double secondNum)
{
	std::cout << "\n���������: " <<
		firstNum * secondNum << std::endl;
}

void FourthF(double firstNum, double secondNum)
{
	if(secondNum == 0)
	{
		std::cout << "\n�� ���� ������ ������!" << std::endl;
	}
	else
	{
		std::cout << "\n���������: " <<
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

	std::cout << "������� 1 �����: ";
	std::cin >> firstNum;
	std::cout << "������� 2 �����: ";
	std::cin >> secondNum;

	std::cout << "�������� ��������: \n" <<
		"1 - ��������, 2 - ���������, 3 - ���������, 4 - �������\n";
	std::cin >> choose;

	void(*fullF[4])(double firstNum, double secondNum) =
	{FirstF, SecondF, ThirdF, FourthF};

	fullF[choose - 1](firstNum, secondNum);


	return 0;
}