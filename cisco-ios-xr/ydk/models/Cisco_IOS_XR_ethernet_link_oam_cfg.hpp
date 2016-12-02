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
        static const Enum::Value passive;
        static const Enum::Value active;

};

class EtherLinkOamProfileHelloIntervalEnumEnum : public Enum
{
    public:
        static const Enum::Value Y_100ms;

};

class EtherLinkOamEventActionEnumEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value error_disable;
        static const Enum::Value log;

};

class EtherLinkOamEventActionPrimEnumEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value log;

};

class EtherLinkOamProfileRequireModeEnumEnum : public Enum
{
    public:
        static const Enum::Value passive;
        static const Enum::Value active;

};

class EtherLinkOamInterfaceRequireModeEnumEnum : public Enum
{
    public:
        static const Enum::Value passive;
        static const Enum::Value active;
        static const Enum::Value dont_care;

};

class EtherLinkOamEventActionEnum2Enum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value error_disable;

};

class EtherLinkOamEventActionEnum5Enum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value error_disable;
        static const Enum::Value efd;

};

class EtherLinkOamEventActionEnum4Enum : public Enum
{
    public:
        static const Enum::Value disable;

};

class EtherLinkOamProfileModeEnumEnum : public Enum
{
    public:
        static const Enum::Value passive;

};

class EtherLinkOamEventActionEnum6Enum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value log;
        static const Enum::Value efd;

};

class EtherLinkOamEventActionEnumEfdEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value error_disable;
        static const Enum::Value log;
        static const Enum::Value efd;

};

class EtherLinkOamEventActionEnum1Enum : public Enum
{
    public:
        static const Enum::Value error_disable;
        static const Enum::Value log;

};

class EtherLinkOamInterfaceHelloIntervalEnumEnum : public Enum
{
    public:
        static const Enum::Value Y_1s;
        static const Enum::Value Y_100ms;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_CFG_ */

