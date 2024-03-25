#include <iostream>
#include "phonebook.class.hpp"

Phonebook::Phonebook(): _index(0) {}

Phonebook::~Phonebook()
{
    std::cout << "**Have a nice day!**" << std::endl;
}

void    Phonebook::displayMessage() const
{
    std::cout << "**My Beautiful PhoneBook**" << std::endl;
}

void    Phonebook::addContact(Contact &contact)
{
    _contacts[_index % 8] = contact;
    _index++;
}

std::string    Phonebook::transformInput(const std::string &input)
{
    std::string transformedString = input;
    if (transformedString.length() > 10)
	{
		transformedString.resize(9);
		transformedString.append(".");
	}
    if (transformedString.empty())
	{
		transformedString = "n/a";
	}
    return transformedString;
}

void    Phonebook::createContact()
{
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickName);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);

    Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
    addContact(newContact);
}

void    Phonebook::displayContacts()
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < _index && i < 8; i++)
	{ 
		std::cout << std::setw(10) << (i + 1) << "|";
		std::cout << std::setw(10) <<  transformInput(_contacts[i].getFirstName())<< "|";
		std::cout << std::setw(10) << transformInput(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << transformInput(_contacts[i].getNickName()) << std::endl;
	}
}

void    Phonebook::displayDetailedContact()
{
    std::string index;
    int         i;

    std::cout << "See contact detail by entring its index: " << std::endl;
    getline(std::cin, index);
    i = stoi(index);
    if (i && (i >= 1 && i <= PHONEBOOK_SIZE) && i <= _index)
    {
        i--;
        std::cout << "First name: " << transformInput(_contacts[i].getFirstName()) << std::endl;
        std::cout << "Last name: " << transformInput(_contacts[i].getLastName()) << std::endl;
        std::cout << "Nickname: " << transformInput(_contacts[i].getNickName()) << std::endl;
        std::cout << "Phone number: " << transformInput(_contacts[i].getPhoneNumber()) << std::endl;
        std::cout << "Darkest secret: " << transformInput(_contacts[i].getDarkestSecret()) << std::endl;
    }
    else
        std::cout << "Invalid index! No contact found for the given index." << std::endl;
}

void    Phonebook::mainMenu()
{
    std::string input;

    do
    {
        std::cout << "________________________" << std::endl;
        std::cout << "Please enter your input:" << std::endl; 
        std::cout << "ADD, SEARCH or EXIT" << std::endl;
        getline(std::cin, input);
        if (input ==  "ADD")
            createContact();
        else if (input == "SEARCH")
        {
            displayContacts();
            displayDetailedContact();
        }
        else if (input == "EXIT")
            return;
        else if (std::cin.eof())
            return;
        else
        {
            std::cout << '\"' << input << '\"';
            std::cout << ": Invalid input. Please try again." << std::endl;
        }
    } while (input != "EXIT");
}
