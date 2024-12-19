#include "executive.hpp"

Executive::Executive() : m_companyPerformance{0}, m_performanceBonus{0} {}

Executive::Executive(std::string name, double baseSalary, int numEmployees, int managersSupervised, double companyPerformance, double performanceBonus)
    : SeniorManager(name, baseSalary, managersSupervised, performanceBonus), 
      m_companyPerformance{companyPerformance}, m_performanceBonus{performanceBonus} {}

double Executive::calculateSalary() {
    return SeniorManager::calculateSalary() + (m_performanceBonus * m_companyPerformance);
}

void Executive::displayInfo() {
    std::cout << "Executive name: " << getName() << "\n"
              << "Base salary: " << getSalary() << "\n"
              << "Company performance: " << m_companyPerformance << "\n";
}
