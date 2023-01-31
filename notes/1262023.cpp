/*
void rotateright(int *arr, int size) {
    int *ahead = arr+size-1;
    int *behind = ahead - 1;
    int last = *ahead;

    while(ahead > arr){
        *ahead--= *behind--;
    }

    *ahead = last;
}
*/