// Online C++ compiler to run C++ program online
#include<iostream>
class Parent {};
class Child1: public Parent {}; // Parent class is a more generic type
class Child2: public Parent {}; // Child1 & Child2 are more specific classes

int main(void)
{
     // child to parent ----------
     /*
    	Child1 *a; // reference value
    	Parent * b = a; // implicit reinterpretation cast
    	Parent * c = (Parent *) a; // explicit reinterpretation cast
    	Parent *k = static_cast<Parent*> (a);
    -*/
    
    ///////--------- child to parent object 
    /*
        Child1 a; // reference value
    	Parent b = a; // implicit reinterpretation cast
    	Parent c = (Parent ) a; // explicit reinterpretation cast
    	Parent k = static_cast<Parent> (a);
        std::cout << "chile to parent object " ;
    */
    //////---------parent to chiled : static is work fine pointer
    /*
     	Parent *a;
    	Child1 * b = a; // implicit ---> not working here  
    	Child1 * c = (Child1 *) a;
    	Child1 *k = static_cast<Child1*> (a);
    	std :: cout << "worked";
    */
     //////---------parent to chiled : static is work fine pointer
    	Parent a;
    	Child1  b = a; // implicit ---> not working here  
    //	Child1  c = (Child1) a;
    //	Child1 k = static_cast<Child1> (a);
    //	std :: cout << "worked";
    
}