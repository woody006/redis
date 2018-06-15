#include "stdafx.h"
#include "kokohiredis.h"
#include <hiredis.h>
#include <Win32_Interop\win32fixes.h>  


koko::hiredis::hiredis()
{
}

koko::hiredis::~hiredis()
{
}

int koko::hiredis::connect(const char* server, const char* port)
{
	return 0;
}

int koko::hiredis::set(const char * key, const char * val)
{
	return 0;
}

const char* koko::hiredis::get(const char * key)
{
	return NULL;
}
