### Exercise 18.01

For each of the following declarations, identify the storage class, type
qualifiers, type specifiers, declarators and initializers.

(a) `static char **lookup(int level);`  
(b) `volatile unsigned long io_flags;`  
(c) `extern char *file_name[MAX_FILES], path[];`  
(d) `static const char token_but[] = "";`

### Solution

#### (a)

Storage class: `static`  
Type qualifiers: none  
Type specifiers: `char **`  
Declarators: `lookup(int level)`  
Initializers: none

#### (b)

Storage class: none  
Type qualifiers: `volatile`  
Type specifiers: `unsigned long`  
Declarators: `io_flags`  
Initializers: none

#### (c)

Storage class: `extern`  
Type qualifiers: none  
Type specifiers: `char * []`  
Declarators: `file_name, path`  
Initializers: none

#### (d)

Storage class: `static`  
Type qualifiers: `const`  
Type specifiers: `char []`  
Declarators: `token_but`  
Initializers: `""`
