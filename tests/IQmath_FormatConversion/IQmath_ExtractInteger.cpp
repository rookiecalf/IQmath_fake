//- ------------------------------------------------------------------
//-    Copyright (c) Changjiang. Liu -- All Rights Reserved         
//-    Licensed under the Apache License, Version 2.0 (the "License").   
//-                                                                  
//-    Available at https://github.com/rookiecalf/IQmath_fake             
//-                
//-                                                                   
//-    Authorized users may use this source code in your own          
//-    projects. We make no guarantees that this source code is       
//-    fit for any purpose.                                           
//-                                                                   
//-    softci.com    rookiecalf@gmail.com      
//- ------------------------------------------------------------------

#include "CppUTest/TestHarness.h"

extern "C"
{
	#include "IQmathLib.h"
}

TEST_GROUP(IQmath_ExtractInteger)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_ExtractInteger, IQ1int)
{
    LONGS_EQUAL(2, _IQ1int(_IQ1(2.159))) ;
    LONGS_EQUAL(0, _IQ1int(_IQ1(0))) ;
    LONGS_EQUAL(1073741823, _IQ1int(_IQ1(1073741823.5))) ;
    LONGS_EQUAL(-1073741823, _IQ1int(_IQ1(-1073741823.5))) ;
}


