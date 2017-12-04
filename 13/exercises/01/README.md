### Exercise 13.01
The following function calls supposedly write a single newline character, but
some are incorrect. Identify which calls don't work and explain why.

(a) `printf("%c", '\n');`  
(b) `printf("%c", "\n");`  
(c) `printf("%s", '\n');`  
(d) `printf("%s", "\n");`  
(e) `printf('\n');`  
(f) `printf("\n");`  
(g) `putchar('\n');`  
(h) `putchar("\n");`  
(i) `puts('\n');`  
(j) `puts("\n");`  
(k) `puts("");`


### Solution

(b) will not work as `%c` expects a `char` and receives a `string`.  
(c) will not work as `%s` expects a `string` and receives a `char`.  
(e) will not work as `printf` expects a `string`.  
(h) will not work as `putchar` expects a `char`.  
(i) will not work as `puts` expects a `string`.  
(j) will write two newline characters.  
