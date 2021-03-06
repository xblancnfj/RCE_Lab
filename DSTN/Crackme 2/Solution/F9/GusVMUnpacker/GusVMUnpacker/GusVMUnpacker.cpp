// GusVMUnpacker.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "TitanEngine/TitanEngine.h"
#include "Unpacking.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "[-] USAGE: %s <program>\n", argv[0]);
		ExitProcess(-1);
	}

	setInformation();
	Unpack(argv[1]);
	
	
    return 0;
}

