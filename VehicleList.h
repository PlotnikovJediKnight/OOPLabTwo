#pragma once
#include <list>
#include <memory>
#include <iostream>

#include "Vehicle.h"


class VehicleList {
private:
	std::list<std::unique_ptr<Vehicle>> inList;

public:
	VehicleList();
	void add(std::unique_ptr<Vehicle>);
	void clear();
	~VehicleList();

	auto begin() const {
		return inList.begin();
	}

	auto end() const {
		return inList.end();
	}

	auto back() {
		return &inList.back();
	}
};