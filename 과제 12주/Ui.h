#ifndef UI_H
#define UI_H
#include <iostream>
#include <string>
using namespace std;

class Ui {
	int menu_button;
public:
	static int menu();	//삽입
	static int menuOne();	//도형
	static int menuSecond();	//삭제
	//static int menuThird();	//모두보기
	//static int menufour();	//종료 필요없음 그래픽 에디터에서 하면 됨
};

#endif // !
