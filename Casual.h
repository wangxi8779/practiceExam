#ifndef CASUAL_H
#define CASUAL_H
#include <string>
#include "Employee.h"

class Casual : public Employee {
  private:
  float hoursWorked[7];
  int dayCount;

  public: 
  Casual();
  Casual(int payRate);      // Create a Casual with a payRate

  void endWorkDay(); 
  void work(int mins);
  float pay();
  void set_dayCount(int);
  int get_dayCount();
};

#endif