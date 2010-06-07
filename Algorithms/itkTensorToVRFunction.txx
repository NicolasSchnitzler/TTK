/*=========================================================================

  Program:   Tensor ToolKit - TTK
  Module:    $URL:$
  Language:  C++
  Date:      $Date:$
  Version:   $Revision:$

  Copyright (c) INRIA 2010. All rights reserved.
  See LICENSE.txt for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef _itk_TensorToVRFunction_txx_
#define _itk_TensorToVRFunction_txx_

#include "itkTensorToVRFunction.h"

namespace itk
{


  template <class TInputPixelType, class TOutputPixelType>
  typename TensorToVRFunction<TInputPixelType,TOutputPixelType>::OutputPixelType
  TensorToVRFunction<TInputPixelType,TOutputPixelType>
  ::ComputeScalar (const InputPixelType & T) const
  {  
    return T.GetVR();
  }
  


}// end of namespace



#endif
