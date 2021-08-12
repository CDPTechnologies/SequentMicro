/**
SequentMicro header file. Include this file in the project to use the library.
*/

#ifndef SEQUENTMICRO_SEQUENTMICRO_H
#define SEQUENTMICRO_SEQUENTMICRO_H


#include "SequentMicroBuilder.h"
#include <i2cio.h>
#include <sequentmicro.h>

namespace SequentMicro {

/** Instantiate the SequentMicroBuilder for this object */
SequentMicroBuilder gSequentMicroBuilder("SequentMicro", __TIMESTAMP__);

}

#endif
