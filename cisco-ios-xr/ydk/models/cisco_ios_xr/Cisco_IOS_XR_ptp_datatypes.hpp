#ifndef _CISCO_IOS_XR_PTP_DATATYPES_
#define _CISCO_IOS_XR_PTP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_datatypes {

class PtpTelecomClock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf telecom_grandmaster;
        static const ydk::Enum::YLeaf telecom_boundary;
        static const ydk::Enum::YLeaf telecom_slave;

        static int get_enum_value(const std::string & name) {
            if (name == "telecom-grandmaster") return 0;
            if (name == "telecom-boundary") return 1;
            if (name == "telecom-slave") return 2;
            return -1;
        }
};

class PtpInvalidUnicastGrantRequestResponse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reduce;
        static const ydk::Enum::YLeaf deny;

        static int get_enum_value(const std::string & name) {
            if (name == "reduce") return 0;
            if (name == "deny") return 1;
            return -1;
        }
};

class PtpClockId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf router_mac;
        static const ydk::Enum::YLeaf user_mac;
        static const ydk::Enum::YLeaf eui;

        static int get_enum_value(const std::string & name) {
            if (name == "router-mac") return 0;
            if (name == "user-mac") return 1;
            if (name == "eui") return 2;
            return -1;
        }
};

class PtpClockSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1588v2;
        static const ydk::Enum::YLeaf telecom_profile;

        static int get_enum_value(const std::string & name) {
            if (name == "1588v2") return 0;
            if (name == "telecom-profile") return 1;
            return -1;
        }
};

class PtpClockOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_step;
        static const ydk::Enum::YLeaf one_step;

        static int get_enum_value(const std::string & name) {
            if (name == "two-step") return 0;
            if (name == "one-step") return 1;
            return -1;
        }
};

class PtpTimePeriod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_4;
        static const ydk::Enum::YLeaf Y_8;
        static const ydk::Enum::YLeaf Y_16;
        static const ydk::Enum::YLeaf Y_32;
        static const ydk::Enum::YLeaf Y_64;
        static const ydk::Enum::YLeaf Y_128;

        static int get_enum_value(const std::string & name) {
            if (name == "1") return 0;
            if (name == "2") return 1;
            if (name == "4") return 2;
            if (name == "8") return 3;
            if (name == "16") return 4;
            if (name == "32") return 5;
            if (name == "64") return 6;
            if (name == "128") return 7;
            return -1;
        }
};

class PtpTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf mixed_mode;
        static const ydk::Enum::YLeaf multicast;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "mixed-mode") return 1;
            if (name == "multicast") return 2;
            return -1;
        }
};

class PtpDelayAsymmetryUnits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nanoseconds;
        static const ydk::Enum::YLeaf microseconds;
        static const ydk::Enum::YLeaf milliseconds;

        static int get_enum_value(const std::string & name) {
            if (name == "nanoseconds") return 0;
            if (name == "microseconds") return 1;
            if (name == "milliseconds") return 2;
            return -1;
        }
};

class PtpTimescale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf arb;

        static int get_enum_value(const std::string & name) {
            if (name == "ptp") return 0;
            if (name == "arb") return 1;
            return -1;
        }
};

class PtpClockProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf g82651;
        static const ydk::Enum::YLeaf g82751;
        static const ydk::Enum::YLeaf g82752;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "g82651") return 1;
            if (name == "g82751") return 2;
            if (name == "g82752") return 3;
            return -1;
        }
};

class PtpPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf slave_only;
        static const ydk::Enum::YLeaf master_only;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            if (name == "slave-only") return 1;
            if (name == "master-only") return 2;
            return -1;
        }
};

class PtpTimeSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf atomic_clock;
        static const ydk::Enum::YLeaf gps;
        static const ydk::Enum::YLeaf terrestrial_radio;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf hand_set;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf internal_oscillator;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "atomic-clock") return 16;
            if (name == "gps") return 32;
            if (name == "terrestrial-radio") return 48;
            if (name == "ptp") return 64;
            if (name == "ntp") return 80;
            if (name == "hand-set") return 96;
            if (name == "other") return 144;
            if (name == "internal-oscillator") return 160;
            return -1;
        }
};

class PtpEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet") return 1;
            if (name == "ipv4") return 2;
            if (name == "ipv6") return 3;
            return -1;
        }
};

class PtpTime : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interval;
        static const ydk::Enum::YLeaf frequency;

        static int get_enum_value(const std::string & name) {
            if (name == "interval") return 0;
            if (name == "frequency") return 1;
            return -1;
        }
};

class PtpClockAdvertisementMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1588v2;
        static const ydk::Enum::YLeaf telecom_profile;

        static int get_enum_value(const std::string & name) {
            if (name == "1588v2") return 0;
            if (name == "telecom-profile") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PTP_DATATYPES_ */

