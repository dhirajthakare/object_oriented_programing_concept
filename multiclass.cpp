#include<iostream>
using namespace std;
class calculator{
	private:
		int a,b;
		int add,mul,sub;
		float avg;
		public:
	void getdata()
	{
		cout<<"Enter the two number";
		cin>>a>>b;
		
	}
	void addmulsub(){
		add=a+b;
		mul=a*b;
		sub=a-b;
		avg=(float)a/b;
		
	}
	void display(){
		cout<<"Addition of two number is:"<<add<<endl;
		cout<<"multiplication of two number is:"<<mul<<endl;
		cout<<"substraction of two number is:"<<sub<<endl;
		cout<<"a div by b is:"<<avg<<endl;
	}
};
class operation{
	private:
		long n,fact=1,i;
public:	void factorial(){
		cout<<"Enter the a positive number";
		cin>>n;
		for(i=2;i<=n;i++)
		fact=fact*i;
		cout<<"factorial of two number is:"<<fact;
	}
};
int main() {
	calculator obj1;
	obj1.getdata();
	obj1.addmulsub();
	obj1.display();
	operation obj2;
	obj2.factorial();
	
}
