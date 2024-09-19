#include "studentclass.hpp"
#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

Student::Student(string first, string last)

{
this->first_name = first;
this->last_name = last;
this->student_id = rand();
this->credits = 0;



}

string Student::get_first_name()
{
return this->first_name;


}

string Student::get_last_name()
{
    return this->last_name;
}

int Student::get_student_id()
{

    return this->student_id;
}

int Student::get_number_of_credits()
{

return this->credits;

}


void Student::set_first_name(string first)
{
  this->first_name = first;
}

void Student::set_last_name(string last)
{
    this->last_name = last;
}

void Student::reset_credits()

{
 credits = 0;
}

void Student::add_credits(int number)
{
 credits+=number;
}





