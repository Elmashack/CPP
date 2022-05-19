#ifndef CONTACT_HPP
#define CONTACT_HPP


class Contact {
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_num;
    std::string _dark_secret;
public:
    Contact();
    ~Contact();
    void PrintContacts(int ind);
    void PrintField(std::string str);
    void ContactDetails();
    void AddContact();
    int EmptyContact();


};


#endif //MODULE0_CONTACT_H
