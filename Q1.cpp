#include <iostream>
using namespace std;
class Contact{
    
    string name;
    unordered_map<string,string> listOfContacts;
    // if asked for adding a new contact
    void updateContact(){
        AddContact addNewContact;
        listOfContacts= addNewContact.updateContact("tesst","82949test",listOfContacts);
    }
    void displayContactList(){
        cout<<"listOfContacts";
    }
    
};
class AddContact{
    string newContact;
    public:
    unordered_map <string,string> updateContact(string newName,string newContact,un_orderedmap<string,string> listOfContacts){
        pair<string,string> identificationNumber;
        id.first=newName;
        id.second=newContact;
    listOfContacts.insert(id);
    return listOfContacts;
    }
};

class Content{
    string name;
    bool typeOfContent;
    // if type of content is image
    int content[][];
    // if type is text
    string content;

    public:
        
         struct showContent(){
            return content;
        }
}

class Status{
    User user;
    void showStatus(){
        cout<<"showcases the status of a friend";
    }
    Content content;
    content.showContent(" ");
};

class Messaging{
    string message;
    public:
        string showMessage(){
            // show message
        }
};
class User{
    string name;
    string number;
    
    Contact userContacts;
    // To add new contact/friend
    Contact userContacts;
    userContacts.updateContact();
    // To see the status of friend
    status friendstatus;
    friendstatus.showStatus();
    
}
int main() {
    
}
