
#ifndef CARRIER_H_
#define CARRIER_H_
#include <string>
#include "aircraft.h"
#include "Aircraftvector.h"
#include "aircraft.h"

class Carrier {
public:
//private:
	int health;
	Aircraft_vector aircrafts;
	unsigned int aircraft_count;
//protected:
	std::string name;
	unsigned int ammo;

	Carrier(std::string name, unsigned int ammo, int health);
	std::string get_stats();
	void add_aircraft(Aircraft& aircraft);
	std::string get_all_aircraft_stats();
	void refill_aircrafts();
	void set_health(int damage);
	int get_health();
	int damage();
};

#endif
