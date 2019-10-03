#ifndef _OPENCONFIG_BGP_POLICY_
#define _OPENCONFIG_BGP_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_bgp_policy {

class BgpNextHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SELF;

        static int get_enum_value(const std::string & name) {
            if (name == "SELF") return 0;
            return -1;
        }
};

class BgpSetMedType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGP;

        static int get_enum_value(const std::string & name) {
            if (name == "IGP") return 0;
            return -1;
        }
};

class BgpSetCommunityOptionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADD;
        static const ydk::Enum::YLeaf REMOVE;
        static const ydk::Enum::YLeaf REPLACE;

        static int get_enum_value(const std::string & name) {
            if (name == "ADD") return 0;
            if (name == "REMOVE") return 1;
            if (name == "REPLACE") return 2;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_BGP_POLICY_ */

