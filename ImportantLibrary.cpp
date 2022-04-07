#include "ImportantLibrary.h"
#include "foobar\ImportantLibrary2.h"

int ImportantLibrary::add(int x, int y)
{
	ImportantLibrary2 w;
	w.foo();
	return(x + y);
}

int ImportantLibrary::mul(int x, int y)
{
	ImportantLibrary2 w;
	w.foo();
	return(x * y);
}