/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

typedef struct CarImp* Car;

enum CarType{
  AIXAM, FIAT_MULTIPLA, JEEP
};
enum Color {
  RED, SILVER, GREEN, ORANGE, BLUE, BLACK
};

Car get_car(CarType type);
CarType get_type(Car car);
Color get_color(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
int get_speed(Car car);
void init();
void set_acceleration_rate(Car car, double rate);
void accelerate(Car car);
#endif
