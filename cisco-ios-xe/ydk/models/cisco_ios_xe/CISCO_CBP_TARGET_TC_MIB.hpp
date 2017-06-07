#ifndef _CISCO_CBP_TARGET_TC_MIB_
#define _CISCO_CBP_TARGET_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_CBP_TARGET_TC_MIB {

class CcbpttargetdirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf undirected;
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;
        static const Enum::YLeaf inOut;

};

class CcbptpolicysourcetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ciscoCbQos;
        static const Enum::YLeaf ciscoCbpBase;

};

class CcbpttargettypeEnum : public Enum
{
    public:
        static const Enum::YLeaf genIf;
        static const Enum::YLeaf atmPvc;
        static const Enum::YLeaf frDlci;
        static const Enum::YLeaf entity_;
        static const Enum::YLeaf fwZone;
        static const Enum::YLeaf fwZonePair;
        static const Enum::YLeaf aaaSession;

};


}
}

#endif /* _CISCO_CBP_TARGET_TC_MIB_ */

