#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_datatypes {

class TtySessionTimeoutDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf in_out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 1;
            if (name == "in-out") return 3;
            return -1;
        }
};

class TtyPager : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf more;
        static const ydk::Enum::YLeaf less;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "more") return 1;
            if (name == "less") return 2;
            if (name == "none") return 3;
            return -1;
        }
};

class TtyEscapeChar : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf break_;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "break") return 257;
            if (name == "default") return 30;
            if (name == "none") return 256;
            return -1;
        }
};

class TtyTransportProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf ssh;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "telnet") return 1;
            if (name == "ssh") return 3;
            return -1;
        }
};

class TtyTransportProtocolSelect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf some;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "all") return 1;
            if (name == "some") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_DATATYPES_ */

