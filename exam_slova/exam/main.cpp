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

    std::cout << "����� 1, ������� � ������� ������ �����: ";
    std::cin >> firstWord;
    std::cout << "����� 2, ������� ������ �����: ";
    std::cin >> secondWord;


    while (continueGame) {
       

        // ���������� �����
        if (compareLastFirstChars(firstWord, secondWord)) {
            std::cout << "����������! ����� 1, ������� �����: ";

            firstWord = secondWord;


            secondWord = ""; // ���������� ������ ����� ��� ������ �����
            std::cin >> secondWord; // ����� 1 ������ ����� �����
        }
        else {
            std::cout << "���������� ���. ���� ���������." << std::endl;
            return 0; // ����������� ����
        }


        if (compareLastFirstChars(firstWord, secondWord)) {
            std::cout << "����������! ����� 2, ������� ����� �����: ";

            firstWord = secondWord;


            secondWord = ""; // ���������� ������ ����� ��� ������ �����
            std::cin >> secondWord; // ����� 1 ������ ����� �����
        }
        else {
            std::cout << "���������� ���. ���� ���������." << std::endl;
            return 0; // ����������� ����
        }


    }

    return 0;
}


//bool compareLastFirstChars(const std::string& firstWord, const std::string& secondWord) {
//    // ���������, ��� ��� ����� �� ������
//    if (firstWord.empty() || secondWord.empty()) {
//        return false; // ���� ���� �� ���� ������, ���������� false
//    }
//
//
//
//
//    // ���������� ��������� ����� ������� ����� � ������ ������ �������
//    return firstWord.back() == secondWord.front();
//}


clfc

