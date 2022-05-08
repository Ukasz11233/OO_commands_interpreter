# OO_commands_interpreter

I have created simple command interpreter in oo style.
It creates different kind of objects, shows them, multiply them and can sum up all of them.

##Object types:  

StringObject -- creates a string object
IntObject -- creates an int object
DoubleObject -- creates a double object
ComplexObject -- creates a std::complex object

##Commands:  

###add -- creates and object  

_add StringObject:Hello World_

### get _object_num_ -- shows created object at place _object_num_

_get 0_   
_get 5_

### mul _num_  -- multiply all created object by num

_mul 3_

### sum -- summary of all created objects

_sum_

##For instance:

_add StringObject:Hello World!_  
_add StringObject: @@!!_  
_add ComplexObject:i_  
_add ComplexObject:4+2i_  
_get 0_  
_mul 2_  
_sum_  

###Should print:

_StringObject("Hello World!")_  
_StringObject("Hello World!Hello World! @@!! @@!!")_  
_ComplexObject(8+2i)_




