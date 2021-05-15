#include<iostream>
#include<vector>

using namespace std;
class ParkingSystem {
	vector<int> slots;
	
	int carId = 0;
	int price = 0;
	
	
	public:  
	
		ParkingSystem(int big, int medium, int small,int priceIn) {
	  		slots.push_back(0);
	  		slots.push_back(big);
	  		slots.push_back(medium);
	  		slots.push_back(small);
	  		
	  		price = priceIn;
 		}
 		
 		void Info(){
 			
		}
		
		bool parkCar(int carType){
			
		}
  
		int parkNum(int ID){
			
		}
		
		int parkCost(int ID){
		}
		
		
};
