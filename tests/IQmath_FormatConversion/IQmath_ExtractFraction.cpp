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

TEST(IQmath_ExtractFraction, IQ3frac)
{
    LONGS_EQUAL(_IQ3(0.875), _IQ3frac(_IQ3(268435455.875))) ;
    LONGS_EQUAL(_IQ3(-0.875), _IQ3frac(_IQ3(-268435455.875))) ;
}

TEST(IQmath_ExtractFraction, IQ4frac)
{
    LONGS_EQUAL(_IQ4(0.9375), _IQ4frac(_IQ4(134217727.9375))) ;
    LONGS_EQUAL(_IQ4(-0.9375), _IQ4frac(_IQ4(-134217727.9375))) ;
}

TEST(IQmath_ExtractFraction, IQ5frac)
{
    LONGS_EQUAL(_IQ5(0.96875), _IQ5frac(_IQ5(67108863.96875))) ;
    LONGS_EQUAL(_IQ5(-0.96875), _IQ5frac(_IQ5(-67108863.96875))) ;
}

TEST(IQmath_ExtractFraction, IQ6frac)
{
    LONGS_EQUAL(_IQ6(0.984375), _IQ6frac(_IQ6(33554431.984375))) ;
    LONGS_EQUAL(_IQ6(-0.984375), _IQ6frac(_IQ6(-33554431.984375))) ;
}

TEST(IQmath_ExtractFraction, IQ7frac)
{
    LONGS_EQUAL(_IQ7(0.9921875), _IQ7frac(_IQ7(16777215.9921875))) ;
    LONGS_EQUAL(_IQ7(-0.9921875), _IQ7frac(_IQ7(-16777215.9921875))) ;
}

TEST(IQmath_ExtractFraction, IQ8frac)
{
    LONGS_EQUAL(_IQ8(0.99609375), _IQ8frac(_IQ8(8388607.99609375))) ;
    LONGS_EQUAL(_IQ8(-0.99609375), _IQ8frac(_IQ8(-8388607.99609375))) ;
}

TEST(IQmath_ExtractFraction, IQ9frac)
{
    LONGS_EQUAL(_IQ9(0.998046875), _IQ9frac(_IQ9(4194303.998046875))) ;
    LONGS_EQUAL(_IQ9(-0.998046875), _IQ9frac(_IQ9(-4194303.998046875))) ;
}

TEST(IQmath_ExtractFraction, IQ10frac)
{
    LONGS_EQUAL(_IQ10(0.999023437), _IQ10frac(_IQ10(2097151.999023437))) ;
    LONGS_EQUAL(_IQ10(-0.999023437), _IQ10frac(_IQ10(-2097151.999023437))) ;
}

TEST(IQmath_ExtractFraction, IQ11frac)
{
    LONGS_EQUAL(_IQ11(0.999511719), _IQ11frac(_IQ11(1048575.999511719))) ;
    LONGS_EQUAL(_IQ11(-0.999511719), _IQ11frac(_IQ11(-1048575.999511719))) ;
}

TEST(IQmath_ExtractFraction, IQ12frac)
{
    LONGS_EQUAL(_IQ12(0.999755859), _IQ12frac(_IQ12(524287.999755859))) ;
    LONGS_EQUAL(_IQ12(-0.999755859), _IQ12frac(_IQ12(-524287.999755859))) ;
}

TEST(IQmath_ExtractFraction, IQ13frac)
{
    LONGS_EQUAL(_IQ13(0.999877930), _IQ13frac(_IQ13(262143.999877930))) ;
    LONGS_EQUAL(_IQ13(-0.999877930), _IQ13frac(_IQ13(-262143.999877930))) ;
}

TEST(IQmath_ExtractFraction, IQ14frac)
{
    LONGS_EQUAL(_IQ14(0.999938965), _IQ14frac(_IQ14(131071.999938965))) ;
    LONGS_EQUAL(_IQ14(-0.999938965), _IQ14frac(_IQ14(-131071.999938965))) ;
}

TEST(IQmath_ExtractFraction, IQ15frac)
{
    LONGS_EQUAL(_IQ15(0.999969482), _IQ15frac(_IQ15(65535.999969482))) ;
    LONGS_EQUAL(_IQ15(-0.999969482), _IQ15frac(_IQ15(-65535.999969482))) ;
}

TEST(IQmath_ExtractFraction, IQ16frac)
{
    LONGS_EQUAL(_IQ16(0.999984741), _IQ16frac(_IQ16(32767.999984741))) ;
    LONGS_EQUAL(_IQ16(-0.999984741), _IQ16frac(_IQ16(-32767.999984741))) ;
}

