
typedef double val;
typedef void* ref;

typedef struct {
   val value;
} just_struct;

typedef just_struct* Just;

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
} list_struct;

typedef  struct item*   Item;
typedef  list_struct*   List;

// - constructors - - - - - - - -
Item list_new (ref data);
List list_from (void* literal);
// - start - - - - - - - - - - - - - - - -
void list_push (List thelist, ref data);
ref  list_pop (List thelist);
// - end - - - - - - - - - - - - - - - -
void list_unshift (List thelist, ref data);
ref  list_shift (List thelist);
// - between - - - - - - - - - - - - - - - -
List list_insert (Item prev, ref data);
ref  list_delete (Item item);
Array list_splice (Item from, int todelete, int insertsome, ...);

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
