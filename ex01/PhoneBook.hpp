#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

#define PHONEBOOK_SIZE 8

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void            mainMenu();
        void            createContact();
        void            addContact(Contact &contact);
        void            displayContacts();
        void            displayDetailedContact();
        std::string     transformInput(const std::string &input);

    private:
        Contact _contacts[PHONEBOOK_SIZE];
        int     _index;
};

#endif
