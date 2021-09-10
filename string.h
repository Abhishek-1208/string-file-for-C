#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

// structure to represent our string
struct string {
	int size, capacity;
	char *data;
};

// to check whether given string is empty or not
int empty(struct string *);


//to check whether given string has reached its maximum capacity or not
int full(struct string *str);


//returns the current size of the string
int size(struct string *str);


// returns the character present at passed index..throws error if index is out of range
char at(struct string *str, int index);


// clear the string but size will remain as it is 
void clear(struct string *str);


//resize the string in case its maximum capacity has been reached.. it will double the space
void resize(struct string *str);


//push the character to the end of string
void push_back(struct string *str, char x);


// delete the last character of the string
void pop_back(struct string *str);


// change the character present at passed index..throws error if index is out of range
void change_at(struct string *str, int index, char x);


// insert the character at given position
void insert_at(struct string *str, int index, char x);


// append the string temp to the end of string str
void append_string(struct string *str, struct string *temp);


// append the character array temp to the end of string str
void append_char_stream(struct string *str, char *temp);


// this function is equivalent of doing str = temp;
void assign_string(struct string *str, struct string *temp);


// this function is equivalent of doing str = "Abhishek";
void assign_char_stream(struct string *str, char *temp);


// to reverse the passed string
void reverse(struct string *str);


// to erase the value at a particular index
void erase(struct string *str, int index);


// to initialize an empty string
struct string* init();


//to intialize a string with passed value
struct string* init_with_value(char *temp);


// to take the string as input from user
void input(struct string *str);


// to print the string 
void print(struct string *str);


// to print the string with end of line at end
void println(struct string *str);
