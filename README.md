C02:
- ex00: Reproduce the behavior of the function strcpy.
- ex01: Reproduce the behavior of the function strncpy.
- ex02: Create a function that returns 1 if the given string contains only alphabetical characters and 0 if it contains any other character. It should return 1 if str is empty.
- ex03: Create a function that returns 1 if the given string contains only digits and 0 if it contains any other character. It should return 1 if str is empty.
- ex04: Create a function that returns 1 if the given string contains only lowercase alphabetical characters and 0 if it contains any other character. It should return 1 if str is empty.
- ex05: Create a function that returns 1 if the given string contains only uppercase alphabetical characters and 0 if it contains any other character. It should return 1 if str is empty.
- ex06: Create a function that returns 1 if the given string contains only printable characters and 0 if it contains any other character. It should return 1 if str is empty.
- ex07: Create a function that converts every letter to uppercase. It should return str.
- ex08: Create a function that converts every letter to lowercase. It should return str.
- ex09: Create a function that capitalizes the first letter of each word and converts all other
letters to lowercase. A word is a sequence of alphanumeric characters. It should return str.


C03_R1:
- ex00: Reproduce the behavior of the function strcmp.
- ex01: Reproduce the behavior of the function strncmp.
- ex02: Reproduce the behavior of the function strcat.
- ex03: Reproduce the behavior of the function strncat.
- ex04: Reproduce the behavior of the function strstr.


C04_R1:
- ex00: Create a function that counts and returns the number of characters in a string.
- ex01: Create a function that prints a string of characters to the standard output.
- ex02: Create a function that displays the number passed as a parameter. The function must be able to handle all possible values of the int type. Example: ft_putnbr(42) outputs "42".
- ex03: Write a function that converts the initial portion of the string pointed to by str into its integer representation:
  
• The string may begin with an arbitrary amount of whitespace (as determined by isspace(3)).

• The string may be preceded by an arbitrary number of ‘+’ and ‘-’ signs. A ‘-’ sign will invert the result depending on whether the number of ‘-’ signs is odd or even.

• The function should then process any consecutive digits in base 10.

• The function reads the string until a non-conforming character is encountered and returns the number obtained so far.

• Overflow and underflow do not need to be handled; the function’s return value is undefined in such cases.

• Example Program Output:
$>./a.out " ---+--+1234ab567"
-1234


C06:
- ex00: Write a program that displays its own name, followed by a new line.
- ex01: Write a program that displays its given arguments. Each argument should be printed on a new line, in the same order as in the command line. The program should display all arguments except argv[0].
- ex02: Write a program that displays its given arguments. Each argument should be printed on a new line, in the reverse order from the command line. The program should display all arguments except argv[0].
- ex03: Write a program that displays its given arguments sorted in ASCII order. The program should display all arguments except argv[0]. Each argument should be printed on a new line.


CPC00_R1:
- ex00: Write a function that displays the character passed as a parameter. To display the character, you must use the write function.
- ex01: Create a function that displays the alphabet in lowercase, on a single line, in ascending order, starting from the letter ’a’.
- ex02: Create a function that displays the alphabet in lowercase, on a single line, in descending order, starting from the letter ’z’.
- ex03: Create a function that displays all digits on a single line, in ascending order.
- ex04: Create a function that displays ’N’ or ’P’ depending on the sign of the integer passed as a parameter. If n is negative, display ’N’. If n is positive or zero, display ’P’.
- ex05: Create a function that displays all unique combinations of three distinct digits, with both the digits within each combination and the combinations themselves in ascending order:
  
• 987 is not included because 789 already covers that combination.

• 999 is not included because the digit 9 appears more than once.

• Expected output:
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>


