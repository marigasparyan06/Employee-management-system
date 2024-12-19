#include "manager.hpp"

Manager::Manager() : m_numEmployees{0}, m_bonus{0} {}

Manager::Manager(std::string name, double sal, int empl, int bonus) 
    : Employee(name, sal), m_numEmployees{empl}, m_bonus{bonus} {}

double Manager::calculateSalary() {
    return getSalary() + (m_bonus * m_numEmployees);
}

void Manager::displayInfo() {
    std::cout << "Manager name: " << getName() << "\n"
              << "Base salary: " << getSalary() << "\n"
              << "Employees managed by the manager: " << m_numEmployees << "\n";
}
