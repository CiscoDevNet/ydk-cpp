#ifndef _CISCO_IOS_XR_AAA_DIAMETER_OPER_
#define _CISCO_IOS_XR_AAA_DIAMETER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_aaa_diameter_oper {

class DisconnectCauseEnum : public Enum
{
    public:
        static const Enum::YLeaf reboot;
        static const Enum::YLeaf busy;
        static const Enum::YLeaf do_not_wait_to_talk;

};

class SecurityTypeValueEnum : public Enum
{
    public:
        static const Enum::YLeaf security_type_none;
        static const Enum::YLeaf type;
        static const Enum::YLeaf ipsec;

};

class PeerStateValueEnum : public Enum
{
    public:
        static const Enum::YLeaf state_none;
        static const Enum::YLeaf closed;
        static const Enum::YLeaf wait_connection_ack;
        static const Enum::YLeaf wait_cea;
        static const Enum::YLeaf state_open;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf suspect;

};

class ProtocolTypeValueEnum : public Enum
{
    public:
        static const Enum::YLeaf protocol_none;
        static const Enum::YLeaf tcp;

};

class PeerEnum : public Enum
{
    public:
        static const Enum::YLeaf undefined;
        static const Enum::YLeaf server;

};

class WhoInitiatedDisconnectEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf host;
        static const Enum::YLeaf peer;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_DIAMETER_OPER_ */

