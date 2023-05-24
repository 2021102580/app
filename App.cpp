#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Lib.h>

// Main application
int main(int argc, char* argv[]) {
    // Parse command-line arguments
    std::string inputFilename;
    std::string outputFilename;
    std::string operation;

    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "--input") {
            if (i + 1 < argc) {
                inputFilename = argv[i + 1];
            }
            else {
                std::cerr << "--input option requires one argument." << std::endl;
                return 1;
            }
        }
        else if (arg == "--output") {
            if (i + 1 < argc) {
                outputFilename = argv[i + 1];
            }
            else {
                std::cerr << "--output option requires one argument." << std::endl;
                return 1;
            }
        }
        else if (arg == "--operation") {
            if (i + 1 < argc) {
                operation = argv[i + 1];
            }
            else {
                std::cerr << "--operation option requires one argument." << std::endl;
                return 1;
            }
        }
        else if (arg == "--help") {
            std::cout << "Usage: MyProgram [--input <filename>] [--output <filename>] [--operation <sort|reverse|permute>] [--help]" << std::endl;
            return 0;
        }
    }

    // Read input array from file
    std::vector < int > inputArray;
    std::ifstream inputFile(inputFilename);
    int x;

    while (inputFile >> x) {
        inputArray.push_back(x);
    }

    // Perform requested operation on input array
    if (operation == "sort") {
        Lib::sortArray(inputArray);
    }
    else if (operation == "reverse") {
        Lib::reverseArray(inputArray);
    }
    else if (operation == "permute") {
        Lib::permuteArray(inputArray);
    }


    // Write output array to file
    std::ofstream outputFile(outputFilename);
    for (int i = 0; i < inputArray.size(); i++) {
        outputFile << inputArray[i] << " ";
    }

    return 0;
}