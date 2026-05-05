#ifndef CSVPARSER_H
#define CSVPARSER_H

#include <vector>
#include <string>
#include "Card.h"


class CSVParser {
public:
    // method for user fild upload
    static std::vector<Card> parseFile(const std::string& filename);
};

#endif // CSVPARSER_H