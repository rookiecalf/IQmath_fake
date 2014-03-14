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

TEST_GROUP(IQmath_Cosine)
{
    void setup()
    {
       
    }

    void teardown()
    {
 
    }

 
};


TEST(IQmath_Cosine, IQ1cos)
{
    LONGS_EQUAL(_IQ1(0.0707372), _IQ1cos(_IQ1(1.5))) ;
    LONGS_EQUAL(_IQ1(-0.8011436), _IQ1cos(_IQ1(2.5))) ;
}

TEST(IQmath_Cosine, IQ2cos)
{
    LONGS_EQUAL(_IQ2(0.0707372), _IQ2cos(_IQ2(1.5))) ;
    LONGS_EQUAL(_IQ2(-0.8011436), _IQ2cos(_IQ2(2.5))) ;
}

TEST(IQmath_Cosine, IQ3cos)
{
    LONGS_EQUAL(_IQ3(0.0707372), _IQ3cos(_IQ3(1.5))) ;
    LONGS_EQUAL(_IQ3(-0.8011436), _IQ3cos(_IQ3(2.5))) ;
}


TEST(IQmath_Cosine, IQ4cos)
{
    LONGS_EQUAL(_IQ4(0.73168886887), _IQ4cos(_IQ4(0.75))) ;
    LONGS_EQUAL(_IQ4(-0.8011436), _IQ4cos(_IQ4(2.5))) ;
}

TEST(IQmath_Cosine, IQ5cos)
{
    LONGS_EQUAL(_IQ5(0.73168886887), _IQ5cos(_IQ5(0.75))) ;
    LONGS_EQUAL(_IQ5(-0.8011436), _IQ5cos(_IQ5(2.5))) ;
}

TEST(IQmath_Cosine, IQ6cos)
{
    LONGS_EQUAL(_IQ6(0.73168886887), _IQ6cos(_IQ6(0.75))) ;
    LONGS_EQUAL(_IQ6(-0.8011436), _IQ6cos(_IQ6(2.5))) ;
}

TEST(IQmath_Cosine, IQ7cos)
{
    LONGS_EQUAL(_IQ7(0.73168886887), _IQ7cos(_IQ7(0.75))) ;
    LONGS_EQUAL(_IQ7(-0.8011436), _IQ7cos(_IQ7(2.5))) ;
}

TEST(IQmath_Cosine, IQ8cos)
{
    LONGS_EQUAL(_IQ8(0.73168886887), _IQ8cos(_IQ8(0.75))) ;
    LONGS_EQUAL(_IQ8(-0.8011436), _IQ8cos(_IQ8(2.5))) ;
}

TEST(IQmath_Cosine, IQ9cos)
{
    LONGS_EQUAL(_IQ9(0.73168886887), _IQ9cos(_IQ9(0.75))) ;
    LONGS_EQUAL(_IQ9(-0.8011436), _IQ9cos(_IQ9(2.5))) ;
}

TEST(IQmath_Cosine, IQ10cos)
{
    LONGS_EQUAL(_IQ10(0.73168886887), _IQ10cos(_IQ10(0.75))) ;
    LONGS_EQUAL(_IQ10(-0.8011436), _IQ10cos(_IQ10(2.5))) ;
}

