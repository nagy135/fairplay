#include "user.h"
#include <iostream>

using namespace std;

User::User(void){
    first_name = "";
    second_name = "";
}
User::User(string first_n, string second_n){
    first_name = first_n;
    second_name = second_n;
}
void User::set_full_name(string first_n, string second_n){
    first_name = first_n;
    second_name = second_n;
}
void User::hey(void){
    cout << first_name << " " << second_name << endl;
}
