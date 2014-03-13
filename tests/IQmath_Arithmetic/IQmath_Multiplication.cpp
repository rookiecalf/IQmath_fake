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
    #include "IQmath_Multiplication.h"
}

TEST_GROUP(IQmath_Multiplication)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_Multiplication, IQ1mpy)
{
    LONGS_EQUAL(_IQ1(3.0), _IQ1mpy(_IQ1(2.0), _IQ1(1.5))) ;
    LONGS_EQUAL(_IQ1(1073741823), _IQ1mpy(_IQ1(2.0), _IQ1(536870911.5))) ;
}

