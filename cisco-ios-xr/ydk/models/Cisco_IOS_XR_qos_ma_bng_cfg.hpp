#ifndef _CISCO_IOS_XR_QOS_MA_BNG_CFG_
#define _CISCO_IOS_XR_QOS_MA_BNG_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_bng_cfg {


class Qosl2DataLinkEnum : public Enum
{
    public:
        static const Enum::Value aal5;

};

class Qosl2EncapEnum : public Enum
{
    public:
        static const Enum::Value snap_pppoa;
        static const Enum::Value mux_pppoa;
        static const Enum::Value snap1483_routed;
        static const Enum::Value mux1483_routed;
        static const Enum::Value snap_rbe;
        static const Enum::Value snap_dot1qrbe;
        static const Enum::Value mux_rbe;
        static const Enum::Value mux_dot1qrbe;

};


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_BNG_CFG_ */

