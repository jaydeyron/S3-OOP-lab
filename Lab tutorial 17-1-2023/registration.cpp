#include <iostream>
using namespace std;

class Registration {
    string userID, password, mobileNum;
  public:
    void input() {
        try {
            cout << "Enter User ID: ";
            cin >> userID;
            bool at_present=false,dot_present=false;
            for(int i=0;i<userID.length();i++)
            {
                if(userID[i]=='@')
                    at_present=true;
                if(userID[i]=='.')
                    dot_present=true;
                if(at_present==true && dot_present==true)
                    break;
            }
            if (!at_present || !dot_present) {
                throw "Invalid User ID: User ID should be a valid email address";
            }

            cout << "Enter Password: ";
            cin >> password;
            bool alpha_present=false,numeric_present=false;
            if(password.length()>=6)
            {
                for(int i=0;i<password.length();i++)
                {
                    if(isalpha(password[i]))
                        alpha_present=true;
                    if(isdigit(password[i]))
                        numeric_present=true;
                    if(alpha_present==true && numeric_present==true)
                        break;
                }
            }
            if (!alpha_present || !numeric_present) {
                throw "Invalid Password: Password must be at least 6 characters long and alphanumeric";
            }

            cout << "Enter Mobile Number: ";
            cin >> mobileNum;
            if(mobileNum.length()!=10) {
                throw "Invalid Mobile Number: Mobile number must be a 10 digit number";
            }

            cout << "Registration successful!\n";
        } catch (const char* msg) {
            cerr << msg << endl;
        }
    }
};

int main() {
    Registration reg;
    reg.input();
    return 0;
}
