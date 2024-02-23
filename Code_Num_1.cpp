/*    [CODE NUMBER 1]
      Full Name 	: Deepthi Jibu Valachery
      Student ID 	: [redacted]
      Course 		: [redacted]
      Coursework 	: Assignment 1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int doors, bricksRequired;
	int pallet;
	int contractor;
	
	float areaWarehouse, areaDoor, areaBrick;
	float widthWarehouse, heightWarehouse, lengthWarehouse;
	float wallArea1, wallArea2, walls;
	float widthDoor, heightDoor;
	float tenPercent, totalBricks;
	
	double palletCost, brickCost, dailyFee, contractorFee, totalCost;
	double days, palletPurchase, numPallet, numDays;
	
	
	cout << "Please enter the width of the warehouse in feet: ";
	cin >> widthWarehouse;
	cout << endl;
	
	cout << "Please enter the length of the warehouse in feet: " ;
	cin >> lengthWarehouse;
	cout << endl;
	
	cout << "Please enter the height of the warehouse in feet: ";
	cin >> heightWarehouse;
	cout << endl;
	
	cout << "Please enter the amount of doors in the warehouse: ";
	cin >> doors;
	cout << endl;
	
	cout << "Please enter the width of the door: ";
	cin >> widthDoor;
	cout << endl;
	
	cout << "Please enter the height of the door: ";
	cin >> heightDoor;
	cout << endl;
	
	
	wallArea1 = (lengthWarehouse * heightWarehouse) * 2;
	wallArea2 = (widthWarehouse * heightWarehouse) * 2;
	walls = wallArea1 + wallArea2;										     // Area of the walls of the warehouse
	
	areaBrick = 1 * 0.75; //Width * Height
	
	areaDoor = widthDoor * heightDoor;
	areaWarehouse = walls - (areaDoor * doors);							   // Area of the warehouse without doors
	
	bricksRequired = (areaWarehouse / areaBrick);							 // Exact number of bricks required for warehouse 
	
	tenPercent = bricksRequired * 0.1;
	totalBricks = bricksRequired + tenPercent;							   // 10% added to account for wastage
	
	
	cout << "If each pallet has 312 bricks, enter the cost of a pallet: $";
	cin >> palletCost;
	cout << endl;
	
	
	pallet = 312;
	palletPurchase = (totalBricks * 1.0) / pallet;						// The amount of pallet of bricks to be purchased
	
	numPallet = ceil(palletPurchase);									        // The amount of pallet as an integer
	
	brickCost = numPallet * palletCost;									      // The cost of the bricks
	
	
	cout << "A contractor can lay 500 bricks per day, enter the contractor's daily fee: $";
	cin >> dailyFee;
	cout << endl;
	
	
	contractor = 500;

	days = totalBricks / contractor;									        // Number of days the contractor will take to lay bricks
	
	numDays = ceil (days);												            // The number of days as an integer
	
	contractorFee = numDays * dailyFee;									      // The contractor's fee to lay the bricks
	
	totalCost = brickCost + contractorFee;								    // The total cost to lay bricks for the warehouse
	
	cout << endl;
	cout << endl;
	
	
	cout << "The exact number of bricks required: 							" <<  bricksRequired << endl;
	
	cout << "The number of bricks required accounting for wastage: 					" << totalBricks << endl;
	
	cout << "The number of pallets of bricks to be purchased: 					" << numPallet << endl;
	
	cout << "The cost of the bricks: 								$" << brickCost << endl;
	
	cout << endl;
	
	cout << "The number of days the contracter will take and the contractor's daily rate: 		" << numDays << " Days and $" << dailyFee << endl;
	
	cout << "The contractor's fee: 									$" << contractorFee << endl;
	
	cout << endl;
	
	cout << "The total cost to lay the bricks for the warehouse: 					$" << totalCost << endl;
	
	
	
return 0;
}
