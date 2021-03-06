#include <avr/pgmspace.h>
#include "shipdata.h"

const struct ship_point PROGMEM cobra3a_point[28] =
{
	{  32,    0,   76, 31, 15, 15, 15, 15},
	{ -32,    0,   76, 31, 15, 15, 15, 15},
	{   0,   26,   24, 31, 15, 15, 15, 15},
	{-120,   -3,   -8, 31,  7,  3, 10, 10},
	{ 120,   -3,   -8, 31,  8,  4, 12, 12},
	{ -88,   16,  -40, 31, 15, 15, 15, 15},
	{  88,   16,  -40, 31, 15, 15, 15, 15},
	{ 127,   -8,  -40, 31,  9,  8, 12, 12},
	{-127,   -8,  -40, 31,  9,  7, 10, 10},
	{   0,   26,  -40, 31,  6,  5,  9,  9},
	{ -32,  -24,  -40, 31, 10,  9, 11, 11},
	{  32,  -24,  -40, 31, 11,  9, 12, 12},
	{ -36,    8,  -40, 20,  9,  9,  9,  9},
	{  -8,   12,  -40, 20,  9,  9,  9,  9},
	{   8,   12,  -40, 20,  9,  9,  9,  9},
	{  36,    8,  -40, 20,  9,  9,  9,  9},
	{  36,  -12,  -40, 20,  9,  9,  9,  9},
	{   8,  -16,  -40, 20,  9,  9,  9,  9},
	{  -8,  -16,  -40, 20,  9,  9,  9,  9},
	{ -36,  -12,  -40, 20,  9,  9,  9,  9},
	{   0,    0,   76,  6, 11,  0, 11, 11},
	{   0,    0,   90, 31, 11,  0, 11, 11},
	{ -80,   -6,  -40,  8,  9,  9,  9,  9},
	{ -80,    6,  -40,  8,  9,  9,  9,  9},
	{ -88,    0,  -40,  6,  9,  9,  9,  9},
	{  80,    6,  -40,  8,  9,  9,  9,  9},
	{  88,    0,  -40,  6,  9,  9,  9,  9},
	{  80,   -6,  -40,  8,  9,  9,  9,  9},
};

const struct ship_line PROGMEM cobra3a_line[38] =
{
	{31, 11,  0,  0,  1},
	{31, 12,  4,  0,  4},
	{31, 10,  3,  1,  3},
	{31, 10,  7,  3,  8},
	{31, 12,  8,  4,  7},
	{31,  9,  8,  6,  7},
	{31,  9,  6,  6,  9},
	{31,  9,  5,  5,  9},
	{31,  9,  7,  5,  8},
	{31,  5,  1,  2,  5},
	{31,  6,  2,  2,  6},
	{31,  7,  3,  3,  5},
	{31,  8,  4,  4,  6},
	{31,  1,  0,  1,  2},
	{31,  2,  0,  0,  2},
	{31, 10,  9,  8, 10},
	{31, 11,  9, 10, 11},
	{31, 12,  9,  7, 11},
	{31, 11, 10,  1, 10},
	{31, 12, 11,  0, 11},
	{29,  3,  1,  1,  5},
	{29,  4,  2,  0,  6},
	{ 6, 11,  0, 20, 21},
	{20,  9,  9, 12, 13},
	{20,  9,  9, 18, 19},
	{20,  9,  9, 14, 15},
	{20,  9,  9, 16, 17},
	{19,  9,  9, 15, 16},
	{17,  9,  9, 14, 17},
	{19,  9,  9, 13, 18},
	{19,  9,  9, 12, 19},
	{30,  6,  5,  2,  9},
	{ 6,  9,  9, 22, 24},
	{ 6,  9,  9, 23, 24},
	{ 8,  9,  9, 22, 23},
	{ 6,  9,  9, 25, 26},
	{ 6,  9,  9, 26, 27},
	{ 8,  9,  9, 25, 27},
};

const struct ship_face_normal PROGMEM cobra3a_face_normal[13] =
{
	{31,    0,   62,   31},
	{31,  -18,   55,   16},
	{31,   18,   55,   16},
	{31,  -16,   52,   14},
	{31,   16,   52,   14},
	{31,  -14,   47,    0},
	{31,   14,   47,    0},
	{31,  -61,  102,    0},
	{31,   61,  102,    0},
	{31,    0,    0,  -80},
	{31,   -7,  -42,    9},
	{31,    0,  -30,    6},
	{31,    7,  -42,    9},
};

const struct ship_data PROGMEM cobra3a_data =
{
	"Cobra MkIII",
	28, 38, 13,
	3,
	0,
	9025,
	21,
	0,
	50,
	150,
	28,
	3,
	9,
	cobra3a_point,
	cobra3a_line,
	cobra3a_face_normal
};
