#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_datatypes {

class TtyEscapeChar : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf break_;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

};

class TtyPager : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf more;
        static const ydk::Enum::YLeaf less;
        static const ydk::Enum::YLeaf none;

};

class TtyTransportProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf ssh;

};

class TtyTransportProtocolSelect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf some;

};

class TtySessionTimeoutDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf in_out;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_ */

