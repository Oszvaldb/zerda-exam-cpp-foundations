#include <iostream>
#include "F35.h"
#include "F16.h"
#include "Carrier.h"
#include "aircraft.h"
#include "Aircraftvector.h"
#include <string>
using namespace std;

void fight(Carrier, Carrier) {

}

int main() {

	Carrier nimitz ("Nimitz", 5000, 5000);
	cout << nimitz.get_stats();
	F35 f1;


	Carrier bush ("Bush", 4500, 4500);
	return 0;
}
