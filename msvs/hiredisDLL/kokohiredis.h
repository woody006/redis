#pragma once

#ifdef _USRDLL  
#define HIREDIS_CLASS_DLL _declspec(dllexport)  
#else  
#define HIREDIS_CLASS_DLL _declspec(dllimport)  
#endif  

namespace koko {
	class HIREDIS_CLASS_DLL hiredis
	{
	public:
		hiredis();
		virtual ~hiredis();

		int connect(const char* server, const char* port);
		int set(const char * key, const char* val);
		const char* get(const char * key);

	private:

	};
}
