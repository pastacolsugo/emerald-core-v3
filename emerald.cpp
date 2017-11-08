#ifndef LIQUIDCRYSTALFAKE_H
#include "LiquidCrystalFake.h"
#include "SerialFake.hpp"
#include "define.hpp"

liquid lcd;

void setup (){
	// init procedure

	// serial init
	Serial.begin (115200);
	Serial.print ("Emerald Core v3\nstarting up ...\n");

	// lcd init
	Serial.print ("lcd init ... ");
	// lcd.begin(16, 2);
	Serial.print ("DONE\n");

	// sd card init
	Serial.print ("sd card init ... ");
	Serial.print ("DONE\n");

	// startup logging

	// program loading
	Serial.print ("program loading ... ");
	Serial.print ("DONE\n");

	// sensor init
	// general peripherals init
}

void loop (){
	// read serial
	char * buffer = (char *) malloc(serialCommandMaxLength * sizeof (char));

	if (buffer != NULL) {
		buffer
	}
	// parsing
	// command apply

	// read sensors

	// compute output

	// apply output

	// screen update

	// log on sd
}