#include "includes\injector\injector.hpp"

bool MemoryCompare(const byte* data, const byte* datamask, const char* mask)
{
	for (; *mask; ++data, ++datamask, ++mask)
	{
		if (!strcmp(mask, "xxxx"))
		{
			if (*(UINT32*)data != *(UINT32*)datamask)
			{
				return FALSE;
			}
			data += 3, datamask += 3, mask += 3;
			continue;
		}
		if (!strcmp(mask, "xx"))
		{
			if (*(UINT16*)data != *(UINT16*)datamask)
			{
				return FALSE;
			}
			data++, datamask++, mask++;
			continue;
		}
		if (*mask == 'x' && *data != *datamask)
		{
			return false;
		}
	}
	return (*mask) == 0;
}

UINT_PTR FindMemoryPattern(const char* mask, byte* datamask, UINT_PTR start, UINT_PTR length)
{
	UINT_PTR end = start + length;
	for (UINT_PTR i = start; i < end; i++)
	{
		if (MemoryCompare((byte*)i, datamask, mask))
		{
			return i;
		}
	}
	return 0;
}

BOOL Init()
{
	HMODULE hmoduleUnivUI = GetModuleHandle("UnivUI");
	byte pattern[] = { 0x46, 0x44, 0x8B, 0x56, 0x48, 0x2B, 0xC2, 0x85, 0xC0, 0x7E };
	UINT_PTR ptrTexture1 = FindMemoryPattern("xxxxxxxxxx", pattern, ((UINT_PTR)hmoduleUnivUI), 0x50000);

	if (ptrTexture1 != 0)
	{
		injector::WriteMemory<unsigned char>(ptrTexture1 + 11, 0xEB, true);
		injector::WriteMemory<unsigned char>(ptrTexture1 + 12, 0x09, true);
	}
	else
	{
		MessageBoxA(NULL, "Failed to install crash fix.", "10WinCrashFix", MB_ICONERROR);
	}
	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		Init();
	}
	return TRUE;
}

extern "C" __declspec(dllexport) void PluginThisLibrary() { };
extern "C" __declspec(dllexport) const char* GetPluginString()
{
	return "10WinCrashFix.rpo\r\n\tA plugin that allows you to play old age games\r\n\ton new versions of Windows without crashing.\r\n\t(c)2022 Muv-Luv Verse, Epic Eagle Team\r\n\r\n";
};