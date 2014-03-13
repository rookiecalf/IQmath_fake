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

long __IQdiv(long A, long B, int num)
{
	return ((long)(((double)A) * ((double)pow(2,num)) / ((double)B))) ;
}


long _IQ1div(long A, long B)
{
	return __IQdiv(A, B, 1) ;
}
