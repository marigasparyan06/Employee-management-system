#ifndef SALESPERSON_HPP
#define SALESPERSON_HPP

#include "employee.hpp"

class Salesperson : public Employee {
private:
    double m_totalSales;
    double m_commissionRate;
public:
    Salesperson();
    Salesperson(std::string name, double baseSal, double totalSales);
    double calculateSalary() override;
    void displayInfo() override;
};

#endif // SALESPERSON_HPP
