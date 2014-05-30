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

TEST(IQmath_Exponentiation, IQ7exp)
{
    LONGS_EQUAL(_IQ7(2.25), _IQ7exp(_IQ7(1.5))) ;
	LONGS_EQUAL(_IQ7(6.25), _IQ7exp(_IQ7(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ8exp)
{
    LONGS_EQUAL(_IQ8(2.25), _IQ8exp(_IQ8(1.5))) ;
	LONGS_EQUAL(_IQ8(6.25), _IQ8exp(_IQ8(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ9exp)
{
    LONGS_EQUAL(_IQ9(2.25), _IQ9exp(_IQ9(1.5))) ;
	LONGS_EQUAL(_IQ9(6.25), _IQ9exp(_IQ9(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ10exp)
{
    LONGS_EQUAL(_IQ10(2.25), _IQ10exp(_IQ10(1.5))) ;
	LONGS_EQUAL(_IQ10(6.25), _IQ10exp(_IQ10(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ11exp)
{
    LONGS_EQUAL(_IQ11(2.25), _IQ11exp(_IQ11(1.5))) ;
	LONGS_EQUAL(_IQ11(6.25), _IQ11exp(_IQ11(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ12exp)
{
    LONGS_EQUAL(_IQ12(2.25), _IQ12exp(_IQ12(1.5))) ;
	LONGS_EQUAL(_IQ12(6.25), _IQ12exp(_IQ12(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ13exp)
{
    LONGS_EQUAL(_IQ13(2.25), _IQ13exp(_IQ13(1.5))) ;
	LONGS_EQUAL(_IQ13(6.25), _IQ13exp(_IQ13(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ14exp)
{
    LONGS_EQUAL(_IQ14(2.25), _IQ14exp(_IQ14(1.5))) ;
	LONGS_EQUAL(_IQ14(6.25), _IQ14exp(_IQ14(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ15exp)
{
    LONGS_EQUAL(_IQ15(2.25), _IQ15exp(_IQ15(1.5))) ;
	LONGS_EQUAL(_IQ15(6.25), _IQ15exp(_IQ15(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ16exp)
{
    LONGS_EQUAL(_IQ16(2.25), _IQ16exp(_IQ16(1.5))) ;
	LONGS_EQUAL(_IQ16(6.25), _IQ16exp(_IQ16(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ17exp)
{
    LONGS_EQUAL(_IQ17(2.25), _IQ17exp(_IQ17(1.5))) ;
	LONGS_EQUAL(_IQ17(6.25), _IQ17exp(_IQ17(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ18exp)
{
    LONGS_EQUAL(_IQ18(2.25), _IQ18exp(_IQ18(1.5))) ;
	LONGS_EQUAL(_IQ18(6.25), _IQ18exp(_IQ18(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ19exp)
{
    LONGS_EQUAL(_IQ19(2.25), _IQ19exp(_IQ19(1.5))) ;
	LONGS_EQUAL(_IQ19(6.25), _IQ19exp(_IQ19(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ20exp)
{
    LONGS_EQUAL(_IQ20(2.25), _IQ20exp(_IQ20(1.5))) ;
	LONGS_EQUAL(_IQ20(6.25), _IQ20exp(_IQ20(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ21exp)
{
    LONGS_EQUAL(_IQ21(2.25), _IQ21exp(_IQ21(1.5))) ;
	LONGS_EQUAL(_IQ21(6.25), _IQ21exp(_IQ21(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ22exp)
{
    LONGS_EQUAL(_IQ22(2.25), _IQ22exp(_IQ22(1.5))) ;
	LONGS_EQUAL(_IQ22(6.25), _IQ22exp(_IQ22(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ23exp)
{
    LONGS_EQUAL(_IQ23(2.25), _IQ23exp(_IQ23(1.5))) ;
	LONGS_EQUAL(_IQ23(6.25), _IQ23exp(_IQ23(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ24exp)
{
    LONGS_EQUAL(_IQ24(2.25), _IQ24exp(_IQ24(1.5))) ;
	LONGS_EQUAL(_IQ24(6.25), _IQ24exp(_IQ24(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ25exp)
{
    LONGS_EQUAL(_IQ25(2.25), _IQ25exp(_IQ25(1.5))) ;
	LONGS_EQUAL(_IQ25(6.25), _IQ25exp(_IQ25(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ26exp)
{
    LONGS_EQUAL(_IQ26(2.25), _IQ26exp(_IQ26(1.5))) ;
	LONGS_EQUAL(_IQ26(6.25), _IQ26exp(_IQ26(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ27exp)
{
    LONGS_EQUAL(_IQ27(2.25), _IQ27exp(_IQ27(1.5))) ;
	LONGS_EQUAL(_IQ27(6.25), _IQ27exp(_IQ27(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ28exp)
{
    LONGS_EQUAL(_IQ28(2.25), _IQ28exp(_IQ28(1.5))) ;
	LONGS_EQUAL(_IQ28(6.25), _IQ28exp(_IQ28(-2.5))) ;
}

TEST(IQmath_Exponentiation, IQ29exp)
{
    LONGS_EQUAL(_IQ29(0.25), _IQ29exp(_IQ29(0.5))) ;
	LONGS_EQUAL(_IQ29(2.25), _IQ29exp(_IQ29(-1.5))) ;
}

TEST(IQmath_Exponentiation, IQ30exp)
{
    LONGS_EQUAL(_IQ30(0.25), _IQ30exp(_IQ30(0.5))) ;
	LONGS_EQUAL(_IQ30(1.5625), _IQ30exp(_IQ30(-1.25))) ;
}
