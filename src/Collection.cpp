#include "Collection.h"
#include <string>

// definition of Collection class methods

// add card to the collection
void Collection::addCard(const Card& card) {
    cards.push_back(card);  
}

// get the cards from the collection 
const std::vector<Card>& Collection::getCards() const {
    return cards;
}

// get total count of cards
size_t Collection::getCardCount() const {
    return cards.size();
}

// clear the collection completely
void Collection::clearCollection() {
    cards.clear();
}

// search for card by name using iterator
Card* Collection::findCardByName(const std::string& name) {
    for (auto it = cards.begin(); it != cards.end(); ++it) {
        if (it->getName() == name) {
            return &(*it);
        }
    }

    return nullptr;
}

// remove the card by name
bool Collection::removeCardByName(const std::string& name) {
        for (auto it = cards.begin(); it != cards.end(); ++it) {
        if (it->getName() == name) {
            cards.erase(it);
            return true;
        }
    }

    return false;
}