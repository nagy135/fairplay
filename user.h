#include <string>

using namespace std;

class User{
    private:
        int _id;
        string first_name;
        string second_name;
    protected:
        static int id_counter;
    public:
        User();
        User(string, string);
        void set_full_name(string, string);
        void hey(void);
};
