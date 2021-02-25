#include "User_list.h"



User_list::User_list()
{
}


User_list::~User_list()
{
}

void User_list::Add(User* tmp)
{
	if (Start == NULL) { // ���� ������ ���� �� ��������� � ������ ������
		Start = tmp;
		Start->next = NULL;
	}
	else { // ����� ��������� ������� ������
		User* tmpst = Start;
		Start = tmp; // ��������� ����� ������� � ������
		Start->next = tmpst; // ��������� ���������� �������� ����� ������ - ������ ������
	}
}
bool User_list::find(string str)
{
	if (Start == NULL)return false; // ���� ������ ���� ������� � ���������� false
	else {
		for (User* tmpst = Start; tmpst != NULL; tmpst=tmpst->next){ // ������ ��������� ���������� ������, �������� �� ����� �� ����� ������
			if (tmpst->name == str) { // ���� ��� �������� ������� �� ������� ������� ���
				tmpst->colvo++;
				return true;
			}
		}
	}
	return false; // ���� � ����� �� ����� ������ - ������� false
}
void User_list::ShowList() {
	if (Start == NULL) return; // ���� ������ ���� �������
	else {
		for (User* tmpst = Start; tmpst != NULL; tmpst = tmpst->next) cout << tmpst->name << " - " << tmpst->colvo << endl;// ������ ��������� ���������� ������, �������� �� ����� �� ����� ������ � ������� ����������
	}
}