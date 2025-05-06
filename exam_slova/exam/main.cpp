#include <iostream>
#include <string>
#include "Player.h"
#include "CLFC.h"
bool compareLastFirstChars(const std::string& firstWord, const std::string& secondWord);

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string firstWord, secondWord, budderWord;
    bool continueGame = true;

    std::cout << "Игрок 1, начните и введите первое слово: ";
    std::cin >> firstWord;
    std::cout << "Игрок 2, введите второе слово: ";
    std::cin >> secondWord;


    while (continueGame) {
       

        // Сравниваем буквы
        if (compareLastFirstChars(firstWord, secondWord)) {
            std::cout << "Совпадение! Игрок 1, введите слово: ";

            firstWord = secondWord;


            secondWord = ""; // Сбрасываем второе слово для нового ввода
            std::cin >> secondWord; // Игрок 1 вводит новое слово
        }
        else {
            std::cout << "Совпадения нет. Игра закончена." << std::endl;
            return 0; // Заканчиваем игру
        }


        if (compareLastFirstChars(firstWord, secondWord)) {
            std::cout << "Совпадение! Игрок 2, введите новое слово: ";

            firstWord = secondWord;


            secondWord = ""; // Сбрасываем первое слово для нового ввода
            std::cin >> secondWord; // Игрок 1 вводит новое слово
        }
        else {
            std::cout << "Совпадения нет. Игра закончена." << std::endl;
            return 0; // Заканчиваем игру
        }


    }

    return 0;
}


//bool compareLastFirstChars(const std::string& firstWord, const std::string& secondWord) {
//    // Проверяем, что оба слова не пустые
//    if (firstWord.empty() || secondWord.empty()) {
//        return false; // Если одно из слов пустое, возвращаем false
//    }
//
//
//
//
//    // Сравниваем последнюю букву первого слова с первой буквой второго
//    return firstWord.back() == secondWord.front();
//}


clfc

