//Original solution is wrong. Task says string should be modified inside the function. And intentionaly parameter is changed to char *...i.e. not const char*.

void reverse_name(char *name){
    char *p = name;
    while (*p == ' ')p++;
    
    const char initial = *p;
    
    
    
    while (*p !=' ')p++;
    
    ++p;
    while (*p!=' ' && *p != '\n' && *p) {
        *name++ = *p++;
    }
    *name++=',';
    *name++=' ';
    *name++=initial;
    *name++='.';
    *name = '\0';
   
}
int main(void) {

    char c = 0;

    char full_name[20] = {0};
    
    printf("Enter a first and last name: ");
    
    while ((full_name[c++]=getchar())!='\n');
    
    reverse_name(full_name);

printf("%s",full_name);

    return 0;
}
