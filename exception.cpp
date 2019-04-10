#include<iostream>
#include<string>
using namespace std;

class Employee{
private:string EmpName;
    int EmpNumber;
    string Hiredate;

public:   Employee(){
        EmpName=" ";
        EmpNumber=0;
        Hiredate=" ";
    }

    Employee(string name,int number,string date){
        EmpName=name;
        EmpNumber=number;
        Hiredate=date;
    }

    class InvalidEmployeeNumber{
    };

    void setEmpName(string);
    void setEmpNumber(int);
    void setHireDate(string);
    string getEmpName();
    int getEmpNumber();
    string getHireDate();
};

void Employee::setEmpName(string str){
    EmpName=str;
}

void Employee::setEmpNumber(int num){   if(num<0 ||num>9999)
        throw InvalidEmployeeNumber();
    else
        EmpNumber=num;
}

void Employee::setHireDate(string date){
    Hiredate=date;
}

string Employee::getEmpName(){
    return EmpName;
}

int Employee::getEmpNumber(){
    return EmpNumber;
}

string Employee::getHireDate(){
    return Hiredate;
}

class ProductionWorker:public Employee{

private:int Shift;
    double HourlyPay;

public: ProductionWorker(){
        Shift=0;
        HourlyPay=0;
    }

    ProductionWorker(int sh,double pay){
        Shift=sh;
        HourlyPay=pay;
    }

    class InvalidShift{};
    class InvalidPayRate{};
    void setShift(int);
    void setHourlyPay(double);
    int getShift();
    double getHourlyPay();
};

void ProductionWorker::setShift(int sh){
    if(sh<0||sh>2)
        throw InvalidShift();
    else
        Shift=sh;
}

void ProductionWorker::setHourlyPay(double pay){
    if(pay<1)
        throw InvalidPayRate();
    else
        HourlyPay=pay;
}

int ProductionWorker::getShift(){
    return Shift;
}

double ProductionWorker::getHourlyPay(){
    return HourlyPay;
}

int main(){
    int shift;
    double pay;

    cout<<" 1-DayShift \n 2-Night"<<endl;
    cout<<"Enter shift:";
    cin>>shift;
    cout<<"Enter hourly pay:";
    cin>>pay;

    ProductionWorker emp1(0,0);

    emp1.setEmpName("Doug");
    emp1.setHireDate(" July:29");
    try{
        emp1.setEmpNumber(6879);
        emp1.setShift(shift);
        emp1.setHourlyPay(pay);

    }
    catch(Employee::InvalidEmployeeNumber ){
        cout<<"Error invalid Employee number"<<endl;
    }
    catch(ProductionWorker::InvalidShift ){
        cout<<"Error Invalid Shift"<<endl;
    }
    catch(ProductionWorker ::InvalidPayRate){
        cout<<"Error Invalid PayRate"<<endl;
    }

    cout<<"Employee Details:"<<endl<<endl;
    cout<<"Employee Name:"<<emp1.getEmpName()<<endl;
    cout<<"Employee Number:"<<emp1.getEmpNumber()<<endl;
    cout<<"Employee Hire Date:"<<emp1.getHireDate()<<endl;
    cout<<"Employee Shift:"<<emp1.getShift()<<endl;
    cout<<"Employee HourlyPay:"
        <<emp1.getHourlyPay()<<endl;

    return 0;
}