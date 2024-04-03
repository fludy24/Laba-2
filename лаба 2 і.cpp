#include <iostream>
#include <windows.h>
int count_multiples(int n)
{
	int count_2 = n / 2;
	int count_3 = n / 3;
	int count_6 = n / 6;
	return count_2 + count_3 - count_6;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	std::cout << "Введіть n: ";
	std::cin >> n;
	int count = count_multiples(n);
	std::cout << "Кількість кратних 2 і 3: " << count << std::endl;
	return 0;
}