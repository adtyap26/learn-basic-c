2024-10-18 10:35

# Multidimensional Array

C can create and use multi-dimensional arrays. Here is the general form of a multidimensional array declaration:

`type name[size1][size2]..[sizeN];`

```c

int foo[1][2][3];


char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
};

```

## Two-dimensional Array

The simplest form of multidimensional array is the two-dimensional array. A two-dimensional array is pretty much a list of one-dimensional arrays. To declare a two-dimensional integer array of size [ x ][ y ], you would write something like this `type arrayName [x][y]`

Where type can be any C data type (int, char, long, long long, double, etc.) and arrayName will be a valid C identifier, or variable. A two-dimensional array can be considered as a table which will have [ x ] number of rows and [ y ] number of columns. A two-dimensional array a, which contains three rows and four columns can be shown and thought about like this

| Column1 | Column2 | Column3 | Column4 |
| ------- | ------- | ------- | ------- |
| a[0][0] | a[0][1] | a[0][2] | a[0][3] |
| a[1][0] | a[1][1] | a[1][2] | a[1][3] |
| a[2][0] | a[2][1] | a[2][2] | a[2][3] |

In this sense, every element in the array a is identified by an element name in the form a[i][j], where 'a' is the name of the array, and 'i' and 'j' are the indexes that uniquely identify, or show, each element in 'a'.

note:

And honestly, you really don't have to put in a [ x ] value really, because if you did something like this

```C

char vowels[][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'}
};

```

the compiler would already know that there are two "dimensions" you could say, but, you NEED a [ y ] value!! The compiler may be smart, but it will not know how many integers, characters, floats, whatever you're using you have in the dimensions. Keep that in mind.



