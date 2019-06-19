#include "office.h"
#include "employee.h"

Office::Office(const std::string &name, const std::string &address, const double &area)
    :mName{name},mAddress{address},mArea{area}
{

}

std::string Office::name() const
{
    return mName;
}

void Office::setName(const std::string &name)
{
    mName = name;
}

std::string Office::address() const
{
    return mAddress;
}

void Office::setAddress(const std::string &address)
{
    mAddress = address;
}


int Office::employeeCount() const
{
    return static_cast<int>(mEmployees.size());
}

double Office::area() const
{
    return mArea;
}

void Office::setArea(double area)
{
    mArea = area;
}

void Office::addWorker(Employee *employee)
{
    if(employee != nullptr)
    {
        mEmployees.push_back(employee);
    }
}

void Office::removeWorker(Employee *employee)
{
    for(std::list<Employee *>::iterator it=mEmployees.begin();
        it != mEmployees.end(); ++it)
    {
        if(*it == employee)
        {
            mEmployees.erase(it);
            break;
        }
    }
}

std::ostream &operator<<(std::ostream &out, const Office &office)
{
    out<<"name - "<<office.mName<<std::endl
      <<"address - "<<office.mAddress<<std::endl
     <<"area - "<<office.mArea<<std::endl
    <<"employee count - "<<office.employeeCount()<<std::endl;
    return out;
}

void Office::print() const
{
    std::cout<<"name - "<<mName<<std::endl
            <<"address - "<<mAddress<<std::endl
           <<"area - "<<mArea<<std::endl
          <<"employee count - "<<employeeCount()<<std::endl;
}
