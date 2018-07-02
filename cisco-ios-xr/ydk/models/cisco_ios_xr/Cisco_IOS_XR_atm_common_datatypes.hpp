#ifndef _CISCO_IOS_XR_ATM_COMMON_DATATYPES_
#define _CISCO_IOS_XR_ATM_COMMON_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_atm_common_datatypes {

class AtmVpShaping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf vbr_nrt;
        static const ydk::Enum::YLeaf vbr_rt;
        static const ydk::Enum::YLeaf ubr;

};

class AtmPvcShaping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf vbr_nrt;
        static const ydk::Enum::YLeaf vbr_rt;
        static const ydk::Enum::YLeaf ubr;

};

class AtmPvcEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf vc_mux;
        static const ydk::Enum::YLeaf nlpid;
        static const ydk::Enum::YLeaf aal0;
        static const ydk::Enum::YLeaf aal5;

};

class AtmPvcData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf ilmi;
        static const ydk::Enum::YLeaf layer2;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_COMMON_DATATYPES_ */

