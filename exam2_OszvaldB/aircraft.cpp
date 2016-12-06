#include "aircraft.h"
#include <string>
using namespace std;

Aircraft::Aircraft() {
	this->ammo = 0;
}

const unsigned int Aircraft::get_id() const {
  return id;
}

int Aircraft::get_ammo() {
	return ammo;
}

void Aircraft::refill() {
	this->ammo = max_ammo;
}

std::string Aircraft::get_stats() {
	return "Type: " + type_name + "Ammo: " + to_string(ammo) + ", Base damage: " + to_string(base_damage) + ", All damage: " + to_string(ammo * base_damage);
}

std::string Aircraft::get_type() {
	return type_name;
}

Aircraft::~Aircraft() {

}

