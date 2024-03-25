#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
    
    public:
        // Contact() : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") {}
        Contact(void){};
        Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName,
			const std::string &phoneNumber, const std::string &darkestSecret)
		: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber),
		  _darkestSecret(darkestSecret)
        {
            std::cout << "Contact created successfully!" << std::endl;
        }
        ~Contact(void){};
        std::string     getFirstName() const;
        std::string     getLastName() const;
        std::string     getNickName() const;
        std::string     getPhoneNumber() const;
        std::string     getDarkestSecret() const;
        void            setFirstName(std::string _firstName);
        void            setLastName(std::string _LastName);
        void            setNickName(std::string _NickName);
        void            setPhoneNumber(std::string _PhoneNumber);
        void            setDarkestSecret(std::string _DarkestSecret);
};

#endif
