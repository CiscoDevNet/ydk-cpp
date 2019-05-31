#ifndef _CISCO_CBP_TARGET_TC_MIB_
#define _CISCO_CBP_TARGET_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_TC_MIB {

class CcbptTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf genIf;
        static const ydk::Enum::YLeaf atmPvc;
        static const ydk::Enum::YLeaf frDlci;
        static const ydk::Enum::YLeaf entity_;
        static const ydk::Enum::YLeaf fwZone;
        static const ydk::Enum::YLeaf fwZonePair;
        static const ydk::Enum::YLeaf aaaSession;

};

class CcbptTargetDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undirected;
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;
        static const ydk::Enum::YLeaf inOut;

};

class CcbptPolicySourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ciscoCbQos;
        static const ydk::Enum::YLeaf ciscoCbpBase;

};


}
}

#endif /* _CISCO_CBP_TARGET_TC_MIB_ */

