#pragma once
#include <iostream>
#include <string>


#ifndef PLAYER
#define PLAYER
class Player
{
private:
    std::string name; // Имя игрока
    int lives;        // Количество жизней

public:
    // Конструктор класса Player
    Player(const std::string& playerName, int playerLives)
        : name(playerName), lives(playerLives) {
    }

    // Метод для получения имени игрока
    std::string getName() const {
        return name;
    }

    // Метод для уменьшения кол-ва жизней
    void loseLife() {
        if (lives > 0) {
            lives--;
        }
    }

    // Метод для проверки, жив ли игрок
    bool isAlive() const {
        return lives > 0;
    }

    // Метод для получения количества жизней
    int getLives() const {
        return lives;
    }
};
#endif 
