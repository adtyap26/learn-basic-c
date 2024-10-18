2024-10-13 09:38

# Data types

## C has several types of variables, but there are a few basic types:

1. Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long.
2. Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
3. Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
4. Structures - will be explained later, in the Structures section.

### Understanding Variable Types and Ranges in C

#### Variable Types and Their Bounds

Different types of variables in C define their bounds (range of values they can hold). This is due to the amount of memory allocated for each type.

### char

- Typically 8 bits (1 byte) of memory
- Range: -128 to 127 (for signed char)
- 2^8 = 256 possible values, split between negative and positive numbers

### long

1. On most 32-bit systems:

   - 32 bits (4 bytes) of memory
   - Range: -2,147,483,648 to 2,147,483,647
   - 2^32 = 4,294,967,296 possible values

2. On 64-bit systems:
   - 64 bits (8 bytes) of memory
   - Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 2^64 possible values

## System Dependence

The exact size and range of some data types (like long) can vary depending on the computer architecture and compiler. This is why you might see different ranges on different systems.

## Importance

Understanding these ranges is crucial because:

1. It helps you choose the right data type for your needs
2. It helps prevent overflow errors (when you try to store a value outside the allowed range)

**Note:** These ranges are for signed versions of these types. Unsigned versions (like unsigned char) have different ranges, typically starting from 0 and going up to the maximum positive value.

# Defining variables

For numbers, we will usually use the type int. On most computers today, it is a 32-bit number, which means the number can range from -2,147,483,648 to 2,147,483,647.

To define the variables foo and bar, we need to use the following syntax:

```c
int foo;
int bar = 1;

```

The variable foo can be used, but since we did not initialize it, we don't know what's in it. The variable bar contains the number 1.

Now, we can do some math. Assuming a, b, c, d, and e are variables, we can simply use plus, minus and multiplication operators in the following notation, and assign a new value to a:

```c

int a = 0, b = 1, c = 2, d = 3, e = 4;
a = b - c + d * e;
printf("%d", a); /* will print 1-2+3*4 = 11 */

```
