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

TEST(IQmath_Division, IQ2divNegative)
{
    LONGS_EQUAL(_IQ2(1.5), _IQ2div(_IQ2(-3.0), _IQ2(-2.0))) ;
    LONGS_EQUAL(_IQ2(-16268815.48), _IQ2div(_IQ2(-536870911), _IQ2(33))) ;
}

TEST(IQmath_Division, IQ3div)
{
    LONGS_EQUAL(_IQ3(1.5), _IQ3div(_IQ3(-3.0), _IQ3(-2.0))) ;
}

TEST(IQmath_Division, IQ4div)
{
    LONGS_EQUAL(_IQ4(1.5), _IQ4div(_IQ4(-3.0), _IQ4(-2.0))) ;
}

TEST(IQmath_Division, IQ5div)
{
    LONGS_EQUAL(_IQ5(1.5), _IQ5div(_IQ5(-3.0), _IQ5(-2.0))) ;
}

TEST(IQmath_Division, IQ6div)
{
    LONGS_EQUAL(_IQ6(1.5), _IQ6div(_IQ6(-3.0), _IQ6(-2.0))) ;
}

TEST(IQmath_Division, IQ7div)
{
    LONGS_EQUAL(_IQ7(1.5), _IQ7div(_IQ7(-3.0), _IQ7(-2.0))) ;
}

TEST(IQmath_Division, IQ8div)
{
    LONGS_EQUAL(_IQ8(1.5), _IQ8div(_IQ8(-3.0), _IQ8(-2.0))) ;
}

TEST(IQmath_Division, IQ9div)
{
    LONGS_EQUAL(_IQ9(1.5), _IQ9div(_IQ9(-3.0), _IQ9(-2.0))) ;
}

TEST(IQmath_Division, IQ10div)
{
    LONGS_EQUAL(_IQ10(1.5), _IQ10div(_IQ10(-3.0), _IQ10(-2.0))) ;
}

TEST(IQmath_Division, IQ11div)
{
    LONGS_EQUAL(_IQ11(1.5), _IQ11div(_IQ11(-3.0), _IQ11(-2.0))) ;
}

TEST(IQmath_Division, IQ12div)
{
    LONGS_EQUAL(_IQ12(1.5), _IQ12div(_IQ12(-3.0), _IQ12(-2.0))) ;
}

TEST(IQmath_Division, IQ13div)
{
    LONGS_EQUAL(_IQ13(1.5), _IQ13div(_IQ13(-3.0), _IQ13(-2.0))) ;
}

TEST(IQmath_Division, IQ14div)
{
    LONGS_EQUAL(_IQ14(1.5), _IQ14div(_IQ14(-3.0), _IQ14(-2.0))) ;
}

TEST(IQmath_Division, IQ15div)
{
    LONGS_EQUAL(_IQ15(1.5), _IQ15div(_IQ15(-3.0), _IQ15(-2.0))) ;
}

TEST(IQmath_Division, IQ16div)
{
    LONGS_EQUAL(_IQ16(1.5), _IQ16div(_IQ16(-3.0), _IQ16(-2.0))) ;
}

TEST(IQmath_Division, IQ17div)
{
    LONGS_EQUAL(_IQ17(1.5), _IQ17div(_IQ17(-3.0), _IQ17(-2.0))) ;
}

TEST(IQmath_Division, IQ18div)
{
    LONGS_EQUAL(_IQ18(1.5), _IQ18div(_IQ18(-3.0), _IQ18(-2.0))) ;
}

TEST(IQmath_Division, IQ19div)
{
    LONGS_EQUAL(_IQ19(1.5), _IQ19div(_IQ19(-3.0), _IQ19(-2.0))) ;
}

TEST(IQmath_Division, IQ20div)
{
    LONGS_EQUAL(_IQ20(1.5), _IQ20div(_IQ20(-3.0), _IQ20(-2.0))) ;
}

TEST(IQmath_Division, IQ21div)
{
    LONGS_EQUAL(_IQ21(1.5), _IQ21div(_IQ21(-3.0), _IQ21(-2.0))) ;
}

TEST(IQmath_Division, IQ22div)
{
    LONGS_EQUAL(_IQ22(1.5), _IQ22div(_IQ22(-3.0), _IQ22(-2.0))) ;
}

TEST(IQmath_Division, IQ23div)
{
    LONGS_EQUAL(_IQ23(1.5), _IQ23div(_IQ23(-3.0), _IQ23(-2.0))) ;
}

TEST(IQmath_Division, IQ24div)
{
    LONGS_EQUAL(_IQ24(1.5), _IQ24div(_IQ24(-3.0), _IQ24(-2.0))) ;
}

TEST(IQmath_Division, IQ25div)
{
    LONGS_EQUAL(_IQ25(1.5), _IQ25div(_IQ25(-3.0), _IQ25(-2.0))) ;
}

TEST(IQmath_Division, IQ26div)
{
    LONGS_EQUAL(_IQ26(1.5), _IQ26div(_IQ26(-3.0), _IQ26(-2.0))) ;
}

TEST(IQmath_Division, IQ27div)
{
    LONGS_EQUAL(_IQ27(1.5), _IQ27div(_IQ27(-3.0), _IQ27(-2.0))) ;
}

TEST(IQmath_Division, IQ28div)
{
    LONGS_EQUAL(_IQ28(1.5), _IQ28div(_IQ28(-3.0), _IQ28(-2.0))) ;
}

TEST(IQmath_Division, IQ29div)
{
    LONGS_EQUAL(_IQ29(1.5), _IQ29div(_IQ29(-3.0), _IQ29(-2.0))) ;
}

TEST(IQmath_Division, IQ30div)
{
    LONGS_EQUAL(_IQ30(1.5), _IQ30div(_IQ30(1.5), _IQ30(1))) ;
    LONGS_EQUAL(_IQ30(1.42857142785), _IQ30div(_IQ30(1.999999999), _IQ30(1.4))) ;
}

TEST(IQmath_Division, IQ30divNegative)
{
    LONGS_EQUAL(_IQ30(1.5), _IQ30div(_IQ30(-1.5), _IQ30(-1))) ;
    LONGS_EQUAL(_IQ30(-1.42857142785), _IQ30div(_IQ30(-1.999999999), _IQ30(1.4))) ;
}
