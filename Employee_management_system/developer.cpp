#include "developer.hpp"

Developer::Developer() : m_bonus{100}, m_projects{0} {}

Developer::Developer(std::string name, double salary, int projs, int bonus) 
    : Employee(name, salary), m_projects{projs}, m_bonus{bonus} {}

double Developer::calculateSalary() {
    return getSalary() + (m_bonus * m_projects);
}

void Developer::displayInfo() {
    std::cout << "Developer name: " << getName() << "\n"
              << "Base salary: " << getSalary() << "\n"
              << "Projects the employee is working on: " << m_projects << "\n";
}
