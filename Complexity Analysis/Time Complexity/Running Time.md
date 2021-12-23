# How to analyze Time Complexity

### Running time of an algorithm depends upon various factors:

- Single or multiple processor
- Read and write speed
- 32-bit or 64-bit architecture
- Machine configuration
- **Input**

*Here, we are only concerned about evaluating time as a function of input*

### Model Machine

*Let's say I have created a model machine that has,*
- Single processor
- 32-bit
- Sequential execution
- takes 1 unit of time for an arithmetic or logical operation
- takes 1 unit of time for assignment and return statements

**Now let's define a function which calculates the sum of two numbers**

`sum(number1, number2):`\
&nbsp; &nbsp; &nbsp; `return a + b`

**Let's find out execution time for this algo**

- There is one arithmetic operation and one return statement, so it will take **2 unit** of time, **`T(n) = 2`**
- This is a constant function

**Let's define a function which calculates the sum of a list**

`sum(list, size_of_list):`\
  &nbsp; &nbsp; &nbsp;`total = 0`\
  &nbsp; &nbsp; &nbsp;`for i -> 0 to size_of_list`\
    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;`total = total + list[i]`\
`return total`

**Let's find execution time for above algo:**

- One assignment(1 time), one increment(n + 1 times), again one assignemnt(one time) and arithmetic(one time) statement, and lastly a return statement
- So, running time = 1 + 2* (n + 1) + 2* n + 1 = 4n + 4
- This is a linear function
- **Therefore, time complexity is of the order of T(n)**
