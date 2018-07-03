#ifndef _CISCO_IOS_XR_AAA_LIB_CFG_1_
#define _CISCO_IOS_XR_AAA_LIB_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_aaa_lib_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_cfg {


class Aaa::RadiusAttribute::FormatOthers::FormatOther : public ydk::Entity
{
    public:
        FormatOther();
        ~FormatOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nas_port_type_name; //type: string
        ydk::YLeaf attribute_config1; //type: string
        ydk::YLeaf attribute_config2; //type: string
        ydk::YLeaf attribute_config3; //type: string
        ydk::YLeaf attribute_config4; //type: string
        ydk::YLeaf attribute_config5; //type: string
        ydk::YLeaf attribute_config6; //type: string
        ydk::YLeaf attribute_config7; //type: string
        ydk::YLeaf attribute_config8; //type: string
        ydk::YLeaf attribute_config9; //type: string
        ydk::YLeaf attribute_config10; //type: string
        ydk::YLeaf attribute_config11; //type: string
        ydk::YLeaf attribute_config12; //type: string
        ydk::YLeaf attribute_config13; //type: string
        ydk::YLeaf attribute_config14; //type: string
        ydk::YLeaf attribute_config15; //type: string
        ydk::YLeaf attribute_config16; //type: string
        ydk::YLeaf attribute_config17; //type: string
        ydk::YLeaf attribute_config18; //type: string
        ydk::YLeaf attribute_config19; //type: uint32

}; // Aaa::RadiusAttribute::FormatOthers::FormatOther


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_CFG_1_ */

