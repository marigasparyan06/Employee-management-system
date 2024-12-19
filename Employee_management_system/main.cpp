#include "employeeManagementSystem.hpp"

int main() {
    EmployeeManagementSystem system;

    system.addEmployee(new Developer("Mariam", 50000, 5, 200));
    system.addEmployee(new Manager("Ani", 60000, 10, 300));
    system.addEmployee(new Salesperson("Gor", 40000, 100000));
    system.addEmployee(new SeniorManager("Elen", 70000, 3, 500));
    system.addEmployee(new Executive("Eva", 90000, 20, 5, 1.5, 1000));

    std::cout << "Displaying all employees:\n";
    system.displayAllEmployees();

    std::cout << "\nTotal Salary: " << system.calculateTotalSalary() << "\n";

    std::cout << "\nSearching for employee by name (Bob):\n";
    system.searchEmployeeByName("Bob");

    std::cout << "\nSearching for employees by role (Developer):\n";
    system.searchEmployeeByRole("Developer");

    std::cout << "\nRemoving employee by name (Gor):\n";
    system.removeEmployeeByName("Gor");
    std::cout << "After removal:\n";
    system.displayAllEmployees();

    return 0;
}
