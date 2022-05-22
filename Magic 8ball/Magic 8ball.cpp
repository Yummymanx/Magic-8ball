#include <iostream>
#include <string>
#include <random>

using namespace std;

string question;

void answer();
void start();

int main()
{
    start();
}

void answer() {

    int x;
    random_device randomAns;
    mt19937 gen(randomAns());
    uniform_int_distribution<> distrib(0, 2);

    x = distrib(gen);

    if (x == 0) {
        cout << "Yes.\n\n";
    }
    else if (x == 1) {
        cout << "No.\n\n";
    }
    else if (x == 2) {
        cout << "Maybe.\n\n";
    }

    start();

}

void start() {

    cout << "\n What do you want to ask to the Magic 8ball ? Yes or No questions only. Don't you ask the same question twice, though !\n That would ruin it...\n\n";
    getline(cin, question);
    answer();

}