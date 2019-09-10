# Push_swap

Push_swap is an algorithm project whose goal is to sort a stack made of random numbers initially within the minimum number of instructions.</br>
To do that, we can use one other stack and a small range of specific operations.

In order to get the maximum score for this project, you need to sort:
- 5 numbers in less than 12 instructions
- 100 numbers in less than 700 instructions
- 500 numbers in less than 5500 instructions


## Game rules

* The game is composed of 2 stacks named a and b.
* At the beginning, a contains a random number of either positive or negative numbers without any duplicates and b is empty.
* The goal is to sort in ascending order numbers into stack a.
* To do this you have the following operations at your disposal:
    - sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
    - sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
    - ss : sa and sb at the same time.
    - pa : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.
    - pb : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
    - ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
    - rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
    - rr : ra and rb at the same time.
    - rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
    - rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
    - rrr : rra and rrb at the same time.

## Programs
* push_swap: prints on the standard output the list of instructions necessary to sort the initial stack.
* checker:
    - can be used to verify the validity of the push_swap program ```./push_swap 2 4 7 | ./checker 2 4 7```
    - can also be used to debug with the option "-v": ```./push_swap 2 4 7 | ./checker -v 2 4 7```


## Tests
For instance, run this command to test the number of instructions needed by the program to sort a stack of 500 numbers.
```ARG=`ruby -e "puts (0..499).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l```

[1]: https://github.com/pm37/Push_swap/blob/master/push_swap.en.pdf "Subject PDF"

**For more information, please read the [Subject][1].**
