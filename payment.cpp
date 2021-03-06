#include "payment.h"

using namespace std;

Payment::Payment(){
    price = 0.0;
    num_participants = 1;
    label = "";
}
Payment::Payment(double init_price, int init_num_participants){
    price = init_price;
    num_participants = init_num_participants;
}
void Payment::repr(){
    cout << endl;
    cout << "================" << endl;
    cout << label << ":"<< endl;
    printf("cena: %f\npocet ludi: %d\n", price, num_participants);
    for (int i = 0; i < participants.size(); i++){
        cout << participants[i] << ",";
    }
}
void Payment::set_price(double new_price){
    price = new_price;
}
void Payment::set_num_participants(int new_num_participants){
    num_participants = new_num_participants;
}
void Payment::set_participants(vector<int> new_participants){
    participants = new_participants;
}
void Payment::set_label(string new_label){
    label = new_label;
}
