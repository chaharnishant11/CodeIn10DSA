# Introduction - Terminology:

- **Computer program :** Sequence of statements designed to accomplish some task
- **Programming :** Planning/Creating a program
- **Syntax :** Rules that specify which statements (instructions) are legal
- **Programming language :** A set of rules, symbols, and special words
- **Semantic rule :** Meaning of the instruction

# C++ Program Basics:

1. Programming instructions must be written according to syntax rules.
2. Compiler checks that program follows syntax rules.
3. **Metalanguage:** Term used to describe syntax rules
4. **C++ program:** Collection of one or more subprograms--called functions
- Subprogram or function is collection of statements that, when invoked, performs some task.
- Every C++ program has one and ONLY one function called main().
- The main function is a special function. It serves as the entry point for the program.
5. **Token:** smallest individual program unit, divided into special symbols, word symbols, and identifiers

# Special Symbols:

- Include mathematical symbols and punctuation marks
- Blank is also a special symbol
- Some tokens made up of two characters (with no blank)--still considered as single symbol

**Special Symbol Examples:** +   ?   -   ,   *   <=   >=   !=   ==   /   .   ;

# Word Symbols:
- Another type of token
- Reserved words or keywords
- **Reserved words:** Always lowercase, each considered to be single symbol with special meaning

**Word Symbol Examples:** 
- int
- float
- double
- char
- void
- return  
- Identifiers

# Identifiers:
1. Another type of token
2. Used as names for variables, constants, and functions
3. Consist of letters, digits, and underscore character (_)
4. Must begin with letter or underscore (best not to use underscore for portability)
6. Some predefined identifiers (cout and cin)
7. Unlike reserved words, predefined identifiers may be redefined--but generally not good idea

**Legal Identifier Examples:**
- first
- conversion
- payRate

**Illegal Identifier Examples:**
- employee Salary (cannot use space)
- Hello! (cannot use special characters, like exclamation mark)
- one+two (cannot use special characters, like + character)
- 2nd (cannot begin with digit)

# Data Types

1. Set of values together with set of operations called data type
2. C++ data types classified into three categories:
- Simple data type
- Structured data type
- Pointers

**(A) Simple Data Types (three categories):**
- **Integral:** integers (numbers without a decimal)
- **Floating-point:** decimal numbers
- **Enumeration type:** user-defined data type

**(i) Integral Data Types (further classified):**
- char
- short
- int
- long
- bool
- unsigned char
- unsigned short
- unsigned int
- unsigned long

3. Each data type associated with different set of values
4. Size of number represented determines data type
5. Data type determines amount of memory used
6. Should use most efficient data type for program requirements
7. Different compilers may have different range of values for each data type

**(a) int data type:**
- Numbers with no decimal point
- Positive integers do not require + sign in front of them (but, can include +)
- No commas are used within integer

**int data type Examples:** -6728, 0, 78

**(b) Bool data type:**
- **Two values:** true and false, called logical (or Boolean) values
- An expression that evaluates to true or false called logical (Boolean) expression
- In C++, bool, true, and false are reserved words
- Older compilers do not include bool data type

**(c) char data type:**
- Smallest integral data type
- Can hold numeric values -128 to 127
- **Used to represent characters:** letters, digits, and special characters
- char data type can represent each character on keyboard
- char data values represented within single quotation marks (e.g., 'r')
- Blank is represented as ' ' (space between single quotes)

**char data type Examples:** 'A', 'a', '0', '*', '+', '$', '&' 

**(d) Floating-Point data types:**

- Represent numbers with decimal points (real numbers)
- C++ uses form of scientific notation called floating-point notation
- In C++, letter E (or e) represents the exponent

**(i) Floating-Point data types (further classified):**
1. float
2. double
3. long double

- Each data type associated with different set of values
- Size of number represented determines data type
- Data type determines amount of memory used

**1. float :**

- **Range:** -3.4E+38 to 3.4E+38
- **Memory allocated:** 4 bytes
- Maximum number of significant digits (decimal places) is 6 or 7
- Float values called single precision

**2. double data type:**
- **Range:** -1.7E+308 to 1.7E+308
- **Memory allocated:** 8 bytes
- Maximum number of significant digits (decimal places) is 15
- Double values called double precision
- **Precision:** maximum number of significant digits
- Should use most efficient data type for program requirements
- Different compilers may have different range of values for each data type
- Most newer compilers, double and long double are same

**Floating-Point data type Examples:** Real Number, C++ Floating-Point Notation, 75.924, 7.592400E1

**(e) string data type:**
- Programmer defined data type (not included in earlier versions of C++)
- To use string data type, string library must be included (include file)
- Sequence of zero or more characters
- Enclosed in double quotation marks (e.g., "r")
- **null string:** string with no characters
- Each character in string has a relative position
- Position of first character is 0 (zero), 2nd character is 1, etc.
- Length of string is total number of characters (e.g., "C++" length =3) 
