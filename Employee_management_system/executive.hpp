#ifndef EXECUTIVE_HPP
#define EXECUTIVE_HPP

#include "seniormanager.hpp"

class Executive : public SeniorManager {
private:
    double m_companyPerformance;
    double m_performanceBonus;
public:
    Executive();
    Executive(std::string name, double baseSalary, int numEmployees, int managersSupervised, double companyPerformance, double performanceBonus);
    double calculateSalary() override;
    void displayInfo() override;
};

#endif // EXECUTIVE_HPP
