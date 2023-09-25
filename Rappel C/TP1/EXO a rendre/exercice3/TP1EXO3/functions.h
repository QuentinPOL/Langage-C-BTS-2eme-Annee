#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

// EXO 3 TP 1
int addStudent(student* tabStudent, int* studentPresent);
void displayStudent(student* tabStudent, int studentPresent);
char* saveStudent(student* tabStudent, char* nameFile, char* pathFile, int studentArePresent);
char* loadStudent(student* tabStudent, char filePath, int studentPresent);
void viderBuffer();