int myFunction(int x) {
  return x + 1;
}

int (*myFunctionPtr)(int); // declare a pointer to a function

myFunctionPtr = &myFunction; // assign the address of myFunction to myFunctionPtr

int result = (*myFunctionPtr)(5); // call myFunction through myFunctionPtr

