/* * PROJECT: Decivoc Compiler
 * MODULE: The Blacksmith (Lexer)
 * DESCRIPTION: Phonetic Parser for Scriptorium Studios
 * FORGE DATE: 2026-04-13
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <set>

// 1.0 The Lexicon: Define the 39 Core Keywords
const std::set<std::string> LEXICON = {
    "Incorporate", "Enter", "Exit", "Define", "Match", "Repeat", "Cycle",
    "Act", "Alter", "Verify", "Add", "Subtract", "Times", "Divide",
    "Square", "Root", "Power", "Portion", "Between", "Absolute", "Kept",
    "List", "Item", "Reject", "Join", "Pointer", "Underlap", "Branch",
    "String", "Value", "Terminate", "Home", "Nodes", "Gap", "Beyond",
    "Under", "Point", "Note", "Void"
};

// 2.0 The Bridge: Define words the compiler should ignore for phonetic flow
const std::set<std::string> BRIDGE_WORDS = {
    "is", "the", "to", "with", "of", "and", "from"
};

int main() {
    // This sample string represents a line forged in your HTML Sandbox
    std::string forgeInput = "Node 1.0 Define Ribbon Underlap Color Match #FF5733FF Terminate";
    
    std::cout << "--- DECIVOC FORGE START ---" << std::endl;
    std::cout << "Input: " << forgeInput << "\n" << std::endl;

    std::stringstream ss(forgeInput);
    std::string word;
    
    while (ss >> word) {
        // Step A: Filter out the Natural Cadence (Bridge Words)
        if (BRIDGE_WORDS.find(word) != BRIDGE_WORDS.end()) {
            continue; 
        }

        // Step B: Identify the Node hierarchy
        if (word == "Node") {
            std::string depth;
            ss >> depth;
            std::cout << "[NODE DEPTH]: " << depth << std::endl;
            continue;
        }

        // Step C: Identify Lexicon Keywords
        if (LEXICON.find(word) != LEXICON.end()) {
            std::cout << "[KEYWORD]: " << word << " (Logic Mapped)" << std::endl;
        } 
        
        // Step D: Identify Hexadecimal Colors or Values
        else if (word.find("#") == 0) {
            std::cout << "[HEX VALUE]: " << word << std::endl;
        }
        
        // Step E: Identify Custom Variables (Handling the Underlap logic)
        else {
            std::cout << "[IDENTITY]: " << word << std::endl;
        }
    }

    std::cout << "\n--- FORGE COMPLETE ---" << std::endl;
    return 0;
}
