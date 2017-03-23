#ifndef _CISCO_IOS_XR_ATM_COMMON_DATATYPES_
#define _CISCO_IOS_XR_ATM_COMMON_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_atm_common_datatypes {

class AtmVpShapingEnum : public Enum
{
    public:
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf vbr_nrt;
        static const Enum::YLeaf vbr_rt;
        static const Enum::YLeaf ubr;

};

class AtmPvcShapingEnum : public Enum
{
    public:
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf vbr_nrt;
        static const Enum::YLeaf vbr_rt;
        static const Enum::YLeaf ubr;

};

class AtmPvcEncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf snap;
        static const Enum::YLeaf vc_mux;
        static const Enum::YLeaf nlpid;
        static const Enum::YLeaf aal0;
        static const Enum::YLeaf aal5;

};

class AtmPvcDataEnum : public Enum
{
    public:
        static const Enum::YLeaf data;
        static const Enum::YLeaf ilmi;
        static const Enum::YLeaf layer2;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_COMMON_DATATYPES_ */

