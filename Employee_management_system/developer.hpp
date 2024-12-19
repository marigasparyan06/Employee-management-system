#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "employee.hpp"

class Developer : public Employee {
private:
    int m_projects;
    int m_bonus;
public:
    Developer();
    Developer(std::string name, double salary, int projs, int bonus);
    double calculateSalary() override;
    void displayInfo() override;
};

#endif // DEVELOPER_HPP