TEST(IQmath_Cosine, IQ11cos)
{
    LONGS_EQUAL(_IQ11(0.933531832677456), _IQ11cos(_IQ11(18.482901205))) ;
    LONGS_EQUAL(_IQ11(-0.981671727329453), _IQ11cos(_IQ11(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ12cos)
{
    LONGS_EQUAL(_IQ12(0.933531832677456), _IQ12cos(_IQ12(18.482901205))) ;
    LONGS_EQUAL(_IQ12(-0.981671727329453), _IQ12cos(_IQ12(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ13cos)
{
    LONGS_EQUAL(_IQ13(0.933531832677456), _IQ13cos(_IQ13(18.482901205))) ;
    LONGS_EQUAL(_IQ13(-0.981671727329453), _IQ13cos(_IQ13(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ14cos)
{
    LONGS_EQUAL(_IQ14(0.933531832677456), _IQ14cos(_IQ14(18.482901205))) ;
    LONGS_EQUAL(_IQ14(-0.981671727329453), _IQ14cos(_IQ14(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ15cos)
{
    LONGS_EQUAL(_IQ15(0.933531832677456), _IQ15cos(_IQ15(18.482901205))) ;
    LONGS_EQUAL(_IQ15(-0.981671727329453), _IQ15cos(_IQ15(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ16cos)
{
    LONGS_EQUAL(_IQ16(0.933531832677456), _IQ16cos(_IQ16(18.482901205))) ;
    LONGS_EQUAL(_IQ16(-0.981671727329453), _IQ16cos(_IQ16(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ17cos)
{
    LONGS_EQUAL(_IQ17(0.933531832677456), _IQ17cos(_IQ17(18.482901205))) ;
    LONGS_EQUAL(_IQ17(-0.981671727329453), _IQ17cos(_IQ17(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ18cos)
{
    LONGS_EQUAL(_IQ18(0.933531832677456), _IQ18cos(_IQ18(18.482901205))) ;
    LONGS_EQUAL(_IQ18(-0.981671727329453), _IQ18cos(_IQ18(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ19cos)
{
    LONGS_EQUAL(_IQ19(0.933531832677456), _IQ19cos(_IQ19(18.482901205))) ;
    LONGS_EQUAL(_IQ19(-0.981671727329453), _IQ19cos(_IQ19(22.182901205))) ;
}

TEST(IQmath_Cosine, IQ20cos)
{
    LONGS_EQUAL(_IQ20(-0.461233605025643359), _IQ20cos(_IQ20(8.333366655))) ;
    LONGS_EQUAL(_IQ20(0.991216037453604634), _IQ20cos(_IQ20(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ21cos)
{
    LONGS_EQUAL(_IQ21(-0.461233605025643359), _IQ21cos(_IQ21(8.333366655))) ;
    LONGS_EQUAL(_IQ21(0.991216037453604634), _IQ21cos(_IQ21(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ22cos)
{
    LONGS_EQUAL(_IQ22(-0.461233605025643359), _IQ22cos(_IQ22(8.333366655))) ;
    LONGS_EQUAL(_IQ22(0.991216037453604634), _IQ22cos(_IQ22(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ23cos)
{
    LONGS_EQUAL(_IQ23(-0.461233605025643359), _IQ23cos(_IQ23(8.333366655))) ;
    LONGS_EQUAL(_IQ23(0.991216037453604634), _IQ23cos(_IQ23(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ24cos)
{
    LONGS_EQUAL(_IQ24(-0.461233605025643359), _IQ24cos(_IQ24(8.333366655))) ;
    LONGS_EQUAL(_IQ24(0.991216037453604634), _IQ24cos(_IQ24(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ25cos)
{
    LONGS_EQUAL(_IQ25(-0.981247668243), _IQ25cos(_IQ25(3.335557779))) ;
    LONGS_EQUAL(_IQ25(0.991216037453604634), _IQ25cos(_IQ25(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ26cos)
{
    LONGS_EQUAL(_IQ26(-0.981247668243), _IQ26cos(_IQ26(3.335557779))) ;
    LONGS_EQUAL(_IQ26(0.991216037453604634), _IQ26cos(_IQ26(25.000099965))) ;
}

TEST(IQmath_Cosine, IQ27cos)
{
    LONGS_EQUAL(_IQ27(-0.981247668243), _IQ27cos(_IQ27(3.335557779))) ;
    LONGS_EQUAL(_IQ27(0.0783479176580), _IQ27cos(_IQ27(7.775553339))) ;
}

TEST(IQmath_Cosine, IQ28cos)
{
    LONGS_EQUAL(_IQ28(-0.981247668243), _IQ28cos(_IQ28(3.335557779))) ;
    LONGS_EQUAL(_IQ28(0.0783479176580), _IQ28cos(_IQ28(7.775553339))) ;
}

TEST(IQmath_Cosine, IQ29cos)
{
    LONGS_EQUAL(_IQ29(-0.981247668243), _IQ29cos(_IQ29(3.335557779))) ;
    LONGS_EQUAL(_IQ29(0.290972335), _IQ29cos(_IQ29(1.275553339))) ;
}
