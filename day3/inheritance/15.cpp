#include<iostream>
using namespace std;

// ambiguity error

class Person
{
private:
  string name;
  int age;
public:
  string city;
  Person(string n, int a) : name(n), age(a)
  {
    cout << "Person name = " << name << endl;
  }
  void setPlace(string p){
    city = p;
    cout << "city updated from Person class" << endl;
    return;
  }
};

class Employee
{
private:
  string employer;
  int salary;
public:
  string place;
  Employee(string e, int s): employer(e), salary(s)
  {
    cout << "Employer name = " << employer << endl;
  }
  void setPlace(string p){
    place = p;
    cout << "city updated from Employee class" << endl;
    return;
  }
};

class Trainer:  public Employee, public Person
{
private:
  string topic;
public:
  Trainer(string n, int a, string e, int s , string t)
  : Person(n, a), Employee(e, s), topic(t)
  {
  cout << "trainer topic = " << t << endl;
  }
};

int main(){
  Trainer obja("shobhit", 40, "tsip", 1, "C++");
  obja.setPlace("hyderabad");
  return 0;
}
