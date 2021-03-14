#include "Vehicle.h"
#include "VehicleList.h"
#include "Crossover.h"
#include "Limousine.h"
#include "Pickup.h"
#include "Truck.h"
#include "LandTrain.h"

#include <memory>
using namespace std;

VehicleList vlist;

int main() {
	vector<Wheel> wheels(4, Wheel{"Winter tyre"});
	vlist.add(make_unique<Crossover>(true, 4, "THX-1138", 1500, "Lada-Kalina", "Vlad Kostyan", wheels, Window{ "Tanned" }, Door{"Automatic"}));
	cout << "=============================================" << endl;
	vlist.add(make_unique<Limousine>(1280, 345, "FF-6u7", 2700, "Maybah", "A. Navalny", wheels, Window{ "Ocean Blue" }, Door{"Electric"}));
	cout << "=============================================" << endl;
	vlist.add(make_unique<Pickup>(8000, 1, "DTY-099", 3330, "Mercedes Benze", "Putin V. V.", wheels, Window{ "Gloomy Dark" }, Door{"Mechanic"}));
	cout << "=============================================" << endl;
	vlist.add(make_unique<Truck>(false, 5000, "QQR-30", 4300, "Volwswagen", "Plotnikov V. V.", wheels, Window{ "Metallic Grey" }, Door{"Stylish"}));
	cout << "=============================================" << endl;
	vlist.add(make_unique<LandTrain>(TRAILER_ARRANGEMENT::B_TRIPLE, 10000, "ZXCV", 47790, "Mitsubishi", "Akira Yaaoka", wheels, Window{ "Sunlight" }, Door{"Solemn"}));
	cout << "=============================================" << endl;

	for (auto& it : vlist) {
		cout << it->drive() << endl;
		cout << it->getDescription() << endl;
		cout << "=============================================" << endl;
	}

	cout << "Before Deletion!" << endl;

	vlist.clear();

	cout << "After Deletion!" << endl;

	return 0;
}