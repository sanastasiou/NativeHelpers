//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#pragma once
#include "pch.h"

using namespace System;

namespace NativeHelpers 
{
    public enum ProcessDpiAwareness
    {
        ProcessDpiAwareness_Unaware            = PROCESS_DPI_AWARENESS::PROCESS_DPI_UNAWARE,
        ProcessDpiAwareness_SystemDpiAware     = PROCESS_DPI_AWARENESS::PROCESS_SYSTEM_DPI_AWARE,
        ProcessDpiAwareness_PerMonitorDpiAware = PROCESS_DPI_AWARENESS::PROCESS_PER_MONITOR_DPI_AWARE
    };

	public ref class PerMonitorDPIHelper
	{
	public:
		static BOOL SetPerMonitorDPIAware();

        static ProcessDpiAwareness GetPerMonitorDPIAware();
		
		static double GetDpiForWindow(IntPtr hwnd);

		static double GetSystemDPI();	
		
	private:
		static double GetDpiForHwnd(HWND hWnd);		
	};
}
