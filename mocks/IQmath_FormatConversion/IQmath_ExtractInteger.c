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

long __IQint(long A, int num)
{
	long divisor ;

	divisor = (long) pow(2, num) ;

	return (A/divisor) ;
}

long _IQ1int(long A)
{
	return __IQint(A, 1) ;
}

long _IQ2int(long A)
{
	return __IQint(A, 2) ;
}
