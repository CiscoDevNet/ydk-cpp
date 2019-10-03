#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_media_eth_cfg {

class EthernetIpg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf non_standard;

        static int get_enum_value(const std::string & name) {
            if (name == "non-standard") return 16;
            return -1;
        }
};

class EthernetPfc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            return -1;
        }
};

class EthernetAutoNegotiation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf override;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "override") return 2;
            return -1;
        }
};

class EthernetDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

        static int get_enum_value(const std::string & name) {
            if (name == "full") return 0;
            if (name == "half") return 1;
            return -1;
        }
};

class EthernetLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "line") return 2;
            return -1;
        }
};

class EthernetSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_10;
        static const ydk::Enum::YLeaf Y_100;
        static const ydk::Enum::YLeaf Y_1000;

        static int get_enum_value(const std::string & name) {
            if (name == "10") return 10;
            if (name == "100") return 100;
            if (name == "1000") return 1000;
            return -1;
        }
};

class EthernetFlowCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf bidirectional;

        static int get_enum_value(const std::string & name) {
            if (name == "ingress") return 0;
            if (name == "egress") return 1;
            if (name == "bidirectional") return 2;
            return -1;
        }
};

class EthernetFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "standard") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_ */

