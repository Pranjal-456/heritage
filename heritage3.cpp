#include<iostream>
#include<string.h>

using namespace std;

class Emplaoyee{
	public :
		int id;
		char name[100];
		public :
			void set(){
				cout<<"enter id = "<<endl;
				cin>>id;
				cout<<"enter name = "<<endl;
				cin>>name;
			}
			void get(){
				cout<<"Emplaoyee id = "<<id<<endl
				    <<"Emplaoyee name = "<<name<<endl;
			}
};
class Emplaoyee1{
	public :
		
		char role[100];
		int salary;
		
		 public :
		 	void set1(){
		 		cout<<"enter role = "<<endl;
				cin>>role;
				cout<<"enter salary = "<<endl;
				cin>>salary;
			}
			
			void get1(){
				cout<<"enter role = "<<role<<endl
				    <<"enter salary = "<<salary<<endl;
			}
			 
};

	class Emplaoyee2 : public Emplaoyee1,public Emplaoyee {
		public :
			char contact[10];
			
		public :
			void print(){
				cout<<"enter contact = ";
				cin>>contact;
				cout<<"============"<<endl;
			}
			void print1(){
				cout<<"enter contact = "<<contact<<endl;
			}
			
};

int main()
{
	Emplaoyee2 u1;
	
	u1.set();
	u1.set1();
	u1.print();
	u1.get();
	u1.get1();
	u1.print1();
	
}

