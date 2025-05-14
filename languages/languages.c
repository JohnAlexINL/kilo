/* 	
*   Separating out the syntaxes like this should make it much easier to add more later,
* 	and makes this portion of the code much easier to read, taking almost a hundred
*   lines of code out of the main program logic, bringing it a little closer to the
*   goal of being "less than 1000 SLOC"
*/

#include "c.h"
#include "cpp.h"

struct editorSyntax HLDB[] = {

	syntax_c,
	syntax_cpp

};
#define HLDB_ENTRIES (sizeof(HLDB)/sizeof(HLDB[0]))