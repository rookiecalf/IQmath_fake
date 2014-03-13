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

TEST_GROUP(IQmath_Sine)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_Sine, IQ1sin)
{
    LONGS_EQUAL(_IQ1(0.5), _IQ1sin(_IQ1(1.5))) ;
    LONGS_EQUAL(_IQ1(0.5), _IQ1sin(_IQ1(1.0))) ;
}

TEST(IQmath_Sine, IQ1sinNegative)
{
    LONGS_EQUAL(_IQ1(-0.5), _IQ1sin(_IQ1(-1.5))) ;
    LONGS_EQUAL(_IQ1(-0.5), _IQ1sin(_IQ1(-1.0))) ;
}

TEST(IQmath_Sine, IQ2sin)
{
    LONGS_EQUAL(_IQ2(0.95), _IQ2sin(_IQ2(1.25))) ;
    LONGS_EQUAL(_IQ2(0.38), _IQ2sin(_IQ2(2.75))) ;
}

TEST(IQmath_Sine, IQ2sinNegative)
{
    LONGS_EQUAL(_IQ2(-0.95), _IQ2sin(_IQ2(-1.25))) ;
    LONGS_EQUAL(_IQ2(-0.38), _IQ2sin(_IQ2(-2.75))) ;
}

