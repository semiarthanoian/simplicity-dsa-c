
#include <stdlib.h>
#include "../index.h"

void* array_destroy (Array thearray)
   {  free (thearray->at);
      free (thearray);
      return NULL;
   }
