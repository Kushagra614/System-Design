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
    // Responsibility 1: Manage User Data
    void setUserData(int userId, string userName, string userEmail) {
        cout << "User data set: " << name << endl;
    }

    // Responsibility 2: Validate User Data
    void validateUserData() {
        cout << "User data validated" << endl;
    }

    // Responsibility 3: Save to Database
    void saveToDatabase() {
        cout << "Saving user " << name << " to database..." << endl;
        // File operations
        cout << "User saved to DB" << endl;
    }

    // Responsibility 4: Display User
    void displayUser() {
        cout << "ID: " << id << ", Name: " << name << ", Email: " << email << endl;
    }

    // Responsibility 5: Send Email Notification
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