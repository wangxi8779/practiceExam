#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee() {

}

Employee::Employee(int rate)
{
  payRate = rate;
  energyLevel = 1;
}

void Employee::takeABreak(int mins) {
  energyLevel += mins * 0.02;
}
void Employee::set_payRate(int rate) {payRate = rate;}
int Employee::get_payRate() {return payRate;}
void Employee::set_energyLevel(float level) {energyLevel = level;}
float Employee::get_energyLevel() {return energyLevel;}
 