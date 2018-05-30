#include <iostream>
#include <sstream>
#include "pay_record.h"

using namespace std;

PayRecord::PayRecord(void){
    num_records = 0;
    num_people = 0;
    payment_arr.reserve(10);
    payment_arr_size = 10;
    users_arr.reserve(10);
}
void PayRecord::add_record(string label, double new_price, string participants){
    Payment temp_payment;

    temp_payment.set_price(new_price);
    temp_payment.set_label(label);

    vector<int> partic_arr;
    partic_arr.reserve(num_people);
    stringstream ss(participants);
    int sub_int;
    while ( ss >> sub_int ){
        partic_arr.push_back(sub_int);
    }
    temp_payment.set_participants(partic_arr);

    temp_payment.set_num_participants(partic_arr.size());
    payment_arr.push_back(temp_payment);
    num_records++;
}
void PayRecord::add_record(void){
    Payment *temp_ptr;
    temp_ptr = (ptr + num_records);
    string temp_label;

    cout << "What is NAME of record? :" << endl;
    cin >> temp_label;
    double temp_price;

    cout << "What is PRICE of record? :" << endl;
    cin >> temp_price;
    int temp_num_particip;

    cout << "What is NUMBER OF PEOPLE in record? :" << endl;
    cin >> temp_num_particip;

    Payment temp_payment;
    temp_payment.set_price(temp_price);
    temp_payment.set_num_participants(temp_num_particip);
    temp_payment.set_label(temp_label);
    payment_arr.push_back(temp_payment);
    num_records++;
}
void PayRecord::list_records(void){
    for (int i=0; i < num_records; i++){
        payment_arr[i].repr();
    }
}
void PayRecord::list_users(void){
    for (int i=0; i < num_people; i++){
        users_arr[i].hey();
    }
}
int PayRecord::number_of_records(void){
    return num_records;
}
void PayRecord::add_user(string fn, string sn){
    cout << "Creating new user" << endl;
    User temp_user;
    temp_user.set_full_name(fn, sn);
    users_arr.push_back(temp_user);
    num_people++;
}
