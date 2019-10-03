#ifndef _OPENCONFIG_ISIS_TYPES_
#define _OPENCONFIG_ISIS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_isis_types {

class OVERLOADRESETTRIGGERTYPE : public virtual ydk::Identity
{
    public:
        OVERLOADRESETTRIGGERTYPE();
        ~OVERLOADRESETTRIGGERTYPE();


}; // OVERLOADRESETTRIGGERTYPE

class SAFITYPE : public virtual ydk::Identity
{
    public:
        SAFITYPE();
        ~SAFITYPE();


}; // SAFITYPE

class MTTYPE : public virtual ydk::Identity
{
    public:
        MTTYPE();
        ~MTTYPE();


}; // MTTYPE

class AFISAFITYPE : public virtual ydk::Identity
{
    public:
        AFISAFITYPE();
        ~AFISAFITYPE();


}; // AFISAFITYPE

class AFITYPE : public virtual ydk::Identity
{
    public:
        AFITYPE();
        ~AFITYPE();


}; // AFITYPE

class WAITFORSYSTEM : public openconfig::openconfig_isis_types::OVERLOADRESETTRIGGERTYPE, virtual ydk::Identity
{
    public:
        WAITFORSYSTEM();
        ~WAITFORSYSTEM();


}; // WAITFORSYSTEM

class IPV6UNICAST : public openconfig::openconfig_isis_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV6UNICAST();
        ~IPV6UNICAST();


}; // IPV6UNICAST

class UNICAST : public openconfig::openconfig_isis_types::SAFITYPE, virtual ydk::Identity
{
    public:
        UNICAST();
        ~UNICAST();


}; // UNICAST

class MULTICAST : public openconfig::openconfig_isis_types::SAFITYPE, virtual ydk::Identity
{
    public:
        MULTICAST();
        ~MULTICAST();


}; // MULTICAST

class IPV4 : public openconfig::openconfig_isis_types::AFITYPE, virtual ydk::Identity
{
    public:
        IPV4();
        ~IPV4();


}; // IPV4

class IPV6 : public openconfig::openconfig_isis_types::AFITYPE, virtual ydk::Identity
{
    public:
        IPV6();
        ~IPV6();


}; // IPV6

class IPV4MULTICAST : public openconfig::openconfig_isis_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV4MULTICAST();
        ~IPV4MULTICAST();


}; // IPV4MULTICAST

class WAITFORBGP : public openconfig::openconfig_isis_types::OVERLOADRESETTRIGGERTYPE, virtual ydk::Identity
{
    public:
        WAITFORBGP();
        ~WAITFORBGP();


}; // WAITFORBGP

class IPV6MULTICAST : public openconfig::openconfig_isis_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV6MULTICAST();
        ~IPV6MULTICAST();


}; // IPV6MULTICAST

class IPV4UNICAST : public openconfig::openconfig_isis_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV4UNICAST();
        ~IPV4UNICAST();


}; // IPV4UNICAST

class IsisInterfaceAdjState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;
        static const ydk::Enum::YLeaf INIT;
        static const ydk::Enum::YLeaf FAILED;

        static int get_enum_value(const std::string & name) {
            if (name == "UP") return 0;
            if (name == "DOWN") return 1;
            if (name == "INIT") return 2;
            if (name == "FAILED") return 3;
            return -1;
        }
};

class LevelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LEVEL_1;
        static const ydk::Enum::YLeaf LEVEL_2;
        static const ydk::Enum::YLeaf LEVEL_1_2;

        static int get_enum_value(const std::string & name) {
            if (name == "LEVEL_1") return 0;
            if (name == "LEVEL_2") return 1;
            if (name == "LEVEL_1_2") return 2;
            return -1;
        }
};

class MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INTERNAL;
        static const ydk::Enum::YLeaf EXTERNAL;

        static int get_enum_value(const std::string & name) {
            if (name == "INTERNAL") return 0;
            if (name == "EXTERNAL") return 1;
            return -1;
        }
};

class HelloPaddingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf STRICT;
        static const ydk::Enum::YLeaf LOOSE;
        static const ydk::Enum::YLeaf ADAPTIVE;
        static const ydk::Enum::YLeaf DISABLE;

        static int get_enum_value(const std::string & name) {
            if (name == "STRICT") return 0;
            if (name == "LOOSE") return 1;
            if (name == "ADAPTIVE") return 2;
            if (name == "DISABLE") return 3;
            return -1;
        }
};

class AdaptiveTimerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LINEAR;
        static const ydk::Enum::YLeaf EXPONENTIAL;

        static int get_enum_value(const std::string & name) {
            if (name == "LINEAR") return 0;
            if (name == "EXPONENTIAL") return 1;
            return -1;
        }
};

class CircuitType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf POINT_TO_POINT;
        static const ydk::Enum::YLeaf BROADCAST;

        static int get_enum_value(const std::string & name) {
            if (name == "POINT_TO_POINT") return 0;
            if (name == "BROADCAST") return 1;
            return -1;
        }
};

class MetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NARROW_METRIC;
        static const ydk::Enum::YLeaf WIDE_METRIC;

        static int get_enum_value(const std::string & name) {
            if (name == "NARROW_METRIC") return 0;
            if (name == "WIDE_METRIC") return 1;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_ISIS_TYPES_ */

