
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_cfg {

Aaa::RadiusAttribute::FormatOthers::FormatOther::FormatOther()
    :
    nas_port_type_name{YType::str, "nas-port-type-name"},
    attribute_config1{YType::str, "attribute-config1"},
    attribute_config2{YType::str, "attribute-config2"},
    attribute_config3{YType::str, "attribute-config3"},
    attribute_config4{YType::str, "attribute-config4"},
    attribute_config5{YType::str, "attribute-config5"},
    attribute_config6{YType::str, "attribute-config6"},
    attribute_config7{YType::str, "attribute-config7"},
    attribute_config8{YType::str, "attribute-config8"},
    attribute_config9{YType::str, "attribute-config9"},
    attribute_config10{YType::str, "attribute-config10"},
    attribute_config11{YType::str, "attribute-config11"},
    attribute_config12{YType::str, "attribute-config12"},
    attribute_config13{YType::str, "attribute-config13"},
    attribute_config14{YType::str, "attribute-config14"},
    attribute_config15{YType::str, "attribute-config15"},
    attribute_config16{YType::str, "attribute-config16"},
    attribute_config17{YType::str, "attribute-config17"},
    attribute_config18{YType::str, "attribute-config18"},
    attribute_config19{YType::uint32, "attribute-config19"}
{

    yang_name = "format-other"; yang_parent_name = "format-others"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::RadiusAttribute::FormatOthers::FormatOther::~FormatOther()
{
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_data() const
{
    if (is_presence_container) return true;
    return nas_port_type_name.is_set
	|| attribute_config1.is_set
	|| attribute_config2.is_set
	|| attribute_config3.is_set
	|| attribute_config4.is_set
	|| attribute_config5.is_set
	|| attribute_config6.is_set
	|| attribute_config7.is_set
	|| attribute_config8.is_set
	|| attribute_config9.is_set
	|| attribute_config10.is_set
	|| attribute_config11.is_set
	|| attribute_config12.is_set
	|| attribute_config13.is_set
	|| attribute_config14.is_set
	|| attribute_config15.is_set
	|| attribute_config16.is_set
	|| attribute_config17.is_set
	|| attribute_config18.is_set
	|| attribute_config19.is_set;
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_type_name.yfilter)
	|| ydk::is_set(attribute_config1.yfilter)
	|| ydk::is_set(attribute_config2.yfilter)
	|| ydk::is_set(attribute_config3.yfilter)
	|| ydk::is_set(attribute_config4.yfilter)
	|| ydk::is_set(attribute_config5.yfilter)
	|| ydk::is_set(attribute_config6.yfilter)
	|| ydk::is_set(attribute_config7.yfilter)
	|| ydk::is_set(attribute_config8.yfilter)
	|| ydk::is_set(attribute_config9.yfilter)
	|| ydk::is_set(attribute_config10.yfilter)
	|| ydk::is_set(attribute_config11.yfilter)
	|| ydk::is_set(attribute_config12.yfilter)
	|| ydk::is_set(attribute_config13.yfilter)
	|| ydk::is_set(attribute_config14.yfilter)
	|| ydk::is_set(attribute_config15.yfilter)
	|| ydk::is_set(attribute_config16.yfilter)
	|| ydk::is_set(attribute_config17.yfilter)
	|| ydk::is_set(attribute_config18.yfilter)
	|| ydk::is_set(attribute_config19.yfilter);
}

std::string Aaa::RadiusAttribute::FormatOthers::FormatOther::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-aaacore-cfg:radius-attribute/format-others/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::RadiusAttribute::FormatOthers::FormatOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-other";
    ADD_KEY_TOKEN(nas_port_type_name, "nas-port-type-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::RadiusAttribute::FormatOthers::FormatOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type_name.is_set || is_set(nas_port_type_name.yfilter)) leaf_name_data.push_back(nas_port_type_name.get_name_leafdata());
    if (attribute_config1.is_set || is_set(attribute_config1.yfilter)) leaf_name_data.push_back(attribute_config1.get_name_leafdata());
    if (attribute_config2.is_set || is_set(attribute_config2.yfilter)) leaf_name_data.push_back(attribute_config2.get_name_leafdata());
    if (attribute_config3.is_set || is_set(attribute_config3.yfilter)) leaf_name_data.push_back(attribute_config3.get_name_leafdata());
    if (attribute_config4.is_set || is_set(attribute_config4.yfilter)) leaf_name_data.push_back(attribute_config4.get_name_leafdata());
    if (attribute_config5.is_set || is_set(attribute_config5.yfilter)) leaf_name_data.push_back(attribute_config5.get_name_leafdata());
    if (attribute_config6.is_set || is_set(attribute_config6.yfilter)) leaf_name_data.push_back(attribute_config6.get_name_leafdata());
    if (attribute_config7.is_set || is_set(attribute_config7.yfilter)) leaf_name_data.push_back(attribute_config7.get_name_leafdata());
    if (attribute_config8.is_set || is_set(attribute_config8.yfilter)) leaf_name_data.push_back(attribute_config8.get_name_leafdata());
    if (attribute_config9.is_set || is_set(attribute_config9.yfilter)) leaf_name_data.push_back(attribute_config9.get_name_leafdata());
    if (attribute_config10.is_set || is_set(attribute_config10.yfilter)) leaf_name_data.push_back(attribute_config10.get_name_leafdata());
    if (attribute_config11.is_set || is_set(attribute_config11.yfilter)) leaf_name_data.push_back(attribute_config11.get_name_leafdata());
    if (attribute_config12.is_set || is_set(attribute_config12.yfilter)) leaf_name_data.push_back(attribute_config12.get_name_leafdata());
    if (attribute_config13.is_set || is_set(attribute_config13.yfilter)) leaf_name_data.push_back(attribute_config13.get_name_leafdata());
    if (attribute_config14.is_set || is_set(attribute_config14.yfilter)) leaf_name_data.push_back(attribute_config14.get_name_leafdata());
    if (attribute_config15.is_set || is_set(attribute_config15.yfilter)) leaf_name_data.push_back(attribute_config15.get_name_leafdata());
    if (attribute_config16.is_set || is_set(attribute_config16.yfilter)) leaf_name_data.push_back(attribute_config16.get_name_leafdata());
    if (attribute_config17.is_set || is_set(attribute_config17.yfilter)) leaf_name_data.push_back(attribute_config17.get_name_leafdata());
    if (attribute_config18.is_set || is_set(attribute_config18.yfilter)) leaf_name_data.push_back(attribute_config18.get_name_leafdata());
    if (attribute_config19.is_set || is_set(attribute_config19.yfilter)) leaf_name_data.push_back(attribute_config19.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Aaa::RadiusAttribute::FormatOthers::FormatOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Aaa::RadiusAttribute::FormatOthers::FormatOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Aaa::RadiusAttribute::FormatOthers::FormatOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-type-name")
    {
        nas_port_type_name = value;
        nas_port_type_name.value_namespace = name_space;
        nas_port_type_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config1")
    {
        attribute_config1 = value;
        attribute_config1.value_namespace = name_space;
        attribute_config1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config2")
    {
        attribute_config2 = value;
        attribute_config2.value_namespace = name_space;
        attribute_config2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config3")
    {
        attribute_config3 = value;
        attribute_config3.value_namespace = name_space;
        attribute_config3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config4")
    {
        attribute_config4 = value;
        attribute_config4.value_namespace = name_space;
        attribute_config4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config5")
    {
        attribute_config5 = value;
        attribute_config5.value_namespace = name_space;
        attribute_config5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config6")
    {
        attribute_config6 = value;
        attribute_config6.value_namespace = name_space;
        attribute_config6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config7")
    {
        attribute_config7 = value;
        attribute_config7.value_namespace = name_space;
        attribute_config7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config8")
    {
        attribute_config8 = value;
        attribute_config8.value_namespace = name_space;
        attribute_config8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config9")
    {
        attribute_config9 = value;
        attribute_config9.value_namespace = name_space;
        attribute_config9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config10")
    {
        attribute_config10 = value;
        attribute_config10.value_namespace = name_space;
        attribute_config10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config11")
    {
        attribute_config11 = value;
        attribute_config11.value_namespace = name_space;
        attribute_config11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config12")
    {
        attribute_config12 = value;
        attribute_config12.value_namespace = name_space;
        attribute_config12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config13")
    {
        attribute_config13 = value;
        attribute_config13.value_namespace = name_space;
        attribute_config13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config14")
    {
        attribute_config14 = value;
        attribute_config14.value_namespace = name_space;
        attribute_config14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config15")
    {
        attribute_config15 = value;
        attribute_config15.value_namespace = name_space;
        attribute_config15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config16")
    {
        attribute_config16 = value;
        attribute_config16.value_namespace = name_space;
        attribute_config16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config17")
    {
        attribute_config17 = value;
        attribute_config17.value_namespace = name_space;
        attribute_config17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config18")
    {
        attribute_config18 = value;
        attribute_config18.value_namespace = name_space;
        attribute_config18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-config19")
    {
        attribute_config19 = value;
        attribute_config19.value_namespace = name_space;
        attribute_config19.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::RadiusAttribute::FormatOthers::FormatOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-type-name")
    {
        nas_port_type_name.yfilter = yfilter;
    }
    if(value_path == "attribute-config1")
    {
        attribute_config1.yfilter = yfilter;
    }
    if(value_path == "attribute-config2")
    {
        attribute_config2.yfilter = yfilter;
    }
    if(value_path == "attribute-config3")
    {
        attribute_config3.yfilter = yfilter;
    }
    if(value_path == "attribute-config4")
    {
        attribute_config4.yfilter = yfilter;
    }
    if(value_path == "attribute-config5")
    {
        attribute_config5.yfilter = yfilter;
    }
    if(value_path == "attribute-config6")
    {
        attribute_config6.yfilter = yfilter;
    }
    if(value_path == "attribute-config7")
    {
        attribute_config7.yfilter = yfilter;
    }
    if(value_path == "attribute-config8")
    {
        attribute_config8.yfilter = yfilter;
    }
    if(value_path == "attribute-config9")
    {
        attribute_config9.yfilter = yfilter;
    }
    if(value_path == "attribute-config10")
    {
        attribute_config10.yfilter = yfilter;
    }
    if(value_path == "attribute-config11")
    {
        attribute_config11.yfilter = yfilter;
    }
    if(value_path == "attribute-config12")
    {
        attribute_config12.yfilter = yfilter;
    }
    if(value_path == "attribute-config13")
    {
        attribute_config13.yfilter = yfilter;
    }
    if(value_path == "attribute-config14")
    {
        attribute_config14.yfilter = yfilter;
    }
    if(value_path == "attribute-config15")
    {
        attribute_config15.yfilter = yfilter;
    }
    if(value_path == "attribute-config16")
    {
        attribute_config16.yfilter = yfilter;
    }
    if(value_path == "attribute-config17")
    {
        attribute_config17.yfilter = yfilter;
    }
    if(value_path == "attribute-config18")
    {
        attribute_config18.yfilter = yfilter;
    }
    if(value_path == "attribute-config19")
    {
        attribute_config19.yfilter = yfilter;
    }
}

bool Aaa::RadiusAttribute::FormatOthers::FormatOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-type-name" || name == "attribute-config1" || name == "attribute-config2" || name == "attribute-config3" || name == "attribute-config4" || name == "attribute-config5" || name == "attribute-config6" || name == "attribute-config7" || name == "attribute-config8" || name == "attribute-config9" || name == "attribute-config10" || name == "attribute-config11" || name == "attribute-config12" || name == "attribute-config13" || name == "attribute-config14" || name == "attribute-config15" || name == "attribute-config16" || name == "attribute-config17" || name == "attribute-config18" || name == "attribute-config19")
        return true;
    return false;
}


}
}

