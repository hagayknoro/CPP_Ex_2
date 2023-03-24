#include "card.hpp"

using namespace std;

namespace ariel {

    Card::Card(){}
    Card::Card(Suit s, Rank r) : suit(s), rank(r) {}

    Suit Card::getSuit() const {
        return suit;
    }

    Rank Card::getRank() const {
        return rank;
    }

    bool Card::operator>(const Card& other) const {
        if (suit == other.suit) {
            return rank > other.rank;
        } else {
            return suit > other.suit;
        }
    }

    bool Card::operator==(const Card& other) const {
        return (suit == other.suit) && (rank == other.rank);
    }

    ostream& operator<<(ostream& os, const Card& card) {
        string suitStr;
        switch (card.suit) {
            case Suit::CLUBS:
                suitStr = "C";
                break;
            case Suit::DIAMONDS:
                suitStr = "D";
                break;
            case Suit::HEARTS:
                suitStr = "H";
                break;
            case Suit::SPADES:
                suitStr = "S";
                break;
        }
        string rankStr;
        switch (card.rank) {
            case Rank::ACE:
                rankStr = "A";
                break;
            case Rank::TWO:
                rankStr = "2";
                break;
            case Rank::THREE:
                rankStr = "3";
                break;
            case Rank::FOUR:
                rankStr = "4";
                break;
            case Rank::FIVE:
                rankStr = "5";
                break;
            case Rank::SIX:
                rankStr = "6";
                break;
            case Rank::SEVEN:
                rankStr = "7";
                break;
            case Rank::EIGHT:
                rankStr = "8";
                break;
            case Rank::NINE:
                rankStr = "9";
                break;
            case Rank::TEN:
                rankStr = "10";
                break;
            case Rank::JACK:
                rankStr = "J";
                break;
            case Rank::QUEEN:
                rankStr = "Q";
                break;
            case Rank::KING:
                rankStr = "K";
                break;
        }
        os << suitStr << rankStr;
        return os;
    }

} 
