#include<bits/stdc++.h>
using namespace std;

class Database {
public:
    virtual void saveData(string data) = 0;
    virtual ~Database() {}
};

class MySQLDatabase : public Database {
public:
    void saveData(string data) override {
        cout << "Saving to MySQL: " << data << endl;
    }
};

class MongoDBDatabase : public Database {
public:
    void saveData(string data) override {
        cout << "Saving to MongoDB: " << data << endl;
    }
};

class UserService {
private:
    Database* db;
public:
    UserService(Database* database) : db(database) {}
    
    void saveUser(string username) {
        db->saveData(username);
    }
};

int main() {
    MySQLDatabase mysql;
    UserService service1(&mysql);
    service1.saveUser("John");
    
    MongoDBDatabase mongo;
    UserService service2(&mongo);
    service2.saveUser("Jane");
    
    return 0;
}
