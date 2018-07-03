#ifndef _CISCO_IOS_XR_SYSADMIN_ENTITY_STATE_TC_MIB_
#define _CISCO_IOS_XR_SYSADMIN_ENTITY_STATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_entity_state_tc_mib {

class EntityStandbyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf hotStandby;
        static const ydk::Enum::YLeaf coldStandby;
        static const ydk::Enum::YLeaf providingService;

};

class EntityOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf testing;

};

class EntityAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf shuttingDown;
        static const ydk::Enum::YLeaf unlocked;

};

class EntityUsageState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf busy;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ENTITY_STATE_TC_MIB_ */

