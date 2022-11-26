//public keyword is an access specifier .it define how the 
//memberd of a class can be accessed . eg 
//public means they cna be accessed and modified from outside the code
//private members cannot be accessed from outside the class 
//protected members cannot be accessed from outside the class however they can be accessed in inherited classes.


//nb it is possible to access private members of a class using a public 
//method inside the same class, 


//Encapsulation 
//is to make sure that sensitive data is hidden from users 
//To achieve this you must declare class variable /attribute as private (cannot be accessed from outside the class)
//If you want others to read or modify the value of private member you can provide public get and set methods

//Access private members

#include <iostream>
#include <string.h>
using namespace std;

class Employee{
private:
//private attribute
int salary;


public:
//setter
void setSalary (int s)
{
    salary =s;
}
//getter 
int getSalary() {
    return salary;
}


};
int main ()
{
Employee obj;
obj.setSalary(300000);
cout << obj.getSalary();

return 0;
}
































