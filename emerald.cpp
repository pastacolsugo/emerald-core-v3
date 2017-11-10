#ifndef DEFINE_H
	#include "define.hpp"
	#define DEFINE_H
#endif

#ifndef LIQUIDCRYSTALFAKE_H
	#include "LiquidCrystalFake.hpp"
	#define LIQUIDCRYSTALFAKE_H 
#endif

#ifndef SERIALFAKE_H
	#include "SerialFake.hpp"
	#define SERIALFAKE_H
#endif

liquid lcd;

void setup (){
	// init procedure

	// serial init

	// lcd init

	// sd card init

	// startup logging

	// program loading

	// sensor init
	// general peripherals init
}

void loop (){
	// read serial command
	// create buffer to store serial command
	char * buffer = (char *) malloc(serialCommandMaxLength+1 * sizeof (char));

	// chech allocation of buffer
	if (buffer == NULL) {
		Serial.print("buffer allocation error.\n");
	}

	// parsing


	// command apply

	// read sensors

	// compute output

	// apply output

	// screen update

	// log on sd
}