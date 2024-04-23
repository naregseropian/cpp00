#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

#define PHONEBOOK_SIZE 8

class PhoneBook
{
    private:
        Contact _contacts[PHONEBOOK_SIZE];
        int     _index;
    
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void            displayMessage() const;
        void            createContact();
        void            addContact(Contact &contact);
        void            displayContacts();
        void            displayDetailedContact();
        void            mainMenu();
        std::string     transformInput(const std::string &input);
};

#endif
