// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>
using namespace std;
struct User { // ��������� ������������
	string name;
	int colvo;
	User* next; // ��������� �� ���������� ������������ � ������
};


// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������
