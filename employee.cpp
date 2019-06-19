#include "employee.h"

Employee::Employee(const std::string &name, const std::string &phoneNumber, const std::string &address,
                    const std::string &date, const double &salary)
    :mName{name}, mPhoneNumber{phoneNumber}, mAddress{address}, mDate{date}, mSalary{salary}
{}

Employee &Employee::operator=(const Employee &another)
{
    mName = another.mName;
    mDate = another.mDate;
    mAddress = another.mAddress;
    mSalary = another.mSalary;
    mPhoneNumber = another.mPhoneNumber;

    return *this;
}

std::string Employee::name() const
{
    return mName;
}

void Employee::setName(const std::string &name)
{
    mName = name;
}

std::string Employee::phoneNumber() const
{
    return mPhoneNumber;
}

void Employee::setPhoneNumber(const std::string &phoneNumber)
{
    mPhoneNumber = phoneNumber;
}

std::string Employee::address() const
{
    return mAddress;
}

void Employee::setAddress(const std::string &address)
{
    mAddress = address;
}

std::string Employee::date() const
{
    return mDate;
}

void Employee::setDate(const std::string &date)
{
    mDate = date;
}

double Employee::salary() const
{
    return mSalary;
}

void Employee::setSalary(double salary)
{
    mSalary = salary;
}

Employee::Employee(const Employee &another)
    :mName{another.mName}, mPhoneNumber{another.mPhoneNumber}, mAddress{another.mAddress},
      mDate{another.mDate}, mSalary{another.mSalary}
{}

std::ostream &operator<<(std::ostream &out, const Employee &employee)
{
    out <<"name - "<<employee.mName<<";"<<std::endl
      <<"phone number - "<<employee.mPhoneNumber<<";"<<std::endl
     <<"adress - "<<employee.mAddress<<";"<<std::endl
    <<"date - "<<employee.mDate<<";"<<std::endl
   <<"salary - "<<employee.mSalary<<" $;"<<std::endl;
    return out;
}


void Employee::print() const
{
    std::cout<<"name - "<<mName<<";"<<std::endl
            <<"phone number - "<<mPhoneNumber<<";"<<std::endl
           <<"adress - "<<mAddress<<";"<<std::endl
          <<"date - "<<mDate<<";"<<std::endl
         <<"salary - "<<mSalary<<" $;"<<std::endl;
}
