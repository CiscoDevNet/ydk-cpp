#ifndef _CISCO_IOS_XR_LMP_DATATYPES_
#define _CISCO_IOS_XR_LMP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lmp_datatypes {

class OlmAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf unnumbered;
        static const ydk::Enum::YLeaf nsap;

};

class OlmSwitchingCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;

};


}
}

#endif /* _CISCO_IOS_XR_LMP_DATATYPES_ */

