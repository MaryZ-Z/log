#include "User_list.h"



User_list::User_list()
{
}


User_list::~User_list()
{
}

void User_list::Add(User* tmp)
{
	if (Start == NULL) { // если список пуст то вставляем в начало списка
		Start = tmp;
		Start->next = NULL;
	}
	else { // иначе сохраняем текущее начало
		User* tmpst = Start;
		Start = tmp; // вставляем новый элемент в начало
		Start->next = tmpst; // указатель следующего элемента после начала - старое начало
	}
}
bool User_list::find(string str)
{
	if (Start == NULL)return false; // если список пуст выходим и возвращаем false
	else {
		for (User* tmpst = Start; tmpst != NULL; tmpst=tmpst->next){ // вводим временную переменную начала, проходим по циклу до конца списка
			if (tmpst->name == str) { // если имя элемента совпало со строкой выводим тру
				tmpst->colvo++;
				return true;
			}
		}
	}
	return false; // если в цикле не нашли ничего - выводим false
}
void User_list::ShowList() {
	if (Start == NULL) return; // если список пуст выходим
	else {
		for (User* tmpst = Start; tmpst != NULL; tmpst = tmpst->next) cout << tmpst->name << " - " << tmpst->colvo << endl;// вводим временную переменную начала, проходим по циклу до конца списка и выводим информацию
	}
}