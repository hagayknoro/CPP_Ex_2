#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"
#include <stdexcept>

using namespace ariel;


TEST_CASE("Card War Game tests") {

    SUBCASE("Game initialization") {
        Player player1("Hagay");
        Player player2("Ella");

        Game game(player1, player2);

        CHECK(game.getLastTurnWinner() == "");
        CHECK(game.printWiner() == "");
        CHECK(game.getDrawCount() == 0);
        CHECK(game.getPlayer1().getName() == "Hagay");
        CHECK(game.getPlayer2().getName() == "Ella");
        CHECK(game.getPlayer1().getScore() == 0);
        CHECK(game.getPlayer2().getScore() == 0);
        CHECK(game.getPlayer1().stacksize() == 26);
        CHECK(game.getPlayer2().stacksize() == 26);
    }

    SUBCASE("Playing a turn") {
        Player player1("Hagay");
        Player player2("Ella");

        Game game(player1, player2);

        // Card card1(Suit::SPADES, Rank::ACE);
        // Card card2(Suit::DIAMONDS, Rank::SEVEN);
        // Card card3(Suit::HEARTS, Rank::TWO);

        // player1.addCard(card1);
        // player1.addCard(card2);
        // player2.addCard(card3);

        game.playTurn();

        CHECK(game.getLastTurnWinner() == "Ella");
        CHECK(game.printWiner() == "");
        CHECK(game.getDrawCount() == 0);
        CHECK(game.getPlayer1().getScore() == 0);
        CHECK(game.getPlayer2().getScore() == 1);
        CHECK(game.getPlayer1().stacksize() == 1);
        CHECK(game.getPlayer2().stacksize() == 1);

        game.playTurn();

        CHECK(game.getLastTurnWinner() == "Hagay");
        CHECK(game.printWiner() == "");
        CHECK(game.getDrawCount() == 0);
        CHECK(game.getPlayer1().getScore() == 1);
        CHECK(game.getPlayer2().getScore() == 1);
        CHECK(game.getPlayer1().stacksize() == 0);
        CHECK(game.getPlayer2().stacksize() == 0);

        CHECK_THROWS(game.playTurn());
    }

    SUBCASE("Playing the whole game") {
        Player player1("Hagay");
        Player player2("Ella");

        Game game(player1, player2);

        game.playAll();

        CHECK(game.printWiner() != "");
    }

    SUBCASE("Printing game statistics") {
        Player player1("Hagay");
        Player player2("Ella");

        Game game(player1, player2);

        game.playAll();

        game.printStats();
    }
}





// TEST_CASE("check the game set")
// {
//     Player p1("hagay");
//     Player p2("ella");
//     Game game(p1,p2);
//     CHECK(p1.stacksize()==26);
//     CHECK(p2.stacksize()==26);
//     CHECK(p1.cardesTaken()==0);
//     CHECK(p2.cardesTaken()==0);
// }
// TEST_CASE("Player tests") {

//     Player player1("Alice");
//     Player player2("Bob");

//     SUBCASE("Player initialization") {
//         CHECK(player1.getName() == "Alice");
//         CHECK(player2.getName() == "Bob");
//         CHECK(player1.getCardCount() == 0);
//         CHECK(player2.getCardCount() == 0);
//     }

    // SUBCASE("Adding cards to player") {
    //     Card card1(Suit::SPADES, Rank::ACE);
    //     Card card2(Suit::DIAMONDS, Rank::SEVEN);
    //     Card card3(Suit::HEARTS, Rank::TWO);

    //     player1.addCard(card1);
    //     player1.addCard(card2);
    //     player2.addCard(card3);

    //     CHECK(player1.getCardCount() == 2);
    //     CHECK(player2.getCardCount() == 1);
    //     CHECK(player1.playCard().getRank() == Rank::SEVEN);
    //     CHECK(player1.getCardCount() == 1);
    // }

    // SUBCASE("Incrementing player score") {
        // player1.incrementScore();
        // player1.incrementScore();
        // player2.incrementScore();

        //CHECK(player1.getScore() == 2);
        //CHECK(player2.getScore() == 1);
    // }
