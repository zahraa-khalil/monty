0x19. C - Stacks, Queues - LIFO, FIFO

Stack
LIFO (Last-In-First-Out) structure.
* Operations:
* Push: Adds an element to the top of the stack.
* Pop: Removes and returns the top element from the stack.
* Peek or Top: Returns the top element without removing it.
Queue:
FIFO (First-In-First-Out) structure
* Operations:
* Enqueue: Adds an element to the rear/end of the queue.
* Dequeue: Removes and returns the front element from the queue.
* Front or Peek: Returns the front element without removing it.
Common Use Cases:
* Stacks: Used in implementing function calls and recursion (call stack), undo functionality in applications, and for parsing expressions (like postfix evaluation).
* Queues: Used in task scheduling, managing resources, breadth-first search algorithms, and handling requests in web servers.


The purpose of Monty, being a fictional language, is to demonstrate concepts like syntax parsing, lexing, interpreting, and building simple compilers or interpreters.

what is bytecode?
Bytecode is a form of intermediate code that is typically generated by compilers and used in various programming language implementations. It's a low-level representation of code that is not directly executed by hardware but is instead intended to be executed by a virtual machine or an interpreter.

opcode?
Opcode, short for "operation code," refers to a specific code or instruction in machine language or assembly language that directly corresponds to a particular operation or action performed by a computer's CPU (Central Processing Unit). Each opcode represents a fundamental operation that the CPU can execute.
simple example in assembly language:
MOV AX, 5   ; Move the value 5 into the AX register
ADD BX, AX  ; Add the value in AX register to the value in BX register


////////////////////////////////////////////////////////////////

what the diffrence between bytecode and opcode? 

Bytecode:
Purpose:

Bytecode is an intermediate representation of code.
It serves as a portable and platform-independent format that can be executed by a virtual machine or interpreter.
Level of Abstraction:

Bytecode is higher level compared to machine code.
It's closer to the source code but still needs interpretation by a runtime environment or virtual machine.
Usage:

Generated by compilers or translators from higher-level programming languages.
Typically used in languages like Java (.class files), Python (.pyc files), .NET languages (Common Intermediate Language - CIL/MSIL), etc.
It's not directly executed by the hardware but by a software-based runtime environment (e.g., Java Virtual Machine for Java bytecode).
Execution:

Bytecode is interpreted or just-in-time (JIT) compiled by a virtual machine at runtime into machine code understood by the specific hardware architecture.

----------------------------------------------------------------

Opcode:

Purpose:

Opcode (Operation Code) refers to specific binary instructions in machine language or assembly language.
It represents a low-level operation that a computer's CPU can execute directly.
Level of Abstraction:

Opcodes are the lowest-level instructions understood by the CPU.
They are represented in binary form and directly correspond to specific hardware-level operations.
Usage:

Used in machine language and assembly language programming.
Each opcode corresponds to a specific operation like arithmetic, logic, data movement, control flow, etc.
Assembly language mnemonics (e.g., ADD, MOV) correspond to specific opcodes recognized by the processor.
Execution:

Opcodes are directly executed by the CPU without requiring interpretation by any software layer or virtual machine.



////////////////////////////////////////////////////////////////




* read from file 
* get line -> strtok -> compare to fun name -> if statement to handle each func
* 