﻿#pragma once
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.ApplicationModel.AppService.h>

#define DEBUGPRINTF(...) { wchar_t dbgstr[1024]; swprintf(dbgstr, __VA_ARGS__); OutputDebugString(dbgstr); }
