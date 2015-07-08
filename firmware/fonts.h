/*
Multifont GFX library is adapted from Adafruit_GFX library by Paul Kourany
v1.0.0, May 2014 Initial Release
v1.0.1, June 2014 Font Compilation update

Please read README.pdf for details
*/

//  fonts.h

#ifndef _fonts_h
#define _fonts_h

#include "application.h"

//Font selection for compiling - comment out or uncomment definitions as required
//NOTE: GLCDFONT is default font and always included
//#define TIMESNEWROMAN8
//#define CENTURYGOTHIC8
//#define ARIAL8
//#define COMICSANSMS8
//#define TESTFONT

// Font selection descriptors - Add an entry for each new font and number sequentially
#define FIXEDSYS 0

#define FONT_START 0
#define FONT_END 1

struct FontDescriptor
{
	uint8_t	width;		// width in bits
	uint8_t	height; 	// char height in bits
	uint16_t offset;	// offset of char into char array
};

extern const uint8_t fixedsysExcelsior301_11ptBitmaps[];
extern const FontDescriptor fixedsysExcelsior301_11ptDescriptors[];

#endif
