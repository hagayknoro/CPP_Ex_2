#include "game.hpp"
#include "player.hpp"
#include "card.hpp"
#include <iostream>

using namespace ariel;


Game::Game(Player& player1, Player& player2)
    : m_player1(player1), m_player2(player2), m_currentTurn(1), m_drawCount(0) {}

void Game::playTurn() {
    // const Card card1;
    // const Card card2;

    // updateScores(card1, card2);

}

void Game::playAll() {

}

int Game::printLastTurn() const {
    return m_currentTurn;
}

std::string Game::getLastTurnWinner() const {
    return m_lastTurnWinner;
}

std::string Game::printWiner() const {
    return m_gameWinner;
}

int Game::getDrawCount() const {
    return m_drawCount;
}

const Player& Game::getPlayer1() const {
    return m_player1;
}

const Player& Game::getPlayer2() const {
    return m_player2;
}

void Game::printStats() const {

}

// void Game::updateScores(const Card& card1, const Card& card2) {

// }
void Game::printLog()
{

}