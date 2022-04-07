// HelloWorldTester.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include "gmock\gmock.h";
#include "gtest\gtest.h";
#include <iostream>
#include "ImportantLibrary.h"
#include "..\ImportantLibrary.cpp"
#include "..\foobar\ImportantLibrary2.h"
#include "..\foobar\ImportantLibrary2.cpp"

#include "MockedImportantLibrary.h"



int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(Example, ExterneDatei)
{
    ImportantLibrary w;
    ASSERT_EQ(3, w.add(1, 2));
    
}

