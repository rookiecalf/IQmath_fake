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

TEST(IQmath_Sine, IQ3sin)
{
    LONGS_EQUAL(_IQ3(0.366), _IQ3sin(_IQ3(0.375))) ;
    LONGS_EQUAL(_IQ3(-0.611), _IQ3sin(_IQ3(5.625))) ;
}

TEST(IQmath_Sine, IQ4sin)
{
    LONGS_EQUAL(_IQ4(0.6346), _IQ4sin(_IQ4(0.6875))) ;
    LONGS_EQUAL(_IQ4(-0.611), _IQ4sin(_IQ4(5.625))) ;
}

TEST(IQmath_Sine, IQ5sin)
{
    LONGS_EQUAL(_IQ5(0.6346), _IQ5sin(_IQ5(0.6875))) ;
    LONGS_EQUAL(_IQ5(-0.611), _IQ5sin(_IQ5(5.625))) ;
}

TEST(IQmath_Sine, IQ6sin)
{
    LONGS_EQUAL(_IQ6(0.6346), _IQ6sin(_IQ6(0.6875))) ;
    LONGS_EQUAL(_IQ6(-0.611), _IQ6sin(_IQ6(5.625))) ;
}

TEST(IQmath_Sine, IQ7sin)
{
    LONGS_EQUAL(_IQ7(0.6346), _IQ7sin(_IQ7(0.6875))) ;
    LONGS_EQUAL(_IQ7(-0.611), _IQ7sin(_IQ7(5.625))) ;
}

TEST(IQmath_Sine, IQ8sin)
{
    LONGS_EQUAL(_IQ8(0.6346), _IQ8sin(_IQ8(0.6875))) ;
    LONGS_EQUAL(_IQ8(-0.611), _IQ8sin(_IQ8(5.625))) ;
}

TEST(IQmath_Sine, IQ9sin)
{
    LONGS_EQUAL(_IQ9(0.28692529), _IQ9sin(_IQ9(0.291015625))) ;
    LONGS_EQUAL(_IQ9(-0.4465204575), _IQ9sin(_IQ9(5.8203125))) ;
}

TEST(IQmath_Sine, IQ10sin)
{
    LONGS_EQUAL(_IQ10(0.28692529), _IQ10sin(_IQ10(0.291015625))) ;
    LONGS_EQUAL(_IQ10(-0.4465204575), _IQ10sin(_IQ10(5.8203125))) ;
}

TEST(IQmath_Sine, IQ11sin)
{
    LONGS_EQUAL(_IQ11(0.28692529), _IQ11sin(_IQ11(0.291015625))) ;
    LONGS_EQUAL(_IQ11(-0.4465204575), _IQ11sin(_IQ11(5.8203125))) ;
}

TEST(IQmath_Sine, IQ12sin)
{
    LONGS_EQUAL(_IQ12(0.28692529), _IQ12sin(_IQ12(0.291015625))) ;
    LONGS_EQUAL(_IQ12(-0.4465204575), _IQ12sin(_IQ12(5.8203125))) ;
}

TEST(IQmath_Sine, IQ13sin)
{
    LONGS_EQUAL(_IQ13(0.28692529), _IQ13sin(_IQ13(0.291015625))) ;
    LONGS_EQUAL(_IQ13(-0.4465204575), _IQ13sin(_IQ13(5.8203125))) ;
}

TEST(IQmath_Sine, IQ14sin)
{
    LONGS_EQUAL(_IQ14(0.28692529), _IQ14sin(_IQ14(0.291015625))) ;
    LONGS_EQUAL(_IQ14(-0.4465204575), _IQ14sin(_IQ14(5.8203125))) ;
}

TEST(IQmath_Sine, IQ15sin)
{
    LONGS_EQUAL(_IQ15(0.28692529), _IQ15sin(_IQ15(0.291015625))) ;
    LONGS_EQUAL(_IQ15(-0.4465204575), _IQ15sin(_IQ15(5.8203125))) ;
}

TEST(IQmath_Sine, IQ16sin)
{
    LONGS_EQUAL(_IQ16(0.28692529), _IQ16sin(_IQ16(0.291015625))) ;
    LONGS_EQUAL(_IQ16(-0.4465204575), _IQ16sin(_IQ16(5.8203125))) ;
}

