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

};

class PtpInvalidUnicastGrantRequestResponse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reduce;
        static const ydk::Enum::YLeaf deny;

};

class PtpClockId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf router_mac;
        static const ydk::Enum::YLeaf user_mac;
        static const ydk::Enum::YLeaf eui;

};

class PtpClockSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1588v2;
        static const ydk::Enum::YLeaf telecom_profile;

};

class PtpClockOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_step;
        static const ydk::Enum::YLeaf one_step;

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

};

class PtpTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf mixed_mode;
        static const ydk::Enum::YLeaf multicast;

};

class PtpDelayAsymmetryUnits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nanoseconds;
        static const ydk::Enum::YLeaf microseconds;
        static const ydk::Enum::YLeaf milliseconds;

};

class PtpTimescale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf arb;

};

class PtpClockProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf g82651;
        static const ydk::Enum::YLeaf g82751;
        static const ydk::Enum::YLeaf g82752;

};

class PtpPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf slave_only;
        static const ydk::Enum::YLeaf master_only;

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

};

class PtpEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class PtpTime : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interval;
        static const ydk::Enum::YLeaf frequency;

};

class PtpClockAdvertisementMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1588v2;
        static const ydk::Enum::YLeaf telecom_profile;

};


}
}

#endif /* _CISCO_IOS_XR_PTP_DATATYPES_ */

