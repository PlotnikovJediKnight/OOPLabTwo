#include "Crossover.h"

Crossover::Crossover(bool _fullTimeAllDrive,
	size_t _passengerCount, const string& _model, unsigned int _horsePower, const string& _name, const string& _owner,
	const vector<Wheel>& _wheels, const Window& _window, const Door& _door) 
	: PassengerCar{_passengerCount, _model, _horsePower, _name, _owner, _wheels, _window, _door }, fullTimeAllDrive(_fullTimeAllDrive) { 
	cout << "Crossover has been created!" << endl;
}

bool Crossover::isFullTimeAllDrive() {
	return fullTimeAllDrive;
}

void Crossover::setFullTimeAllDrive(bool _flag) {
	fullTimeAllDrive = _flag;
}

string Crossover::drive() {
	return "I'm driving in a Crossover! Brrr...";
}

Crossover::~Crossover() { 
	cout << "Crossover has been destroyed!" << endl;
}

string Crossover::getDescription() {
	stringstream ss;

	ss << "Vehicle type: Crossover" << endl;
	ss << "Engine: " << getVehicleEngine()->getEngineModel() << endl;
	ss << "Horse power: " << getVehicleEngine()->getHorsePower() << endl;
	ss << "Vehicle name: " << getVehicleName() << endl;
	ss << "Vehicle owner: " << getVehicleOwner() << endl;
	ss << "Number of wheels: " << getWheels().size() << endl;
	ss << "Wheel type: " << getWheels().at(0).getTyre() << endl;
	ss << "Windows glass: " << getWindow().getGlass() << endl;
	ss << "Door lock: " << getDoor().getLock() << endl;
	ss << "Passenger capacity: " << getPassengerCount() << endl;
	ss << "Has full time all-drive: " << isFullTimeAllDrive() << endl;

	return ss.str();
}