// structure to represent our string
struct string {
	int size, capacity;
	char *data;
};

// to check whether given string is empty or not
int empty(struct string *str) {
	return str -> size == 0;
}

//to check whether given string has reached its maximum capacity or not
int full(struct string *str) {
	return str -> size == str -> capacity;
}


//returns the current size of the string
int size(struct string *str) {
	return str -> size;
}


// returns the character present at passed index..throws error if index is out of range
char at(struct string *str, int index) {
	//to check out of range condition
	assert(index >= 0 && index < size(str));
	
	return str -> data[index];

}

// clear the string but size will remain as it is 
void clear(struct string *str) {
	
	str -> size = 0;
	str -> data[0] = '\0'; 
}

//resize the string in case its maximum capacity has been reached.. it will double the space
void resize(struct string *str) {
	
	str -> data = (char*)realloc(str -> data, str -> capacity  + 10);
	str -> capacity += 10;	
}



//push the character to the end of string
void push_back(struct string *str, char x) {
	// if string has reached its maximum capacity , then resize it accordingly
	if(full(str)) {
		resize(str);
	}
	
	// copy the value
	str -> data[str -> size++] = x;
	str -> data[str -> size] = '\0';

}



// delete the last character of the string
void pop_back(struct string *str) {
	
	if(empty(str)) {
		printf("Underflow\n");
		exit(1);
	}
	
	else {
		str -> data[--str -> size] = '\0';
	}	
	
}




// change the character present at passed index..throws error if index is out of range
void change_at(struct string *str, int index, char x) {
	// to check out of range condition
	assert(index >= 0 && index < size(str));
	//changing value
	str -> data[index] = x;

}


// insert the character at given position
void insert_at(struct string *str, int index, char x) {
	
	// if passed index is greater than size of string simply push_back
	if(index >= size(str)) {
		push_back(str, x);
		return;
	}
	
	// if string has reached its maximum capacity, then resize it first
	if(full(str)) {
		resize(str);
	}
	
	// if passed index is less than 0.. insert at beginning 
	if(index < 0) {
		index = 0;
	}
	
	
	
	
	int itr = str -> size;
	//making place for inserting character at index by shifiting character to the right by 1.
	while(itr > index) {
		str -> data[itr] = str -> data[itr - 1];
		itr--;
	}
	
	str -> data[index] = x;
	
	//increase size because we added one more character
	str -> size++;
	str -> data[str -> size] = '\0';
}


// append the string temp to the end of string str
void append_string(struct string *str, struct string *temp) {
	
	int temp_len = temp -> size, itr = 0;
	//simply pushing the string at the end
	while(itr < temp_len) {
		push_back(str, temp -> data[itr]);
		itr++;
	}
		
}


// append the character array temp to the end of string str
void append_char_stream(struct string *str, char *temp) {
	
	int itr = 0, len = strlen(temp);
	// simply pushing back each character one by one
	while(itr < len) {
		push_back(str, temp[itr]);
		itr++;
	}
	
}


// this function is equivalent of doing str = temp;
void assign_string(struct string *str, struct string *temp) {
	
	//first clearing old value and then copying
	clear(str);
	
	int temp_len = temp -> size, itr = 0;
	while(itr < temp_len) {
		push_back(str, temp -> data[itr]);
		itr++;
	}
	
}


// this function is equivalent of doing str = "Abhishek";
void assign_char_stream(struct string *str, char *temp) {
	
	//first clearing old value then copying
	clear(str);
	
	int itr = 0, len = strlen(temp);
	while(itr < len) {
		push_back(str, temp[itr]);
		itr++;
	}
}


// reverse the passed string using standard 2 pointer approach
void reverse(struct string *str) {
	
	int l = 0, r = size(str) - 1;
	
	while(l < r) {
		//swapping character at lth and rth position
		char x = at(str, l);
		change_at(str, l, at(str, r));
		change_at(str, r, x);
		l++, r--;
	}
	
}


// to erase the value at a particular index
void erase(struct string *str, int index) {
	
	int len = size(str);
	// exit if index is out of range
	assert(index >= 0 && index < len);
	
	// keep doing str[index] = str[index + 1];
	while(index < len - 1) {
		change_at(str, index, at(str, index + 1));
		index++;
	}
	
	pop_back(str);
	
}


// to initialize an empty string with an capacity of 10
struct string* init() {
	struct string *str = (struct string*)malloc(sizeof(struct string));
	str -> data = (char *)malloc(sizeof(char) * 10);
	str -> size = 0;
	str -> capacity = 10;
	return str;
}


//to intialize a string with passed array
struct string* init_with_value(char *temp) {
	
	struct string *str = init();
	int len = strlen(temp);
	int itr = 0;
	while(itr < len) {
		push_back(str, temp[itr]);
		itr++;
	}
	
	return str;
	
}


// to take the string as input from user
// note that it will keep on taking input until end of line is encountered
void input(struct string *str) {
	clear(str);
	char x = '\0';
	while(scanf("%c", &x) && x != '\n') {
		push_back(str, x);
	}
}


// to print the string 
void print(struct string *str) {
	int itr = 0;
	while(itr < str -> size) {
		printf("%c", str -> data[itr]);
		itr++;	
	}
}


// to print the string with end of line at end
void println(struct string *str) {
	print(str);
	printf("\n");
}
