/*
 * Aircraftvector.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: zoltanszabo
 */

#include "Aircraftvector.h"

Aircraft_vector::Aircraft_vector() {
	aircrafts = NULL;
	aircraft_count = 0;
}

Aircraft_vector::~Aircraft_vector() {
	if (aircrafts != NULL) {
		delete[] aircrafts;
		aircrafts = NULL;
	}
}

const unsigned int Aircraft_vector::get_size() {
  return aircraft_count;
}

void Aircraft_vector::push_back(Aircraft& aircraft) {
  Aircraft** temp = new Aircraft*[aircraft_count + 1];
  if (aircrafts != NULL) {
    for (int i = 0; i < aircraft_count; ++i) {
      temp[i] = aircrafts[i];
    }
  }
  temp[aircraft_count] = &aircraft;
  delete[] aircrafts;
  aircrafts = temp;
  ++aircraft_count;
}

Aircraft& Aircraft_vector::at(unsigned int index) {
  return *(aircrafts[index]);
}

Aircraft& Aircraft_vector::get_aircraft_by_id(unsigned int id) {
  for (int i = 0; i < aircraft_count; ++i) {
    if (aircrafts[i]->get_id() == id) {
      return *aircrafts[i];
    }
  }
}
