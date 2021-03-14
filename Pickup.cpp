#include "Pickup.h"

Pickup::Pickup(size_t _cargoLoad,
	size_t _passengerCount, const string& _model, unsigned int _horsePower, const string& _name, const string& _owner,
	const vector<Wheel>& _wheels, const Window& _window, const Door& _door)
	: PassengerCar{ _passengerCount, _model, _horsePower, _name, _owner, _wheels, _window, _door }, cargoLoad(_cargoLoad) {
	cout << "Pickup has been created!" << endl;
}

size_t Pickup::getCargoLoad() {
	return cargoLoad;
}

void Pickup::setCargoLoad(size_t _cargoLoad) {
	cargoLoad = _cargoLoad;
}

string Pickup::drive() {
	return "I'm driving in a Pickup! Pew-pew...";
};

Pickup::~Pickup() { 
	cout << "Pickup has been destroyed!" << endl;
}

string Pickup::getDescription() {
	stringstream ss;

	ss << "Vehicle type: Pickup" << endl;
	ss << "Engine: " << getVehicleEngine()->getEngineModel() << endl;
	ss << "Horse power: " << getVehicleEngine()->getHorsePower() << endl;
	ss << "Vehicle name: " << getVehicleName() << endl;
	ss << "Vehicle owner: " << getVehicleOwner() << endl;
	ss << "Number of wheels: " << getWheels().size() << endl;
	ss << "Wheel type: " << getWheels().at(0).getTyre() << endl;
	ss << "Windows glass: " << getWindow().getGlass() << endl;
	ss << "Door lock: " << getDoor().getLock() << endl;
	ss << "Passenger capacity: " << getPassengerCount() << endl;
	ss << "Cargo load: " << getCargoLoad() << endl;

	return ss.str();
}