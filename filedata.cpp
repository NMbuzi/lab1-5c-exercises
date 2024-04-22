#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("myfile.txt"); // Open the file

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string fileData; // String to hold file contents

    // Read file contents into fileData
    std::string line;
    while (std::getline(inputFile, line)) {
        fileData += line + "\n"; // Add each line to fileData
    }

    inputFile.close(); // Close the file

    // Print the contents of the file
    std::cout << "Contents of the file:" << std::endl;
    std::cout << fileData << std::endl;

    return 0;
}