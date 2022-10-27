#include <iostream>
#include <string>
#include "Manager.h"

Manager::Manager() {}

Manager::Manager(int rate)
{
  payRate = rate;
  energyLevel = 100;
}

void Manager::work(int mins) {
  float energy = mins * 0.25;
  if (energy > energyLevel) {
    mins = energyLevel/0.25;
    energyLevel = 0;
  } else {
    energyLevel -= mins * 0.25;
  }

  float hours = mins / 60.0;
  hoursWorked += hours;
  if (hoursWorked > 8) {
    daysWorked += 1;
    energyLevel = 1;
    hoursWorked = 0;
  }
}

float Manager::pay() {
  float amount = daysWorked * payRate;
  daysWorked = 0;
  hoursWorked = 0;
  return amount;
}

void Manager::set_daysWorked(int days) {daysWorked = days;}
int Manager::get_daysWorked() {return daysWorked;}
void Manager::set_hoursWorked(float hours) {hoursWorked = hours;}
float Manager::get_hoursWorked() {return hoursWorked;}
