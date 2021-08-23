#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
#include "shape.h"
using namespace std;


class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	Shape* nextLink;
	int count;	//리스트 개수
public:
	GraphicEditor();
	void newLinkedlist(int menu_num);
	void list_delete(int menu_num);
	void run();
};

#endif // !
