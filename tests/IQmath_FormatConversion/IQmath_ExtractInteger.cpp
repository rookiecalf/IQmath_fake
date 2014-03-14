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

TEST_GROUP(IQmath_ExtractInteger)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_ExtractInteger, IQ1int)
{
    LONGS_EQUAL(2, _IQ1int(_IQ1(2.159))) ;
    LONGS_EQUAL(0, _IQ1int(_IQ1(0))) ;
    LONGS_EQUAL(1073741823, _IQ1int(_IQ1(1073741823.5))) ;
    LONGS_EQUAL(-1073741823, _IQ1int(_IQ1(-1073741823.5))) ;
    LONGS_EQUAL(-1073741824, _IQ1int(_IQ1(-1073741824.0))) ;
}


TEST(IQmath_ExtractInteger, IQ2int)
{
    LONGS_EQUAL(536870911, _IQ2int(_IQ2(536870911.75))) ;
    LONGS_EQUAL(-536870911, _IQ2int(_IQ2(-536870911.75))) ;
    LONGS_EQUAL(-536870912, _IQ2int(_IQ2(-536870912.0))) ;
}

TEST(IQmath_ExtractInteger, IQ3int)
{
    LONGS_EQUAL(268435455, _IQ3int(_IQ3(268435455.875))) ;
    LONGS_EQUAL(-268435456, _IQ3int(_IQ3(-268435456))) ;
}

TEST(IQmath_ExtractInteger, IQ4int)
{
    LONGS_EQUAL(134217727, _IQ4int(_IQ4(134217727.9375))) ;
    LONGS_EQUAL(-134217728, _IQ4int(_IQ4(-134217728))) ;
}

TEST(IQmath_ExtractInteger, IQ5int)
{
    LONGS_EQUAL(67108863, _IQ5int(_IQ5(67108863.96875))) ;
    LONGS_EQUAL(-67108864, _IQ5int(_IQ5(-67108864))) ;
}

TEST(IQmath_ExtractInteger, IQ6int)
{
    LONGS_EQUAL(33554431, _IQ6int(_IQ6(33554431.984375))) ;
    LONGS_EQUAL(-33554432, _IQ6int(_IQ6(-33554432.0))) ;
}

TEST(IQmath_ExtractInteger, IQ7int)
{
    LONGS_EQUAL(16777215, _IQ7int(_IQ7(16777215.9921875))) ;
    LONGS_EQUAL(-16777216, _IQ7int(_IQ7(-16777216.0))) ;
}

TEST(IQmath_ExtractInteger, IQ8int)
{
    LONGS_EQUAL(8388607, _IQ8int(_IQ8(8388607.99609375))) ;
    LONGS_EQUAL(-8388608, _IQ8int(_IQ8(-8388608.0))) ;
}

TEST(IQmath_ExtractInteger, IQ9int)
{
    LONGS_EQUAL(4194303, _IQ9int(_IQ9(4194303.998046875))) ;
    LONGS_EQUAL(-4194304, _IQ9int(_IQ9(-4194304.0))) ;
}

TEST(IQmath_ExtractInteger, IQ10int)
{
    LONGS_EQUAL(2097151, _IQ10int(_IQ10(2097151.999023437))) ;
    LONGS_EQUAL(-2097152, _IQ10int(_IQ10(-2097152.0))) ;
}

TEST(IQmath_ExtractInteger, IQ11int)
{
    LONGS_EQUAL(1048575, _IQ11int(_IQ11(1048575.999511719))) ;
    LONGS_EQUAL(-1048576, _IQ11int(_IQ11(-1048576.0))) ;
}

TEST(IQmath_ExtractInteger, IQ12int)
{
    LONGS_EQUAL(524287, _IQ12int(_IQ12(524287.999755859))) ;
    LONGS_EQUAL(-524288, _IQ12int(_IQ12(-524288.0))) ;
}

TEST(IQmath_ExtractInteger, IQ13int)
{
    LONGS_EQUAL(262143, _IQ13int(_IQ13(262143.999877930))) ;
    LONGS_EQUAL(-262144, _IQ13int(_IQ13(-262144.0))) ;
}

TEST(IQmath_ExtractInteger, IQ14int)
{
    LONGS_EQUAL(131071, _IQ14int(_IQ14(131071.999938965 ))) ;
    LONGS_EQUAL(-131072, _IQ14int(_IQ14(-131072.0))) ;
}

