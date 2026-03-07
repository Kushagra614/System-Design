#include<bits/stdc++.h>
using namespace std;

class User{
    public:
    int id; 
    string name;
    string email;

    User(int id, string name, string email)
    : id(id), name(name), email(email) {}
};

class UserValidates{
    public:
    void validate(User& user)
    {
        cout<<"Validating Data\n";
        cout<<"User data validated\n";
    }
};

class UserRepo
{
    public:
    void save(User& user)
    {
        cout<<"Saving data to database\n";
        cout<<"User details saved!!\n";
    }
};


class UserDisplay {
public:
    void display(User& user) {
        cout << "ID: " << user.id << ", Name: " << user.name << ", Email: " << user.email << endl;
    }
};

class EmailService {
public:
    void sendWelcomeEmail(User& user) {
        cout << "Sending welcome email to " << user.email << "..." << endl;
        cout << "Email sent!" << endl;
    }
};

int main()
{
    cout << "=== WITH SRP (Correct Approach) ===" << endl << endl;
    
    User usr(1, "Tom", "Tomemail@gmail.com");

    UserValidates validator;
    validator.validate(usr);

    UserRepo repo;
    repo.save(usr);
    
    UserDisplay display;
    display.display(usr);
    
    EmailService email;
    email.sendWelcomeEmail(usr);
    
    return 0;
}

