#ifndef _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_
#define _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ethernet_link_oam_cfg {

class EtherLinkOamEventActionEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf error_disable;
        static const Enum::YLeaf log;

};

class EtherLinkOamEventActionPrimEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf log;

};

class EtherLinkOamRequireModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;
        static const Enum::YLeaf active;
        static const Enum::YLeaf dont_care;

};

class EtherLinkOamWindowUnitsSymbolsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf milliseconds;
        static const Enum::YLeaf symbols;

};

class EtherLinkOamThresholdUnitsFramesEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf frames;
        static const Enum::YLeaf ppm;

};

class EtherLinkOamThresholdUnitsSymbolsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf symbols;
        static const Enum::YLeaf ppm;

};

class EtherLinkOamHelloIntervalEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1s;
        static const Enum::YLeaf Y_100ms;

};

class EtherLinkOamModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;
        static const Enum::YLeaf active;

};

class EtherLinkOamEventActionEnumEfdEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf error_disable;
        static const Enum::YLeaf log;
        static const Enum::YLeaf efd;

};

class EtherLinkOamWindowUnitsFramesEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf milliseconds;
        static const Enum::YLeaf frames;

};

class EtherLinkOamThresholdWindowMultiplierEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf thousand;
        static const Enum::YLeaf million;
        static const Enum::YLeaf billion;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_ */

