#ifndef STDIO_H
	#include <stdio.h>
	#define STDIO_H
#endif

#ifndef DEFINE_H
	#include "define.hpp"
	#define DEFINE_H
#endif

class serial {
private:
	uint32_t speed;

public:
	void begin (uint32_t s){
		speed = s;
	}

	void print (char c){
		printf("%c", c);
	}

	void print (char * s){
		printf("%s", s);
	}

	void print (uint32_t n){
		printf("%d", n);
	}

	char read (){
		char temp;	
		scanf ("%c", &temp);
		return temp;
	}

	void read (char * result){
		fgets (result, serialCommandMaxLength, stdin);
	}
}