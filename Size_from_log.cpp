#include "stdafx.h"
#include "User_list.h"
#include <fstream>
User_list my_list; // ������ ��� �������� ���� ������������� � ���������� ��������
void work_with_logfile(); //������� ��� ��������� �����
int main()
{
	setlocale(LC_ALL, "Russian");
	work_with_logfile(); // �������� ������� �������
	my_list.ShowList(); // ������� ��������� ����������� ������
	system("pause");
	return 0;
}
void work_with_logfile() {
	ifstream myfile("file2.log"); // ������� ����� ��� �������� ������
	if (!myfile.is_open()) {
		cout << "���� �� ������!!!" << endl;
		return;
	}
	char buffer[1500]; // ��������� ����� ��� ������
	string tempstr; // ��������� ����� ��� ������
	while (!myfile.eof()) { // ������ ���� �� ����� �����
		myfile.getline(buffer, 1500, ','); // ��������� ������ �� �������
		myfile.getline(buffer, 1500, ','); // ��������� ������ �� �������
		tempstr = buffer; // ������ ����� �� ������
		if (tempstr.find('@') != -1)tempstr = tempstr.substr(0, tempstr.find('@')); // ���� ��� �������� @
																							// �� ������� ���� @ � ��� ����� ����
		myfile.getline(buffer, 1500); // ������� ������ �� ��������� ������-������
		if (((string)buffer).find(tempstr) != -1 && !my_list.find(tempstr)) { // ���� ������ ��� �� ������������ � ������ ������
																									//��� �� �������� ��� ������� ������������ �� �������� ��� � ������ ������
			User* temp = new User(); // ��������� ��������� ��� ������ � ������
			temp->name = tempstr;
			temp->colvo = 1;
			my_list.Add(temp); // ������� ���������� � ������ ������
		}
	}
	myfile.close(); // ��������� �����
}