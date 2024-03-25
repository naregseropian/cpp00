#include "contact.class.hpp"

std::string Contact::getFirstName() const
{
    return _firstName;
}
std::string Contact::getLastName() const
{
    return _lastName;
}
std::string Contact::getNickName() const
{
    return _nickName;
}
std::string Contact::getPhoneNumber() const
{
    return _phoneNumber;
}
std::string Contact::getDarkestSecret() const
{
    return _darkestSecret;
}
void Contact::setFirstName(std::string _firstName)
{
    this->_firstName = _firstName;
}
void Contact::setLastName(std::string _lastName)
{
    this->_lastName = _lastName;
}
void Contact::setNickName(std::string _nickName)
{
    this->_nickName = _nickName;
}
void Contact::setPhoneNumber(std::string _phoneNumber)
{
    this->_phoneNumber = _phoneNumber;
}
void Contact::setDarkestSecret(std::string _darkestSecret)
{
    this->_darkestSecret = _darkestSecret;
}
