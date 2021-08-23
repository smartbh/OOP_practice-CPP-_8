#include <iostream>
#include "Ui.h"
using namespace std;

int Ui::menu() {
	int button;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
	cin >> button;
	return button;
}

int Ui::menuOne(){
	int button;
	cout << "선:1, 원:2, 사각형:3 >>";
	cin >> button;
	return button;
}

int Ui::menuSecond() {
	int index;
	cout << "삭제하고자 하는 도형의 인덱스 >>";
	cin >> index;
	return index;
}

//int Ui::menuThird() {
//
//}