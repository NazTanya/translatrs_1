#pragma once
#include<stdlib.h>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#define N 62
using namespace std;

struct tocin {
	string name;
	bool type;
	bool vision;
};


class Dyn_table {
public:
	//���������� ������� � �������
	bool Add_element(string a);
	//�������� �� ������� � �������
	bool Is_in_table(string a);
	//�������� ��������� �� �����
	void Load_programm(ifstream &prog);
	//���������� ���� ������
	int Get_tocin_type(string a);
	//������������ ���� ������
	bool Set_tocin_type(string a);
	//���������� ��������� ������
	int Get_tocin_vision(string a);
	//������������ ��������� ������
	bool Set_tocin_vision(string a);
	//����������  ������ �� �����
	bool Get_tocin(string a, tocin &b);
	//���������� ������ �� ������
	bool Get_tocin(int n1, int n2, tocin &b);
	//������������ ������
	bool Set_tocin(tocin a);
	//���������� ������ ������� �� ������
	bool Get_tocin_address(tocin a,int &n1, int &n2);
	//���������� ������ ������ �� �����
	bool Get_tocin_address(string a, int &n1, int &n2);
private:
	vector<tocin> element[N];
	//���-������� (������� ����� -> �������� ����� -> ��������� �����)
	int Hash_function(string a);
};