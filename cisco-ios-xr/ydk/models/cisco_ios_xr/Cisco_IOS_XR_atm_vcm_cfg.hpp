#ifndef _CISCO_IOS_XR_ATM_VCM_CFG_
#define _CISCO_IOS_XR_ATM_VCM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_atm_vcm_cfg {

class AtmVpiBitsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf twelve;

        static int get_enum_value(const std::string & name) {
            if (name == "twelve") return 12;
            return -1;
        }
};

class AtmPvcTestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf reserved;

        static int get_enum_value(const std::string & name) {
            if (name == "loop") return 1;
            if (name == "reserved") return 2;
            return -1;
        }
};

class AtmPvpTestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;

        static int get_enum_value(const std::string & name) {
            if (name == "loop") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ATM_VCM_CFG_ */

