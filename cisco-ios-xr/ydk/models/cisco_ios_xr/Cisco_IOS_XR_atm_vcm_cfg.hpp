#ifndef _CISCO_IOS_XR_ATM_VCM_CFG_
#define _CISCO_IOS_XR_ATM_VCM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_atm_vcm_cfg {

class AtmPvcTestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf reserved;

};

class AtmPvpTestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;

};

class AtmVpiBitsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf twelve;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_VCM_CFG_ */

