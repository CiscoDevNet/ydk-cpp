#ifndef _CISCO_IOS_XR_IPV4_DC_CFG_
#define _CISCO_IOS_XR_IPV4_DC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_dc_cfg {

class Opt61Sub : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascii;
        static const ydk::Enum::YLeaf sn_chassis;

};

class Option61 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option61;

};

class Option60 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option60;

};

class Option77 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf option77;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DC_CFG_ */

