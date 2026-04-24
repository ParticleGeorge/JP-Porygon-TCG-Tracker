#ifndef COLLECTION_H
#define COLLECTION_H

#include <vector>
#include "Card.h"

class Collection {
private:
    // vector to store Card objects
    std::vector<Card> cards;  

public:
    // method to add a card to the collection   
    void addCard(const Card& card);

    // method to get all cards in the collection
    const std::vector<Card>& getCards() const;

    // method to get the number of cards in the collection
    int getCardCount() const;

    // method to find a card by name
    Card* findCardByName(const std::string& name);

    // method to remove a card by name
    bool removeCardByName(const std::string& name);

    // method to clear the collection
    void clearCollection();
};  

#endif  // COLLECTION_H