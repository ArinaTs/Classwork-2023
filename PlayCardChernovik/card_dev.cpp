#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

#include <windows.h>
#include <conio.h>

#define NUM_OF_CARDS 6



#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8

#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80




class Game {

    void start() {
        //вызывает функции (перевернуть карты, ...)
    }
};

int main() {

    system("title Application");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);

    SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);

    system("cls");

    int choose_pos;
    int iKey;
    int exit_flag;
    COORD cursorPos;

    int cards[] = { 3, 8, 5, 3, 8, 5 };

    exit_flag = 0;
    choose_pos = 0;

    for (int i = 0; i < NUM_OF_CARDS; i++)
        std::cout << "[   ] ";

    for (int i = 0; i < NUM_OF_CARDS; i++)
        std::cout << "      ";

    int count = 0;
    iKey = 67;
    short x = 0, y = 1;
    cursorPos = { x, y };
    SetConsoleCursorPosition(hStdOut, cursorPos);

    while (1) {
        int first, second;

        int i = 0;
        while (i < 2) {
            iKey = 67;
            while (iKey != KEY_ENTER) {
                int prev_pos = choose_pos;
                switch (iKey) {
                case KEY_ARROW_LEFT:
                    choose_pos--;
                    break;
                case KEY_ARROW_RIGHT:
                    choose_pos++;
                    break;
                }

                if (choose_pos < 0) { choose_pos = NUM_OF_CARDS - 1; }
                if (choose_pos > NUM_OF_CARDS - 1) { choose_pos = 0; }

                x = prev_pos * 6, y = 1;
                cursorPos = { x, y };
                SetConsoleCursorPosition(hStdOut, cursorPos);
                std::cout << "      ";

                x = choose_pos * 6, y = 1;
                cursorPos = { x, y };
                SetConsoleCursorPosition(hStdOut, cursorPos);
                std::cout << "  ^   ";

                iKey = _getch();
            }

            x = choose_pos * 6, y = 0;
            cursorPos = { x, y };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            std::cout << "[ " << cards[choose_pos] << " ] ";

            if (i == 0) first = choose_pos;
            else second = choose_pos;

            i++;
        }

        if (cards[first] == cards[second]) {
            count++;
            if (count == NUM_OF_CARDS / 2) break;
        }
        else {
            Sleep(2000);

            x = first * 6, y = 0;
            cursorPos = { x, y };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            std::cout << "[   ] ";

            x = second * 6, y = 0;
            cursorPos = { x, y };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            std::cout << "[   ] ";
        }
    }



    x = 0, y = 3;
    cursorPos = { x, y };
    SetConsoleCursorPosition(hStdOut, cursorPos);
    std::cout << "WIN!!\n\n";
    system("pause");







    return 0;
}