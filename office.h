#ifndef OFFICE_H
#define OFFICE_H

#include <list>
#include <string>

#include "printable.h"

class Employee;
class Office : public Printable
{
public:
    Office(const std::string &name, const std::string &address,
           const double &area);

    std::string name() const;
    void setName(const std::string &name);

    std::string address() const;
    void setAddress(const std::string &address);

    int employeeCount() const;

    double area() const;
    void setArea(double area);

    void addWorker(Employee * employee);

    void removeWorker(Employee *employee);

    friend std::ostream &operator<< (std::ostream &out, const Office &office);

    // Printable interface
public:
    void print() const;

private:
    std::string mName;
    std::string mAddress;
    double mArea;
    std::list<Employee *> mEmployees;

};

#endif // OFFICE_H
