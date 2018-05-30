#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Payment{
    private:
        double price;
        int num_participants;
        string label;
        vector<int> participants;
    public:
        Payment();
        Payment(double, int);
        void repr(void);
        void set_price(double);
        void set_num_participants(int);
        void set_participants(vector<int>);
        void set_label(string);
};
