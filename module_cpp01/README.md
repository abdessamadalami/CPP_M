# C-
# Initializer List is used in initializing the data members of a class.The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon. Following is an example that uses the initializer list to initialize x and y of Point class.
# when we have a const or refernce members data in calss we must use initialize list to initialize this member data:

#    class ConstRef {
#        public:
#            ConstRef(int ii);
#        private:
#            int i;
#            const int ci;
#            int &ri;
#    };

# in this example we have a constructor take int variable  and we have a members data in privete: int i, const int ci and int refernce ri.
# if we code this constructor like this:
#  ConstRef::ConstRef(int ii)
# { // assignments:
#       i = ii; // ok : is a normal ifictation assignment
#       ci = ii; // error: cannot assign to a const ri = i; // error: ri was never initialized // const member we must initialize when we declare it and here we do the opposite of that 
#       ri = i; // error: ri was never initialized // the same here about refernce ri
#  }

#     but we can initialized this members data but with this ---->\n::
#      ConstRef::ConstRef(int ii): i(ii), ci(ii), ri(i) { } simle with this whay
#   We must use the constructor initializer list to provide values for mem- bers that are const, reference, or of a class type that does not have a default constructor.
 # about the order of initialization:

# #include <iostream>
# class X {
#        int i;
#        int j;
# public:
# X(int val): j(val), i(j)
# {
#     std ::cout << "j " << j  << "\ni " << i << "\n";
#     // undefined: i is initialized before j X(int val): j(val), i(j) { }
# }
# };
# int main() {
#    // Write C++ code here
#    X u(11);
#    return 0;
# }  
# the compiler here flowering the order of the data members (i,j);
# ______________)--->It is a good idea to write constructor initializers in the same order as the members are declared. Moreover, when possible, avoid using mem- bers to initialize other members.
# int this case X(int val): i(val), j(val) { } order doesn't matter because 