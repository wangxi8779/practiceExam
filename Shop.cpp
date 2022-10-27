#include "Shop.h"

Shop* Shop::createShop(int authority) {
  if (authority == 10) {
    return new Shop();
  } else {
    return NULL;
  }
}

Shop::Shop() {
  employees = new Employee*[5];
  count = 0;
}

int Shop::get_count() {
  return count;
}

Employee** Shop::get_employees() {
  return employees;
}

void Shop::addEmployee(Employee *employee) {
  if(count < 5) {
    employees[count] = employee;
  }
}
