#pragma once

#include <iostream>
namespace ariel


{
    class Player 
    {
    private:
        std::string name;
        int score;
        int stack_size;
        int cards_taken;

    public:
        Player(const std::string& name);

        // void addCard(const Card& card);
        // Card playCard();
        void incrementScore();

        int getScore() const;
        const std::string& getName() const;

        int stacksize() const;
        int cardesTaken() const;

    };
}