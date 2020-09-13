//Дано целое число, определить количество и сумму цифр этого числа. 
//Выдать само число и число, получающееся из него при 
//вычеркивании первой и последней цифр. Оформить действия определения количества цифр 
//в десятичной записи числа, вычисления суммы цифр числа, 
//преобразования числа путем вычеркивания из него первой и последней цифры в виде функций.

#include <iostream>
#include <cmath>

using namespace std;

int digit_count(int digit)
{
	int length{ 0 };
	while (digit > 0)
	{
		digit /= 10;
		length++;
	}
	return length;
}

int sum(int digit, int digit_length)
{
	int sum = 0;
	int step = 0;
	for (int i = 1; i <= digit_length; i++)
	{
		sum += digit % 10;
		digit /= 10;
	}
	return sum;
}

int last_first_erase(int digit, int digit_length)
{
	int temp = pow(10, digit_length - 1);
	digit = digit % temp;
	digit = digit / 10;
	return digit;
}

int main()
{
	int num;
	int length;
	cout << "Enter any digit: ";
	cin >> num;
	int number{ digit_count(num) };
	cout << "\nCount of digits is " << number;
	cout << "\nSum of digits is " << sum(num, digit_count(num));
	if (number < 3)
		cout << "\nNumber is too short to cut";
	else
		cout << "\nLast and first erasing: " << last_first_erase(num, digit_count(num));
	return 0;
}

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
