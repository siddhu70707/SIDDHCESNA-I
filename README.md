# SIDDHCESNA-1



## Overview
**SIDDHCESNA-1** is a **custom-built 8-bit ALU** (Arithmetic Logic Unit) designed for educational purposes and school projects.  
It supports **8-bit addition and subtraction**, where subtraction is implemented using **2's complement** via inverter gates.  

> Note: XOR-based subtraction tricks were avoided to optimize space, keeping the hardware simple and easy to understand.

The project also includes a **custom compiler named Scesna/C++** to interface with the hardware.

---

## Features
- ✅ 8-bit adder and subtractor
- ✅ Subtraction implemented with 2's complement using inverter gates
- ✅ Two 8-bit input switches
- ✅ Two opcode input digits
- ✅ 8-bit multiplexer (MUX) unit
- ✅ Custom-built compiler: Scesna/C++

---

## Hardware Components
| Component            | Description                                                      |
|----------------------|------------------------------------------------------------------|
| 8-bit Input Switches  | **18 switches**: two sets of 8-bit for operands + 2 for opcodes |
| LEDs                 | **9 LEDs** to display output, plus **1 extra LED** for adder overflow |
| 8-bit Adders         | **4 total**: 2 for addition, 2 for subtraction                  |
| Inversion Gates      | **2 gates** for subtraction logic (2's complement)              |
| MUX Unit             | **2 units** for  Multiplexing operations                                         |
| Voltage Regulator    | Provides stable voltage to the circuit                           |
| Power Supply (9 volt battery)        | Provides main controlled voltage                                 |


---

## Software
- **Language:** S++ (for the Scesna/C++ compiler)
- **Custom Compiler:** Scesna/C++ compiles operations into ALU-compatible instructions
- **Code Organization:**  
  - `code/` → Hardware test programs and compiler scripts
  - `docs/` → Detailed explanation of ALU architecture
  - `images/` → Photos or diagrams of the hardware setup

---

## Usage
1. Set the **8-bit input switches** to your operands.
2. Use the **2 opcode digits** to select addition or subtraction.
3. Observe the **LED output** for results.
4. Write programs in **Scesna/C++** to generate ALU instructions for more complex operations.

---

## Project Structure
