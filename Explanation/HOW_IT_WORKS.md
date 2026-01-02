## How It Works

SIDDHCESNA-1 is a **custom-built 8-bit Arithmetic Logic Unit (ALU)** that performs arithmetic operations using discrete hardware blocks and switch-based inputs.

### Input Stage
- The ALU has **two 8-bit input switch banks**.
- Each switch bank represents an **8-bit unsigned binary number (0–255)**.
- **2 additional switches** are used as **opcode selectors** to choose the operation.

### Opcode Logic
The opcode determines which operation the ALU performs:
- `00` → ADD (Addition)
- `01` → SUB (Subtraction)

These opcode signals are fed into a **MUX (Multiplexer)** to select the correct data path.

### Addition Operation
- Addition is handled using **two 8-bit adders**.
- The result is displayed using **9 LEDs**:
  - 8 LEDs for the result bits
  - 1 extra LED to indicate **overflow**
- Overflow occurs when the sum exceeds 8 bits.

### Subtraction Operation (2’s Complement)
- Subtraction is implemented using **2’s complement logic**.
- Instead of using XOR gates, the second operand is inverted using **2 inversion gates**.
- A `+1` is added internally through the adder to complete the 2’s complement process.
- This design choice was made to keep the hardware **simple and educational**, rather than optimized for space.

### Multiplexer (MUX)
- The **MUX unit** selects whether the output comes from the addition path or subtraction path.
- The selection is controlled directly by the opcode switches.

### Output Stage
- The final 8-bit result is shown on the output LEDs.
- The overflow LED helps visualize carry-out during addition.

### Power Regulation
- A **voltage regulator** ensures a stable and safe voltage supply to all components.
- This protects the logic gates, adders, and LEDs from voltage fluctuations.

### Software Interface (Scesna/C++)
- A custom compiler called **Scesna/C++** converts human-readable instructions into machine-level binary.
- Example:
  - `ADD 5,9` → `00 00000101 00001001`
  - `SUB 12,3` → `01 00001100 00000011`
- These binary values directly correspond to the switch inputs of the ALU.

---

**In summary**, SIDDHCESNA-1 demonstrates how high-level code can be translated into low-level binary operations and executed using real hardware, making it an effective educational model of how CPUs work internally.
