#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//we decided to not use a class and just use a bunch of functions instead
//all of these functions are named so it is easy to get the idea of what they are doing by just looking at their name.
    void menu();
    void oddsOfWinning(int odds[], int size);
    void moneyAmount(int stats[], string human);
    void moneyAmountComputer(int stats[], string human);
    void bet(int stats[], string human, int odds[]);
    void betComputer(int stats[], string human, int odds[]);
    void oddsPerHorse(int odds[]);
    int run(int odds[], int horse);
    int payoff(int winner, int player[], string human);
    int payoffComputer(int winner, int player[], string human);
    void theRace(int positions[]);
    void whoWins(int player1[], int player2[], string human, string otherHuman);
    void whoWinsComputer(int player1[], int player2[], string human, string otherHuman);