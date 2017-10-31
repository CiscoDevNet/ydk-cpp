#ifndef _IEEE8021_TC_MIB_
#define _IEEE8021_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace IEEE8021_TC_MIB {

class IEEE8021PriorityCodePoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf codePoint8p0d;
        static const ydk::Enum::YLeaf codePoint7p1d;
        static const ydk::Enum::YLeaf codePoint6p2d;
        static const ydk::Enum::YLeaf codePoint5p3d;

};

class IEEE8021BridgePortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf customerVlanPort;
        static const ydk::Enum::YLeaf providerNetworkPort;
        static const ydk::Enum::YLeaf customerNetworkPort;
        static const ydk::Enum::YLeaf customerEdgePort;
        static const ydk::Enum::YLeaf customerBackbonePort;
        static const ydk::Enum::YLeaf virtualInstancePort;
        static const ydk::Enum::YLeaf dBridgePort;

};

class IEEE8021ServiceSelectorType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlanId;
        static const ydk::Enum::YLeaf isid;

};

class IEEE8021PortAcceptableFrameTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admitAll;
        static const ydk::Enum::YLeaf admitUntaggedAndPriority;
        static const ydk::Enum::YLeaf admitTagged;

};


}
}

#endif /* _IEEE8021_TC_MIB_ */

