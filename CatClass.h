#include<iostream>
using namespace std;

class cat{
	string color;
	int age;
	public:
		cat(string colorIn,int ageIn){
			color = colorIn;
			age = ageIn;
		}
		
		void info(){
			cout<<"Cat color is "<<color<<endl;
			cout<<"Cat age is "<<age<<endl;
		}
		
		void meow(){
			cout<<"MMMMMMEEEOWWWWWWWWWWWWWWW"<<endl;
		}
	
};
