
typedef double val;
typedef void* ref;

// - Array - - - - - - - - - - - - - - - - -

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

// - List - - - - - - - - - - - - - - - - -

typedef struct item {
   ref            data;
   struct item*   next;
   struct item*   prev;
} item_struct;

typedef item_struct* Item;

typedef struct {
   Item head;
   Item last;
} list_struct;

typedef list_struct* List;

// - constructors - - - - - - - -
Item item_new (ref data);
List list_new (ref data);
List list_from (ref* literal);
// - destructors - - - - - - - -
void item_destroy (Item theitem);
void list_destroy (List thelist);
// - utility - - - - - - - -
int  list_length (List thelist);
// - start - - - - - - - -
void list_unshift (List thelist, ref data);
ref  list_shift (List thelist);
// - end - - - - - - - -
void list_push (List thelist, ref data);
ref  list_pop (List thelist);
// - between - - - - - - - -
void list_insert (Item prev, ref data);
ref  list_delete (List thelist, Item any);

// - Book - - - - - - - - - - - - - - - - -

typedef struct {
   int id;
   ref title;
   ref author;
   val rating;
} book_struct;

typedef book_struct* Book;

Book book_new (int id, ref title, ref author, val rating);
void book_print (Book thebook);
void book_destroy (Book thebook);
