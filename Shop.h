#ifndef SHOP_H
#define SHOP_H
#include <string>
#include "Employee.h"
#include "Casual.h"
#include "Manager.h"

class Shop {
  private:
  Shop();
  Employee** employees;
  int count;

  public:
  void addEmployee(Employee *employee);   // Adds a employee to the Shop
  Employee **get_employees();             // Returns the array of pointers to the five employee objects
  int get_count();                        // Returns the amount of employees added to the shop
  static Shop* createShop(int authority);
};

#endif