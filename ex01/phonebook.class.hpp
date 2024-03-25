#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"

#define PHONEBOOK_SIZE 8

class Phonebook
{
    private:
        Contact _contacts[PHONEBOOK_SIZE];
        int     _index;
    
    public:
        Phonebook(void);
        ~Phonebook(void);
        void            displayMessage() const;
        void            createContact();
        void            addContact(Contact &contact);
        void            displayContacts();
        void            displayDetailedContact();
        void            mainMenu();
        std::string     transformInput(const std::string &input);
};

#endif
