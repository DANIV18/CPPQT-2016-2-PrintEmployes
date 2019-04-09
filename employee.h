#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

#include "printable.h"

class Employee : public Printable
{
public:
    Employee();

    Employee(const Employee &another);

    Employee(const std::string &name, const std::string &phoneNumber, const std::string &address,
                const std::string &date, const double &salary);

    Employee& operator= (const Employee &another);

    friend std::ostream &operator<< (std::ostream &out, const Employee &employee);

    std::string name() const;
    void setName(const std::string &name);

    std::string phoneNumber() const;
    void setPhoneNumber(const std::string &phoneNumber);

    std::string address() const;
    void setAddress(const std::string &address);

    std::string date() const;
    void setDate(const std::string &date);

    double salary() const;
    void setSalary(double salary);

    void print() const override;

private:
    std::string mName;
    std::string mPhoneNumber;
    std::string mAddress;
    std::string mDate;
    double mSalary;
};

#endif // EMPLOYEE_H
