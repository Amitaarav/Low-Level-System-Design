# Strategy Design Pattern

less code for integrating new features

2 types 
static and dynamic

Robot simulation:

1. create a robot class
    # walk()
    # talk()

    # projection()
    
# Note: Inheritance is not a good thing in strategy design pattern

2 Kinds of robot
 1. companion robot
 2. worker robot

 Now integrate new feature
  sparrow robot
  it can fly as well

  # fly()
   
Crow robot

DRY PRINCIPLE: Do not Repeat Yourself

# The solution to inheritance is not to add / increase more inheritance

# Problems faced 
# 1. Code Re-use
# 2. To add new feature a lot of changes were required
# 3. Bracking OCP

Definition: Defines a family of algorithm, put them into separate classes so that they can be changed at run time.

