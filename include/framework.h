#ifndef FRAMEWORK
	#define FRAMEWORK

	#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
	// Windows Header Files
	#include <windows.h>

	#include <vector>
	#include <string>

	#include <MinHook.h>
	
	typedef void (__cdecl *p_OnLoad)();
	typedef PVOID (WINAPI *_INITTERM_E)(PVOID, PVOID);
	#define FUNCWRAPPER void __declspec(naked) __declspec(dllexport)
#endif