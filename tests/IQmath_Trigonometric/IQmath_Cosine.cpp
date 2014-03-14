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
}


