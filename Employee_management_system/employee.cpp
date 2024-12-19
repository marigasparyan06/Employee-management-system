#include "employee.hpp"

Employee::Employee() : m_name{""}, m_baseSalary{0} {}

Employee::Employee(std::string name, double base_sal) 
    : m_name{name}, m_baseSalary{base_sal} {}

double Employee::getSalary() const {
    return m_baseSalary;
}

void Employee::setSalary(double new_salary) {
    m_baseSalary = new_salary;
}

std::string Employee::getName() const {
    return m_name;
}

void Employee::setName(const std::string& name) {
    m_name = name;
}

Employee::~Employee() = default;
