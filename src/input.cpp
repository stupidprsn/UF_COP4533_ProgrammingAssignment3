//
// Created by hanli on 4/6/2026.
//

#include "input.h"


void getInput(const std::string &fileName, std::map<char, int> &charToValue, string& first, string& second) {
    std::ifstream input(fileName);
    if (!input.is_open())
        throw std::runtime_error("Could not open input file.");

    int k;
    if (! (input >> k) )
        throw std::runtime_error("Wrong input file format.");

    if (k < 0)
        throw std::runtime_error("k must be a natural number.");

    charToValue.clear();

    for (int i = 0; i < k; i++) {
        char x; int v;
        if (!(input >> x) ||  !(input >> v) )
            throw std::runtime_error("Wrong input file format.");
        if (charToValue.find(x) != charToValue.end())
            throw std::runtime_error("Duplicate character found.");
        charToValue[x] = v;
    }

    if (!(input >> first))
        throw std::runtime_error("Wrong input file format.");

    if (!(input >> second))
        throw std::runtime_error("Wrong input file format.");

    input.close();
}
