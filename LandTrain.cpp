#include "LandTrain.h"

LandTrain::LandTrain(TRAILER_ARRANGEMENT _arrangementType,
	size_t _cargoLoad, const string& _model, unsigned int _horsePower, const string& _name, const string& _owner,
	const vector<Wheel>& _wheels, const Window& _window, const Door& _door)
	: CargoCar{ _cargoLoad, _model, _horsePower, _name, _owner, _wheels, _window, _door }, arrangementType(_arrangementType) { 
	cout << "LandTrain has been created!" << endl;
}

TRAILER_ARRANGEMENT LandTrain::getArrangementType() {
	return arrangementType;
}

void LandTrain::setArrangementType(TRAILER_ARRANGEMENT _arrangementType) {
	arrangementType = _arrangementType;
}

string LandTrain::drive() {
	return "I'm driving in a LandTrain! Hmmm...";
}

LandTrain::~LandTrain() { 
	cout << "LandTrain has been destroyed!" << endl;
}

string LandTrain::getDescription() {
	stringstream ss;

	ss << "Vehicle type: LandTrain" << endl;
	ss << "Engine: " << getVehicleEngine()->getEngineModel() << endl;
	ss << "Horse power: " << getVehicleEngine()->getHorsePower() << endl;
	ss << "Vehicle name: " << getVehicleName() << endl;
	ss << "Vehicle owner: " << getVehicleOwner() << endl;
	ss << "Number of wheels: " << getWheels().size() << endl;
	ss << "Wheel type: " << getWheels().at(0).getTyre() << endl;
	ss << "Windows glass: " << getWindow().getGlass() << endl;
	ss << "Door lock: " << getDoor().getLock() << endl;
	ss << "Cargo load: " << getCargoLoad() << endl;
	ss << "Arrangement type: " << static_cast<size_t>(getArrangementType()) << endl;

	return ss.str();
}