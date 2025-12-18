#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;

void setColor(int colorCode) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
}

void typingEffect(const string& text) {
    for (char c : text) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << endl;
}

void clearScreen() {
    // For better clearing effect
    cout << "\033[2J\033[1;1H";  // ANSI escape code to clear screen
}

int main() {
    string nameplate = R"(
███╗   ███╗ █████╗ ███╗   ██╗███████╗██╗
████╗ ████║██╔══██╗████╗  ██║██╔════╝██║
██╔████╔██║███████║██╔██╗ ██║███████╗██║
██║╚██╔╝██║██╔══██║██║╚██╗██║╚════██║██║
██║ ╚═╝ ██║██║  ██║██║ ╚████║███████║██║
╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚══════╝╚═╝
)";

    setColor(10); // Green
    cout << "Welcome to the ASCII Art Nameplate!" << endl;
    setColor(7);  // Reset color

    cout << "\nGenerating your Nameplate..." << endl;

    typingEffect(nameplate);

    for (int i = 1; i <= 15; i++) {
        setColor(i);
        clearScreen();
        typingEffect(nameplate);
        this_thread::sleep_for(chrono::milliseconds(300));
    }

    setColor(14); // Yellow
    cout << "\nYour custom Nameplate is ready!" << endl;

    return 0;
}