TEST(IQmath_ExtractFraction, IQ17frac)
{
    LONGS_EQUAL(_IQ17(0.999992371), _IQ17frac(_IQ17(16383.999992371))) ;
    LONGS_EQUAL(_IQ17(-0.999992371), _IQ17frac(_IQ17(-16383.999992371))) ;
}

TEST(IQmath_ExtractFraction, IQ18frac)
{
    LONGS_EQUAL(_IQ18(0.999996185), _IQ18frac(_IQ18(8191.999996185))) ;
    LONGS_EQUAL(_IQ18(-0.999996185), _IQ18frac(_IQ18(-8191.999996185))) ;
}

TEST(IQmath_ExtractFraction, IQ19frac)
{
    LONGS_EQUAL(_IQ19(0.999998093), _IQ19frac(_IQ19(4095.999998093))) ;
    LONGS_EQUAL(_IQ19(-0.999998093), _IQ19frac(_IQ19(-4095.999998093))) ;
}

TEST(IQmath_ExtractFraction, IQ20frac)
{
    LONGS_EQUAL(_IQ20(0.999999046), _IQ20frac(_IQ20(2047.999999046))) ;
    LONGS_EQUAL(_IQ20(-0.999999046), _IQ20frac(_IQ20(-2047.999999046))) ;
}

TEST(IQmath_ExtractFraction, IQ21frac)
{
    LONGS_EQUAL(_IQ21(0.999999523), _IQ21frac(_IQ21(1023.999999523))) ;
    LONGS_EQUAL(_IQ21(-0.999999523), _IQ21frac(_IQ21(-1023.999999523))) ;
}

TEST(IQmath_ExtractFraction, IQ22frac)
{
    LONGS_EQUAL(_IQ22(0.999999762), _IQ22frac(_IQ22(511.999999762))) ;
    LONGS_EQUAL(_IQ22(-0.999999762), _IQ22frac(_IQ22(-511.999999762))) ;
}

TEST(IQmath_ExtractFraction, IQ23frac)
{
    LONGS_EQUAL(_IQ23(0.999999981), _IQ23frac(_IQ23(255.999999981))) ;
    LONGS_EQUAL(_IQ23(-0.999999981), _IQ23frac(_IQ23(-255.999999981))) ;
}

TEST(IQmath_ExtractFraction, IQ24frac)
{
    LONGS_EQUAL(_IQ24(0.999999940), _IQ24frac(_IQ24(127.999999940))) ;
    LONGS_EQUAL(_IQ24(-0.999999940), _IQ24frac(_IQ24(-127.999999940))) ;
}

TEST(IQmath_ExtractFraction, IQ25frac)
{
    LONGS_EQUAL(_IQ25(0.999999970), _IQ25frac(_IQ25(63.999999970))) ;
    LONGS_EQUAL(_IQ25(-0.999999970), _IQ25frac(_IQ25(-63.999999970))) ;
}

TEST(IQmath_ExtractFraction, IQ26frac)
{
    LONGS_EQUAL(_IQ26(0.999999985), _IQ26frac(_IQ26(31.999999985))) ;
    LONGS_EQUAL(_IQ26(-0.999999985), _IQ26frac(_IQ26(-31.999999985))) ;
}

TEST(IQmath_ExtractFraction, IQ27frac)
{
    LONGS_EQUAL(_IQ27(0.999999993), _IQ27frac(_IQ27(15.999999993))) ;
    LONGS_EQUAL(_IQ27(-0.999999993), _IQ27frac(_IQ27(-15.999999993))) ;
}

TEST(IQmath_ExtractFraction, IQ28frac)
{
    LONGS_EQUAL(_IQ28(0.999999996), _IQ28frac(_IQ28(7.999999996))) ;
    LONGS_EQUAL(_IQ28(-0.999999996), _IQ28frac(_IQ28(-7.999999996))) ;
}

TEST(IQmath_ExtractFraction, IQ29frac)
{
    LONGS_EQUAL(_IQ29(0.999999998), _IQ29frac(_IQ29(3.999999998))) ;
    LONGS_EQUAL(_IQ29(-0.999999998), _IQ29frac(_IQ29(-3.999999998))) ;
}

TEST(IQmath_ExtractFraction, IQ30frac)
{
    LONGS_EQUAL(_IQ30(0.999999999), _IQ30frac(_IQ30(1.999999999))) ;
    LONGS_EQUAL(_IQ30(-0.999999999), _IQ30frac(_IQ30(-1.999999999))) ;
}
