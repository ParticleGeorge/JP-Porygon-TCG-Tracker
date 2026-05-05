#include "CSVParser.h"
#include <fstream>
#include <sstream>
#include <iostream>

// definition of CSVParser method
std::vector<Card> CSVParser::parseFile(const std::string& filename) {
    // vector created
    std::vector<Card> cards;

    // open file and make sure it works
    std::ifstream file(filename);
    if (!file.is_open()) {
        // failed to open
        std::cerr << "Failed to open file:" << filename << std::endl;
        return cards;
    }

    std::string header;
    std::getline(file, header);

    // read the rest
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string name, type, rarity, set, yearStr, cardNumberStr;
        std::getline(ss, name, ',');
        std::getline(ss, type, ',');
        std::getline(ss, rarity, ',');
        std::getline(ss, set, ',');
        std::getline(ss, yearStr, ',');
        std::getline(ss, cardNumberStr, ',');
        
        // convert applicable strings to int
        int year = std::stoi(yearStr);
        int cardNumber = std::stoi(cardNumberStr);
        cards.push_back(Card(name, type, rarity, set, "", year, cardNumber));
    }

    return cards;
}

