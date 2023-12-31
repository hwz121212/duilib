#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  从 Windows 头文件中排除极少使用的信息
// Windows 头文件:
#include <windows.h>

// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


#include "DuiLib\UIlib.h"
using namespace DuiLib;
#pragma comment(lib, "libDuiLib.lib")

#include "Controls/AnimLayout.h"
#include "FrameWnd.h"



#pragma warning(disable:4192)

#ifdef _UNICODE
	typedef std::wstring	tstring;
#else
	typedef std::string		tstring;
#endif
