# Postfix Notation

#### In postfix notation, the operand/s is/are written before the operator/s,
  `<operand> <operand> <operator>`  

 
| Infix | Postfix |
| ----- | ------- |
| 2 + 3 | 2 3 + |
| p - q | p q - |
| a + b * c | a b c * + | \

#### Example, infix to postfix,

step 1) **a + (b * c)** \
step 2) **a + (b c *)*** \
step 3) **a (b c *) +*** \
step 4) **a b c * +** \

#### We can get rid of all the parentheses in last step of postfix because they are not needed.

