#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// Convert decimal to 8-bit binary string
string toBinary8(int n) {
    if (n < 0 || n > 255) {
        cerr << "Operand out of range (0-255)" << endl;
        exit(1);
    }
    bitset<8> b(n);
    return b.to_string();
}

// Compile instruction: opcode + operand1 + operand2
string compileInstruction(const string& instr, int op1, int op2) {
    string opcode;
    if (instr == "ADD") opcode = "00"; // opcode can be either "00" or "01"
    else if (instr == "SUB") opcode = "01";
    else {
        cerr << "Unknown instruction: " << instr << endl;
        exit(1);
    }

    return opcode + " " + toBinary8(op1) + " " + toBinary8(op2);
}

int main() {
    cout << "Welcome to Scesna/S++ Compiler!" << endl;
    cout << "Enter instructions like 'ADD 5,9' or 'SUB 12,3'" << endl;
    cout << "Type 'END' to finish.\n" << endl;

    string line;
    while (true) {
        cout << "> ";
        getline(cin, line);

        if (line == "END") break;
        if (line.empty()) continue;

        // Find space to separate instruction
        size_t spacePos = line.find(' ');
        if (spacePos == string::npos) {
            cerr << "Invalid input" << endl;
            continue;
        }

        string instr = line.substr(0, spacePos);
        string operands = line.substr(spacePos + 1);

        // Find comma
        size_t commaPos = operands.find(',');
        if (commaPos == string::npos) {
            cerr << "Operands must be separated by a comma" << endl;
            continue;
        }

        int op1 = stoi(operands.substr(0, commaPos));
        int op2 = stoi(operands.substr(commaPos + 1));

        string compiled = compileInstruction(instr, op1, op2);
        cout << "Compiled machine code: " << compiled << endl;
    }

    cout << "\nCompilation finished!" << endl;
    return 0;
}
