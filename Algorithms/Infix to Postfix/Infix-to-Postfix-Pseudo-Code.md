THIS IS PSEUDO CODE FOR THE [THIS](https://github.com/ShubhamJagtap2000/Data-Structures-and-Algorithms/blob/main/Algorithms/Infix%20to%20Postfix/Infix-to-Postfix.cpp) PROGRAM

InfixToPostfix(exp) \
{\
  Create a Stack S\
  res <- empty string\
  for i <- 0 to length(exp) - 1\
  {\
    if exp[i] is operand\
      res <- res + exp[i]\
    else if exp[i] is perator\
    {\
      while(!s.empty() && HasHigherPrecedence(S.top(), exp[i]))
      \
      we will have to add condition !IsOpeningParentheses(S.top()) if there are some parantheses in between the expression \
      {\
        res <- res + S.top()\
        S.pop()\
      }\
      S.push(exp[i])\
    }\
  }\
  while(!S.empty())\
  {\
    res <- res + S.top()\
    S.pop()\
  }\
  return res\
}
