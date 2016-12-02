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
        static const Enum::Value true_;

};

class SpanSessionClassEnum : public Enum
{
    public:
        static const Enum::Value ethernet;
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_DATATYPES_ */