TEST(IQmath_ExtractInteger, IQ15int)
{
    LONGS_EQUAL(65535, _IQ15int(_IQ15(65535.999969482))) ;
    LONGS_EQUAL(-65536, _IQ15int(_IQ15(-65536.0))) ;
}

TEST(IQmath_ExtractInteger, IQ16int)
{
    LONGS_EQUAL(32767, _IQ16int(_IQ16(32767.999984741))) ;
    LONGS_EQUAL(-32768, _IQ16int(_IQ16(-32768.0))) ;
}

TEST(IQmath_ExtractInteger, IQ17int)
{
    LONGS_EQUAL(16383, _IQ17int(_IQ17(16383.999992371))) ;
    LONGS_EQUAL(-16384, _IQ17int(_IQ17(-16384.0))) ;
}

TEST(IQmath_ExtractInteger, IQ18int)
{
    LONGS_EQUAL(8191, _IQ18int(_IQ18(8191.999996185))) ;
    LONGS_EQUAL(-8192, _IQ18int(_IQ18(-8192.0))) ;
}

TEST(IQmath_ExtractInteger, IQ19int)
{
    LONGS_EQUAL(4095, _IQ19int(_IQ19(4095.999998093))) ;
    LONGS_EQUAL(-4096, _IQ19int(_IQ19(-4096.0))) ;
}

TEST(IQmath_ExtractInteger, IQ20int)
{
    LONGS_EQUAL(2047, _IQ20int(_IQ20(2047.999999046))) ;
    LONGS_EQUAL(-2048, _IQ20int(_IQ20(-2048.0))) ;
}

TEST(IQmath_ExtractInteger, IQ21int)
{
    LONGS_EQUAL(1023, _IQ21int(_IQ21(1023.999999523))) ;
    LONGS_EQUAL(-1024, _IQ21int(_IQ21(-1024.0))) ;
}

TEST(IQmath_ExtractInteger, IQ22int)
{
    LONGS_EQUAL(511, _IQ22int(_IQ22(511.999999762))) ;
    LONGS_EQUAL(-512, _IQ22int(_IQ22(-512.0))) ;
}

TEST(IQmath_ExtractInteger, IQ23int)
{
    LONGS_EQUAL(255, _IQ23int(_IQ23(255.999999981))) ;
    LONGS_EQUAL(-256, _IQ23int(_IQ23(-256.0))) ;
}

TEST(IQmath_ExtractInteger, IQ24int)
{
    LONGS_EQUAL(127, _IQ24int(_IQ24(127.999999940))) ;
    LONGS_EQUAL(-128, _IQ24int(_IQ24(-128.0))) ;
}

TEST(IQmath_ExtractInteger, IQ25int)
{
    LONGS_EQUAL(63, _IQ25int(_IQ25(63.999999970))) ;
    LONGS_EQUAL(-64, _IQ25int(_IQ25(-64.0))) ;
}

TEST(IQmath_ExtractInteger, IQ26int)
{
    LONGS_EQUAL(31, _IQ26int(_IQ26(31.999999985))) ;
    LONGS_EQUAL(-32, _IQ26int(_IQ26(-32.0))) ;
}

TEST(IQmath_ExtractInteger, IQ27int)
{
    LONGS_EQUAL(15, _IQ27int(_IQ27(15.999999993))) ;
    LONGS_EQUAL(-16, _IQ27int(_IQ27(-16.0))) ;
}

TEST(IQmath_ExtractInteger, IQ28int)
{
    LONGS_EQUAL(7, _IQ28int(_IQ28(7.999999996))) ;
    LONGS_EQUAL(-8, _IQ28int(_IQ28(-8.0))) ;
}

TEST(IQmath_ExtractInteger, IQ29int)
{
    LONGS_EQUAL(3, _IQ29int(_IQ29(3.999999998))) ;
    LONGS_EQUAL(-4, _IQ29int(_IQ29(-4.0))) ;
}

TEST(IQmath_ExtractInteger, IQ30int)
{
    LONGS_EQUAL(1, _IQ30int(_IQ30(1.999999999))) ;
    LONGS_EQUAL(-2, _IQ30int(_IQ30(-2.0))) ;

    LONGS_EQUAL(-1, _IQ30int(_IQ30(-1.23456789))) ;
}
