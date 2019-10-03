#ifndef _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_
#define _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_link_oam_cfg {

class EtherLinkOamEventActionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf error_disable;
        static const ydk::Enum::YLeaf log;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "error-disable") return 2;
            if (name == "log") return 3;
            return -1;
        }
};

class EtherLinkOamEventActionPrimEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf log;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "log") return 3;
            return -1;
        }
};

class EtherLinkOamRequireModeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf dont_care;

        static int get_enum_value(const std::string & name) {
            if (name == "passive") return 0;
            if (name == "active") return 1;
            if (name == "dont-care") return 2;
            return -1;
        }
};

class EtherLinkOamWindowUnitsSymbolsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf symbols;

        static int get_enum_value(const std::string & name) {
            if (name == "milliseconds") return 1;
            if (name == "symbols") return 2;
            return -1;
        }
};

class EtherLinkOamThresholdUnitsFramesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frames;
        static const ydk::Enum::YLeaf ppm;

        static int get_enum_value(const std::string & name) {
            if (name == "frames") return 3;
            if (name == "ppm") return 4;
            return -1;
        }
};

class EtherLinkOamThresholdUnitsSymbolsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symbols;
        static const ydk::Enum::YLeaf ppm;

        static int get_enum_value(const std::string & name) {
            if (name == "symbols") return 2;
            if (name == "ppm") return 4;
            return -1;
        }
};

class EtherLinkOamHelloIntervalEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1s;
        static const ydk::Enum::YLeaf Y_100ms;

        static int get_enum_value(const std::string & name) {
            if (name == "1s") return 0;
            if (name == "100ms") return 1;
            return -1;
        }
};

class EtherLinkOamModeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;

        static int get_enum_value(const std::string & name) {
            if (name == "passive") return 0;
            if (name == "active") return 1;
            return -1;
        }
};

class EtherLinkOamEventActionEnumEfd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf error_disable;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf efd;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "error-disable") return 2;
            if (name == "log") return 3;
            if (name == "efd") return 4;
            return -1;
        }
};

class EtherLinkOamWindowUnitsFramesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf frames;

        static int get_enum_value(const std::string & name) {
            if (name == "milliseconds") return 1;
            if (name == "frames") return 3;
            return -1;
        }
};

class EtherLinkOamThresholdWindowMultiplierEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf thousand;
        static const ydk::Enum::YLeaf million;
        static const ydk::Enum::YLeaf billion;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "thousand") return 1;
            if (name == "million") return 2;
            if (name == "billion") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_ */

