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

TEST_GROUP(IQmath_ExtractFraction)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_ExtractFraction, IQ1frac)
{
    LONGS_EQUAL(_IQ1(0.5), _IQ1frac(_IQ1(3.5))) ;
    LONGS_EQUAL(_IQ1(0.5), _IQ1frac(_IQ1(1073741823.5))) ;
    LONGS_EQUAL(_IQ1(-0.5), _IQ1frac(_IQ1(-1073741823.5))) ;
}

TEST(IQmath_ExtractFraction, IQ2frac)
{
    LONGS_EQUAL(_IQ2(0.75), _IQ2frac(_IQ2(536870911.75))) ;
    LONGS_EQUAL(_IQ2(-0.75), _IQ2frac(_IQ2(-536870911.75))) ;
}
