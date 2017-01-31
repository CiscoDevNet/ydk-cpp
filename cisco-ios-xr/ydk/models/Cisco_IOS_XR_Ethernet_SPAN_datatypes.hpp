#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_
#define _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_datatypes {


class SpanSessionClassOldEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;

};

class SpanSessionClassEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_ */

