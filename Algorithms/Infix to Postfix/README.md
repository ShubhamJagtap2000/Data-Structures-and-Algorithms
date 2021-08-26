# Converting Infix to Postfix

**- To convert an infix expression to postfix, we apply operator precedence, and associativity rules.**
**- Order of Operation:**

| Parentheses | ( ) { } [ ] | 
| --- | --- |
| Exponents | right to left |
| Multiplication and Division | left to right |
| Addition and Subtraction | left to right |

**- Example,**

**`A + (B * C)`**

**-The precedence of **`*`** operator is higher, so we will first convert **`B * C`** to **`B C *`****

**`A + (B C *)`**

**- Finally, we get our desired Infix expression as,**

**`A (B C *) +`**

**- Finally, we get our desired Postfix expression as,**

**`A B C * +`**

**- While conversion, we will parse the infix expression from left to right only once in [this](https://github.com/ShubhamJagtap2000/Data-Structures-and-Algorithms/blob/main/Algorithms/Infix%20to%20Postfix/Infix-to-Postfix.cpp) algorithm.** \
**- If you can see in infix to postfix conversion, the positions of operands and operators may change but the order in which operands occur from left to right will not change.**
