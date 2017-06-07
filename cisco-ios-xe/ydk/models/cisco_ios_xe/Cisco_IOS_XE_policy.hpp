#ifndef _CISCO_IOS_XE_POLICY_
#define _CISCO_IOS_XE_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_policy {

class PrecedenceType2Enum : public Enum
{
    public:
        static const Enum::YLeaf rsvp;

};

class ClassNameTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf class_default;

};

class PolicePpsBpsTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pps;
        static const Enum::YLeaf bps;

};

class PolicePacketsBytesTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf packets;
        static const Enum::YLeaf bytes;

};

class PolicyActionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf bandwidth;
        static const Enum::YLeaf compression;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf estimate;
        static const Enum::YLeaf fair_queue;
        static const Enum::YLeaf forward;
        static const Enum::YLeaf netflow_sampler;
        static const Enum::YLeaf police;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf queue_limit;
        static const Enum::YLeaf random_detect;
        static const Enum::YLeaf service_policy;
        static const Enum::YLeaf set;
        static const Enum::YLeaf shape;
        static const Enum::YLeaf trust;
        static const Enum::YLeaf dbl;
        static const Enum::YLeaf queue_buffers;

};


}
}

#endif /* _CISCO_IOS_XE_POLICY_ */

