#include <iostream>
#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "shape.h"
#include "Ui.h"
using namespace std;

GraphicEditor::GraphicEditor() {		//기본 생성자
	pStart = NULL; count = 0;
}

void GraphicEditor::newLinkedlist(int menu_num) {
	if (menu_num == 1) {	//라인 도형 
		if (count == 0) {	//첫 리스트 추가시
			pStart = new Line();
			pLast = pStart;
		}

		else {
			pLast = pLast->add(new Line());	//첫 리스트가 아니면 리스트 라스트가 가리키는 곳에 새로 동적할당
		}
			

		count++;	//리스트 개수 증가
	}

	else if (menu_num == 2)
	{
		if (count == 0) {	//원 도형
			pStart = new Circle();
			pLast = pStart;
		}

		else
			pLast = pLast->add(new Circle());
		count++;
	}

	else if (menu_num == 3) {	// 사각형
		if (count == 0) {
			pStart = new Rect();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Rect());
		count++;
	}

	else {		//예외처리
		cout << "메뉴를 잘못 선택하셨습니다. 다시 선택하세요";
	}
}

void GraphicEditor::list_delete(int menu_num) {	//리스트 제거 함수
	if (menu_num) {
		//아무리 해봐도 생각이 떠오르지 않습니다
	}

}

void GraphicEditor::run() {
	cout << "그래픽 에디터 입니다." << endl;
	while (1) {
		int num = Ui::menu();

		if (num == 1) {	//삽입
			newLinkedlist(Ui::menuOne());
		}

		else if (num == 2) {//삭제

		}

		else if (num == 3) {//전체 출력
			Shape* p = pStart;
			for (int i = 0; i < count; i++)
			{
				cout << i << ": ";
				p->paint();
				p = p->getNext();
			}
		}

		else if (num == 4) {	//종료
			cout << "프로그램을 종료합니다" << endl;
			break;
		}

		else {//예외처리
			cout << "번호를 제대로 입력해 주세요" << endl;
			continue;
		}
	}
}