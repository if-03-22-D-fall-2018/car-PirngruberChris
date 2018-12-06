#include "car.h"

struct CarImp{
  enum CarType car_type;
  enum Color color;
  double fill_level;
  double accelerate;
  int speed;
  bool is_available;
};

struct CarImp aixam = {AIXAM, RED, 16.0, 0.0, 0, true};
struct CarImp fiat_multipla = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true};
struct CarImp fiat_multipla1 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true};
struct CarImp fiat_multipla2 = {FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0, true};
struct CarImp jeep = {JEEP, SILVER, 80.0, 0.0, 0, true};
struct CarImp jeep1 = {JEEP, BLACK, 80.0, 0.0, 0, true};

static Car car_park[6] = {&aixam, &fiat_multipla, &fiat_multipla1, &fiat_multipla2, &jeep, &jeep1};

Car get_car(CarType type){
  for (int i = 0; i < 6; i++) {
    if (car_park[i]->car_type == type && car_park[i]->is_available == true) {
      car_park[i]->is_available = false;
      return car_park[i];
    }
  }
  return 0;
}
CarType get_type(Car car){
  return car->car_type;
}
Color get_color(Car car){
  return car->color;
}
double get_fill_level(Car car){
  return car->fill_level;
}
double get_acceleration_rate(Car car){
  return car->accelerate;
}
int get_speed(Car car){
  return car->speed;
}
void init(){
  for (int i = 0; i < 6; i++) {
    car_park[i]->is_available = true;
    car_park[i]->accelerate = 0;
    car_park[i]->speed = 0;
  }
}
void set_acceleration_rate(Car car, double rate){
  if (rate > 1.0 && car->car_type == AIXAM) {
    car->accelerate = 1.0;
  }
  else if (rate > 2.26 && car->car_type == FIAT_MULTIPLA) {
    car->accelerate = 2.26;
  }
  else if (rate > 3.14 && car->car_type == JEEP) {
    car->accelerate = 3.14;
  }
  else if (rate < -8.0) {
    car->accelerate = -8.0;
  }
  else{
    car->accelerate = rate;
  }
}
void accelerate(Car car){
  car->speed = car->accelerate * 4;
  

}