TEST(IQmath_Sine, IQ17sin)
{
    LONGS_EQUAL(_IQ17(0.28692529), _IQ17sin(_IQ17(0.291015625))) ;
    LONGS_EQUAL(_IQ17(-0.4465204575), _IQ17sin(_IQ17(5.8203125))) ;
}

TEST(IQmath_Sine, IQ18sin)
{
    LONGS_EQUAL(_IQ18(0.28692529), _IQ18sin(_IQ18(0.291015625))) ;
    LONGS_EQUAL(_IQ18(-0.4465204575), _IQ18sin(_IQ18(5.8203125))) ;
}

TEST(IQmath_Sine, IQ19sin)
{
    LONGS_EQUAL(_IQ19(0.28692529), _IQ19sin(_IQ19(0.291015625))) ;
    LONGS_EQUAL(_IQ19(-0.4465204575), _IQ19sin(_IQ19(5.8203125))) ;
}

TEST(IQmath_Sine, IQ20sin)
{
    LONGS_EQUAL(_IQ20(0.28692529), _IQ20sin(_IQ20(0.291015625))) ;
    LONGS_EQUAL(_IQ20(-0.4465204575), _IQ20sin(_IQ20(5.8203125))) ;
}

TEST(IQmath_Sine, IQ21sin)
{
    LONGS_EQUAL(_IQ21(0.28692529), _IQ21sin(_IQ21(0.291015625))) ;
    LONGS_EQUAL(_IQ21(-0.4465204575), _IQ21sin(_IQ21(5.8203125))) ;
}

TEST(IQmath_Sine, IQ22sin)
{
    LONGS_EQUAL(_IQ22(0.28692529), _IQ22sin(_IQ22(0.291015625))) ;
    LONGS_EQUAL(_IQ22(-0.4465204575), _IQ22sin(_IQ22(5.8203125))) ;
}

TEST(IQmath_Sine, IQ23sin)
{
    LONGS_EQUAL(_IQ23(0.28692529), _IQ23sin(_IQ23(0.291015625))) ;
    LONGS_EQUAL(_IQ23(-0.4465204575), _IQ23sin(_IQ23(5.8203125))) ;
}

TEST(IQmath_Sine, IQ24sin)
{
    LONGS_EQUAL(_IQ24(0.28692529), _IQ24sin(_IQ24(0.291015625))) ;
    LONGS_EQUAL(_IQ24(-0.4465204575), _IQ24sin(_IQ24(5.8203125))) ;
}

TEST(IQmath_Sine, IQ25sin)
{
    LONGS_EQUAL(_IQ25(0.28692529), _IQ25sin(_IQ25(0.291015625))) ;
    LONGS_EQUAL(_IQ25(-0.4465204575), _IQ25sin(_IQ25(5.8203125))) ;
}

TEST(IQmath_Sine, IQ26sin)
{
    LONGS_EQUAL(_IQ26(0.28692529), _IQ26sin(_IQ26(0.291015625))) ;
    LONGS_EQUAL(_IQ26(-0.4465204575), _IQ26sin(_IQ26(5.8203125))) ;
}

TEST(IQmath_Sine, IQ27sin)
{
    LONGS_EQUAL(_IQ27(0.2869252938945822), _IQ27sin(_IQ27(0.291015625))) ;
    LONGS_EQUAL(_IQ27(-0.446520457517611), _IQ27sin(_IQ27(5.8203125))) ;
}

TEST(IQmath_Sine, IQ28sin)
{
    LONGS_EQUAL(_IQ28(0.2869252938945822), _IQ28sin(_IQ28(0.291015625))) ;
    LONGS_EQUAL(_IQ28(-0.446520457517611), _IQ28sin(_IQ28(5.8203125))) ;
}

TEST(IQmath_Sine, IQ29sin)
{
    LONGS_EQUAL(_IQ29(0.2869252938945822), _IQ29sin(_IQ29(0.291015625))) ;
    LONGS_EQUAL(_IQ29(-0.756802490), _IQ29sin(_IQ29(3.999999996))) ;
}

