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

long __IQfrac(long A, int num)
{
	long integer ;
	long integerPart ;
	long divisor ;

	divisor = (long) pow(2, num) ;
	integer = A/divisor ;

	integerPart = integer * divisor ;

	return (A - integerPart);
}

long _IQ1frac(long A)
{
	return __IQfrac(A, 1) ;
}

long _IQ2frac(long A)
{
	return __IQfrac(A, 2) ;
}
