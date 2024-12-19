#include "employeeManagementSystem.hpp"

void EmployeeManagementSystem::addEmployee(Employee* employee) {
    m_employees.push_back(employee);
}

void EmployeeManagementSystem::displayAllEmployees() const {
    for (auto employee : m_employees) {
        employee->displayInfo();
    }
}

double EmployeeManagementSystem::calculateTotalSalary() const {
    double totalSalary = 0;
    for (auto employee : m_employees) {
        totalSalary += employee->calculateSalary();
    }
    return totalSalary;
}

void EmployeeManagementSystem::searchEmployeeByName(const std::string& name) const {
    for (auto employee : m_employees) {
        if (employee->getName() == name) {
            employee->displayInfo();
            return;
        }
    }
    std::cout << "Employee not found.\n";
}

void EmployeeManagementSystem::searchEmployeeByRole(const std::string& role) const {
    for (auto employee : m_employees) {
        if (role == "Developer" && dynamic_cast<Developer*>(employee)) {
            employee->displayInfo();
        } 
        else if (role == "Manager" && dynamic_cast<Manager*>(employee)) {
            employee->displayInfo();
        } 
        else if (role == "Salesperson" && dynamic_cast<Salesperson*>(employee)) {
            employee->displayInfo();
        } 
        else if (role == "SeniorManager" && dynamic_cast<SeniorManager*>(employee)) {
            employee->displayInfo();
        } 
        else if (role == "Executive" && dynamic_cast<Executive*>(employee)) {
            employee->displayInfo();
        }
    }
}

void EmployeeManagementSystem::removeEmployeeByName(const std::string& name) {
    auto it = m_employees.begin();
    while (it != m_employees.end()) {
        if ((*it)->getName() == name) {
            delete *it;
            it = m_employees.erase(it);
        } else {
            ++it;
        }
    }
}

EmployeeManagementSystem::~EmployeeManagementSystem() {
    for (auto employee : m_employees) {
        delete employee;
    }
}
