## Always worry about overflow problems or pre defining character array size in C ? Then this is one stop solution for your problems.

### This is a static stirng header file for C language. It works same as the string class provided by the C++ and inherit almost all of its feature.


#### Why we need strings or Why to prefer strings over character array?

1. To overcome the problem of specifying the size of array before execution
2. To avoid the headache of copying the data in case character array is fully filled. 
3. String is dynamic in nature. i.e It will double its size automatically in case full capacity is used. 
4. Auxillary functions of strings ease many of our tasks like reversing, copying, appending, deleting character or inserting
   character at any position in just 1 line.
5. No need to worry about overflows


#### How to use ?
just simply download string.h and string.c file in your computer and you're done.
##### Note: Don't forget to include it in your prorgam by writing #include "string.h"

<br>
<br>
<hr>

# Working: 

#### Initialization: 

##### 1. init();
<pre>
Task: initialize the string.<br>
syntax: struct string *str = init();<br>
return type: returns an empty initialized string.<br>
</pre>
##### 2. init_with_value(char *temp);
<pre>
Task: initialize the string with value equals to temp<br>
syntax: struct string *str = init_with_value("Abhishek");<br>
return type : returns a string type variabl.<br>
</pre>
<br>
<hr>
#### Input and Output:

##### 1. input(struct string *str);
<pre>
Task: simply takes input from user and saves it to str.<br>
syntax: struct string *str = init(); input(str);<br>
return type: void. <br>
Exception: throws error if string is not initialized<br>
</pre>

##### 2. print(struct string *str);
<pre>
Task: prints the content of the string on the console.<br>
syntax: print(str);<br>
return type: void.<br>
</pre>
##### 3. println(struct string *str);
<pre>
Task: prints the content of the string on the console and move the cursor to next line.<br>
syntax: println(str);<br>
return type: void. <br>
</pre>
<hr>
<br>

#### Utility functions:

##### 1. empty(struct string *str);
<pre>

Task: checks whether passed string is empty or not.<br>
Syntax: empty(str);<br>
return value: returns 1 if string is empty , otherwise 0.<br>
</pre>
##### 2. full(struct string *str);
<pre>

Task: checks whether passed string has reached its maximum capacity or not.<br>
Syntax: full(struct string *str);<br>
return value: returns 1 if maximum capacity has been reached , otherwise 0.<br>
</pre>

##### 3. size(struct string *str);
<pre>

Task: returns the current size of passed string.<br>
syntax: int len = size(str);<br>
return value: retunrs the length of string in a integer type variable;<br>
</pre>
##### 4. clear(struct string *str);
<pre>

Task: clears the whole string.<br>
Syntax: clear(str);<br>
return type: void;<br>
</pre>

##### 5. at(struct string *str, int idx);
<pre>

Task: return the character present at index = idx in string str;<br>
Syntax: at(str, idx);<br>
return value: character corresponding to str[idx];<br>
Exception: throws error if index is out of range.<br>
</pre>

##### 6. push_back(struct string *str, char x);
<pre>

Task: push the character x to the end of string str;<br>
Syntax: push_back(str, x);<br>
Return value : void;<br>
</pre>

##### 7. pop_back(struct string *str);
<pre>

Task: pop the last character of the str if it is not empty.<br>
syntax: pop_back(str);<br>
return value: void;<br>
Exception: throws error if string is empty<br>
</pre>

##### 8. change_at(struct string *str, int idx, char x);
<pre>

Task: changes the character at position idx in string to x. i.e str[idx] = x;<br>
Syntax: change_at(str, idx, x);<br>
return value: void;<br>
Exception: throws error if index is out of range<br>
</pre>
##### 9. insert_at(struct string *str, int idx, char x);
<pre>
 
Task: insert the character x in string str at index = idx by shifting all the charcters after index to right by 1.<br>
Syntax: insert_at(str, idx, x);<br>
return value: void;<br>
</pre>

##### 10. append_string(struct string *str, struct string *temp);
<pre>

Task: append the string temp to the end of string str. i.e str = str + temp;<br>
Syntax: append_string(str, temp);<br>
return value: void;<br>
</pre>
##### 11. append_char_stream(struct string *str, char *temp);
<pre>

Task: append the character array temp to the end of string str.<br>
Syntax: append_char_stream(str, temp);<br>
return value: void;<br>
</pre>
##### 12. assign_string(struct string *str, struct string *temp);
<pre>

Task: str = temp;<br>
Syntax: assign_string(str, temp);<br>
return value: void;<br>
</pre>
##### 13. assign_char_stream(struct string *str, char *temp);
<pre>

Task: str = temp;<br>
Syntax: assign_char_stream(str, temp);<br>
return value: void;<br>
</pre>
##### 14. reverse(struct string *str);
<pre>

Task: reverse the whole string.<br>
Syntax: reverse(str);<br>
return value: void;<br>
</pre>
##### 15. erase(struct string *str, int idx);
<pre>

Task: erase the character present at idx and adjust the string accordingly.<br>
Syntax: erase(str, idx);<br>
return value: void;<br>
</pre>
<hr> 
