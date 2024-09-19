#include <iostream>
#include <cassert>
#include "studentclass.hpp"



int main() 

{

  Student *student = new Student("Bob", "Bobberson");

  assert(student->get_first_name() == "Bob");
//   assert(student.get_number_of_credits() == 0);

//   student.add_credits(6);
//   student.add_credits(2);

//   assert(student.get_number_of_credits() == 8);

//   student.reset_credits();

//   assert(student.get_number_of_credits() == 0);

  return 0;


}
