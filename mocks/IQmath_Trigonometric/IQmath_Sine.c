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

long __IQsin(long A, int num)
{
	double quotient ;

	quotient = ((double)A) / ((double)pow(2, num)) ;

	return ((long)(sin(quotient) * pow(2, num)));
}

long _IQ1sin(long A)
{
	return __IQsin(A, 1) ;
}

long _IQ2sin(long A)
{
	return __IQsin(A, 2) ;
}

