/*
Multifont GFX library is adapted from Adafruit_GFX library by Paul Kourany
v1.0.0, May 2014 Initial Release
v1.0.1, June 2014 Font Compilation update

Please read README.pdf for details
*/

// Font data
 
#include "fonts.h"

const uint8_t fixedsysExcelsior301_11ptBitmaps[] = 
{
	0x20, 0x7F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x60, 0x60, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x6C, 0xFE, 0x6C, 0x6C, 0x6C, 0xFE, 0x6C, 0x6C, 0x00, 0x00, 0x00, 
	0x30, 0x30, 0xFC, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0xCC, 0x78, 0x30, 0x30, 0x00, 
	0x00, 0x70, 0xDA, 0x76, 0x0C, 0x18, 0x30, 0x6E, 0x5B, 0x1B, 0x0E, 0x00, 0x00, 
	0x00, 0x00, 0xF8, 0xD8, 0x70, 0xC0, 0xDE, 0xCC, 0xCC, 0x76, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x70, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x30, 0x00, 
	0x00, 0x00, 0xE0, 0x60, 0x30, 0x30, 0x30, 0x30, 0x30, 0x60, 0x60, 0xC0, 0x00, 
	0x00, 0x00, 0x00, 0x6C, 0x38, 0xFE, 0x38, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x60, 0xC0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0xC0, 0xC0, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xDC, 0xDC, 0xCC, 0xEC, 0xEC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x38, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0x0C, 0x38, 0x0C, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x6C, 0x6C, 0x6C, 0xCC, 0xFE, 0x0C, 0x0C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xC0, 0xC0, 0xF8, 0x0C, 0x0C, 0x18, 0xF0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x38, 0x60, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xEC, 0x78, 0xDC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xCC, 0xCC, 0x7C, 0x18, 0x30, 0x70, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x60, 0xC0, 0x00, 
	0x00, 0x00, 0x1C, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xE0, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0x18, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFF, 0xC3, 0xCF, 0xDB, 0xDB, 0xCF, 0xC0, 0x7F, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xCC, 0xF8, 0xCC, 0xCC, 0xCC, 0xF8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xC0, 0xC0, 0xC0, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xD8, 0xF0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xC0, 0xC0, 0xDC, 0xCC, 0xCC, 0x7C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xF0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xF0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xD8, 0xD8, 0xF0, 0xD8, 0xD8, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xC6, 0xEE, 0xD6, 0xD6, 0xD6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xCC, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x18, 0x0C, 0x00, 
	0x00, 0x00, 0xFC, 0xCC, 0xCC, 0xF8, 0xD8, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xC6, 0xC6, 0xD6, 0xD6, 0xD6, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0x68, 0x30, 0x30, 0x58, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xFC, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xC0, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 
	0x00, 0x00, 0xC0, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0C, 0x0C, 0x00, 0x00, 
	0x00, 0x00, 0xF0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xF0, 
	0x30, 0x78, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0xE0, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x78, 0x0C, 0x0C, 0x7C, 0xCC, 0xCC, 0x7C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xC0, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xF8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x78, 0xCC, 0xC0, 0xC0, 0xC0, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0C, 0x7C, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xFC, 0xC0, 0xC0, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x7C, 0x60, 0x60, 0xFC, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7C, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0x0C, 0xF8, 
	0x00, 0x00, 0xC0, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x30, 0xF0, 0x30, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x18, 0x18, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF0, 
	0x00, 0x00, 0xC0, 0xCC, 0xCC, 0xD8, 0xF0, 0xD8, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xF0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xFC, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xC6, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xF8, 0xC0, 0xC0, 0xC0, 
	0x00, 0x00, 0x00, 0x7C, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0x0C, 0x0C, 
	0x00, 0x00, 0x00, 0xCC, 0xDC, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7C, 0xC0, 0xC0, 0x78, 0x0C, 0x0C, 0xF8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0xFC, 0x60, 0x60, 0x60, 0x60, 0x60, 0x3C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x7C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xC6, 0xD6, 0xD6, 0xD6, 0xD6, 0x6C, 0x6C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xCC, 0xCC, 0x78, 0x30, 0x78, 0xCC, 0xCC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x0C, 0x18, 0xF0, 
	0x00, 0x00, 0x00, 0xFC, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFC, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x38, 0x30, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x30, 0x30, 0x18, 0x00, 
	0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
	0x00, 0x00, 0xE0, 0x60, 0x60, 0x30, 0x18, 0x30, 0x60, 0x60, 0x60, 0xC0, 0x00, 
	0x00, 0x00, 0xFB, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const FontDescriptor fixedsysExcelsior301_11ptDescriptors[] = 
{
	{4, 13, 0},   	    // " "
	{4, 13, 13}, 		// ! 
	{6, 13, 26}, 		// " 
	{7, 13, 39}, 		// # 
	{6, 13, 52}, 		// $ 
	{8, 13, 65}, 		// % 
	{7, 13, 78}, 		// & 
	{2, 13, 91}, 		// ' 
	{4, 13, 104}, 		// ( 
	{4, 13, 117}, 		// ) 
	{7, 13, 130}, 		// * 
	{6, 13, 143}, 		// + 
	{3, 13, 156}, 		// , 
	{6, 13, 169}, 		// - 
	{3, 13, 182}, 		// . 
	{6, 13, 195}, 		// / 
	{6, 13, 208}, 		// 0 
	{5, 13, 221}, 		// 1 
	{6, 13, 234}, 		// 2 
	{6, 13, 247}, 		// 3 
	{7, 13, 260}, 		// 4 
	{6, 13, 273}, 		// 5 
	{6, 13, 286}, 		// 6 
	{6, 13, 299}, 		// 7 
	{6, 13, 312}, 		// 8 
	{6, 13, 325}, 		// 9 
	{3, 13, 338}, 		// : 
	{3, 13, 351}, 		// ; 
	{6, 13, 364}, 		// < 
	{6, 13, 377}, 		// = 
	{6, 13, 390}, 		// > 
	{6, 13, 403}, 		// ? 
	{8, 13, 416}, 		// @ 
	{6, 13, 429}, 		// A 
	{6, 13, 442}, 		// B 
	{6, 13, 455}, 		// C 
	{6, 13, 468}, 		// D 
	{6, 13, 481}, 		// E 
	{6, 13, 494}, 		// F 
	{6, 13, 507}, 		// G 
	{6, 13, 520}, 		// H 
	{4, 13, 533}, 		// I 
	{6, 13, 546}, 		// J 
	{6, 13, 559}, 		// K 
	{6, 13, 572}, 		// L 
	{7, 13, 585}, 		// M 
	{7, 13, 598}, 		// N 
	{6, 13, 611}, 		// O 
	{6, 13, 624}, 		// P 
	{6, 13, 637}, 		// Q 
	{6, 13, 650}, 		// R 
	{6, 13, 663}, 		// S 
	{6, 13, 676}, 		// T 
	{6, 13, 689}, 		// U 
	{6, 13, 702}, 		// V 
	{7, 13, 715}, 		// W 
	{6, 13, 728}, 		// X 
	{6, 13, 741}, 		// Y 
	{6, 13, 754}, 		// Z 
	{4, 13, 767}, 		// [ 
	{6, 13, 780}, 		// \ 
	{4, 13, 793}, 		// ] 
	{6, 13, 806}, 		// ^ 
	{8, 13, 819}, 		// _ 
	{4, 13, 832}, 		// ` 
	{6, 13, 845}, 		// a 
	{6, 13, 858}, 		// b 
	{6, 13, 871}, 		// c 
	{6, 13, 884}, 		// d 
	{6, 13, 897}, 		// e 
	{6, 13, 910}, 		// f 
	{6, 13, 923}, 		// g 
	{6, 13, 936}, 		// h 
	{6, 13, 949}, 		// i 
	{5, 13, 962}, 		// j 
	{6, 13, 975}, 		// k 
	{6, 13, 988}, 		// l 
	{7, 13, 1001}, 		// m 
	{6, 13, 1014}, 		// n 
	{6, 13, 1027}, 		// o 
	{6, 13, 1040}, 		// p 
	{6, 13, 1053}, 		// q 
	{6, 13, 1066}, 		// r 
	{6, 13, 1079}, 		// s 
	{6, 13, 1092}, 		// t 
	{6, 13, 1105}, 		// u 
	{6, 13, 1118}, 		// v 
	{7, 13, 1131}, 		// w 
	{6, 13, 1144}, 		// x 
	{7, 13, 1157}, 		// y 
	{6, 13, 1170}, 		// z 
	{5, 13, 1183}, 		// { 
	{2, 13, 1196}, 		// | 
	{5, 13, 1209}, 		// } 
	{8, 13, 1222}, 		// ~ 
};

/*
const FONT_INFO fixedsysExcelsior301_11ptFontInfo =
{
	13, //  Character height
	'!', //  Start character
	'~', //  End character
	fixedsysExcelsior301_11ptDescriptors, //  Character descriptor array
	fixedsysExcelsior301_11ptBitmaps, //  Character bitmap array
};
*/
