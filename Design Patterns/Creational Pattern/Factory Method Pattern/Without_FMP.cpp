#include <iostream>
#include <string>
using namespace std;

class NotificationService {
public:
    void sendNotification(string type, string message) {

        if (type == "SMS") {
            cout << "Sending SMS: " << message << endl;
        }
        else if (type == "EMAIL") {
            cout << "Sending Email: " << message << endl;
        }
        else if (type == "WHATSAPP") {
            cout << "Sending WhatsApp: " << message << endl;
        }
        else {
            cout << "Unknown notification type" << endl;
        }
    }
};

int main() {

    NotificationService service;

    service.sendNotification("SMS", "Hello User!");
    service.sendNotification("EMAIL", "Welcome!");
    service.sendNotification("WHATSAPP", "Your order shipped!");

    return 0;
}