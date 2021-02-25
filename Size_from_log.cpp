#include "stdafx.h"
#include "User_list.h"
#include <fstream>
User_list my_list; // список для хранения имен пользователей и количества запросов
void work_with_logfile(); //функция для обработки файла
int main()
{
	setlocale(LC_ALL, "Russian");
	work_with_logfile(); // вызываем функцию обробки
	my_list.ShowList(); // функция просмотра содержимого списка
	system("pause");
	return 0;
}
void work_with_logfile() {
	ifstream myfile("file2.log"); // создаем поток для выгрузки данных
	if (!myfile.is_open()) {
		cout << "Файл не открыт!!!" << endl;
		return;
	}
	char buffer[1500]; // временный буфер для данных
	string tempstr; // временный буфер для данных
	while (!myfile.eof()) { // делаем пока не конец файла
		myfile.getline(buffer, 1500, ','); // считываем данные до запятой
		myfile.getline(buffer, 1500, ','); // считываем данные до запятой
		tempstr = buffer; // запись имени из буфера
		if (tempstr.find('@') != -1)tempstr = tempstr.substr(0, tempstr.find('@')); // если имя содержит @
																							// то удалить знак @ и все после него
		myfile.getline(buffer, 1500); // считать данные до следующей записи-строки
		if (((string)buffer).find(tempstr) != -1 && !my_list.find(tempstr)) { // если запрос был от пользователя и список пустой
																									//или не содержит имя данного пользователя то добавить его в начало списка
			User* temp = new User(); // временная структура для записи в список
			temp->name = tempstr;
			temp->colvo = 1;
			my_list.Add(temp); // функция добавления в начало списка
		}
	}
	myfile.close(); // закрываем поток
}