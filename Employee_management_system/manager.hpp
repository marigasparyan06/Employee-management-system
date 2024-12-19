#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "employee.hpp"

class Manager : public Employee {
private:
    int m_numEmployees;
    int m_bonus;
public:
    Manager();
    Manager(std::string name, double sal, int empl, int bonus);
    double calculateSalary() override;
    void displayInfo() override;
};

#endif // MANAGER_HPP
