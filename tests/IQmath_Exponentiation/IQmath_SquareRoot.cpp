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

TEST_GROUP(IQmath_SquareRoot)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};

TEST(IQmath_SquareRoot, IQ1sqrt)
{
    LONGS_EQUAL(_IQ1(15), _IQ1sqrt(_IQ1(225))) ;
	LONGS_EQUAL(_IQ1(25), _IQ1sqrt(_IQ1(625))) ;
}

TEST(IQmath_SquareRoot, IQ2sqrt)
{
    LONGS_EQUAL(_IQ2(1.5), _IQ2sqrt(_IQ2(2.25))) ;
	LONGS_EQUAL(_IQ2(2.5), _IQ2sqrt(_IQ2(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ3sqrt)
{
    LONGS_EQUAL(_IQ3(1.5), _IQ3sqrt(_IQ3(2.25))) ;
	LONGS_EQUAL(_IQ3(2.5), _IQ3sqrt(_IQ3(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ4sqrt)
{
    LONGS_EQUAL(_IQ4(1.5), _IQ4sqrt(_IQ4(2.25))) ;
	LONGS_EQUAL(_IQ4(2.5), _IQ4sqrt(_IQ4(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ5sqrt)
{
    LONGS_EQUAL(_IQ5(1.5), _IQ5sqrt(_IQ5(2.25))) ;
	LONGS_EQUAL(_IQ5(2.5), _IQ5sqrt(_IQ5(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ6sqrt)
{
    LONGS_EQUAL(_IQ6(1.5), _IQ6sqrt(_IQ6(2.25))) ;
	LONGS_EQUAL(_IQ6(2.5), _IQ6sqrt(_IQ6(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ7sqrt)
{
    LONGS_EQUAL(_IQ7(1.5), _IQ7sqrt(_IQ7(2.25))) ;
	LONGS_EQUAL(_IQ7(2.5), _IQ7sqrt(_IQ7(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ8sqrt)
{
    LONGS_EQUAL(_IQ8(1.5), _IQ8sqrt(_IQ8(2.25))) ;
	LONGS_EQUAL(_IQ8(2.5), _IQ8sqrt(_IQ8(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ9sqrt)
{
    LONGS_EQUAL(_IQ9(1.5), _IQ9sqrt(_IQ9(2.25))) ;
	LONGS_EQUAL(_IQ9(2.5), _IQ9sqrt(_IQ9(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ10sqrt)
{
    LONGS_EQUAL(_IQ10(1.5), _IQ10sqrt(_IQ10(2.25))) ;
	LONGS_EQUAL(_IQ10(2.5), _IQ10sqrt(_IQ10(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ11sqrt)
{
    LONGS_EQUAL(_IQ11(1.5), _IQ11sqrt(_IQ11(2.25))) ;
	LONGS_EQUAL(_IQ11(2.5), _IQ11sqrt(_IQ11(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ12sqrt)
{
    LONGS_EQUAL(_IQ12(1.5), _IQ12sqrt(_IQ12(2.25))) ;
	LONGS_EQUAL(_IQ12(2.5), _IQ12sqrt(_IQ12(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ13sqrt)
{
    LONGS_EQUAL(_IQ13(1.5), _IQ13sqrt(_IQ13(2.25))) ;
	LONGS_EQUAL(_IQ13(2.5), _IQ13sqrt(_IQ13(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ14sqrt)
{
    LONGS_EQUAL(_IQ14(1.5), _IQ14sqrt(_IQ14(2.25))) ;
	LONGS_EQUAL(_IQ14(2.5), _IQ14sqrt(_IQ14(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ15sqrt)
{
    LONGS_EQUAL(_IQ15(1.5), _IQ15sqrt(_IQ15(2.25))) ;
	LONGS_EQUAL(_IQ15(2.5), _IQ15sqrt(_IQ15(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ16sqrt)
{
    LONGS_EQUAL(_IQ16(1.5), _IQ16sqrt(_IQ16(2.25))) ;
	LONGS_EQUAL(_IQ16(2.5), _IQ16sqrt(_IQ16(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ17sqrt)
{
    LONGS_EQUAL(_IQ17(1.5), _IQ17sqrt(_IQ17(2.25))) ;
	LONGS_EQUAL(_IQ17(2.5), _IQ17sqrt(_IQ17(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ18sqrt)
{
    LONGS_EQUAL(_IQ18(1.5), _IQ18sqrt(_IQ18(2.25))) ;
	LONGS_EQUAL(_IQ18(2.5), _IQ18sqrt(_IQ18(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ19sqrt)
{
    LONGS_EQUAL(_IQ19(1.5), _IQ19sqrt(_IQ19(2.25))) ;
	LONGS_EQUAL(_IQ19(2.5), _IQ19sqrt(_IQ19(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ20sqrt)
{
    LONGS_EQUAL(_IQ20(1.5), _IQ20sqrt(_IQ20(2.25))) ;
	LONGS_EQUAL(_IQ20(2.5), _IQ20sqrt(_IQ20(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ21sqrt)
{
    LONGS_EQUAL(_IQ21(1.5), _IQ21sqrt(_IQ21(2.25))) ;
	LONGS_EQUAL(_IQ21(2.5), _IQ21sqrt(_IQ21(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ22sqrt)
{
    LONGS_EQUAL(_IQ22(1.5), _IQ22sqrt(_IQ22(2.25))) ;
	LONGS_EQUAL(_IQ22(2.5), _IQ22sqrt(_IQ22(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ23sqrt)
{
    LONGS_EQUAL(_IQ23(1.5), _IQ23sqrt(_IQ23(2.25))) ;
	LONGS_EQUAL(_IQ23(2.5), _IQ23sqrt(_IQ23(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ24sqrt)
{
    LONGS_EQUAL(_IQ24(1.5), _IQ24sqrt(_IQ24(2.25))) ;
	LONGS_EQUAL(_IQ24(2.5), _IQ24sqrt(_IQ24(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ25sqrt)
{
    LONGS_EQUAL(_IQ25(1.5), _IQ25sqrt(_IQ25(2.25))) ;
	LONGS_EQUAL(_IQ25(2.5), _IQ25sqrt(_IQ25(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ26sqrt)
{
    LONGS_EQUAL(_IQ26(1.5), _IQ26sqrt(_IQ26(2.25))) ;
	LONGS_EQUAL(_IQ26(2.5), _IQ26sqrt(_IQ26(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ27sqrt)
{
    LONGS_EQUAL(_IQ27(1.5), _IQ27sqrt(_IQ27(2.25))) ;
	LONGS_EQUAL(_IQ27(2.5), _IQ27sqrt(_IQ27(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ28sqrt)
{
    LONGS_EQUAL(_IQ28(1.5), _IQ28sqrt(_IQ28(2.25))) ;
	LONGS_EQUAL(_IQ28(2.5), _IQ28sqrt(_IQ28(6.25))) ;
}

TEST(IQmath_SquareRoot, IQ29sqrt)
{
    LONGS_EQUAL(_IQ29(0.5), _IQ29sqrt(_IQ29(0.25))) ;
	LONGS_EQUAL(_IQ29(1.5), _IQ29sqrt(_IQ29(2.25))) ;
}

TEST(IQmath_SquareRoot, IQ30sqrt)
{
    LONGS_EQUAL(_IQ30(0.5), _IQ30sqrt(_IQ30(0.25))) ;
	LONGS_EQUAL(_IQ30(1.25), _IQ30sqrt(_IQ30(1.5625))) ;
}
