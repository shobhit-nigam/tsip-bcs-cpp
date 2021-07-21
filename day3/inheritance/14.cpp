#include<iostream>
using namespace std;

class Person
{
private:
  string name;
  int age;
public:
  Person(string n, int a)
  {
    name = n;
    age = a;
    cout << "Person name = " << name << endl;
  }
  string getName(){
    return name;
  }
  int gatAge(){
    return age;
  }
};

class Employee
{
private:
  string employer;
  int salary;
public:
  Employee(string e, int s)
  {
    employer = e;
    salary = s;
    cout << "Employer name = " << employer << endl;
  }
  string getEmployer(){
    return employer;
  }
  int gatSalary(){
    return salary;
  }
};

class Trainer:  public Employee, public Person
{
private:
  string topic;
public:
  Trainer(string n, int a, string e, int s , string t)
  : Person(n, a), Employee(e, s)
  {
    topic = t;
  cout << "trainer topic = " << t << endl;
  }
};

int main(){
  Trainer obja("shobhit", 40, "tsip", 1, "C++");
  return 0;
}
