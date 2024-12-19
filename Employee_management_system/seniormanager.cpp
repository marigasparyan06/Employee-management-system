#include "seniormanager.hpp"

SeniorManager::SeniorManager() : m_managersSupervised{0}, m_additionalBonus{0} {}

SeniorManager::SeniorManager(std::string name, double baseSal, int supervisedEmpls, int addBonus) 
    : Manager(name, baseSal, supervisedEmpls, addBonus), 
      m_managersSupervised{supervisedEmpls}, m_additionalBonus{addBonus} {}

double SeniorManager::calculateSalary() {
    return Manager::calculateSalary() + (m_additionalBonus * m_managersSupervised);
}

void SeniorManager::displayInfo() {
    std::cout << "Senior manager name: " << getName() << "\n"
              << "Base salary: " << getSalary() << "\n"
              << "Managers supervised: " << m_managersSupervised << "\n";
}
