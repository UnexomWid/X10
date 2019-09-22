/*
 * Exomit Interpreter - A cross-platform interpreter for Exomit written in C++.
 * Copyright (C) 2018-2019  UnexomWid

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef TMP_INSTRUCTIONS_H
#define TMP_INSTRUCTIONS_H

#include "instruction.h"
#include <unordered_map>

extern std::unordered_map<char, instruction> instruction_list;

extern void initialize_instructions();
bool find_instruction(char id, instruction &instr);
uint8_t parse_num(POINTER_INFO);
bool parse_expression(POINTER_INFO);

void VALUE_INCREMENT(POINTER_INFO);
void VALUE_DECREMENT(POINTER_INFO);
void VALUE_OPERATION(POINTER_INFO);

void INDEX_INCREMENT(POINTER_INFO);
void INDEX_DECREMENT(POINTER_INFO);

void UNCERTAINTY_START(POINTER_INFO);
void UNCERTAINTY_END(POINTER_INFO);

void LOOP_START(POINTER_INFO);
void LOOP_END(POINTER_INFO);

void OUTPUT_WRITE(POINTER_INFO);

void INPUT_READ(POINTER_INFO);
void INPUT_ADD(POINTER_INFO);
void INPUT_XOR(POINTER_INFO);
void INPUT_AND(POINTER_INFO);
void INPUT_OR(POINTER_INFO);

void FILE_OPEN(POINTER_INFO);
void FILE_CLOSE(POINTER_INFO);

extern instruction INSTRUCTION_VALUE_INCREMENT; // Increment char value at current index.
extern instruction INSTRUCTION_VALUE_DECREMENT; // Decrement char value at current index.
extern instruction INSTRUCTION_VALUE_OPERATION; // Execute an operation on value at current index.

extern instruction INSTRUCTION_INDEX_INCREMENT; // Increment index.
extern instruction INSTRUCTION_INDEX_DECREMENT; // Decrement index.

extern instruction INSTRUCTION_UNCERTAINTY_START; // Start an uncertainty;
extern instruction INSTRUCTION_UNCERTAINTY_END; // End an uncertainty;

extern instruction INSTRUCTION_LOOP_START; // Start a loop;
extern instruction INSTRUCTION_LOOP_END; // End a loop;

extern instruction INSTRUCTION_OUTPUT_WRITE; // Write to OUTPUT value from current index.

extern instruction INSTRUCTION_INPUT_READ; // Read from input to value from current index.
extern instruction INSTRUCTION_INPUT_ADD; // Add from input to value from current index.
extern instruction INSTRUCTION_INPUT_XOR; // XOR input with value from current index.
extern instruction INSTRUCTION_INPUT_AND; // AND input with value from current index.
extern instruction INSTRUCTION_INPUT_OR; // OR input with value from current index.

extern instruction INSTRUCTION_FILE_OPEN; // Redirect input or output to file.
extern instruction INSTRUCTION_FILE_CLOSE; // Stop redirecting input or output to file.

#endif