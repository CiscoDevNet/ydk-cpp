#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_datatypes {


class TtySessionTimeoutDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf in_out;

};

class TtyPagerEnum : public Enum
{
    public:
        static const Enum::YLeaf more;
        static const Enum::YLeaf less;
        static const Enum::YLeaf none;

};

class TtyEscapeCharEnum : public Enum
{
    public:
        static const Enum::YLeaf break_;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf none;

};

class TtyTransportProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf ssh;

};

class TtyTransportProtocolSelectEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf all;
        static const Enum::YLeaf some;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_ */

