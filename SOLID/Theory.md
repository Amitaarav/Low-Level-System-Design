## SOLID 


# Problems in Design 
1. Maintainbility
2. Readability
3. Bugs

## Rober C Martin

# S: Single Responsibility Priciple (SRP)
# O: Open-Close Principle(OCP)
# L: iskov Substitution
# I: Interface Segregation
# D: Dependency Inversion Priciples


# S: Single Responsibility Priciple (SRP)
# Defs:
A class soulld have only one reason tochange
A class shoulf do only one thing

# Why?:
classes
Product: price,name
Shopping Cart: 
        calculateTotalPrice(), 
        printInvoice(), 
        saveToDB()     
        (has-a) (1...*) multiple products

Shopping class is doing three actions
# use composition

2 more classes
1. GetInvoicePrinter:
        shoppingCart 

2. CaetDBStorage

# O: Open-Close Principle(OCP)
A class should be open for extension but close for modification
```
Adding new feature but do not modify the previous class
```
# use abstraction, inheritance and polymorphism
Database storage:

DBPersistence(abstract)

# L: iskov Substitution

Subclasses should be substitutable for their base classes

