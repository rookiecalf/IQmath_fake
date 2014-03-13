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

TEST_GROUP(IQmath_Division)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_Division, IQ1div)
{
    LONGS_EQUAL(_IQ1(1.5), _IQ1div(_IQ1(3.0), _IQ1(2.0))) ;
    LONGS_EQUAL(_IQ1(536870911.5), _IQ1div(_IQ1(1073741823), _IQ1(2.0))) ;
}

TEST(IQmath_Division, IQ1divNegative)
{
    LONGS_EQUAL(_IQ1(1.5), _IQ1div(_IQ1(-3.0), _IQ1(-2.0))) ;
    LONGS_EQUAL(_IQ1(-536870911.5), _IQ1div(_IQ1(-1073741823), _IQ1(2.0))) ;
}

TEST(IQmath_Division, IQ2div)
{
    LONGS_EQUAL(_IQ2(1.5), _IQ2div(_IQ2(3.0), _IQ2(2.0))) ;
    LONGS_EQUAL(_IQ2(16268815.48), _IQ2div(_IQ2(536870911), _IQ2(33))) ;
}

