/*9.8 Dynamic memory allocation
bit system = numbers flowing through a cpu
more bits are faster. 
dynamic memory allocation - dma
- 4,294,967,296
0xFFFFFFFF
dma = heaps

sizeup - howbig an int is.

stack in memory grows.
calling a function pushes to stack
returning removes from stack

double *dptr = nullptr;
dptr = new double;
new returns address of memory location.

what happens if you don't use new. 

const int SIZE = 25;
arrayPtr = new double[SIZE];

for(i = 0; i<size; i++){
    *arrayptr[i] = i*i;
    or
    *(arrayptr+1) = i*i;
    program terminates if not enough memory available.
}

delete fptr
    use [] to free dynamic array;
delete [] arrayptr; 
    delete only with dynamic memory

    not deleting causes memory leaks
set pointer to null after deleting

always start off at zero - code in the base layer


stack - local variables
Heap - "new" memory 
static data
code

*/


