// DZ 25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

//Задача 1
//Дана строка str.Пользователь вводит символ sym.
//Программа создаёт новую строку, которая состоит из
//символа sym.Длина новой строки равна количеству
//совпадений введённого символа в изначальной строке
//str.
//Пример:
//str = "Hello world!"
//sym = 'o'
//new_str = "oo"

//Задача 2
//Создайте функцию, которая принимает слово и
//возвращает true, если оно является палиндромом.В
//противном случае возвращается false.Функция должна
//быть нерегистрозависимой.

bool func_polindrom(std::string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; i++)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

//Задача 3
//Создайте функцию, которая принимает строку.
//Функция считает все пробелы, точки, запятые,
//восклицательные и вопросительные знаки, которые есть
//в переданной строке и возвращает их общее количество.

int string_str(std::string str) {
	int count = 0;
	
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ' ||
			str[i] == '.' ||
			str[i] == ',' ||
			str[i] == '!' ||
			str[i] == '?' )
			count ++;

	return count;

}

//Задача 4
//Создайте функцию, которая принимает строку и
//символ.Функция ищет последнее вхождение символа в
//переданную строку и возвращает подстроку,
//начинающуюся с этого символа и заканчивающуюся
//концом строки.Если символа в строке нет, то функция
//возвращает пустую строку.
//Пример вызова функции:
//string str = "Hello world!";
//char sym = 'o';
//cout << func(str, sym) << endl;
// на экране orld!


void string_function(std::string str, char sym) {
	
	for (int i = str.length() - 1; i >= 0; i--)
		if (str[i] == sym)
			std::cout << str.substr(sym);
}



int main() {
	setlocale(LC_ALL, "rus");

	//Задача 1
	std::string str = "Hello, World!";
	char sym = 'o';
	std::string new_str;

	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			new_str += sym;

	std::cout << new_str << std::endl;

	//Задача 2
	std::string str1;
	std::cout << "Введите слово: ";
	std::cin >> str1;
	if (func_polindrom(str1))
	{
		std::cout << "Слово является полиндромом";
	}
	else
	{
		std::cout << "Слово не является полиндромом";
	}

	std::cout << std::endl;

	//Задача 3

	std::string str2;
	std::cout << "введите строку: ";
	std::cin >> str2;
	std::cout << string_str(str2) << std::endl;

	//Задача 4

	std::string str4 = "Hello, World!";
	char sym2;
	std::cout << "Введите букву: ";
	std::cin >> sym2;
	string_function(str4, sym2);

	return 0;
}

