

//header gaurd
#ifndef CONVERTER_H_
#define CONVERTER_H_



//include files
#include<stdio.h>

// structure declarations
struct parameters
{
  float R;			// Resistor value
  float L;			// Inductor Value
  float C;			//capacitor value
  float Il;			//Inductor current
  float Ilmax;			//maximum Inductor current
  float Ilmin;			//minimum Inductor current
  float D;			//duty ratio
};

//function prototype
struct parameters Buck_converter (float vin, float vo);

 struct parameters Boost_converter(float vin, float vo );

 struct parameters BuckBoost_converter(float vin, float vo );

 void display (float vin, float vo, struct parameters p);

 #endif 