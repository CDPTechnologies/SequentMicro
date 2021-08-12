CDPVERSION = 4.9
TYPE = library
PROJECTNAME = SequentMicro

DEPS += \

HEADERS += \
    sequentmicro.h \
    SequentMicroBuilder.h

SOURCES += \
    SequentMicroBuilder.cpp

DISTFILES += $$files(*.xml, true) \
    Templates/Models/SequentMicro.IOPlus.xml \
    Templates/Recipes/SequentMicro.IOPlusADC.xml \
    Templates/Recipes/SequentMicro.IOPlusDAC.xml \
    Templates/Recipes/SequentMicro.IOPlusOpto.xml \
    Templates/Models/SequentMicro.IOPlusData.xml \
    Templates/Recipes/SequentMicro.IOPlusOdPWM.xml \
    Templates/Recipes/SequentMicro.IOPlusRelay.xml

load(cdp)
