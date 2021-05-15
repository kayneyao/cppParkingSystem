#include"parking.h"
#include<iostream>

using namespace std;
int main (){
	ParkingSystem* PS = new ParkingSystem(1,1,1,9);
	
	cout<<PS->publicData<<endl;
}
