#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_DATATYPES_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper_datatypes {

class MplsLdpOperAfName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "all") return 65535;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_DATATYPES_ */

