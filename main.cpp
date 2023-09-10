#include <iostream>

using namespace::std;

class LeoBot {
public:
    void greet() {
        print_pad("Hello from Argentina, I'm Leo!\nWhat can I do for you?");
    }

    void exit() {
        print_pad("It was nice talking, see you soon!");
    }

private:
    const int MAX_PAD = 80;
    void print_pad(const string s) {
        print_separator(s);
        cout << s << endl;
        print_separator(s);
    }

    void print_separator(const string s) {
        cout << string(MAX_PAD, '_') << endl;
    }
};
int main() {
    LeoBot l;
    l.greet();
    l.exit();
    return 0;
}
