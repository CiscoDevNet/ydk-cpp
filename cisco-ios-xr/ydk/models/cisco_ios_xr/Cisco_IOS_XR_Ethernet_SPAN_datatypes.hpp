#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_
#define _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_datatypes {

class SpanSessionClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mpls_ipv4;
        static const ydk::Enum::YLeaf mpls_ipv6;

};

class SpanSessionClassOld : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_ */

