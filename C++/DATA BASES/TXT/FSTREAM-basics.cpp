#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

void write();
void read();

int main() {
    write();
    read();

    system("pause");
    return 0;
}

void write() {
    std::ofstream file;
    std::string filename, sentence;

    std::cout << "Write the name of the file: ";
    getline(std::cin, filename);
    filename += ".txt"; //You could change this to read the file extension you want, i use this fo the example

    file.open(filename.c_str(), std::ios::out); //Opening the file
    //file.open("Here u can write the address of a file: c:\\folder\\folder\\file,txt, std::ios::out");
    
    if(file.fail()) {
    	std::cout << "There was an error opening the file";
    	exit(1);
	}

    std::cout << "Enter the text for the file: ";
    getline(std::cin, sentence);

    file << sentence;

    file.close(); // This close the file
}

void read() {
    std::ifstream file;
    std::string filename, text;

    std::cout << "\nEnter the name of the file to read: "; // Opening the file to read
    getline(std::cin, filename);
    filename += ".txt"; //You could change this to read the file extension you want, i use this fo the example

    file.open(filename.c_str(), std::ios::in);

    if(file.fail()) {
        std::cout << "There was an error opening the file." << std::endl;
        exit(1);
    }

    while (!file.eof()) { //eof = end of file
        getline(file, text);
        std::cout << text << std::endl;
    }

    file.close();
}