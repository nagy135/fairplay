#include <iostream>
#include "pay_record.h"
#include <string>

using namespace std;

void tests(){
    /* PayRecord *pr = new PayRecord(); */
    /* cout << pr->number_of_records() << endl; */
    PayRecord pr;
    pr.add_user("Viktor", "Nagy");
    pr.add_user("Matinka", "Ondrejkova");
    pr.add_record("Umyvaren", 3.16, 3);
    pr.add_record("Benzin", 8.16, 2);
    pr.add_record("Jedlo", 9.18, 3);
    pr.add_record("Jedlo", 9.18, 3);
    pr.add_record("Jedlo", 9.18, 3);
    pr.add_record("Umyvaren", 3.16, 3);

    /* pr->add_record("Umyvaren", 3.16, 3); */
    /* cout << pr->number_of_records() << endl; */
    /* pr->add_user(); */
    pr.list_records();
    pr.list_users();
}

int main() {
    tests();
    return 0;
}

