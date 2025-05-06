#pragma once
#include <iostream>
#include <string>


#ifndef PLAYER
#define PLAYER
class Player
{
private:
    std::string name; // ��� ������
    int lives;        // ���������� ������

public:
    // ����������� ������ Player
    Player(const std::string& playerName, int playerLives)
        : name(playerName), lives(playerLives) {
    }

    // ����� ��� ��������� ����� ������
    std::string getName() const {
        return name;
    }

    // ����� ��� ���������� ���-�� ������
    void loseLife() {
        if (lives > 0) {
            lives--;
        }
    }

    // ����� ��� ��������, ��� �� �����
    bool isAlive() const {
        return lives > 0;
    }

    // ����� ��� ��������� ���������� ������
    int getLives() const {
        return lives;
    }
};
#endif 
