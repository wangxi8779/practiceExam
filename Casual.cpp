#include <iostream>
#include <string>
#include "Casual.h"

Casual::Casual() {}

Casual::Casual(int rate)
{
  payRate = rate;
  energyLevel = 100;
  dayCount = 0;
}

void Casual::work(int mins) {
  float energy = mins * 0.5;
  if (energy > energyLevel) {
    mins = energyLevel/0.5;
    energyLevel = 0;
  } else {
    energyLevel -= mins * 0.5;
  }

  if (dayCount > 4) {
    mins = mins * 2;
  }
  float hours = mins / 60.0;
  hoursWorked[dayCount] += hours;
}

float Casual::pay() {
  float amount = 0;
  for(int i = 0; i < 7; i++) {
    amount = hoursWorked[i] * payRate;
    hoursWorked[i] = 0;
  }
  dayCount = 0;
  return amount;
}

void Casual::endWorkDay() {
  dayCount++;
  if (dayCount > 6) {
    dayCount = 0;
  }
  energyLevel = 1;
}

void Casual::set_dayCount(int count) {dayCount = count;}
int Casual::get_dayCount() {return dayCount;}
