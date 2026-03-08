#include<bits/stdc++.h>
using namespace std;

// system with simple crud operations
// WITHOUT SRP - Multiple Responsibilities in ONE class

class User
{
private:
    int id;
    string name;
    string email;

public:
    
    void setUserData(int userId, string userName, string userEmail) {
        cout << "User data set: " << name << endl;
    }

    
    void validateUserData() {
        cout << "User data validated" << endl;
    }

    
    void saveToDatabase() {
        cout << "Saving user " << name << " to database..." << endl;
        // File operations
        cout << "User saved to DB" << endl;
    }

    
    void displayUser() {
        cout << "ID: " << id << ", Name: " << name << ", Email: " << email << endl;
    }

    
    void sendWelcomeEmail() {
        cout << "Sending welcome email to " << email << "..." << endl;
        cout << "Email sent!" << endl;
    }
   
};

int main(){
    cout << "=== WITHOUT SRP (Bad Approach) ===" << endl << endl;
    
    User user;
    
    user.setUserData(1, "Tom", "tom@email.com");
    
    user.validateUserData();
    
    user.saveToDatabase();
    
    user.displayUser();
    
    user.sendWelcomeEmail();
    
   return 0;
}