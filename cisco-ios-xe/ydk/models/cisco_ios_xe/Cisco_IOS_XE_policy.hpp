#ifndef _CISCO_IOS_XE_POLICY_
#define _CISCO_IOS_XE_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_policy {

class PrecedenceType2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp;

        static int get_enum_value(const std::string & name) {
            if (name == "rsvp") return 0;
            return -1;
        }
};

class ClassNameType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class_default;

        static int get_enum_value(const std::string & name) {
            if (name == "class-default") return 0;
            return -1;
        }
};

class PolicePpsBpsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf bps;

        static int get_enum_value(const std::string & name) {
            if (name == "pps") return 0;
            if (name == "bps") return 1;
            return -1;
        }
};

class PolicePacketsBytesType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf bytes;

        static int get_enum_value(const std::string & name) {
            if (name == "packets") return 0;
            if (name == "bytes") return 1;
            return -1;
        }
};

class PolicyActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth;
        static const ydk::Enum::YLeaf compression;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf estimate;
        static const ydk::Enum::YLeaf fair_queue;
        static const ydk::Enum::YLeaf forward;
        static const ydk::Enum::YLeaf netflow_sampler;
        static const ydk::Enum::YLeaf police;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf queue_limit;
        static const ydk::Enum::YLeaf random_detect;
        static const ydk::Enum::YLeaf service_policy;
        static const ydk::Enum::YLeaf set;
        static const ydk::Enum::YLeaf shape;
        static const ydk::Enum::YLeaf trust;
        static const ydk::Enum::YLeaf dbl;
        static const ydk::Enum::YLeaf queue_buffers;

        static int get_enum_value(const std::string & name) {
            if (name == "bandwidth") return 0;
            if (name == "compression") return 1;
            if (name == "drop") return 2;
            if (name == "estimate") return 3;
            if (name == "fair-queue") return 4;
            if (name == "forward") return 5;
            if (name == "netflow-sampler") return 6;
            if (name == "police") return 7;
            if (name == "priority") return 8;
            if (name == "queue-limit") return 9;
            if (name == "random-detect") return 10;
            if (name == "service-policy") return 11;
            if (name == "set") return 12;
            if (name == "shape") return 13;
            if (name == "trust") return 14;
            if (name == "dbl") return 15;
            if (name == "queue-buffers") return 16;
            return -1;
        }
};

class BytesMsUsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf ms;
        static const ydk::Enum::YLeaf us;

        static int get_enum_value(const std::string & name) {
            if (name == "bytes") return 0;
            if (name == "ms") return 1;
            if (name == "us") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_POLICY_ */

