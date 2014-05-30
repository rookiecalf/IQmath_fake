/**********************************************************************
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
**********************************************************************/
#include "math.h"

long __IQexp(long A, int num)
{
	return ((long)(((double)pow((double)A,2))/((double)pow(2, num)))) ;
}

long _IQ1exp(long A)
{
	return __IQexp(A, 1) ;
}

long _IQ2exp(long A)
{
	return __IQexp(A, 2) ;
}

