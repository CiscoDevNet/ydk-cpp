#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_
#define _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_datatypes {

class SpanSessionClassOld : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 0;
            return -1;
        }
};

class SpanSessionClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls_ipv4;
        static const ydk::Enum::YLeaf mpls_ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "mpls-ipv4") return 3;
            if (name == "mpls-ipv6") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_ */

