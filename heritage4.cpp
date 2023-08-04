#include<iostream>
#include<string.h>

using namespace std;

class A{
	public :
		int id,salary,experience;
		char name[100],role[100],comp_name[100],address[100],email[100],contact[100];
		
		void setter(){
			cout<<"enter id = ";
			cin>>id;
			
			cout<<"enter name = ";
			cin>>name;
			
			cout<<"enter role = ";
			cin>>role;
		}
};

class B : public A{
	public :
		void setter()
		{
		
		cout<<"enter salary = ";
		cin>>salary;
		
		cout<<"enter experience = ";
	    cin>>experience;
	}
};

class C : public B{
	
	public :
	
	 void setter(){
	 	
	 	cout<<"enter company name  = ";
	    cin>> comp_name;
	    
	    cout<<"enter address = ";
		cin>>address;
	 }
	 
	 void getter(){
	 	cout<<"name = "<<name<<endl
	 	    <<"role = "<<role<<endl
	 	    <<"salary = "<<salary<<endl;
	 }
};

class D : public C{
	
	public : 
	
	void getter(){
		
		cout<<"id = "<<id<<endl
		   <<"name = "<<name<<endl
		    <<"role = "<<role<<endl
		    <<"salary = "<<salary<<endl
		    <<"experience = "<<experience<<endl
		    <<"company name= "<<comp_name<<endl
		    <<"email= "<<email<<endl
		    <<"contact = "<<contact<<endl;
		    
	}
};


int main()
{
	D o2;
	o2.A::setter();
	o2.B::setter();
	o2.C::setter();
	o2.D::setter();
	
	cout<<endl;
	
	
	o2.getter();
}
	
