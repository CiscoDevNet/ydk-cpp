#ifndef _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_
#define _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_link_oam_cfg {


class EtherLinkOamInterfaceModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;
        static const Enum::YLeaf active;

};

class EtherLinkOamProfileHelloIntervalEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_100ms;

};

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

class EtherLinkOamProfileRequireModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;
        static const Enum::YLeaf active;

};

class EtherLinkOamInterfaceRequireModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;
        static const Enum::YLeaf active;
        static const Enum::YLeaf dont_care;

};

class EtherLinkOamEventActionEnum2Enum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf error_disable;

};

class EtherLinkOamEventActionEnum5Enum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf error_disable;
        static const Enum::YLeaf efd;

};

class EtherLinkOamEventActionEnum4Enum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class EtherLinkOamProfileModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;

};

class EtherLinkOamEventActionEnum6Enum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf log;
        static const Enum::YLeaf efd;

};

class EtherLinkOamEventActionEnumEfdEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf error_disable;
        static const Enum::YLeaf log;
        static const Enum::YLeaf efd;

};

class EtherLinkOamEventActionEnum1Enum : public Enum
{
    public:
        static const Enum::YLeaf error_disable;
        static const Enum::YLeaf log;

};

class EtherLinkOamInterfaceHelloIntervalEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1s;
        static const Enum::YLeaf Y_100ms;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_ */

