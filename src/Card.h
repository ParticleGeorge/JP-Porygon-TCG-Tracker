#ifndef CARD_H
#define CARD_H  

#include <string>

class Card {
private:
    // member variables
    std::string name;
    std::string type;
    std::string rarity;
    std::string set;
    std::string imagePath;
    int year;
    int cardNumber;

public:
    // constructor
    Card(const std::string& name, const std::string& type, const std::string& rarity,
         const std::string& set, const std::string& imagePath, int year, int cardNumber);

    // getters
    std::string getName() const;
    std::string getType() const;
    std::string getRarity() const;
    std::string getSet() const;
    std::string getImagePath() const;
    int getYear() const;
    int getCardNumber() const;

};

#endif