#include <iostream>
#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "shape.h"
#include "Ui.h"
using namespace std;

GraphicEditor::GraphicEditor() {		//�⺻ ������
	pStart = NULL; count = 0;
}

void GraphicEditor::newLinkedlist(int menu_num) {
	if (menu_num == 1) {	//���� ���� 
		if (count == 0) {	//ù ����Ʈ �߰���
			pStart = new Line();
			pLast = pStart;
		}

		else {
			pLast = pLast->add(new Line());	//ù ����Ʈ�� �ƴϸ� ����Ʈ ��Ʈ�� ����Ű�� ���� ���� �����Ҵ�
		}
			

		count++;	//����Ʈ ���� ����
	}

	else if (menu_num == 2)
	{
		if (count == 0) {	//�� ����
			pStart = new Circle();
			pLast = pStart;
		}

		else
			pLast = pLast->add(new Circle());
		count++;
	}

	else if (menu_num == 3) {	// �簢��
		if (count == 0) {
			pStart = new Rect();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Rect());
		count++;
	}

	else {		//����ó��
		cout << "�޴��� �߸� �����ϼ̽��ϴ�. �ٽ� �����ϼ���";
	}
}

void GraphicEditor::list_delete(int menu_num) {	//����Ʈ ���� �Լ�
	if (menu_num) {
		//�ƹ��� �غ��� ������ �������� �ʽ��ϴ�
	}

}

void GraphicEditor::run() {
	cout << "�׷��� ������ �Դϴ�." << endl;
	while (1) {
		int num = Ui::menu();

		if (num == 1) {	//����
			newLinkedlist(Ui::menuOne());
		}

		else if (num == 2) {//����

		}

		else if (num == 3) {//��ü ���
			Shape* p = pStart;
			for (int i = 0; i < count; i++)
			{
				cout << i << ": ";
				p->paint();
				p = p->getNext();
			}
		}

		else if (num == 4) {	//����
			cout << "���α׷��� �����մϴ�" << endl;
			break;
		}

		else {//����ó��
			cout << "��ȣ�� ����� �Է��� �ּ���" << endl;
			continue;
		}
	}
}