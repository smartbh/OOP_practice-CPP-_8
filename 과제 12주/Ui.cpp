#include <iostream>
#include "Ui.h"
using namespace std;

int Ui::menu() {
	int button;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
	cin >> button;
	return button;
}

int Ui::menuOne(){
	int button;
	cout << "��:1, ��:2, �簢��:3 >>";
	cin >> button;
	return button;
}

int Ui::menuSecond() {
	int index;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
	cin >> index;
	return index;
}

//int Ui::menuThird() {
//
//}