#ifndef _OPENCONFIG_BGP_POLICY_
#define _OPENCONFIG_BGP_POLICY_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_bgp_policy {


class BgpNextHopTypeEnum : public Enum
{
    public:
        static const Enum::Value SELF;

};

class BgpSetMedTypeEnum : public Enum
{
    public:
        static const Enum::Value IGP;

};

class BgpSetCommunityOptionTypeEnum : public Enum
{
    public:
        static const Enum::Value ADD;
        static const Enum::Value REMOVE;
        static const Enum::Value REPLACE;

};


}
}

#endif /* _OPENCONFIG_BGP_POLICY_ */

