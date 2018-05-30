#include <iostream>
#include "pay_record.h"
#include <string>
#include <vector>

using namespace std;

void tests(){
    PayRecord pr;
    pr.add_user("Viktor", "Nagy");
    pr.add_user("Matinka", "Ondrejkova");
    pr.add_user("Martin", "Doke");
    pr.list_users();

    pr.add_record("Jedlo", 9.18, "0 1");
    pr.add_record("Umyvaren", 3.16, "0 1 2");
    pr.add_record("Lietadlo", 8.16, "0 2");
    pr.add_record("Bus", 8.16, "0");

    pr.list_records();
}

int main() {
    tests();
    return 0;
}

