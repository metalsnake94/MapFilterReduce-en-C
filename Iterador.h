struct Iterador;


void*  IttBegin  (struct Iterador*  this);
void*  IttEnd    (struct Iterador*  this);
bool   IttHasNext(struct Iterador*  this);
void*  IttNext   (struct Iterador*  this);
bool   IttHasPrev(struct Iterador*  this);
void*  IttPrev   (struct Iterador*  this);
bool   IttIsNull (struct Iterador*  this);
void   IttDel    (struct Iterador*  this);
