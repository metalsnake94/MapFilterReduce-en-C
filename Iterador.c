typedef    void*  (MyItrtFunc)(const void*, const void*);

struct Iterador{
	void*        _ini;
	void*        _act;
	void*        _fin;
	MyItrtFunc*  _NextElem;
	MyItrtFunc*  _PrevElem;
	void*        _aux;
/**/};

typedef	   struct Iterador  Iterador;


void*  IttBegin  (Iterador*  this){
 return  (this->_act =  this->_ini);}

void*  IttEnd    (Iterador*  this){
 return  (this->_act =  this->_fin);}

bool   IttHasNext(Iterador*  this){
 return  (this->_act != this->_fin);}

void*  IttNext   (Iterador*  this){
 return  (this->_act =  this->_NextElem(this->_aux, this->_act));}

bool   IttHasPrev(Iterador*  this){
 return  (this->_act != this->_ini);}

void*  IttPrev   (Iterador*  this){
 return  (this->_act =  this->_PrevElem(this->_aux, this->_act));}

bool   IttIsNull (Iterador*  this){
 return  (this->act == NULL);}

void   IttDel    (Iterador*  this){
    free(this);
    this =  NULL;
 return;}
