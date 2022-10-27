#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "Employee.h"

class Manager : public Employee {
  private:
  float hoursWorked;
  int daysWorked;

  public: 
  Manager();
  Manager(int payRate);      // Create a Manager with a payRate

  void work(int mins);
  float pay();
  void set_hoursWorked(float);
  float get_hoursWorked();
  void set_daysWorked(int);
  int get_daysWorked();
};

#endif