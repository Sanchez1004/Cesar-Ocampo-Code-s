#include <iostream>
#include <fstream>
#include <string>

std::fstream file;

class File {
private:
    std::string fileName;
    std::string sentence;

public:
    File() {}
    void createFile();
    void addSentence();
};

void File::createFile() {
    std::cout << "Write the name of the file: ";
    std::getline(std::cin, fileName);
    fileName += ".txt";
    file.open(fileName);
    if (file.fail()) {
        std::cout << "There was an error opening this file" << std::endl;
        exit(1);
    }
}

void File::addSentence() {
    std::cout << "Enter the text to add in the file: ";
    std::getline(std::cin, sentence);
    file << sentence << std::endl;
}

int main() {
    File file;
    int opc = 0;

    file.createFile();

    do {
        file.addSentence();
        std::cout << "\nDo you want to add more text?\n";
        std::cout << "Enter '1' to add more or '0' to exit: ";
        std::cin >> opc;
        std::cin.ignore();
    } while (opc != 0);

    return 0;
}