#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
  protected:
  int payRate; // hourly payRate
  float energyLevel;   // Initially 100%

  public: 
  Employee();
  Employee(int payRate);    // creates a Employee with payRate
  void takeABreak(int mins);
  virtual void work(int mins) = 0;
  virtual float pay() = 0;
  int get_payRate();
  void set_payRate(int rate);
  float get_energyLevel();
  void set_energyLevel(float level);
};

#endif