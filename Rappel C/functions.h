#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "student.h"

// EXO 1 TP 1
void exchange(int* a, int* b);

// EXO 2 TP 1
int inializationTab(int* tab);
void reseachPerDichotomie(int* tab, int lastIndex, int* valueResearch);
void displayTab(int* tab, int lastIndex, int* valueResearch);

// EXO 3 TP 1
int addStudent(student *tabStudent, int studentPresent);
void displayStudent(student *tabStudent, int studentPresent);
int saveStudent(student* tabStudent);
void loadStudent(student* tabStudent);