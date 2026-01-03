#pragma once
#include <iostream>
#include <string>

class Brain {
    private:
        std::string idea[10];

    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void setIdea(int index, std::string inputIdea);
        std::string getIdea(int index);
};
