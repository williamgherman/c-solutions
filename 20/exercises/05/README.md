### Exercise 20.05

Write macros named `GET_RED`, `GET_GREEN` and `GET_BLUE` that, when given a
color as an argument (see Exercise 4), return its 8-bit red, green and blue
intensities.

### Solution

```c
//#define GET_RED(x) ((x) & 0xff)
//#define GET_GREEN(x) ((x) >> 8 & 0xff)
//#define GET_BLUE(x) ((x) >> 16 & 0xff)
```

#define MK_COLOR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))
#define GET_RED(x) ((unsigned char)(x))
#define GET_GREEN(x) ((unsigned char) ((x)>>8))
#define GET_BLUE(x) ((unsigned char) ((x)>>16))

int main(void){
    unsigned char red=255;
    unsigned char green=100;
    unsigned char blue=240;

    unsigned long my_color=MK_COLOR(red,green,blue);

    printf("%d\n",my_color);
    printf("%d %d %d",GET_RED(my_color),GET_GREEN(my_color),GET_BLUE(my_color));
return 0;
}
