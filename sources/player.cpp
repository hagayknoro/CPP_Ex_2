#include "player.hpp"
#include "card.hpp"
#include <iostream>

using namespace ariel;
using namespace std;


Player::Player(const std::string& name)
    : name(name), score(0), stack_size(26), cards_taken(0)
{
}

// void Player::addCard(const Card& card)
// {
// }

// Card Player::playCard()
// {

// }

void Player::incrementScore()
{
    score++;
}

int Player::getScore() const
{
    return score;
}


const std::string& Player::getName() const
{
    return name;
}

int Player::stacksize() const {
    return stack_size;
}

int Player::cardesTaken() const {
    return cards_taken;
}