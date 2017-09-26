#ifndef _CISCO_IOS_XR_TUNNEL_GRE_CFG_
#define _CISCO_IOS_XR_TUNNEL_GRE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_gre_cfg {

class TunnelModeDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf decap;
        static const ydk::Enum::YLeaf encap;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_GRE_CFG_ */

