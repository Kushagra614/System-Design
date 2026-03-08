#include<bits/stdc++.h>
using namespace std;

class MySQLDatabase {
public:
    void saveData(string data) {
        cout << "Saving to MySQL: " << data << endl;
    }
};

class UserService {
private:
    MySQLDatabase db;
public:
    void saveUser(string username) {
        db.saveData(username);
    }
};

int main() {
    UserService service;
    service.saveUser("John");
    
    return 0;
}
