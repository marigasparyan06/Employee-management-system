#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_HPP
#define EMPLOYEE_MANAGEMENT_SYSTEM_HPP

#include <vector>
#include "employee.hpp"
#include "developer.hpp"
#include "manager.hpp"
#include "salesperson.hpp"
#include "seniormanager.hpp"
#include "executive.hpp"

class EmployeeManagementSystem {
private:
    std::vector<Employee*> m_employees;
public:
    void addEmployee(Employee* employee);
    void displayAllEmployees() const;
    double calculateTotalSalary() const;
    void searchEmployeeByName(const std::string& name) const;
    void searchEmployeeByRole(const std::string& role) const;
    void removeEmployeeByName(const std::string& name);
    ~EmployeeManagementSystem();
};

#endif // EMPLOYEE_MANAGEMENT_SYSTEM_HPP
