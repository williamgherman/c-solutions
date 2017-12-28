### Exercise 17.19

Write a function that, when given a string as its argument, searches the
following array of structures for a matching command name, then calls the
function associated with that name.

```c
struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
    {{"new",       new_cmd},
     {"open",      open_cmd},
     {"close",     close_cmd},
     {"close all", close_all_cmd},
     {"save as",   save_as_cmd},
     {"save all",  save_all_cmd},
     {"print",     print_cmd},
     {"exit",      exit_cmd}
    };
```

### Solution

```c
void run_command(char *str) {
    int i;
    for (i = 0; i < sizeof(file_cmd)/sizeof(file_cmd[0]); i++)
        if (strcmp(str, file_cmd[i].cmd_name) == 0)
            return (*file_cmd[i].cmd_pointer)();
    return;
}
