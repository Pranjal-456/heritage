#include<iostream>
#include<string.h>

using namespace std;

class animal{
	public :
		int age;
		char name[100];
		char origing[100];
		
		void set(){
			cout<<"name = "<<endl;
			cin>>name;
			cout<<"age = "<<endl;
			cin>>age;
		}
};
class zebra{
	public :
		int age;
		char name[100];
		
		void setdata(){
			cout<<"name = "<<endl;
			cin>>name;
			cout<<"age = "<<endl;
			cin>>age;
		}
};
class dolphin : public zebra,public animal{
	
	public :
		void get(){
			cout<<"origing = "<<endl;
			cin>>origing;
		}
};

int main()
{
	dolphin o2;
	o2.setdata();
	o2.get();
}
