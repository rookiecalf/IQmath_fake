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

TEST_GROUP(IQmath_DataType)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_DataType, IQ1)
{
    LONGS_EQUAL(3, _IQ1(1.9)) ;
    LONGS_EQUAL(1073741823, _IQ1(536870911.5)) ;
}

TEST(IQmath_DataType, IQ30)
{
    LONGS_EQUAL(1, _IQ30(0.000000001)) ;
    LONGS_EQUAL(2147483646, _IQ30(1.999999999)) ;
}

