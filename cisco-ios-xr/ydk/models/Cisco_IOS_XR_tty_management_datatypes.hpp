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
        static const Enum::Value in;
        static const Enum::Value in_out;

};

class TtyPagerEnum : public Enum
{
    public:
        static const Enum::Value more;
        static const Enum::Value less;
        static const Enum::Value none;

};

class TtyEscapeCharEnum : public Enum
{
    public:
        static const Enum::Value break_;
        static const Enum::Value default_;
        static const Enum::Value none;

};

class TtyTransportProtocolEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value telnet;
        static const Enum::Value ssh;

};

class TtyTransportProtocolSelectEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value all;
        static const Enum::Value some;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_ */

