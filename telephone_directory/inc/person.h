#ifndef __PERSON_H
#define __PERSON_H

#include<iostream>
#include<string>

using namespace std;

struct person
{
    string name;
    string address;
    int age;
    string tele_num;
};


void add_person();
void show_person();
void delete_person();
void find_person();
void change_person();
void empty_person();

#endif

