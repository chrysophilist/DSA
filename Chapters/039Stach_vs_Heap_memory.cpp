//from 0 to 65535 = 65536 = 64*1024bytes = 64 kilobytes (KB)
 //STACK: LIFO & FILO, mainly used for temporary data like local variable within functions.
 //Heap: flexible memory, not predefined and can grow as needed.typically used for larger data structures and objects with a longer lifespan

 void main(){
    int *p;    //Pointer decleration

    p=new int[5];    //'new' used for memory allocation in heap
    
    delete []p;    //deleting pointer
    p=nullptr;    //deatach the pointer
 }