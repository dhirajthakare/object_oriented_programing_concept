#include<iostream>
using namespace std;
class add{
	protected:
		int a,b,ad;
	public:	
	void addition(){
		cout<<"Enter the two number";
		cin>>a>>b;
		ad=a+b;
		cout<<"addition of two number :";
		cout<<ad<<endl;
	}
};
class sub{
	
	protected:
	int c,d,sb;
	public:
		
	void substraction(){
		cout<<"Enter the two number";
		cin>>c>>d;
		sb=c-d;
		cout<<"substraction is :"<<sb<<endl;
	}
};
class mul:public add, public sub{
	public:
	int e,f,md;
	public:
		
	void multy(){
		md=ad*sb;
		cout<<"multiply of addition and substraction is :"<<md<<endl;
	}

};


int main(){
	mul obj1;
	obj1.addition();
	obj1.substraction();
	obj1.multy();
	
}
