
typedef double val;
typedef void* ref;

// - - - Array

typedef struct {
   void* at;
   int   length;
   int   capacity;
} array_struct;

typedef array_struct* Array;

Array array_new (int capacity);
Array array_from (void* literal, int length, int capacity);
Array array_slice (Array origin, int start, int end);
Array array_concat (Array first, Array second);
void* array_destroy (Array thearray);
