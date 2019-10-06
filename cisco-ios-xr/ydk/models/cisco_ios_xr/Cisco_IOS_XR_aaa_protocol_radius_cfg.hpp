#ifndef _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_
#define _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_protocol_radius_cfg {

class AaaAuthentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf session_key;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 101;
            if (name == "any") return 102;
            if (name == "session-key") return 103;
            return -1;
        }
};

class AaaConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 1;
            return -1;
        }
};

class AaaAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf reject;

        static int get_enum_value(const std::string & name) {
            if (name == "accept") return 1;
            if (name == "reject") return 2;
            return -1;
        }
};

class AaaSelectKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf server_key;
        static const ydk::Enum::YLeaf session_key;

        static int get_enum_value(const std::string & name) {
            if (name == "server-key") return 1;
            if (name == "session-key") return 2;
            return -1;
        }
};

class AaaDscpValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf ef;

        static int get_enum_value(const std::string & name) {
            if (name == "af11") return 10;
            if (name == "af12") return 12;
            if (name == "af13") return 14;
            if (name == "af21") return 18;
            if (name == "af22") return 20;
            if (name == "af23") return 22;
            if (name == "af31") return 26;
            if (name == "af32") return 28;
            if (name == "af33") return 30;
            if (name == "af41") return 34;
            if (name == "af42") return 36;
            if (name == "af43") return 38;
            if (name == "cs1") return 8;
            if (name == "cs2") return 16;
            if (name == "cs3") return 24;
            if (name == "cs4") return 32;
            if (name == "cs5") return 40;
            if (name == "cs6") return 48;
            if (name == "cs7") return 56;
            if (name == "default") return 0;
            if (name == "ef") return 46;
            return -1;
        }
};

class AaaDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            if (name == "outbound") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_AAA_PROTOCOL_RADIUS_CFG_ */

