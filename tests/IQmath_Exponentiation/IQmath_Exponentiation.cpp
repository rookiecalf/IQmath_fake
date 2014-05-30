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

TEST_GROUP(IQmath_Exponentiation)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_Exponentiation, IQ1exp)
{
    LONGS_EQUAL(_IQ1(2.25), _IQ1exp(_IQ1(1.5))) ;
	LONGS_EQUAL(_IQ1(6.25), _IQ1exp(_IQ1(2.5))) ;
}

TEST(IQmath_Exponentiation, IQ1expNegative)
{
    LONGS_EQUAL(_IQ1(2.25), _IQ1exp(_IQ1(-1.5))) ;
	LONGS_EQUAL(_IQ1(6.25), _IQ1exp(_IQ1(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ2exp)
{
    LONGS_EQUAL(_IQ2(2.25), _IQ2exp(_IQ2(1.5))) ;
	LONGS_EQUAL(_IQ2(6.25), _IQ2exp(_IQ2(2.5))) ;
}

TEST(IQmath_Exponentiation, IQ3exp)
{
    LONGS_EQUAL(_IQ3(2.25), _IQ3exp(_IQ3(1.5))) ;
	LONGS_EQUAL(_IQ3(6.25), _IQ3exp(_IQ3(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ4exp)
{
    LONGS_EQUAL(_IQ4(2.25), _IQ4exp(_IQ4(1.5))) ;
	LONGS_EQUAL(_IQ4(6.25), _IQ4exp(_IQ4(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ5exp)
{
    LONGS_EQUAL(_IQ5(2.25), _IQ5exp(_IQ5(1.5))) ;
	LONGS_EQUAL(_IQ5(6.25), _IQ5exp(_IQ5(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ6exp)
{
    LONGS_EQUAL(_IQ6(2.25), _IQ6exp(_IQ6(1.5))) ;
	LONGS_EQUAL(_IQ6(6.25), _IQ6exp(_IQ6(-2.5))) ;
}

