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
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;

};

class Ipv4MaOperLineStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf shutdown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_OPER_ */

