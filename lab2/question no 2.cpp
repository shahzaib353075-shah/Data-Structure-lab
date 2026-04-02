//#include <iostream>
//using namespace std;
//
//
//class Employee {
//public:
//    
//    virtual float calculateSalary() = 0;
//};
//
//
//class FullTimeEmployee : public Employee {
//private:
//    float fixedSalary;
//
//public:
//    
//    FullTimeEmployee(float salary) {
//        fixedSalary = salary;
//    }
//
// 
//    float calculateSalary() {
//        return fixedSalary;
//    }
//};
//class PartTimeEmployee : public Employee {
//private:
//    int hoursWorked;
//    float hourlyRate;
//
//public:
//    
//    PartTimeEmployee(int h, float rate) {
//        hoursWorked = h;
//        hourlyRate = rate;
//    }
//
//    float calculateSalary() {
//        return hoursWorked * hourlyRate;
//    }
//};
//
//int main() {
//
//   
//    FullTimeEmployee fullEmp(50000);
//    PartTimeEmployee partEmp(40, 500);
//
//    cout << "Full-Time Employee Salary: " << fullEmp.calculateSalary() << endl;
//    cout << "Part-Time Employee Salary: " << partEmp.calculateSalary() << endl;
//
//    return 0;
//}