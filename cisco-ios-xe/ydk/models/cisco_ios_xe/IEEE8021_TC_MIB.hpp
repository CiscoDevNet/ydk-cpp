#ifndef _IEEE8021_TC_MIB_
#define _IEEE8021_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace IEEE8021_TC_MIB {

class Ieee8021PrioritycodepointEnum : public Enum
{
    public:
        static const Enum::YLeaf codePoint8p0d;
        static const Enum::YLeaf codePoint7p1d;
        static const Enum::YLeaf codePoint6p2d;
        static const Enum::YLeaf codePoint5p3d;

};

class Ieee8021ServiceselectortypeEnum : public Enum
{
    public:
        static const Enum::YLeaf vlanId;
        static const Enum::YLeaf isid;

};

class Ieee8021PortacceptableframetypesEnum : public Enum
{
    public:
        static const Enum::YLeaf admitAll;
        static const Enum::YLeaf admitUntaggedAndPriority;
        static const Enum::YLeaf admitTagged;

};

class Ieee8021BridgeporttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf customerVlanPort;
        static const Enum::YLeaf providerNetworkPort;
        static const Enum::YLeaf customerNetworkPort;
        static const Enum::YLeaf customerEdgePort;
        static const Enum::YLeaf customerBackbonePort;
        static const Enum::YLeaf virtualInstancePort;
        static const Enum::YLeaf dBridgePort;

};


}
}

#endif /* _IEEE8021_TC_MIB_ */

