#ifndef _CISCO_IOS_XR_ATM_COMMON_DATATYPES_
#define _CISCO_IOS_XR_ATM_COMMON_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_atm_common_datatypes {


class AtmVpShapingEnum : public Enum
{
    public:
        static const Enum::Value cbr;
        static const Enum::Value vbr_nrt;
        static const Enum::Value vbr_rt;
        static const Enum::Value ubr;

};

class AtmPvcShapingEnum : public Enum
{
    public:
        static const Enum::Value cbr;
        static const Enum::Value vbr_nrt;
        static const Enum::Value vbr_rt;
        static const Enum::Value ubr;

};

class AtmPvcEncapsulationEnum : public Enum
{
    public:
        static const Enum::Value snap;
        static const Enum::Value vc_mux;
        static const Enum::Value nlpid;
        static const Enum::Value aal0;
        static const Enum::Value aal5;

};

class AtmPvcDataEnum : public Enum
{
    public:
        static const Enum::Value data;
        static const Enum::Value ilmi;
        static const Enum::Value layer2;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_COMMON_DATATYPES_ */

