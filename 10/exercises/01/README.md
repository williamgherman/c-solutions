### Exercise 10.01
The following program outline shows only function definitions and variable
declarations.

```c
int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}
```

For each of the following scopes, list all variable and parameter names visible
in that scope:

(a) The `f` function  
(b) The `g` function  
(c) The block in which `e` is declared  
(d) The `main` function

### Solution

(a) `a`, `b` and `c`  
(b) `a` and `d`. (`e` is only available within its block)  
(c) `a`, `d` and `e`  
(d) `a` and `f`
