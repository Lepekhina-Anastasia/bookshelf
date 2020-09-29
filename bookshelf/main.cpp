#include <iostream>
#include <vector>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    system("chep 1251");
    int mode=-1;
    vector<BookShelf> bshelfs;
    BookShelf bshelf;
    while (mode != 0) {
        cout << "1. Add bookshelf." << endl;
        cout << "2. Add a sheld to the bookshelf"<< endl;
        cout << "3. Add a book"<< endl;
        cout << "4.Exit to the screensaver." << endl;
        cout << "5.Exit "<< endl;
        cin>>mode;
        switch(mode){
        	case 0: continue;
        	case 1:
        		bshelfs.push_back(bshelf);
        		cout<<"Bookshelf is addded!"<<endl<<endl;
        		break;
        	case 2:
			    if(bshelfs.size()>0){
			    	cout<<bshelfs.size()<<"Boookshelves are available"<< endl;
			    	cout<<"Type the number of the bookshelf(1-"<<bshelfs.size()<<")";
			    	int n=0;
			    	cin>>n;
			    	if (n>0 && n<=bshelfs.size()){
			    		bshelfs[n-1].addShelf();
			    		cout<<"Shelf is addded!"<<endl<<endl;}
			    	else{
			    		cout<<"The number is not correct. Repeat please."<<endl<<endl;
						}
					}
				else{cout<<"No shelf is available"<<endl<<endl;
				}
				break;
			case 3:
			    if  (bshelfs.size()>0){
			    	cout<<bshelfs.size()<<"Boookshelves are available "<< endl;
			    	cout<<"Type the number of the bookshelf(1-"<<bshelfs.size()<<")"<<endl;
			    	int n=0;
			    	cin>>n;
			    	if (n>0 && n<=bshelfs.size()){
			    		cout<<"Type the number of the shelf " ;
			    		int m=0;
			    		cin>>m;
			    		PrintBook pb;
			    		cout<<"Type the name of the book ";
						string name;
						cin>>name;
						cout<<"Type the quantaty of books: ";
						int pages;
						cin>> pages;
						pb.setName(name);
						pb.setPages(pages);
						bshelfs[n].addBook(pb,m-1);
						}
					else{
						cout<<"Error.Try again";
					}
					
				}
				break;
			case 4:
			    for (int i=0; i<bshelfs.size();i++){
					cout<<"Shelfsssss"<<i+1<< endl;
					bshelfs[i].Print();
				}
        		break;
			}
		}
		cout<<"BYE!!!HAVE A ....NICE DAY!!! ";
		return 0;
}
