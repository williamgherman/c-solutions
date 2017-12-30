### Exercise 18.09

Use a series of type definitions to simplify each of the declarations in
Exercise 8.

### Solution

#### (a)

```c
typedef char fx_t(int);
typedef fx_t *fx_ptr_t;
typedef fx_ptr_t fx_ptr_array_t[10];
fx_ptr_array_t x;
```

#### (b)

```c
typedef int arr_t[5];
typedef arr_t fx_t(int);
fx_t *x;
```

#### (c)

```c
typedef float *fx_t(int);
typedef fx_t *inner_fx_t(void);
inner_fx_t x;
```

#### (d)

```c
typedef void outer_fx_t(int);
typedef void *arg_fx_t(int);
typedef outer_fx_t *inner_fx_t(int, arg_fx_t);
outer_fx_t x;
```
