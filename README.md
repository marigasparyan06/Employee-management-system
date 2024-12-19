# Employee Management System

This is a C++ implementation of an Employee Management System. It demonstrates the use of Object-Oriented Programming (OOP) concepts like inheritance, polymorphism, and virtual functions. The system allows adding, displaying, searching, and removing employees of various roles such as Developers, Managers, Salespersons, Senior Managers, and Executives.

## Features
- **Employee Roles**: The system supports different employee roles, each with its own salary calculation mechanism:
  - Developer
  - Manager
  - Salesperson
  - Senior Manager
  - Executive
- **Salary Calculation**: The system supports dynamic salary calculation based on the role and other parameters like bonuses, commission rates, and performance.
- **Employee Management**: Employees can be added, displayed, and removed from the system.
- **Searching**: Employees can be searched by name or by role.

## Classes
- **Employee**: A base class that contains common attributes (name and salary) and pure virtual functions for calculating salary and displaying information.
- **Developer**: A derived class of `Employee`, adds attributes for the number of projects and a bonus per project.
- **Manager**: A derived class of `Employee`, adds attributes for the number of employees managed and a bonus per employee.
- **Salesperson**: A derived class of `Employee`, adds attributes for total sales and a commission rate.
- **SeniorManager**: A derived class of `Manager`, adds attributes for the number of managers supervised and an additional bonus.
- **Executive**: A derived class of `SeniorManager`, adds attributes for company performance and a performance-based bonus.
- **EmployeeManagementSystem**: A class that manages a list of employees, allows adding, displaying, searching, and removing employees.

## How It Works

1. **Adding Employees**: Employees can be added using the `addEmployee()` function, where different employee types can be added, such as `Developer`, `Manager`, `Salesperson`, `SeniorManager`, and `Executive`.

2. **Displaying Employees**: The system allows displaying all employees or searching employees by name or role using `displayAllEmployees()`, `searchEmployeeByName()`, and `searchEmployeeByRole()`.

3. **Salary Calculation**: The `calculateSalary()` method for each role calculates the salary dynamically based on the employee’s attributes (e.g., number of projects, number of employees managed, total sales, etc.).

4. **Removing Employees**: Employees can be removed from the system by name using `removeEmployeeByName()`, which will delete the employee from memory and remove it from the list.

## Code Example

```cpp
#include <iostream>
#include <vector>

class Employee {
    // Base class for Employee
};

class Developer : public Employee {
    // Developer class, inherits from Employee
};

class Manager : public Employee {
    // Manager class, inherits from Employee
};

// Add other classes here...

class EmployeeManagementSystem {
    // Class that manages employees
};
