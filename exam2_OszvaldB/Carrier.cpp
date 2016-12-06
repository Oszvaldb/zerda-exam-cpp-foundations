#include <string>
#include "Carrier.h"
using namespace std;

Carrier::Carrier(std::string name, unsigned int ammo, int health) :aircrafts() {
this->name = name;
this->ammo = ammo;
this->health = health;
aircraft_count = 0;
}

std::string Carrier::get_stats() {
	std::string output = "";
	output += name + ": ";
	output += "health: " + to_string(health);
	output += ", ammo: " + to_string(ammo) + "\n";
	output += get_all_aircraft_stats();
	return output;
}
std::string Carrier::get_all_aircraft_stats() {
	std::string stats = "";
	for (int i = 0; i < aircrafts.get_size(); ++i) {
		stats += aircrafts.at(i).get_stats() + "\n";
	}
	return stats;
}

void Carrier::add_aircraft(Aircraft& aircraft) {
	aircrafts.push_back(aircraft);
	aircraft_count++;
}

void Carrier::refill_aircrafts() {
	for(int i = 0; i <= aircraft_count; ++i) {
		aircrafts.get_aircraft_by_id(i).refill();
		ammo -= aircrafts.get_aircraft_by_id(i).max_ammo;
	}
}

void Carrier::set_health(int damage) {
	health -= damage;
}

int Carrier::get_health() {
	return health;
}
int Carrier::damage() {
	int damage = 0;
	for(int j = 0; j <= aircraft_count; ++j) {
		damage += aircrafts.get_aircraft_by_id(j).get_ammo() * aircrafts.get_aircraft_by_id(j).base_damage;
	}
	return damage;
}
