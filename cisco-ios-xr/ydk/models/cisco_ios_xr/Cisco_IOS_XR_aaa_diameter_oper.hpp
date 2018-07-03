#ifndef _CISCO_IOS_XR_AAA_DIAMETER_OPER_
#define _CISCO_IOS_XR_AAA_DIAMETER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_diameter_oper {

class DisconnectCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reboot;
        static const ydk::Enum::YLeaf busy;
        static const ydk::Enum::YLeaf do_not_wait_to_talk;

};

class SecurityTypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf security_type_none;
        static const ydk::Enum::YLeaf type;
        static const ydk::Enum::YLeaf ipsec;

};

class PeerStateValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_none;
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf wait_connection_ack;
        static const ydk::Enum::YLeaf wait_cea;
        static const ydk::Enum::YLeaf state_open;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf suspect;

};

class ProtocolTypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protocol_none;
        static const ydk::Enum::YLeaf tcp;

};

class Peer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf server;

};

class WhoInitiatedDisconnect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf peer;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_DIAMETER_OPER_ */

