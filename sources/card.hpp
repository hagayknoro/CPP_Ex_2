#pragma once

#include <iostream>
namespace ariel

{
    enum class Suit {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };

    enum class Rank {
        ACE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING
    };

    class Card {
    public:
        Card();
        Card(Suit s, Rank r);
        Suit getSuit() const;
        Rank getRank() const;
        bool operator>(const Card& other) const;
        bool operator==(const Card& other) const;
        friend std::ostream& operator<<(std::ostream& os, const Card& card);
    private:
        Suit suit;
        Rank rank;
    };

} 