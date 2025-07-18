#include <iostream>
#include <unistd.h>     // For usleep()
#include <termios.h>    // For terminal input
#include <fcntl.h>      // For non-blocking input

using namespace std;

const int width = 10;
const int height = 20;
char board[height][width];
int blockX = width / 2;
int blockY = 0;

// Setup terminal for non-blocking input
void initTerminal() {
    termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~ICANON;
    t.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
    fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
}

// Reset terminal to normal mode
void resetTerminal() {
    termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag |= ICANON;
    t.c_lflag |= ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// Initialize the board
void initBoard() {
    for (int i = 0; i < height; ++i)
        for (int j = 0; j < width; ++j)
            board[i][j] = ' ';
}

// Draw the board with the block
void draw() {
    system("clear"); // Clear screen on macOS

    for (int i = 0; i < height; ++i) {
        cout << "|";
        for (int j = 0; j < width; ++j) {
            if (i == blockY && j == blockX)
                cout << "#";
            else
                cout << board[i][j];
        }
        cout << "|\n";
    }

    // Bottom border
    for (int i = 0; i < width + 2; ++i) cout << "-";
    cout << endl;
}

// Handle keyboard input
void input() {
    char ch;
    if (read(STDIN_FILENO, &ch, 1) > 0) {
        if (ch == 'a' && blockX > 0) blockX--;
        if (ch == 'd' && blockX < width - 1) blockX++;
        if (ch == 's') blockY++;
        if (ch == 'q') {
            resetTerminal();
            exit(0);
        }
    }
}

// Update the block position
void update() {
    blockY++;
    if (blockY >= height) {
        board[blockY - 1][blockX] = '#';
        blockX = width / 2;
        blockY = 0;
    }
}

int main() {
    initBoard();
    initTerminal();

    while (true) {
        draw();
        input();
        update();
        usleep(300000); // Delay (300 ms)
    }

    resetTerminal();
    return 0;
}