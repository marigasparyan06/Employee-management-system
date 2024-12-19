#include "salesperson.hpp"

Salesperson::Salesperson() : m_commissionRate{0.10}, m_totalSales{0} {}

Salesperson::Salesperson(std::string name, double baseSal, double totalSales) 
    : Employee(name, baseSal), m_totalSales{totalSales}, m_commissionRate{0.10} {}

double Salesperson::calculateSalary() {
    return getSalary() + (m_totalSales * m_commissionRate);
}

void Salesperson::displayInfo() {
    std::cout << "Salesperson name: " << getName() << "\n"
              << "Salesperson base salary: " << getSalary() << "\n"
              << "Total sales: " << m_totalSales << "\n";
}
