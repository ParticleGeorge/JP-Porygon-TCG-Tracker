#include "Card.h"

// definition of Card class constructor 
Card::Card(const std::string& name, const std::string& type, const std::string& rarity, const std::string& set, 
            const std::string& imagePath, int year, int cardNumber)
            : name(name), type(type), rarity(rarity), set(set), imagePath(imagePath), year(year), 
            cardNumber(cardNumber) {}

// definition of Card class getters
std::string Card::getName() const {
    return name;                          
}   
std::string Card::getType() const {
    return type;
}   
std::string Card::getRarity() const {
    return rarity;
}                   
std::string Card::getSet() const {
    return set;
}   
std::string Card::getImagePath() const {
    return imagePath;
}   
int Card::getYear() const {
    return year;
}   
int Card::getCardNumber() const {
    return cardNumber;
}



