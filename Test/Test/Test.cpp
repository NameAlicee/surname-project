// Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
using namespace std;
//определяет длину строки
int funct_length(char c[]) {
	int counter = 0;
	for (int i = 0; c[i] != '\0'; i++)
	{
		counter++;
	}
	return counter;
}
//сравнивает две строки
int funct_compare_2_strokes(char c1[], char c2[]) {
	int length1 = funct_length(c1);
	int length2 = funct_length(c2);
	if (length1 == length2)
	{


		int counter = 0;
		for (int i = 0; c1[i] != '\0' || c2[i] != '\0'; i++)
		{
			if (c1[i] == c2[i])
			{
				counter++;
			}

		}
		if (counter == length1) {
			return 0;
		}
		else
		{
			return 433;
		}
	}
	if (length1 < length2)
	{
		return rand() % 80 + 1;
	}
	if (length1 > length2)
	{
		return rand() % -80 - 1;
	}
}
//конкатенирует(соединяет) две строки
void funct_concat(char c1[], char c2[]) {
	int j = 0;
	int length = funct_length(c1) + funct_length(c2);
	char* ptrconcat = new char[length];
	for (int i = 0; i < funct_length(c1); i++)
	{
		ptrconcat[i] = c1[i];
	}
	for (int i = funct_length(c1); i < length; i++)
	{

		ptrconcat[i] = c2[j];
		j++;
	}
	cout << "Конкатенируемая строка: ";
	for (int i = 0; i < length; i++)
	{
		cout << ptrconcat[i];
	}
	delete ptrconcat;
}
// удаляет часть строки
void funct_delete_part_of_stroke(char c1[], int deleteFrom , int num2) {
	if (deleteFrom<0)
	{
		cout << c1;
	}
	char* ptrdeletearr = new char[num2];
	for (int i = 0; i < deleteFrom; i++)
	{
		ptrdeletearr[i] = c1[i];
	}
	for (int i = 0; i < deleteFrom; i++)
	{
		cout << ptrdeletearr[i];
	}
	delete ptrdeletearr;
}
//копирует часть строки
void funct_copy_part_of_stroke(char c1[], int num1, int num2) {
	char* ptrcopyarr = new char[num2];
	int h = 0;
	for (int i = num1; i < num2; i++)
	{
		ptrcopyarr[h] = c1[i];
		h++;
	}
	int length = num2 - num1;
	for (int i = 0; i < length; i++)
	{
		cout << ptrcopyarr[i];
	}
	delete ptrcopyarr;
}
//ищет подстроку в строке
int funct_search(char c1[], char c2[]) {
	int l1 = funct_length(c1);
	int l2 = funct_length(c2);
	for (int i = 0; i < l1; i++)
	{
		if (c1[i] == c2[0])
		{
			int counter = i;
			int helper = 0;
			for (int j = 0; c1[i + j] = c2[j]; j++)
			{
				helper++;
			}
			if (helper == l2)
			{
				return counter;
			}

		}

	}
	return -1;
}
//ищет подстроку в строке, начиная с конца строки
int funct_search_reverse(char c1[], char c2[]) {
	int l1 = funct_length(c1);
	int l2 = funct_length(c2);
	for (int i = l1; i > 0; i--)
	{
		if (c1[i] == c2[0])
		{
			int counter = i;
			int helper = 0;
			for (int j = 0; c1[i + j] = c2[j]; j++)
			{
				helper++;
			}
			if (helper == l2)
			{
				return counter;
			}

		}

	}
	return -1;
}
int main()
{
	setlocale(LC_CTYPE, "rus");
	char string[500];
	char string2[500];
	int num1;
	/*cout << "Введите строку: ";
	gets_s(string);
	cout << funct_length; //Длина строки


	/*cout << "Введите строку: ";
	gets_s(string);
	cout << "Введите строку: ";
	gets_s(string2);
	cout << funct_compare_2_strokes(string, string2);*/ //Сравнение двух строк


	/*cout << "Введите строку: ";
	gets_s(string);
	cout << "Введите строку: ";
	gets_s(string2);
	funct_concat(string, string2);*/ //Конкатенация двух строк


	/*cout << "Введите строку: ";
	gets_s(string);
	cout << "Введите символ, с которого начнется удаление ";
	cin >> num1;
	funct_delete_part_of_stroke(string, num1, funct_length(string));


	/*cout << "Введите строку: ";
	gets_s(string);
	cout << "Введите символ, с которого начнется удаление";
	cin >> num1;
	funct_copy_part_of_stroke(string, num1, funct_length(string));*/


	/*cout << "Введите строку: ";
	gets_s(string);
	cout << "Введите строку: ";
	gets_s(string2);
	cout << funct_search(string, string2);*/

	/*cout << "Введите строку: ";
	gets_s(string);
	cout << "Введите строку: ";
	gets_s(string2);
	cout << funct_search_reverse(string, string2);*/

	cin.get();
	return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
