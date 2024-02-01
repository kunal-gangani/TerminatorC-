#include<iostream>
using namespace std;

class Exception{
	public:
		int age;
		int percentage;
		int marks;
		void SetData(){
			cout<<"Enter Your Age : ";
			cin>>age;
			cout<<"Enter Your Total Marks out off 300 : ";
			cin>>marks;
			cout<<"Enter your Percentage : ";
			cin>>percentage;
		}
};
int main(){
	Exception e;
	char err;
	e.SetData();
	try{
		if(e.age<=1 && e.age>5){
			cout<<" Student Age is : "<<e.age<<endl;
		}else{
			throw 1;
		}
		if(e.marks<0 && e.marks>300){
			cout<<" Student Marks is : "<<e.marks<<endl;
		}else{
			throw 2.1;
		}
		if(e.percentage<0 && e.percentage>100){
			cout<<" Student Percentage is : "<<e.percentage<<endl;
		}else{
			throw err;
		}
	}
	catch(int x){
		cout<<" Your Age must be Above 5 "<<endl;
	}
	catch(float y){
		cout<<" Your Marks must be Above 0 and Below 300 "<<endl;
	}
	catch(char z){
		cout<<" Your Percentage must be Above 0 and Below 100 "<<endl;
	}
	return 0;
}
