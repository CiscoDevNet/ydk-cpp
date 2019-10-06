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

        static int get_enum_value(const std::string & name) {
            if (name == "codePoint8p0d") return 1;
            if (name == "codePoint7p1d") return 2;
            if (name == "codePoint6p2d") return 3;
            if (name == "codePoint5p3d") return 4;
            return -1;
        }
};

class IEEE8021ServiceSelectorType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlanId;
        static const ydk::Enum::YLeaf isid;

        static int get_enum_value(const std::string & name) {
            if (name == "vlanId") return 1;
            if (name == "isid") return 2;
            return -1;
        }
};

class IEEE8021PortAcceptableFrameTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admitAll;
        static const ydk::Enum::YLeaf admitUntaggedAndPriority;
        static const ydk::Enum::YLeaf admitTagged;

        static int get_enum_value(const std::string & name) {
            if (name == "admitAll") return 1;
            if (name == "admitUntaggedAndPriority") return 2;
            if (name == "admitTagged") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "customerVlanPort") return 2;
            if (name == "providerNetworkPort") return 3;
            if (name == "customerNetworkPort") return 4;
            if (name == "customerEdgePort") return 5;
            if (name == "customerBackbonePort") return 6;
            if (name == "virtualInstancePort") return 7;
            if (name == "dBridgePort") return 8;
            return -1;
        }
};


}
}

#endif /* _IEEE8021_TC_MIB_ */

