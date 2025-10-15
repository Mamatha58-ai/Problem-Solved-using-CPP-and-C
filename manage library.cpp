#include<bits/stdc++.h>
using namespace std;

class Book{
	public:
		int id;
		string title;
		string author;
		int availablecopies ;
		Book(int id,string title,string author,int availablecopies){
			this->id = id ;
			this->title = title;
			this->author = author ;
			this->availablecopies = availablecopies;
		}
		void displayBook(){
             cout << id << title << author << availablecopies << endl;
		}
};
class user{
	public:
	int id;
	string name;
	int phonenumber;
	vector<int>InfoBook;
	
	user (int id,string name,int phonenumber){
		this->id = id;
		this->name = name;
		this->phonenumber = phonenumber;
	}
	
	void borrowbook(int bookid){
		InfoBook.push_back(bookid);
	}
	void returnbook(int bookid){
		auto it = find(InfoBook.begin(),InfoBook.end(),bookid);
		InfoBook.erase(it);
	}	
};

class library{
	public:
		vector<Book>books;
		vector<user>users;
		void addbook(Book b){
			books.push_back(b);
		}
		void adduser(user u){
			users.push_back(u);
		}
		void borrowbook(int userid,int bookid){
			bool f = 0;
			for(auto &b : books){
				if(b.id == bookid && b.availablecopies > 0){
					for(auto &u : users){
						if(u.id == userid){
							u.borrowbook(bookid);
							b.availablecopies --;
						   f = 1;
						   	cout << u.name <<" borrowed " << b.title << endl; 
						}
					}
				}
			}
			if(f==0) cout <<"book is not available\n" ;
		}
		void returnbook(int userid,int bookid){
			for(auto &b : books){
				if(b.id == bookid){
					for(auto &u : users){
						if(u.id == userid){
							u.returnbook(bookid);
							b.availablecopies ++;
							cout << u.name <<" returened \n" ; 
							return ;
						}
					}
				}
			}
			cout << " Invalid return \n"; 
		}
};
int main(){
	library lib;
	Book b1(1,"java","mamatha",78);
	user u1(1,"swetha",987654321);
	lib.addbook(b1);
	lib.adduser(u1);
	b1.displayBook();
}
