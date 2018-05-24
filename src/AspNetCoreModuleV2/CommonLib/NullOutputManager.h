// Copyright (c) .NET Foundation. All rights reserved.
// Licensed under the MIT License. See License.txt in the project root for license information.

#pragma once

#include "stdafx.h"


class NullConsoleManager : public IOutputManager
{
public:

    NullConsoleManager()
    {
    }

    ~NullConsoleManager()
    {

    }

    HRESULT Start()
    {
        // The process has console, e.g., IIS Express scenario
        return S_OK;
    }

    void NotifyStartupComplete()
    {
        // Do nothing.
    }

    bool GetStdOutContent(STRU*)
    {
        return false;
    }
};
