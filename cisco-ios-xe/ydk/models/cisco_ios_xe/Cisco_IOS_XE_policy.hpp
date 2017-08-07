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

};

class PolicePpsBpsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf bps;

};

class PolicePacketsBytesType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf bytes;

};

class ClassNameType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class_default;

};


}
}

#endif /* _CISCO_IOS_XE_POLICY_ */

