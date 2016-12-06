
#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_
#include <string>

class Aircraft {
public:
//private:
	int ammo;
	static unsigned int LAST_ID;
	unsigned int id;
//protected:
	std::string type_name;
	int max_ammo;
	int base_damage;
//public:
	Aircraft();
	~Aircraft();
	const unsigned int get_id() const;
	int get_ammo();
	std::string get_stats();
	std::string get_type();
	void refill();
};

#endif /* AIRCRAFT_H_ */
