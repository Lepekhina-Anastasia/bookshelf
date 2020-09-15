#pragma once
#indef book_h
#define pbook_h
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class PrintBook :
	public Book {
private:
	int printPages;
public:
	PrintBook() : Book() {
		printPages = 0;
	}
	int getPrintPages() {
		return printPages;
	}
	void setName(string s) {
		Name = s;
	}
	string Name;
	int Pages;
	Book() {
		Name = '-';
		Pages = 0;
	}
	string getName() {
		return Name;
	}
	string getPages() {
		return Pages;
	}
	void Print() {
		cout << "Book: " << Name << ",p." << Pages << '.';
	}
};



