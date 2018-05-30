#include "payment.h"
#include "user.h"
#include <string>
#include <vector>

using namespace std;

class PayRecord{
    private:
        int num_records;
        int num_people;
        int payment_arr_size;
        vector<Payment> payment_arr;
        Payment *ptr;
        vector<User> users_arr;

    public:
        PayRecord();
        void add_record(string, double, int);
        void add_record(void);
        void add_user(string, string);
        int number_of_records();
        void list_records(void);
        void list_users(void);
};
