#include "Truck.h"

Truck::Truck(bool _hasForkLift,
	size_t _cargoLoad, const string& _model, unsigned int _horsePower, const string& _name, const string& _owner,
	const vector<Wheel>& _wheels, const Window& _window, const Door& _door)
	: CargoCar{ _cargoLoad, _model, _horsePower, _name, _owner, _wheels, _window, _door }, forkLiftPresent(_hasForkLift) { 
	cout << "Truck has been created!" << endl;
}

bool Truck::hasForkLift() {
	return forkLiftPresent;
}

void Truck::setForkLiftPresence(bool _hasForkLift) {
	forkLiftPresent = _hasForkLift;
}

string Truck::drive() {
	return "I'm driving in a Truck! Kaboom...";
}

Truck::~Truck() { 
	cout << "Truck has been destroyed!" << endl;
}

string Truck::getDescription() {
	stringstream ss;

	ss << "Vehicle type: Truck" << endl;
	ss << "Engine: " << getVehicleEngine()->getEngineModel() << endl;
	ss << "Horse power: " << getVehicleEngine()->getHorsePower() << endl;
	ss << "Vehicle name: " << getVehicleName() << endl;
	ss << "Vehicle owner: " << getVehicleOwner() << endl;
	ss << "Number of wheels: " << getWheels().size() << endl;
	ss << "Wheel type: " << getWheels().at(0).getTyre() << endl;
	ss << "Windows glass: " << getWindow().getGlass() << endl;
	ss << "Door lock: " << getDoor().getLock() << endl;
	ss << "Cargo load: " << getCargoLoad() << endl;
	ss << "Has forklift: " << hasForkLift() << endl;

	return ss.str();
}