CPC01:
- ex00: Create a function that takes a pointer to an int as a parameter and sets the value of that int to "42".
- ex01: Create a function that takes a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an int as a parameter and sets the value of that int to “42”.
- ex02: Create a function that swaps the values of two integers using their addresses received as parameters.
- ex03: Create a function ft_div_mod. This function divides ‘a’ by ‘b’ and stores the result in the integer pointed to by ‘div’. It also stores the remainder of the division of ‘a’ by ‘b’ in the integer pointed to by ‘mod’.
- ex04: Create a function ft_ultimate_div_mod. This function divides the value pointed to by ‘a’ by the value pointed to by ‘b’. The result of the division is stored in the integer pointed to by ‘a’, while the remainder is stored in the integer pointed to by ‘b’.
- ex05: Create a function that displays a string of characters on the standard output.


CPShell00_1:
- ex00: Create a file called z that returns "Z", followed by a new line, whenever the cat command is used on it.
- ex01: Create a file called testShell00 in your submission directory.

• Figure out a way to make the output look like this (except for the "total 1" line):
%> ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
%>

• Once you’ve achieved the previous steps, execute the following command to create the file to be submitted:
%> tar -cf testShell00.tar testShell00

- ex02: Create the following files and directories. Adjust their properties so that when you run the ls -l command in your directory, the output looks like this:

%> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0
%>

• Once you’ve completed this, run the following command to create the file to be submitted:
%> tar -cf exo2.tar *

- ex03: Create your own SSH key. Once done:
  
• Add your public key to your repository in a file named id_rsa_pub.

• Update your SSH key on the intranet. This will allow you to push the repository to our git server.

- ex04: midLS:
  
• In a file named midLS, write the command that lists all files and directories in your current directory (excluding hidden files or any file starting with a dot, including double dots).

• The output should be sorted by modification date, with entries separated by a comma and a space.

• Directory names should end with a slash (/).

- ex05: GiT commit:

• Create a shell script that displays the ids of the last 5 commits in your git repository.
%> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
%>

• Your script will be tested in our own environment.

ExamPractice:
- FizzBuzz: Work with numbers as integers but print them as characters, according to different conditions, from 1 to 100, using only the C function write.
- main.arg: Play with basic arguments in C.
- practice: Rehearsing and trying things.



Rush - ex00:

Your program must display a rectangle on the screen and follow these requirements:

• Files to submit: main.c, ft_putchar.c, rush0X.c, where "0X" represents the rush number (e.g., rush00.c).

• These three files will be compiled together.

• The ft_putchar.c file must contain the ft_putchar function.

• Example of main.c file:

int main()
{
rush(5, 5);
return (0);
}

• rush(5, 3) should display:
$>./a.out
ABBBC
B B
CBBBA
$>

• rush(5, 1) should display:
$>./a.out
ABBBC
$>

• rush(1, 1) should display:
$>./a.out
A
$>

• rush(1, 5) should display:
$>./a.out
ABBBC
$>

• rush(4, 4) should display:
$>./a.out
ABBC
B B
B B
CBBA
$>



Rush - ex01:

• Your source code will be compiled as follows: cc -Wall -Wextra -Werror -o
rush01 *.c.

• Your submission directory must contain all files required to compile your program.

• Create a program that solves the following problem: Given a 4x4 grid, place boxes of heights 1 to 4 on each available cell so that every row and column sees the correct number of boxes from each possible point of view (left/right for rows, top/bottom for columns).

• Example for one row or one column: The box of height 3 will hide the box of height 1 from the left, so there are 3 visible boxes. Only one box is visible from the right, as the box of height 4 hides everything.

• Each view (2 per row and 2 per column) will have a given value. Your program must place the boxes correctly, ensuring that each row and column contains only one box of each size.

• Your output must display the first solution you encounter.

• "col1top" represents the value for the left column upper point of view, etc. Refer to appendix 1 to see what represents each element.

• Each element of the string is a number ranging between ’1’ and ’4’.

• This is the only acceptable input for your program. Any other input must be considered an error.

• Here is an example of intended input/output for a valid set.
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$

• Refer to appendix 2 and 3 for a flat vision, and appendix 4 for a 3D vision.

• In case of an error or if you cannot find any solutions, display "Error" followed by a newline.

• If you want bonus points, you may try to handle other map sizes (up to 9x9).

• Here is how we will launch your program:
> ./rush01 "col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom row1left
row2left row3left row4left row1right row2right row3right row4right"
