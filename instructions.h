#pragma once

#include "instruction.h"
#include <vector>


extern std::vector<instruction> instruction_list;

extern void initialize_instructions();
bool find_instruction(char id, instruction &instr);

void VALUE_INCREMENT(POINTER_INFO);
void VALUE_DECREMENT(POINTER_INFO);
void VALUE_OPERATION(POINTER_INFO);

void INDEX_INCREMENT(POINTER_INFO);
void INDEX_DECREMENT(POINTER_INFO);

void STDOUT_WRITE(POINTER_INFO);

void STDIN_READ(POINTER_INFO);
void STDIN_ADD(POINTER_INFO);
void STDIN_XOR(POINTER_INFO);
void STDIN_AND(POINTER_INFO);
void STDIN_OR(POINTER_INFO);

extern instruction INSTRUCTION_VALUE_INCREMENT; // Increment char value at current index.
extern instruction INSTRUCTION_VALUE_DECREMENT; // Decrement char value at current index.
extern instruction INSTRUCTION_VALUE_OPERATION; // Execute an operation on value at current index.

extern instruction INSTRUCTION_INDEX_INCREMENT; // Increment index.
extern instruction INSTRUCTION_INDEX_DECREMENT; // Decrement index.

extern instruction INSTRUCTION_STDOUT_WRITE; // Write to STDOUT value from current index.

extern instruction INSTRUCTION_STDIN_READ; // Read from STDIN to value from current index.
extern instruction INSTRUCTION_STDIN_ADD; // Add from STDIN to value from current index.
extern instruction INSTRUCTION_STDIN_XOR; // XOR STDIN with value from current index.
extern instruction INSTRUCTION_STDIN_AND; // AND STDIN with value from current index.
extern instruction INSTRUCTION_STDIN_OR; // OR STDIN with value from current index.