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

long _IQ3frac(long A)
{
	return __IQfrac(A, 3) ;
}

long _IQ4frac(long A)
{
	return __IQfrac(A, 4) ;
}

long _IQ5frac(long A)
{
	return __IQfrac(A, 5) ;
}

long _IQ6frac(long A)
{
	return __IQfrac(A, 6) ;
}

long _IQ7frac(long A)
{
	return __IQfrac(A, 7) ;
}

long _IQ8frac(long A)
{
	return __IQfrac(A, 8) ;
}

long _IQ9frac(long A)
{
	return __IQfrac(A, 9) ;
}

long _IQ10frac(long A)
{
	return __IQfrac(A, 10) ;
}

long _IQ11frac(long A)
{
	return __IQfrac(A, 11) ;
}

long _IQ12frac(long A)
{
	return __IQfrac(A, 12) ;
}

long _IQ13frac(long A)
{
	return __IQfrac(A, 13) ;
}

long _IQ14frac(long A)
{
	return __IQfrac(A, 14) ;
}

long _IQ15frac(long A)
{
	return __IQfrac(A, 15) ;
}

long _IQ16frac(long A)
{
	return __IQfrac(A, 16) ;
}

long _IQ17frac(long A)
{
	return __IQfrac(A, 17) ;
}

long _IQ18frac(long A)
{
	return __IQfrac(A, 18) ;
}

long _IQ19frac(long A)
{
	return __IQfrac(A, 19) ;
}

long _IQ20frac(long A)
{
	return __IQfrac(A, 20) ;
}

long _IQ21frac(long A)
{
	return __IQfrac(A, 21) ;
}

long _IQ22frac(long A)
{
	return __IQfrac(A, 22) ;
}

long _IQ23frac(long A)
{
	return __IQfrac(A, 23) ;
}

long _IQ24frac(long A)
{
	return __IQfrac(A, 24) ;
}

long _IQ25frac(long A)
{
	return __IQfrac(A, 25) ;
}

long _IQ26frac(long A)
{
	return __IQfrac(A, 26) ;
}

long _IQ27frac(long A)
{
	return __IQfrac(A, 27) ;
}

long _IQ28frac(long A)
{
	return __IQfrac(A, 28) ;
}

long _IQ29frac(long A)
{
	return __IQfrac(A, 29) ;
}

long _IQ30frac(long A)
{
	return __IQfrac(A, 30) ;
}
