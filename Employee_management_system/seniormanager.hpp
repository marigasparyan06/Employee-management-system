#ifndef SENIOR_MANAGER_HPP
#define SENIOR_MANAGER_HPP

#include "manager.hpp"

class SeniorManager : public Manager {
private:
    int m_managersSupervised;
    int m_additionalBonus;
public:
    SeniorManager();
    SeniorManager(std::string name, double baseSal, int supervisedEmpls, int addBonus);
    double calculateSalary() override;
    void displayInfo() override;
};

#endif // SENIOR_MANAGER_HPP
