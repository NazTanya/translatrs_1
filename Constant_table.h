#pragma once
#include<stdlib.h>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;

class Const_table {
private:
	int count_of_elements;
	vector<string> vocabulary;
public:
	//�������� ������� � �����
	void Load_from_file(ifstream &fin);
	//���������� �������� � �������
	bool Add_element(string a);
	//�������� ��������� �� ������ ������� � �������
	bool Is_in_table(string a);
	//���������� �� ������ � ��������
	bool Get_element_value(int num,string &a);
	bool Get_element_number(string a, int &num);
};