# CPP Palindrome
 CPP Palindrome project for Univeristy

How does it work?
Is looping trough a while loop, until the number given is backwards, then checks if it is equal to given nr.

Example:

```cpp
given nr = 123

while given nr is not equal to 0, run the loop:
(1)
    remaining nr = 123 % 10 => 3
    reversed nr = 0 * 10 + 3 => 3
    123/10 => 12
(2)
    remaining nr = 12 % 10 => 2
    reversed nr = 3 * 10 + 2 => 32
    12/10 => 1
(3)
    remaining nr = 1 % 10 => 1
    reversed nr = 32 * 10 + 1 => 321
    1/10 => 0

check if given number equals to reversed number
```
