#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

class Employee {
private:
    std::string m_name;
    double m_baseSalary;
public:
    Employee();
    Employee(std::string name, double base_sal);
    virtual double calculateSalary() = 0;
    virtual void displayInfo() = 0;

    double getSalary() const;
    void setSalary(double new_salary);

    std::string getName() const;
    void setName(const std::string& name);

    virtual ~Employee();
};

#endif // EMPLOYEE_HPP
