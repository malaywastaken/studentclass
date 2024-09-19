#include <iostream>

using namespace std;


class Student {
    private: 
        string first_name;
        string last_name;
        int student_id;
        int credits;
    public:
    Student(string first, string last);

    string get_first_name();
    string get_last_name();
    void set_first_name(string first_name);
    void set_last_name(string last_name);
    int get_student_id();
    int get_number_of_credits();

    void add_credits(int number);
    void reset_credits();

};

