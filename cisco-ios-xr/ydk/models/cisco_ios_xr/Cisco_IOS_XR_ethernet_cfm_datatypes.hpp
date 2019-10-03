#ifndef _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_
#define _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_cfm_datatypes {

class BandwidthNotificationState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf degraded;

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 1;
            if (name == "degraded") return 2;
            return -1;
        }
};

class CfmMepDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class CfmCcmInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_3__DOT__3ms;
        static const ydk::Enum::YLeaf Y_10ms;
        static const ydk::Enum::YLeaf Y_100ms;
        static const ydk::Enum::YLeaf Y_1s;
        static const ydk::Enum::YLeaf Y_10s;
        static const ydk::Enum::YLeaf Y_1m;
        static const ydk::Enum::YLeaf Y_10m;

        static int get_enum_value(const std::string & name) {
            if (name == "3.3ms") return 1;
            if (name == "10ms") return 2;
            if (name == "100ms") return 3;
            if (name == "1s") return 4;
            if (name == "10s") return 5;
            if (name == "1m") return 6;
            if (name == "10m") return 7;
            return -1;
        }
};

class CfmAisInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1s;
        static const ydk::Enum::YLeaf Y_1m;

        static int get_enum_value(const std::string & name) {
            if (name == "1s") return 4;
            if (name == "1m") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_ */

