#ifndef _CISCO_IOS_XR_IPV4_MA_OPER_
#define _CISCO_IOS_XR_IPV4_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ma_oper {

class Ipv4MaOperConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ma_oper_client_none;
        static const ydk::Enum::YLeaf ipv4_ma_oper_non_oc_client;
        static const ydk::Enum::YLeaf ipv4_ma_oper_oc_client;

};

class RpfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class Ipv4MaOperLineState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_OPER_ */

