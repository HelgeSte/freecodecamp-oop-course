#include <iostream>
using std::string;

class Employee {
    public:
        string Name;
        string Company;
        int Age;

        /*void IntroduceYourself(){
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Company - " << Company << std::endl;
            std::
        */ 
    
    Employee(string name, string company, int age) {
        
    }
};

int main()
{
    Employee employee1;
    /*employee1.Name = "Saldina";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25;*/
    employee1.IntroduceYourself();

    Employee employee2;
    /*employee1.Name = "John";
    employee1.Company = "Amazon";
    employee1.Age = 35;*/
    employee2.IntroduceYourself();
       

    return 0;
}