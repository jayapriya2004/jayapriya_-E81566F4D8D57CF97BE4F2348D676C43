#include <iostream>
#include <string>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Player genericPlayer;
    Batsman batsman;
    Bowler bowler;

    // Call the play() method for each object
    genericPlayer.play();  // Calls the base class method
    batsman.play();        // Calls the overridden method in Batsman
    bowler.play();         // Calls the overridden method in Bowler

    return 0;
}
