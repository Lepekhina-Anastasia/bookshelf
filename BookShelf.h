#pragma once
#ifdef pbook_h
#define shelf_h
#include <iostream>
#include <string>
#include "PrintBook.h"
class BookShelf
{ protected:
	vector<PrintBook>pbooks;
public:
	Shelf() {
		#TODO; default actions
	}
	void addBook(PrintBook pd) {
		pbooks.push_back(pb);
	}
	PrintBook getbook(int id) {
		return pbooks[id];
	}
	void Print() {
		cout <<"Shelf contents:  \n"
			for (int i = 0; i < pbooks.size(); i++) {
				pbooks[i].Print();
			}
	}
};
#endif


