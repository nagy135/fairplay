#include <string>

using namespace std;

class User{
    private:
        string first_name;
        string second_name;
    public:
        User();
        User(string, string);
        void set_full_name(string, string);
        void hey(void);
};
