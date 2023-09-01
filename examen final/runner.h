#ifndef RUNNER_H
#define RUNNER_H

#include <iostream>
#include <vector>

#include "constants.h"

using namespace std;

bool check_correct_data(package data);
bool check_correct_time(long seconds);
int get_step_day(int steps);
double get_distance(int steps);
double get_calories_burned(double dist, times current_time);
times get_format_time(long seconds);
times get_time_hms(long seconds);
string get_achievement(double dist);
string aumenta_0(int time);
string format_time(long seconds, times result);
void show_message(string time, int total_steps, double dist, double calories, string achievement);
vector<package> accept_package(package data);

#endif