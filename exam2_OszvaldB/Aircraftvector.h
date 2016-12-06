
#ifndef AIRCRAFTVECTOR_H_
#define AIRCRAFTVECTOR_H_
#include "aircraft.h"


class Aircraft_vector {
private:
	 Aircraft** aircrafts;
	  unsigned int aircraft_count;
public:
	Aircraft_vector();
	~Aircraft_vector();
	const unsigned int get_size();
	void push_back(Aircraft& aircrafts);
	Aircraft& at(unsigned int index);
	Aircraft& get_aircraft_by_id(unsigned int id);
};

#endif
