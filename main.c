#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "wmm2020.h"

int main()
{
	double decl, incl;
	GetDecInc(&decl, &incl, 39, 116, 2021, 1);
	printf("Decl:%f Incl:%f \n\r", decl * 180 / M_PI, incl * 180 / M_PI);

	return 0;
}
