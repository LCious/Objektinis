#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <chrono>
#include <numeric>
using namespace std;
using namespace std::chrono;
struct Studentas{
	string vardas;
	string pavarde;
	int homeworkNum;
	vector <int> pazymiai;
	int exam;
	double final;
};
bool Checker();
char choiceCheck(char&);
char choiceCheck2(char&);
int numCheck();
void gradeCheck(int&);
void NewStudent(vector <Studentas>&);
template <class T>
void Ivestis(T&, string, char, bool);
void isvestis(vector <Studentas>, char);
template <class T>
void fileOutput(T, T, char, string);
template <class T>
void print(T, char, string);
bool FileExist();
bool studComp(Studentas, Studentas);
void generateStud(int, string);
double calcFinal(vector <int>, int, int, char);			
template <class T>
void group_strat1(T, T&, T&, int);
template <class T>
void group_strat2(T&, T&, int);
template <class T>
void group_optimised_vector(T&, T&, int);
template <class T>
void mainFunc(T, T, T, bool, char, char);
template <class T>
void mainFuncForList(T, T, T, bool, char, char);
void benchmarkingVector(bool, char, char);
void benchmarkingDeque(bool, char, char);
void benchmarkingList(bool, char, char);
void benchmark();
#endif