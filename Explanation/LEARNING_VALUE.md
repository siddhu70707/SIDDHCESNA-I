## Learning Value

Building **SIDDHCESNA-1** provided hands-on understanding of how software instructions are executed by real hardware.  
Instead of relying on simulations, this project demonstrates computation using **physical logic components**.

### Key Concepts Learned

### 1. Binary Arithmetic
- Learned how **8-bit numbers** are represented and processed.
- Understood carry propagation and **overflow detection** in adders.

### 2. 2’s Complement Subtraction
- Implemented subtraction using **2’s complement** at the hardware level.
- Used **inversion gates + adder carry-in** instead of XOR tricks to clearly visualize the logic.
- Gained insight into how CPUs reuse addition hardware for subtraction.

### 3. ALU Architecture
- Designed a functional **8-bit ALU** with separate data paths.
- Used a **MUX** to select outputs based on opcode signals.
- Understood how opcode bits control hardware behavior.

### 4. Hardware–Software Interface
- Built a custom compiler (**Scesna/C++**) to translate human-readable instructions into binary.
- Learned how **high-level code maps directly to hardware signals**.
- Understood instruction encoding and machine-level representation.

### 5. System-Level Thinking
- Integrated multiple components: switches, adders, logic gates, MUX, LEDs, and power regulation.
- Learned the importance of **voltage regulation** for hardware stability.
- Debugged real-world issues like incorrect wiring and signal flow.

### 6. Engineering Trade-offs
- Chose clarity and educational value over hardware optimization.
- Avoided complex gate-level optimizations to keep the design understandable.
- Learned how design decisions affect complexity, readability, and reliability.

---

**Overall**, this project bridges the gap between **theory and practice**, providing a clear understanding of how CPUs perform arithmetic operations internally and how software ultimately controls hardware.
