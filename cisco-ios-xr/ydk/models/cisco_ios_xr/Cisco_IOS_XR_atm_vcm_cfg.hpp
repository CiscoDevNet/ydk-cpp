#ifndef _CISCO_IOS_XR_ATM_VCM_CFG_
#define _CISCO_IOS_XR_ATM_VCM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_atm_vcm_cfg {

class AtmVpiBitsModeEnum : public Enum
{
    public:
        static const Enum::YLeaf twelve;

};

class AtmPvcTestModeEnum : public Enum
{
    public:
        static const Enum::YLeaf loop;
        static const Enum::YLeaf reserved;

};

class AtmPvpTestModeEnum : public Enum
{
    public:
        static const Enum::YLeaf loop;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_VCM_CFG_ */

