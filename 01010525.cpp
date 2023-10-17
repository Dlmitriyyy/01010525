#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	
	int choice_number;
	float number1, number2, result;
	cout << "Меню калькулятора:" << endl << "0 - вихід із програми" << endl << "1 - додавання" << endl << "2 - віднімання" << endl << "3 - множення" << endl << "4 - ділення" << endl << "5 - остача від ділення" << endl << endl << "Виберіть бажану дію." << endl;
	cin >> choice_number;
	
	if (choice_number == 0)
	{
		return 0;
	}
	if (choice_number == 1)
	{
		cout << "Введіть два числа через пробіл або з нового рядка:" << endl;
		cin >> number1 >> number2;
		result = number1 + number2;
		cout << "Відповідь: " << result << endl;
	}
	if (choice_number == 2)
	{
		cout << "Введіть два числа через пробіл або з нового рядка:" << endl;
		cin >> number1 >> number2;
		result = number1 - number2;
		cout << "Відповідь: " << result << endl;
	}
	if (choice_number == 3)
	{
		cout << "Введіть два числа через пробіл або з нового рядка:" << endl;
		cin >> number1 >> number2;
		result = number1 * number2;
		cout << "Відповідь: " << result << endl;
	}
	if (choice_number == 4)
	{
		while (true)
		{
			cout << "Введіть два числа через пробіл або з нового рядка:" << endl;
			cin >> number1 >> number2;
			if (number2 == 0)
			{
			cout << "Ділення на 0 неможливе, спробуйте знову" << endl;
			}
			else
			{
			result = number1 / number2;
			cout << "Відповідь: " << result << endl;
			break;
			}
		}
	}
	
	if (choice_number == 5)
	{
		while (true)
		{
			cout << "Введіть два числа через пробіл або з нового рядка:" << endl;
			cin >> number1 >> number2;
			if (number2 == 0)
			{
			cout << "Ділення на 0 неможливе, спробуйте знову" << endl;
			}
			else
			{
			result = (int)number1 % (int)number2;
			cout << "Відповідь: " << result << endl;
			break;
			}
		}
	}
	
	return 0;
}