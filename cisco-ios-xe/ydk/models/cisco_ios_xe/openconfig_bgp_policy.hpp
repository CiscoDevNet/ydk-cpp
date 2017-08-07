#ifndef _OPENCONFIG_BGP_POLICY_
#define _OPENCONFIG_BGP_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace openconfig_bgp_policy {

class BgpSetMedType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGP;

};

class BgpNextHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SELF;

};

class BgpSetCommunityOptionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADD;
        static const ydk::Enum::YLeaf REMOVE;
        static const ydk::Enum::YLeaf REPLACE;

};


}
}

#endif /* _OPENCONFIG_BGP_POLICY_ */

