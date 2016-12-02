#ifndef _CISCO_IOS_XR_IPV4_MA_OPER_
#define _CISCO_IOS_XR_IPV4_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ma_oper {


class RpfModeEnum : public Enum
{
    public:
        static const Enum::Value strict;
        static const Enum::Value loose;

};

class Ipv4MaOperLineStateEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value shutdown;
        static const Enum::Value down;
        static const Enum::Value up;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_OPER_ */

