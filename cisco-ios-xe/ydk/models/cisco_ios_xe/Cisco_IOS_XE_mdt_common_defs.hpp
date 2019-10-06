#ifndef _CISCO_IOS_XE_MDT_COMMON_DEFS_
#define _CISCO_IOS_XE_MDT_COMMON_DEFS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_common_defs {

class MdtSubFilterType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_filter_type_none;
        static const ydk::Enum::YLeaf sub_filter_type_xpath;
        static const ydk::Enum::YLeaf sub_filter_type_tdl_uri;
        static const ydk::Enum::YLeaf sub_filter_type_tdl_transform;

        static int get_enum_value(const std::string & name) {
            if (name == "sub-filter-type-none") return 0;
            if (name == "sub-filter-type-xpath") return 1;
            if (name == "sub-filter-type-tdl-uri") return 2;
            if (name == "sub-filter-type-tdl-transform") return 3;
            return -1;
        }
};

class MdtSubUpdateTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sub_upd_trig_none;
        static const ydk::Enum::YLeaf sub_upd_trig_periodic;
        static const ydk::Enum::YLeaf sub_upd_trig_on_change;

        static int get_enum_value(const std::string & name) {
            if (name == "sub-upd-trig-none") return 0;
            if (name == "sub-upd-trig-periodic") return 1;
            if (name == "sub-upd-trig-on-change") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_MDT_COMMON_DEFS_ */

