#pragma once

#include <iostream>
#include "player.hpp"
namespace ariel

{
    class Game 
    {
    private:
        Player& m_player1;
        Player& m_player2;
        int m_currentTurn;
        std::string m_lastTurnWinner;
        std::string m_gameWinner;
        int m_drawCount;

        // void updateScores(const Card& card1, const Card& card2);

    public:
        Game(Player& player1, Player& player2);

        void playTurn();
        void playAll();
        void printLog();

        int printLastTurn() const;
        std::string getLastTurnWinner() const;
        std::string printWiner() const;
        int getDrawCount() const;

        const Player& getPlayer1() const;
        const Player& getPlayer2() const;

        void printStats() const;
    };
}