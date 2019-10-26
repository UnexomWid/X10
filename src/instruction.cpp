/**
 * X10 (https://github.com/UnexomWid/X10)
 *
 * This project is licensed under the MIT license.
 * Copyright (c) 2018-2019 UnexomWid (https://uw.exom.dev)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "instruction.h"

Instruction::Instruction() {
    identifier = '\0';
    body = nullptr;
}

Instruction::Instruction(char id, Body bdy) {
	identifier = id;
	body = bdy;
}

char Instruction::getIdentifier() {
	return identifier;
}

void Instruction::setIdentifier(char id) {
	identifier = id;
}

Body Instruction::getBody() {
	return body;
}

void Instruction::setBody(Body bdy) {
	body = bdy;
}

void Instruction::execute(POINTER_INFO) {
	body(POINTER_INFO_PARAMS);
}

bool Instruction::operator<(char right) {
	return identifier < right;
}

bool Instruction::operator==(char right) {
	return identifier == right;
}

bool Instruction::operator>(char right) {
	return identifier > right;
}

bool Instruction::operator<(Instruction right) {
	return identifier < right.identifier;
}

bool Instruction::operator==(Instruction right) {
	return identifier == right.identifier;
}

bool Instruction::operator>(Instruction right) {
	return identifier > right.identifier;
}