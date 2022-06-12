#include <fstream>
#include <iostream>
#include <vector>

int main() {
  //code has to be in a code.txt file in the same folder, or at the path you specify in here
    std::ifstream codeFile("../code.txt");
    std::string code;

    while (std::getline(codeFile, code)) {

    std::vector<int> belt = {0};
    std::vector<int> loop_pointer_stack = {};
    int belt_pointer = 0;
    for ( int i = 0; i < code.size(); i++ ) {
        if (code[i] == '>') {
            belt_pointer++;
            if( belt_pointer >= belt.size() ) {
                belt.push_back(0);
            }
        }
        else if ( code[i] == '<' ) {
            belt_pointer--;
        }
        else if ( code[i] == '+' ) {
            belt[belt_pointer] += 1;
        }
        else if ( code[i] == '-' ) {
            belt[belt_pointer] = belt[belt_pointer] - 1;
        }
        else if ( code[i] == '.' ) {
            char value = static_cast<char>(belt[belt_pointer]);
            std::cout << value;
        }
        else if ( code[i] == ',' ) {
            char c;
            std::cin >> c;
            belt[belt_pointer] = int( c );
        }
        else if ( code[i] == '[' ) {
            if( belt[belt_pointer] != 0 ) {
                loop_pointer_stack.push_back( i );
            }
        }
        else if ( code[i] == ']' ) {
            if( belt[belt_pointer] != 0 ) {
                i = loop_pointer_stack.back();
            }
            else {
                loop_pointer_stack.pop_back();
            }
        }
        else {
        }
    }
    std::cout << std::endl;
    }
    codeFile.close();
}
