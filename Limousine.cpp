#include "Limousine.h"

Limousine::Limousine(size_t _length,
	size_t _passengerCount, const string& _model, unsigned int _horsePower, const string& _name, const string& _owner,
	const vector<Wheel>& _wheels, const Window& _window, const Door& _door)
	: PassengerCar{ _passengerCount, _model, _horsePower, _name, _owner, _wheels, _window, _door }, length(_length) { 
	cout << "Limousine has been created!" << endl;
}

size_t Limousine::getLength() {
	return length;
}

void Limousine::setLength(size_t _length) {
	length = _length;
}

string Limousine::drive() {
	return "I'm driving in a Limousine! Vzzzhh...";
}

Limousine::~Limousine() { 
	cout << "Limousine has been destroyed!" << endl;
}

string Limousine::getDescription() {
	stringstream ss;

	ss << "Vehicle type: Limousine" << endl;
	ss << "Engine: " << getVehicleEngine()->getEngineModel() << endl;
	ss << "Horse power: " << getVehicleEngine()->getHorsePower() << endl;
	ss << "Vehicle name: " << getVehicleName() << endl;
	ss << "Vehicle owner: " << getVehicleOwner() << endl;
	ss << "Number of wheels: " << getWheels().size() << endl;
	ss << "Wheel type: " << getWheels().at(0).getTyre() << endl;
	ss << "Windows glass: " << getWindow().getGlass() << endl;
	ss << "Door lock: " << getDoor().getLock() << endl;
	ss << "Passenger capacity: " << getPassengerCount() << endl;
	ss << "Limousine length: " << getLength() << endl;

	return ss.str();
}