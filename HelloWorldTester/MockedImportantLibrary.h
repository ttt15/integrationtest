#pragma once
#include "..\ImportantLibrary.h"
#include "gmock\gmock.h"

class MockedImportantLibrary :
    public ImportantLibrary
{
public:
    MOCK_METHOD(int, add, (int, int));
};
