#include<iostream>
#include<string.h>

using namespace std;

class mother{
	public :
		int a=10;
		void setdata(){
			cout<<"method form class mother"<<endl;
		}
};
class daughter : public mother{
	public :
		int b=20;
		void setdata(){
			cout<<"method form class daughter"<<endl;
		}
};

int main()
{
	daughter o1;
	
	cout<<o1.b<<endl;
	o1.setdata();

}
