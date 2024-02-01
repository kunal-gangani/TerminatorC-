#include<iostream>
using namespace std;

class Car{
	public:
		void Sports(){
			cout<<" This is Sports Car Section "<<endl;
		}
};
class GermanCar : virtual public Car{
	public:
		void Porsche(){
			cout<<" Porsche 911 Turbo is an Example of German Sports Car "<<endl;
		}
};
class JapanCar : virtual public Car{
	public:
		void HondaCity(){
			cout<<" Honda City is an Example of Japanese Sports Car "<<endl;
		}
};
class FinalInfo : public GermanCar , public JapanCar{
	public:
		void Comparison(){
			cout<<" Both Cars are good based on their features.."<<endl;
		}
};
int main(){
	FinalInfo f;
	f.Sports();
	f.Porsche();
	f.HondaCity();
	f.Comparison();
	return 0;
}
