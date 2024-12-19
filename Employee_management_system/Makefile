CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
SRC = main.cpp employee.cpp developer.cpp manager.cpp salesperson.cpp seniormanager.cpp executive.cpp employeeManagementSystem.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = EmployeeManagementSystem

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
