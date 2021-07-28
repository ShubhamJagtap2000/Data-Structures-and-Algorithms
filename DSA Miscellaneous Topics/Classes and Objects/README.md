# OOP Basics in C++

Object Oriented Programming

Some basic concepts associated with OOP:

1. Classes and Objects
2. Data Abstraction and Encapsulation
3. Inheritance
4. Polymorphism
5. Dynamic Binding
6. Message Passing

**OOP** is an approach that provides a way of modularizing programs by creating partitioned memory area for both data and functions that can be used as **a template(Class)** for creating copies of such **modules on demand(Objects)**

# What is a Constructor?

- A constructor is a member function of a class which initializes objects of a class. 
- In C++, constructor is automatically called when object(instance of class) is created.
- It is special member function of the class.

## How constructors are different from a normal member function?

- Constructor has same name as the class itself
- Constructors do not have return type
- A constructor is automatically called when an object is created
- If we do not specify a constructor, C++ compiler generates a default constructor for us(expects no         parameters and has an empty body)

## Types of constructors?

1. Default Constructors: Default constructor is the constructor which doesn't take any argument. It has                          no parameters.
2. Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these                                      arguments help initialize an object when it is created. To create a                                      parameterized constructor, simply add parameters to it the way you would                                to any other function. When you define the constructor's body, use the                                  parameters to initialize the object.
3. Copy Constructors: A copy constructor is a member function which initializes an object using another                       object of the same class.

# What is a Destructor?

- A destructor is a member function whic destructs or deletes an object.

## Destructor is called when...

- The function ends.
- The program ends.
- A block containing local variables end.
- A delete operator is called.

## How destructors are different from a normal member function?

- Destructors have same name as the class preceded by a tilde(~)
- Destructors do not take any argument and do not return anything(not even void)

## Can there be more than one destructor in a class?

- No, there can be only one destructor with classname preceded by ~, no parameters and no return type

## Whe do we need to write a user-defined destructor?

- If we do not write our own destructor in class, compiler creates a default destructor for us. 
- The default destructor works fine unless we have dynamically allocated memory or pointer in class.
- When a class contains a ointer to memory allocated in cass, we should write a destructor to release     memory before the class instance is destroyed. This must be done to avoid memory leak. 
