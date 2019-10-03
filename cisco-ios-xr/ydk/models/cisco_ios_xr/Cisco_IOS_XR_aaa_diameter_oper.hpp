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

        static int get_enum_value(const std::string & name) {
            if (name == "reboot") return 0;
            if (name == "busy") return 1;
            if (name == "do-not-wait-to-talk") return 2;
            return -1;
        }
};

class SecurityTypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf security_type_none;
        static const ydk::Enum::YLeaf type;
        static const ydk::Enum::YLeaf ipsec;

        static int get_enum_value(const std::string & name) {
            if (name == "security-type-none") return 0;
            if (name == "type") return 1;
            if (name == "ipsec") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "state-none") return 0;
            if (name == "closed") return 1;
            if (name == "wait-connection-ack") return 2;
            if (name == "wait-cea") return 3;
            if (name == "state-open") return 4;
            if (name == "closing") return 5;
            if (name == "suspect") return 6;
            return -1;
        }
};

class ProtocolTypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protocol_none;
        static const ydk::Enum::YLeaf tcp;

        static int get_enum_value(const std::string & name) {
            if (name == "protocol-none") return 0;
            if (name == "tcp") return 1;
            return -1;
        }
};

class Peer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf server;

        static int get_enum_value(const std::string & name) {
            if (name == "undefined") return 0;
            if (name == "server") return 1;
            return -1;
        }
};

class WhoInitiatedDisconnect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf peer;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "host") return 1;
            if (name == "peer") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_AAA_DIAMETER_OPER_ */

