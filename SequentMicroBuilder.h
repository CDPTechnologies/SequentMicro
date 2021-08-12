/**
SequentMicroBuilder header file.
*/

#ifndef SEQUENTMICRO_SEQUENTMICROBUILDER_H
#define SEQUENTMICRO_SEQUENTMICROBUILDER_H

#include <CDPSystem/Application/CDPBuilder.h>

namespace SequentMicro {

class SequentMicroBuilder : public CDPBuilder
{
public:
    SequentMicroBuilder(const char* libName,const char* timeStamp);
    CDPComponent* CreateNewComponent(const std::string& type) override;
    CDPBaseObject* CreateNewCDPOperator(const std::string& modelName,const std::string& type,const CDPPropertyBase* inputProperty) override;
    CDPObject* CreateNewObject(const std::string& type) override;
    CDP::StudioAPI::CDPNode* CreateNewCDPNode(const std::string& type) override;
};

}

#endif
