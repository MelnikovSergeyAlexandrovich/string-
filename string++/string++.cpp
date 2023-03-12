// string++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string Input(string& str);
void wordsCounter(string& str);
void getMobilePhone(string& str);
void CompareStrs(string& strOne, string& strTwo);
void replaceStr(string& str, string& strOne, string& strTwo);

void strOperations()
{
	string strOne = "";
	string strTwo = "";
	string strThree;
	string strFour;
	string strFive;
	string strSix;
	string strSeven;
	cout << "Введите 7 строк:\n";
	Input(strOne);
	Input(strTwo); 
	Input(strThree);
	Input(strFour);
	Input(strFive);
	Input(strSix);
	Input(strSeven);
	wordsCounter(strOne);
	getMobilePhone(strTwo);
	CompareStrs(strThree, strFour);
	replaceStr(strFive, strSix, strSeven);
}

string Input(string& str)
{
	cout << "Введите строку:\t";
	getline(cin, str);
	return str;
}

void replaceStr(string& str, string& strOne, string& strTwo)
{
	replace(str.begin(), str.end(), strOne, strTwo);
	cout << "Заменённая строка: " << str << endl;
}

void CompareStrs(string &strOne, string &strTwo)
{
	int result = strOne.compare(strTwo);
	cout << strOne << " и " << strTwo;
	switch (result)
	{
		case -1:
			cout << " не идентичны. Третья строка меньше четвертой." << endl;
			break;
		case 0:
			cout << " идентичны" << endl;
			break;
		case 1:
			cout << " Не идентичны. Третья строка больше четвертой" << endl;
			break;
	}
}

void getMobilePhone(string &str) 
{
	cout << "+";
	if (str != "")
	{
		for (unsigned i{}; i < str.length(); i++)
		{
		bool intChecker = isdigit(str[i]);
			if (intChecker)
			{	
				cout << str[i];
			}
		}
		cout << endl;
	}
}


void wordsCounter(string& str)
{
	vector<string> words;
	string word;
	int i = 0;
	while (i < str.length())
	{
		word += str[i];
		if ((ispunct(str[i])) || (isspace(str[i]) || (str[i] == '\n')))
		{
			words.push_back(word);
			word = "";
		}
		i++;
	}
	cout << words.size() << "\n";
	for (int i = 0; i < words.size(); i++) cout << words[i] << endl;
}


void main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	strOperations();
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
