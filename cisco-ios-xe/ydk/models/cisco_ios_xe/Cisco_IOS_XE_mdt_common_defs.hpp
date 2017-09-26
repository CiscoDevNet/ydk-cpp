#ifndef _CISCO_IOS_XE_MDT_COMMON_DEFS_
#define _CISCO_IOS_XE_MDT_COMMON_DEFS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_common_defs {

class MdtSubUpdateTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_upd_trig_none;
        static const ydk::Enum::YLeaf sub_upd_trig_periodic;
        static const ydk::Enum::YLeaf sub_upd_trig_on_change;

};

class MdtSubFilterType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_filter_type_none;
        static const ydk::Enum::YLeaf sub_filter_type_xpath;

};


}
}

#endif /* _CISCO_IOS_XE_MDT_COMMON_DEFS_ */

