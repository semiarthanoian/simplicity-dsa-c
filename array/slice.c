
#include <stdlib.h>
#include "../index.h"

Array array_slice (
   Array origin,
   int   start,
   int   end
) // -
   {  int index; val element;
      Array slice = array_new (origin->capacity);
      // - slice's length
      if (end > origin->length) end = origin->length;
      slice->length = end - start;
      // - copy content
      index = start - 1;
      loop: index += 1;
         element = ((val*) origin->at)[index];
         ((val*) slice->at)[index] = element;
      if (index < end) goto loop;
      return slice;
   }
