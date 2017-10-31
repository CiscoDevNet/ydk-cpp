
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_91.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_92.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "label-index-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"}
    	,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
	,allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::Information()
    :
    route_distinguisher{YType::str, "route-distinguisher"}
{

    yang_name = "information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::~Information()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_data() const
{
    return route_distinguisher.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-distinguisher")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    update_vrf_name{YType::str, "update-vrf-name"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"}
    	,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_data() const
{
    return update_vrf_name.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| last_update_filtered_age.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_filtered_neighbor_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.yfilter)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
        update_filtered_neighbor_count.value_namespace = name_space;
        update_filtered_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filtered-timestamp" || name == "update-vrf-name" || name == "update-filtered-message-count" || name == "update-filtered-neighbor-count" || name == "last-update-filtered-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postits()
{

    yang_name = "postits"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::~Postits()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_data() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_operation() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit")
    {
        for(auto const & c : postit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit>();
        c->parent = this;
        postit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : postit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "postit")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::Postit()
    :
    neighbor_address{YType::str, "neighbor-address"},
    vrf_name{YType::str, "vrf-name"},
    connect_state{YType::uint32, "connect-state"},
    start_time{YType::uint32, "start-time"},
    nsr_state{YType::enumeration, "nsr-state"}
    	,
    neighbors_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress>())
{
    neighbors_address->parent = this;

    yang_name = "postit"; yang_parent_name = "postits"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::~Postit()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| vrf_name.is_set
	|| connect_state.is_set
	|| start_time.is_set
	|| nsr_state.is_set
	|| (neighbors_address !=  nullptr && neighbors_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(connect_state.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| (neighbors_address !=  nullptr && neighbors_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (connect_state.is_set || is_set(connect_state.yfilter)) leaf_name_data.push_back(connect_state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors-address")
    {
        if(neighbors_address == nullptr)
        {
            neighbors_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress>();
        }
        return neighbors_address;
    }

    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(c);
        return c;
    }

    if(child_yang_name == "postit-info")
    {
        for(auto const & c : postit_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo>();
        c->parent = this;
        postit_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbors_address != nullptr)
    {
        children["neighbors-address"] = neighbors_address;
    }

    for (auto const & c : neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : postit_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-state")
    {
        connect_state = value;
        connect_state.value_namespace = name_space;
        connect_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "connect-state")
    {
        connect_state.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors-address" || name == "neighbor-af" || name == "postit-info" || name == "neighbor-address" || name == "vrf-name" || name == "connect-state" || name == "start-time" || name == "nsr-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::NeighborsAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbors-address"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::~NeighborsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::NeighborAf()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "neighbor-af"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitInfo()
    :
    postit_type{YType::uint32, "postit-type"},
    postit_subtype{YType::uint32, "postit-subtype"},
    postit_flags{YType::uint8, "postit-flags"},
    postit_af_name{YType::enumeration, "postit-af-name"},
    postit_ts{YType::uint64, "postit-ts"},
    postit_direction{YType::uint8, "postit-direction"},
    postit_id{YType::uint32, "postit-id"},
    peer_id{YType::uint32, "peer-id"},
    postit_policy{YType::str, "postit-policy"},
    postit_reset{YType::enumeration, "postit-reset"}
    	,
    postit_notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification>())
{
    postit_notification->parent = this;

    yang_name = "postit-info"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::~PostitInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_data() const
{
    return postit_type.is_set
	|| postit_subtype.is_set
	|| postit_flags.is_set
	|| postit_af_name.is_set
	|| postit_ts.is_set
	|| postit_direction.is_set
	|| postit_id.is_set
	|| peer_id.is_set
	|| postit_policy.is_set
	|| postit_reset.is_set
	|| (postit_notification !=  nullptr && postit_notification->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(postit_type.yfilter)
	|| ydk::is_set(postit_subtype.yfilter)
	|| ydk::is_set(postit_flags.yfilter)
	|| ydk::is_set(postit_af_name.yfilter)
	|| ydk::is_set(postit_ts.yfilter)
	|| ydk::is_set(postit_direction.yfilter)
	|| ydk::is_set(postit_id.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(postit_policy.yfilter)
	|| ydk::is_set(postit_reset.yfilter)
	|| (postit_notification !=  nullptr && postit_notification->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (postit_type.is_set || is_set(postit_type.yfilter)) leaf_name_data.push_back(postit_type.get_name_leafdata());
    if (postit_subtype.is_set || is_set(postit_subtype.yfilter)) leaf_name_data.push_back(postit_subtype.get_name_leafdata());
    if (postit_flags.is_set || is_set(postit_flags.yfilter)) leaf_name_data.push_back(postit_flags.get_name_leafdata());
    if (postit_af_name.is_set || is_set(postit_af_name.yfilter)) leaf_name_data.push_back(postit_af_name.get_name_leafdata());
    if (postit_ts.is_set || is_set(postit_ts.yfilter)) leaf_name_data.push_back(postit_ts.get_name_leafdata());
    if (postit_direction.is_set || is_set(postit_direction.yfilter)) leaf_name_data.push_back(postit_direction.get_name_leafdata());
    if (postit_id.is_set || is_set(postit_id.yfilter)) leaf_name_data.push_back(postit_id.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (postit_policy.is_set || is_set(postit_policy.yfilter)) leaf_name_data.push_back(postit_policy.get_name_leafdata());
    if (postit_reset.is_set || is_set(postit_reset.yfilter)) leaf_name_data.push_back(postit_reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit-notification")
    {
        if(postit_notification == nullptr)
        {
            postit_notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification>();
        }
        return postit_notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(postit_notification != nullptr)
    {
        children["postit-notification"] = postit_notification;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "postit-type")
    {
        postit_type = value;
        postit_type.value_namespace = name_space;
        postit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype = value;
        postit_subtype.value_namespace = name_space;
        postit_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-flags")
    {
        postit_flags = value;
        postit_flags.value_namespace = name_space;
        postit_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name = value;
        postit_af_name.value_namespace = name_space;
        postit_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-ts")
    {
        postit_ts = value;
        postit_ts.value_namespace = name_space;
        postit_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-direction")
    {
        postit_direction = value;
        postit_direction.value_namespace = name_space;
        postit_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-id")
    {
        postit_id = value;
        postit_id.value_namespace = name_space;
        postit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-policy")
    {
        postit_policy = value;
        postit_policy.value_namespace = name_space;
        postit_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-reset")
    {
        postit_reset = value;
        postit_reset.value_namespace = name_space;
        postit_reset.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "postit-type")
    {
        postit_type.yfilter = yfilter;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype.yfilter = yfilter;
    }
    if(value_path == "postit-flags")
    {
        postit_flags.yfilter = yfilter;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name.yfilter = yfilter;
    }
    if(value_path == "postit-ts")
    {
        postit_ts.yfilter = yfilter;
    }
    if(value_path == "postit-direction")
    {
        postit_direction.yfilter = yfilter;
    }
    if(value_path == "postit-id")
    {
        postit_id.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "postit-policy")
    {
        postit_policy.yfilter = yfilter;
    }
    if(value_path == "postit-reset")
    {
        postit_reset.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "postit-notification" || name == "postit-type" || name == "postit-subtype" || name == "postit-flags" || name == "postit-af-name" || name == "postit-ts" || name == "postit-direction" || name == "postit-id" || name == "peer-id" || name == "postit-policy" || name == "postit-reset")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::PostitNotification()
    :
    time_since_last_notification{YType::uint32, "time-since-last-notification"},
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"}
{

    yang_name = "postit-notification"; yang_parent_name = "postit-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::~PostitNotification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return time_since_last_notification.is_set
	|| notification_error_code.is_set
	|| notification_error_subcode.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(time_since_last_notification.yfilter)
	|| ydk::is_set(notification_error_code.yfilter)
	|| ydk::is_set(notification_error_subcode.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_since_last_notification.is_set || is_set(time_since_last_notification.yfilter)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());
    if (notification_error_code.is_set || is_set(notification_error_code.yfilter)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.yfilter)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
        time_since_last_notification.value_namespace = name_space;
        time_since_last_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
        notification_error_code.value_namespace = name_space;
        notification_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
        notification_error_subcode.value_namespace = name_space;
        notification_error_subcode.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification.yfilter = yfilter;
    }
    if(value_path == "notification-error-code")
    {
        notification_error_code.yfilter = yfilter;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-notification-data" || name == "time-since-last-notification" || name == "notification-error-code" || name == "notification-error-subcode")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "last-notification-data"; yang_parent_name = "postit-notification"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::GlobalProcessInfo()
    :
    vrf_name{YType::str, "vrf-name"},
    vrfid{YType::uint32, "vrfid"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf>())
{
    global->parent = this;
    vrf->parent = this;

    yang_name = "global-process-info"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::~GlobalProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::has_data() const
{
    return vrf_name.is_set
	|| vrfid.is_set
	|| (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-process-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf" || name == "vrf-name" || name == "vrfid")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::Global()
    :
    in_standalone_mode{YType::boolean, "in-standalone-mode"},
    local_as{YType::uint32, "local-as"},
    instance_name{YType::str, "instance-name"},
    restart_count{YType::uint32, "restart-count"},
    update_delay{YType::uint32, "update-delay"},
    generic_scan_period{YType::uint16, "generic-scan-period"},
    confederation_id{YType::uint32, "confederation-id"},
    cluster_id{YType::uint32, "cluster-id"},
    configured_cluster_id{YType::uint32, "configured-cluster-id"},
    is_cluster_id_specified_as_ip{YType::boolean, "is-cluster-id-specified-as-ip"},
    asn_format{YType::uint32, "asn-format"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_end{YType::uint32, "srgb-end"},
    graceful_maintenance{YType::boolean, "graceful-maintenance"},
    graceful_maint_all_nbrs{YType::boolean, "graceful-maint-all-nbrs"},
    graceful_maint_retain_routes{YType::boolean, "graceful-maint-retain-routes"},
    process_rlimit{YType::uint64, "process-rlimit"},
    bmp_maximum_buffer_size{YType::uint64, "bmp-maximum-buffer-size"},
    bmp_default_buffer_size{YType::uint64, "bmp-default-buffer-size"},
    bmp_current_buffer_size{YType::uint64, "bmp-current-buffer-size"},
    bmp_cur_maximum_buffer_size{YType::uint64, "bmp-cur-maximum-buffer-size"}
{

    yang_name = "global"; yang_parent_name = "global-process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<cluster_id_entry.size(); index++)
    {
        if(cluster_id_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<color_id.size(); index++)
    {
        if(color_id[index]->has_data())
            return true;
    }
    return in_standalone_mode.is_set
	|| local_as.is_set
	|| instance_name.is_set
	|| restart_count.is_set
	|| update_delay.is_set
	|| generic_scan_period.is_set
	|| confederation_id.is_set
	|| cluster_id.is_set
	|| configured_cluster_id.is_set
	|| is_cluster_id_specified_as_ip.is_set
	|| asn_format.is_set
	|| srgb_start_configured.is_set
	|| srgb_end_configured.is_set
	|| srgb_start.is_set
	|| srgb_end.is_set
	|| graceful_maintenance.is_set
	|| graceful_maint_all_nbrs.is_set
	|| graceful_maint_retain_routes.is_set
	|| process_rlimit.is_set
	|| bmp_maximum_buffer_size.is_set
	|| bmp_default_buffer_size.is_set
	|| bmp_current_buffer_size.is_set
	|| bmp_cur_maximum_buffer_size.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<cluster_id_entry.size(); index++)
    {
        if(cluster_id_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<color_id.size(); index++)
    {
        if(color_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_standalone_mode.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(update_delay.yfilter)
	|| ydk::is_set(generic_scan_period.yfilter)
	|| ydk::is_set(confederation_id.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(configured_cluster_id.yfilter)
	|| ydk::is_set(is_cluster_id_specified_as_ip.yfilter)
	|| ydk::is_set(asn_format.yfilter)
	|| ydk::is_set(srgb_start_configured.yfilter)
	|| ydk::is_set(srgb_end_configured.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(graceful_maintenance.yfilter)
	|| ydk::is_set(graceful_maint_all_nbrs.yfilter)
	|| ydk::is_set(graceful_maint_retain_routes.yfilter)
	|| ydk::is_set(process_rlimit.yfilter)
	|| ydk::is_set(bmp_maximum_buffer_size.yfilter)
	|| ydk::is_set(bmp_default_buffer_size.yfilter)
	|| ydk::is_set(bmp_current_buffer_size.yfilter)
	|| ydk::is_set(bmp_cur_maximum_buffer_size.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_standalone_mode.is_set || is_set(in_standalone_mode.yfilter)) leaf_name_data.push_back(in_standalone_mode.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.yfilter)) leaf_name_data.push_back(update_delay.get_name_leafdata());
    if (generic_scan_period.is_set || is_set(generic_scan_period.yfilter)) leaf_name_data.push_back(generic_scan_period.get_name_leafdata());
    if (confederation_id.is_set || is_set(confederation_id.yfilter)) leaf_name_data.push_back(confederation_id.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (configured_cluster_id.is_set || is_set(configured_cluster_id.yfilter)) leaf_name_data.push_back(configured_cluster_id.get_name_leafdata());
    if (is_cluster_id_specified_as_ip.is_set || is_set(is_cluster_id_specified_as_ip.yfilter)) leaf_name_data.push_back(is_cluster_id_specified_as_ip.get_name_leafdata());
    if (asn_format.is_set || is_set(asn_format.yfilter)) leaf_name_data.push_back(asn_format.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.yfilter)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.yfilter)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (graceful_maintenance.is_set || is_set(graceful_maintenance.yfilter)) leaf_name_data.push_back(graceful_maintenance.get_name_leafdata());
    if (graceful_maint_all_nbrs.is_set || is_set(graceful_maint_all_nbrs.yfilter)) leaf_name_data.push_back(graceful_maint_all_nbrs.get_name_leafdata());
    if (graceful_maint_retain_routes.is_set || is_set(graceful_maint_retain_routes.yfilter)) leaf_name_data.push_back(graceful_maint_retain_routes.get_name_leafdata());
    if (process_rlimit.is_set || is_set(process_rlimit.yfilter)) leaf_name_data.push_back(process_rlimit.get_name_leafdata());
    if (bmp_maximum_buffer_size.is_set || is_set(bmp_maximum_buffer_size.yfilter)) leaf_name_data.push_back(bmp_maximum_buffer_size.get_name_leafdata());
    if (bmp_default_buffer_size.is_set || is_set(bmp_default_buffer_size.yfilter)) leaf_name_data.push_back(bmp_default_buffer_size.get_name_leafdata());
    if (bmp_current_buffer_size.is_set || is_set(bmp_current_buffer_size.yfilter)) leaf_name_data.push_back(bmp_current_buffer_size.get_name_leafdata());
    if (bmp_cur_maximum_buffer_size.is_set || is_set(bmp_cur_maximum_buffer_size.yfilter)) leaf_name_data.push_back(bmp_cur_maximum_buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster-id-entry")
    {
        for(auto const & c : cluster_id_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry>();
        c->parent = this;
        cluster_id_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "color-id")
    {
        for(auto const & c : color_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId>();
        c->parent = this;
        color_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster_id_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : color_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-standalone-mode")
    {
        in_standalone_mode = value;
        in_standalone_mode.value_namespace = name_space;
        in_standalone_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
        update_delay.value_namespace = name_space;
        update_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-scan-period")
    {
        generic_scan_period = value;
        generic_scan_period.value_namespace = name_space;
        generic_scan_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confederation-id")
    {
        confederation_id = value;
        confederation_id.value_namespace = name_space;
        confederation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-cluster-id")
    {
        configured_cluster_id = value;
        configured_cluster_id.value_namespace = name_space;
        configured_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cluster-id-specified-as-ip")
    {
        is_cluster_id_specified_as_ip = value;
        is_cluster_id_specified_as_ip.value_namespace = name_space;
        is_cluster_id_specified_as_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn-format")
    {
        asn_format = value;
        asn_format.value_namespace = name_space;
        asn_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
        srgb_start_configured.value_namespace = name_space;
        srgb_start_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
        srgb_end_configured.value_namespace = name_space;
        srgb_end_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
        srgb_end.value_namespace = name_space;
        srgb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance")
    {
        graceful_maintenance = value;
        graceful_maintenance.value_namespace = name_space;
        graceful_maintenance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maint-all-nbrs")
    {
        graceful_maint_all_nbrs = value;
        graceful_maint_all_nbrs.value_namespace = name_space;
        graceful_maint_all_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maint-retain-routes")
    {
        graceful_maint_retain_routes = value;
        graceful_maint_retain_routes.value_namespace = name_space;
        graceful_maint_retain_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-rlimit")
    {
        process_rlimit = value;
        process_rlimit.value_namespace = name_space;
        process_rlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-maximum-buffer-size")
    {
        bmp_maximum_buffer_size = value;
        bmp_maximum_buffer_size.value_namespace = name_space;
        bmp_maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-default-buffer-size")
    {
        bmp_default_buffer_size = value;
        bmp_default_buffer_size.value_namespace = name_space;
        bmp_default_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-current-buffer-size")
    {
        bmp_current_buffer_size = value;
        bmp_current_buffer_size.value_namespace = name_space;
        bmp_current_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-cur-maximum-buffer-size")
    {
        bmp_cur_maximum_buffer_size = value;
        bmp_cur_maximum_buffer_size.value_namespace = name_space;
        bmp_cur_maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-standalone-mode")
    {
        in_standalone_mode.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "update-delay")
    {
        update_delay.yfilter = yfilter;
    }
    if(value_path == "generic-scan-period")
    {
        generic_scan_period.yfilter = yfilter;
    }
    if(value_path == "confederation-id")
    {
        confederation_id.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "configured-cluster-id")
    {
        configured_cluster_id.yfilter = yfilter;
    }
    if(value_path == "is-cluster-id-specified-as-ip")
    {
        is_cluster_id_specified_as_ip.yfilter = yfilter;
    }
    if(value_path == "asn-format")
    {
        asn_format.yfilter = yfilter;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance")
    {
        graceful_maintenance.yfilter = yfilter;
    }
    if(value_path == "graceful-maint-all-nbrs")
    {
        graceful_maint_all_nbrs.yfilter = yfilter;
    }
    if(value_path == "graceful-maint-retain-routes")
    {
        graceful_maint_retain_routes.yfilter = yfilter;
    }
    if(value_path == "process-rlimit")
    {
        process_rlimit.yfilter = yfilter;
    }
    if(value_path == "bmp-maximum-buffer-size")
    {
        bmp_maximum_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-default-buffer-size")
    {
        bmp_default_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-current-buffer-size")
    {
        bmp_current_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-cur-maximum-buffer-size")
    {
        bmp_cur_maximum_buffer_size.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-entry" || name == "color-id" || name == "in-standalone-mode" || name == "local-as" || name == "instance-name" || name == "restart-count" || name == "update-delay" || name == "generic-scan-period" || name == "confederation-id" || name == "cluster-id" || name == "configured-cluster-id" || name == "is-cluster-id-specified-as-ip" || name == "asn-format" || name == "srgb-start-configured" || name == "srgb-end-configured" || name == "srgb-start" || name == "srgb-end" || name == "graceful-maintenance" || name == "graceful-maint-all-nbrs" || name == "graceful-maint-retain-routes" || name == "process-rlimit" || name == "bmp-maximum-buffer-size" || name == "bmp-default-buffer-size" || name == "bmp-current-buffer-size" || name == "bmp-cur-maximum-buffer-size")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::ClusterIdEntry()
    :
    cluster_id_val{YType::uint32, "cluster-id-val"},
    cluster_id_type{YType::uint8, "cluster-id-type"}
{

    yang_name = "cluster-id-entry"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::~ClusterIdEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::has_data() const
{
    return cluster_id_val.is_set
	|| cluster_id_type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_val.yfilter)
	|| ydk::is_set(cluster_id_type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_val.is_set || is_set(cluster_id_val.yfilter)) leaf_name_data.push_back(cluster_id_val.get_name_leafdata());
    if (cluster_id_type.is_set || is_set(cluster_id_type.yfilter)) leaf_name_data.push_back(cluster_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-val")
    {
        cluster_id_val = value;
        cluster_id_val.value_namespace = name_space;
        cluster_id_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-type")
    {
        cluster_id_type = value;
        cluster_id_type.value_namespace = name_space;
        cluster_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-val")
    {
        cluster_id_val.yfilter = yfilter;
    }
    if(value_path == "cluster-id-type")
    {
        cluster_id_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-val" || name == "cluster-id-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::ColorId()
    :
    color_id_val{YType::uint32, "color-id-val"}
{

    yang_name = "color-id"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::~ColorId()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::has_data() const
{
    return color_id_val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_id_val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_id_val.is_set || is_set(color_id_val.yfilter)) leaf_name_data.push_back(color_id_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-id-val")
    {
        color_id_val = value;
        color_id_val.value_namespace = name_space;
        color_id_val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-id-val")
    {
        color_id_val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ColorId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color-id-val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::Vrf()
    :
    vrf_is_active{YType::boolean, "vrf-is-active"},
    route_distinguisher{YType::str, "route-distinguisher"},
    router_id{YType::str, "router-id"},
    configured_router_id{YType::str, "configured-router-id"},
    is_redistribute_ibgp_to_ig_ps_enabled{YType::boolean, "is-redistribute-ibgp-to-ig-ps-enabled"},
    is_fast_external_fallover_enabled{YType::boolean, "is-fast-external-fallover-enabled"},
    is_bestpath_missing_med_is_worst_enabled{YType::boolean, "is-bestpath-missing-med-is-worst-enabled"},
    is_bestpath_always_compare_med_enabled{YType::boolean, "is-bestpath-always-compare-med-enabled"},
    is_bestpath_ignore_as_path_enabled{YType::boolean, "is-bestpath-ignore-as-path-enabled"},
    is_bestpath_as_path_mpath_relax_enabled{YType::boolean, "is-bestpath-as-path-mpath-relax-enabled"},
    is_bestpath_compare_med_from_confed_peer_enabled{YType::boolean, "is-bestpath-compare-med-from-confed-peer-enabled"},
    is_bestpath_compare_router_id_for_ebgp_peers_enabled{YType::boolean, "is-bestpath-compare-router-id-for-ebgp-peers-enabled"},
    is_bestpath_aigp_ignore_enabled{YType::boolean, "is-bestpath-aigp-ignore-enabled"},
    is_multipath_as_path_ignore_onwards_enabled{YType::boolean, "is-multipath-as-path-ignore-onwards-enabled"},
    is_enforce_first_as_enabled{YType::boolean, "is-enforce-first-as-enabled"},
    default_local_preference{YType::uint32, "default-local-preference"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    hold_time{YType::uint16, "hold-time"},
    min_acceptable_hold_time{YType::uint16, "min-acceptable-hold-time"},
    is_neighbor_logging{YType::boolean, "is-neighbor-logging"},
    is_default_metric_configured{YType::boolean, "is-default-metric-configured"},
    default_metric{YType::uint32, "default-metric"},
    is_default_originate_configured{YType::boolean, "is-default-originate-configured"},
    is_graceful_restart{YType::boolean, "is-graceful-restart"},
    is_nsr{YType::boolean, "is-nsr"},
    restart_time{YType::uint32, "restart-time"},
    stale_path_time{YType::uint32, "stale-path-time"},
    rib_purge_timeout{YType::uint32, "rib-purge-timeout"}
{

    yang_name = "vrf"; yang_parent_name = "global-process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::has_data() const
{
    return vrf_is_active.is_set
	|| route_distinguisher.is_set
	|| router_id.is_set
	|| configured_router_id.is_set
	|| is_redistribute_ibgp_to_ig_ps_enabled.is_set
	|| is_fast_external_fallover_enabled.is_set
	|| is_bestpath_missing_med_is_worst_enabled.is_set
	|| is_bestpath_always_compare_med_enabled.is_set
	|| is_bestpath_ignore_as_path_enabled.is_set
	|| is_bestpath_as_path_mpath_relax_enabled.is_set
	|| is_bestpath_compare_med_from_confed_peer_enabled.is_set
	|| is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set
	|| is_bestpath_aigp_ignore_enabled.is_set
	|| is_multipath_as_path_ignore_onwards_enabled.is_set
	|| is_enforce_first_as_enabled.is_set
	|| default_local_preference.is_set
	|| keep_alive_time.is_set
	|| hold_time.is_set
	|| min_acceptable_hold_time.is_set
	|| is_neighbor_logging.is_set
	|| is_default_metric_configured.is_set
	|| default_metric.is_set
	|| is_default_originate_configured.is_set
	|| is_graceful_restart.is_set
	|| is_nsr.is_set
	|| restart_time.is_set
	|| stale_path_time.is_set
	|| rib_purge_timeout.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_is_active.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(configured_router_id.yfilter)
	|| ydk::is_set(is_redistribute_ibgp_to_ig_ps_enabled.yfilter)
	|| ydk::is_set(is_fast_external_fallover_enabled.yfilter)
	|| ydk::is_set(is_bestpath_missing_med_is_worst_enabled.yfilter)
	|| ydk::is_set(is_bestpath_always_compare_med_enabled.yfilter)
	|| ydk::is_set(is_bestpath_ignore_as_path_enabled.yfilter)
	|| ydk::is_set(is_bestpath_as_path_mpath_relax_enabled.yfilter)
	|| ydk::is_set(is_bestpath_compare_med_from_confed_peer_enabled.yfilter)
	|| ydk::is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.yfilter)
	|| ydk::is_set(is_bestpath_aigp_ignore_enabled.yfilter)
	|| ydk::is_set(is_multipath_as_path_ignore_onwards_enabled.yfilter)
	|| ydk::is_set(is_enforce_first_as_enabled.yfilter)
	|| ydk::is_set(default_local_preference.yfilter)
	|| ydk::is_set(keep_alive_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_acceptable_hold_time.yfilter)
	|| ydk::is_set(is_neighbor_logging.yfilter)
	|| ydk::is_set(is_default_metric_configured.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(is_default_originate_configured.yfilter)
	|| ydk::is_set(is_graceful_restart.yfilter)
	|| ydk::is_set(is_nsr.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_path_time.yfilter)
	|| ydk::is_set(rib_purge_timeout.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_is_active.is_set || is_set(vrf_is_active.yfilter)) leaf_name_data.push_back(vrf_is_active.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (configured_router_id.is_set || is_set(configured_router_id.yfilter)) leaf_name_data.push_back(configured_router_id.get_name_leafdata());
    if (is_redistribute_ibgp_to_ig_ps_enabled.is_set || is_set(is_redistribute_ibgp_to_ig_ps_enabled.yfilter)) leaf_name_data.push_back(is_redistribute_ibgp_to_ig_ps_enabled.get_name_leafdata());
    if (is_fast_external_fallover_enabled.is_set || is_set(is_fast_external_fallover_enabled.yfilter)) leaf_name_data.push_back(is_fast_external_fallover_enabled.get_name_leafdata());
    if (is_bestpath_missing_med_is_worst_enabled.is_set || is_set(is_bestpath_missing_med_is_worst_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_missing_med_is_worst_enabled.get_name_leafdata());
    if (is_bestpath_always_compare_med_enabled.is_set || is_set(is_bestpath_always_compare_med_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_always_compare_med_enabled.get_name_leafdata());
    if (is_bestpath_ignore_as_path_enabled.is_set || is_set(is_bestpath_ignore_as_path_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_ignore_as_path_enabled.get_name_leafdata());
    if (is_bestpath_as_path_mpath_relax_enabled.is_set || is_set(is_bestpath_as_path_mpath_relax_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_as_path_mpath_relax_enabled.get_name_leafdata());
    if (is_bestpath_compare_med_from_confed_peer_enabled.is_set || is_set(is_bestpath_compare_med_from_confed_peer_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_compare_med_from_confed_peer_enabled.get_name_leafdata());
    if (is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set || is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_compare_router_id_for_ebgp_peers_enabled.get_name_leafdata());
    if (is_bestpath_aigp_ignore_enabled.is_set || is_set(is_bestpath_aigp_ignore_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_aigp_ignore_enabled.get_name_leafdata());
    if (is_multipath_as_path_ignore_onwards_enabled.is_set || is_set(is_multipath_as_path_ignore_onwards_enabled.yfilter)) leaf_name_data.push_back(is_multipath_as_path_ignore_onwards_enabled.get_name_leafdata());
    if (is_enforce_first_as_enabled.is_set || is_set(is_enforce_first_as_enabled.yfilter)) leaf_name_data.push_back(is_enforce_first_as_enabled.get_name_leafdata());
    if (default_local_preference.is_set || is_set(default_local_preference.yfilter)) leaf_name_data.push_back(default_local_preference.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.yfilter)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_acceptable_hold_time.is_set || is_set(min_acceptable_hold_time.yfilter)) leaf_name_data.push_back(min_acceptable_hold_time.get_name_leafdata());
    if (is_neighbor_logging.is_set || is_set(is_neighbor_logging.yfilter)) leaf_name_data.push_back(is_neighbor_logging.get_name_leafdata());
    if (is_default_metric_configured.is_set || is_set(is_default_metric_configured.yfilter)) leaf_name_data.push_back(is_default_metric_configured.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (is_default_originate_configured.is_set || is_set(is_default_originate_configured.yfilter)) leaf_name_data.push_back(is_default_originate_configured.get_name_leafdata());
    if (is_graceful_restart.is_set || is_set(is_graceful_restart.yfilter)) leaf_name_data.push_back(is_graceful_restart.get_name_leafdata());
    if (is_nsr.is_set || is_set(is_nsr.yfilter)) leaf_name_data.push_back(is_nsr.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_path_time.is_set || is_set(stale_path_time.yfilter)) leaf_name_data.push_back(stale_path_time.get_name_leafdata());
    if (rib_purge_timeout.is_set || is_set(rib_purge_timeout.yfilter)) leaf_name_data.push_back(rib_purge_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-is-active")
    {
        vrf_is_active = value;
        vrf_is_active.value_namespace = name_space;
        vrf_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-router-id")
    {
        configured_router_id = value;
        configured_router_id.value_namespace = name_space;
        configured_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redistribute-ibgp-to-ig-ps-enabled")
    {
        is_redistribute_ibgp_to_ig_ps_enabled = value;
        is_redistribute_ibgp_to_ig_ps_enabled.value_namespace = name_space;
        is_redistribute_ibgp_to_ig_ps_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fast-external-fallover-enabled")
    {
        is_fast_external_fallover_enabled = value;
        is_fast_external_fallover_enabled.value_namespace = name_space;
        is_fast_external_fallover_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-missing-med-is-worst-enabled")
    {
        is_bestpath_missing_med_is_worst_enabled = value;
        is_bestpath_missing_med_is_worst_enabled.value_namespace = name_space;
        is_bestpath_missing_med_is_worst_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-always-compare-med-enabled")
    {
        is_bestpath_always_compare_med_enabled = value;
        is_bestpath_always_compare_med_enabled.value_namespace = name_space;
        is_bestpath_always_compare_med_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-ignore-as-path-enabled")
    {
        is_bestpath_ignore_as_path_enabled = value;
        is_bestpath_ignore_as_path_enabled.value_namespace = name_space;
        is_bestpath_ignore_as_path_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-as-path-mpath-relax-enabled")
    {
        is_bestpath_as_path_mpath_relax_enabled = value;
        is_bestpath_as_path_mpath_relax_enabled.value_namespace = name_space;
        is_bestpath_as_path_mpath_relax_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-compare-med-from-confed-peer-enabled")
    {
        is_bestpath_compare_med_from_confed_peer_enabled = value;
        is_bestpath_compare_med_from_confed_peer_enabled.value_namespace = name_space;
        is_bestpath_compare_med_from_confed_peer_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-compare-router-id-for-ebgp-peers-enabled")
    {
        is_bestpath_compare_router_id_for_ebgp_peers_enabled = value;
        is_bestpath_compare_router_id_for_ebgp_peers_enabled.value_namespace = name_space;
        is_bestpath_compare_router_id_for_ebgp_peers_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-aigp-ignore-enabled")
    {
        is_bestpath_aigp_ignore_enabled = value;
        is_bestpath_aigp_ignore_enabled.value_namespace = name_space;
        is_bestpath_aigp_ignore_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-as-path-ignore-onwards-enabled")
    {
        is_multipath_as_path_ignore_onwards_enabled = value;
        is_multipath_as_path_ignore_onwards_enabled.value_namespace = name_space;
        is_multipath_as_path_ignore_onwards_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enforce-first-as-enabled")
    {
        is_enforce_first_as_enabled = value;
        is_enforce_first_as_enabled.value_namespace = name_space;
        is_enforce_first_as_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-local-preference")
    {
        default_local_preference = value;
        default_local_preference.value_namespace = name_space;
        default_local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
        keep_alive_time.value_namespace = name_space;
        keep_alive_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-acceptable-hold-time")
    {
        min_acceptable_hold_time = value;
        min_acceptable_hold_time.value_namespace = name_space;
        min_acceptable_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-logging")
    {
        is_neighbor_logging = value;
        is_neighbor_logging.value_namespace = name_space;
        is_neighbor_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-metric-configured")
    {
        is_default_metric_configured = value;
        is_default_metric_configured.value_namespace = name_space;
        is_default_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-originate-configured")
    {
        is_default_originate_configured = value;
        is_default_originate_configured.value_namespace = name_space;
        is_default_originate_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart = value;
        is_graceful_restart.value_namespace = name_space;
        is_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr")
    {
        is_nsr = value;
        is_nsr.value_namespace = name_space;
        is_nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-path-time")
    {
        stale_path_time = value;
        stale_path_time.value_namespace = name_space;
        stale_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-purge-timeout")
    {
        rib_purge_timeout = value;
        rib_purge_timeout.value_namespace = name_space;
        rib_purge_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-is-active")
    {
        vrf_is_active.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "configured-router-id")
    {
        configured_router_id.yfilter = yfilter;
    }
    if(value_path == "is-redistribute-ibgp-to-ig-ps-enabled")
    {
        is_redistribute_ibgp_to_ig_ps_enabled.yfilter = yfilter;
    }
    if(value_path == "is-fast-external-fallover-enabled")
    {
        is_fast_external_fallover_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-missing-med-is-worst-enabled")
    {
        is_bestpath_missing_med_is_worst_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-always-compare-med-enabled")
    {
        is_bestpath_always_compare_med_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-ignore-as-path-enabled")
    {
        is_bestpath_ignore_as_path_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-as-path-mpath-relax-enabled")
    {
        is_bestpath_as_path_mpath_relax_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-compare-med-from-confed-peer-enabled")
    {
        is_bestpath_compare_med_from_confed_peer_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-compare-router-id-for-ebgp-peers-enabled")
    {
        is_bestpath_compare_router_id_for_ebgp_peers_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-aigp-ignore-enabled")
    {
        is_bestpath_aigp_ignore_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-as-path-ignore-onwards-enabled")
    {
        is_multipath_as_path_ignore_onwards_enabled.yfilter = yfilter;
    }
    if(value_path == "is-enforce-first-as-enabled")
    {
        is_enforce_first_as_enabled.yfilter = yfilter;
    }
    if(value_path == "default-local-preference")
    {
        default_local_preference.yfilter = yfilter;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-acceptable-hold-time")
    {
        min_acceptable_hold_time.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-logging")
    {
        is_neighbor_logging.yfilter = yfilter;
    }
    if(value_path == "is-default-metric-configured")
    {
        is_default_metric_configured.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "is-default-originate-configured")
    {
        is_default_originate_configured.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "is-nsr")
    {
        is_nsr.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-path-time")
    {
        stale_path_time.yfilter = yfilter;
    }
    if(value_path == "rib-purge-timeout")
    {
        rib_purge_timeout.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-is-active" || name == "route-distinguisher" || name == "router-id" || name == "configured-router-id" || name == "is-redistribute-ibgp-to-ig-ps-enabled" || name == "is-fast-external-fallover-enabled" || name == "is-bestpath-missing-med-is-worst-enabled" || name == "is-bestpath-always-compare-med-enabled" || name == "is-bestpath-ignore-as-path-enabled" || name == "is-bestpath-as-path-mpath-relax-enabled" || name == "is-bestpath-compare-med-from-confed-peer-enabled" || name == "is-bestpath-compare-router-id-for-ebgp-peers-enabled" || name == "is-bestpath-aigp-ignore-enabled" || name == "is-multipath-as-path-ignore-onwards-enabled" || name == "is-enforce-first-as-enabled" || name == "default-local-preference" || name == "keep-alive-time" || name == "hold-time" || name == "min-acceptable-hold-time" || name == "is-neighbor-logging" || name == "is-default-metric-configured" || name == "default-metric" || name == "is-default-originate-configured" || name == "is-graceful-restart" || name == "is-nsr" || name == "restart-time" || name == "stale-path-time" || name == "rib-purge-timeout")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbors()
{

    yang_name = "update-inbound-error-neighbors"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::~UpdateInboundErrorNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-error-neighbor")
    {
        for(auto const & c : update_inbound_error_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor>();
        c->parent = this;
        update_inbound_error_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_error_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-error-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateInboundErrorNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    update_vrf_name{YType::str, "update-vrf-name"},
    update_error_handling_avoid_reset{YType::boolean, "update-error-handling-avoid-reset"},
    total_update_message_count{YType::uint32, "total-update-message-count"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"},
    update_error_handling_reset_count{YType::uint32, "update-error-handling-reset-count"},
    last_error_handling_reset_age{YType::uint32, "last-error-handling-reset-age"},
    update_error_message_list_count{YType::uint32, "update-error-message-list-count"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    establishment_total_update_message_count{YType::uint32, "establishment-total-update-message-count"}
    	,
    update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>())
	,first_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>())
	,last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>())
	,first_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>())
	,first_update_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>())
	,last_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>())
{
    update_neighbor_address->parent = this;
    first_update_malformed_timestamp->parent = this;
    last_update_malformed_timestamp->parent = this;
    first_update_memory_allocation_fail_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;
    first_update_error_handling_reset_timestamp->parent = this;
    last_error_handling_reset_timestamp->parent = this;

    yang_name = "update-inbound-error-neighbor"; yang_parent_name = "update-inbound-error-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::~UpdateInboundErrorNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_data() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| update_vrf_name.is_set
	|| update_error_handling_avoid_reset.is_set
	|| total_update_message_count.is_set
	|| update_malformed_message_count.is_set
	|| last_update_malformed_age.is_set
	|| update_memory_allocation_fail_count.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| update_error_handling_reset_count.is_set
	|| last_error_handling_reset_age.is_set
	|| update_error_message_list_count.is_set
	|| update_attribute_discard_count.is_set
	|| establishment_total_update_message_count.is_set
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_data())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data())
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_data())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_operation() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_error_handling_avoid_reset.yfilter)
	|| ydk::is_set(total_update_message_count.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| ydk::is_set(update_error_handling_reset_count.yfilter)
	|| ydk::is_set(last_error_handling_reset_age.yfilter)
	|| ydk::is_set(update_error_message_list_count.yfilter)
	|| ydk::is_set(update_attribute_discard_count.yfilter)
	|| ydk::is_set(establishment_total_update_message_count.yfilter)
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_operation())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation())
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_operation())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_error_handling_avoid_reset.is_set || is_set(update_error_handling_avoid_reset.yfilter)) leaf_name_data.push_back(update_error_handling_avoid_reset.get_name_leafdata());
    if (total_update_message_count.is_set || is_set(total_update_message_count.yfilter)) leaf_name_data.push_back(total_update_message_count.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());
    if (update_error_handling_reset_count.is_set || is_set(update_error_handling_reset_count.yfilter)) leaf_name_data.push_back(update_error_handling_reset_count.get_name_leafdata());
    if (last_error_handling_reset_age.is_set || is_set(last_error_handling_reset_age.yfilter)) leaf_name_data.push_back(last_error_handling_reset_age.get_name_leafdata());
    if (update_error_message_list_count.is_set || is_set(update_error_message_list_count.yfilter)) leaf_name_data.push_back(update_error_message_list_count.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (establishment_total_update_message_count.is_set || is_set(establishment_total_update_message_count.yfilter)) leaf_name_data.push_back(establishment_total_update_message_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    if(child_yang_name == "first-update-malformed-timestamp")
    {
        if(first_update_malformed_timestamp == nullptr)
        {
            first_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>();
        }
        return first_update_malformed_timestamp;
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    if(child_yang_name == "first-update-memory-allocation-fail-timestamp")
    {
        if(first_update_memory_allocation_fail_timestamp == nullptr)
        {
            first_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>();
        }
        return first_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "first-update-error-handling-reset-timestamp")
    {
        if(first_update_error_handling_reset_timestamp == nullptr)
        {
            first_update_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>();
        }
        return first_update_error_handling_reset_timestamp;
    }

    if(child_yang_name == "last-error-handling-reset-timestamp")
    {
        if(last_error_handling_reset_timestamp == nullptr)
        {
            last_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>();
        }
        return last_error_handling_reset_timestamp;
    }

    if(child_yang_name == "establishment-action-count")
    {
        for(auto const & c : establishment_action_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount>();
        c->parent = this;
        establishment_action_count.push_back(c);
        return c;
    }

    if(child_yang_name == "update-error-message")
    {
        for(auto const & c : update_error_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage>();
        c->parent = this;
        update_error_message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_neighbor_address != nullptr)
    {
        children["update-neighbor-address"] = update_neighbor_address;
    }

    if(first_update_malformed_timestamp != nullptr)
    {
        children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
    }

    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    if(first_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    if(first_update_error_handling_reset_timestamp != nullptr)
    {
        children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
    }

    if(last_error_handling_reset_timestamp != nullptr)
    {
        children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
    }

    for (auto const & c : establishment_action_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_error_message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset = value;
        update_error_handling_avoid_reset.value_namespace = name_space;
        update_error_handling_avoid_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count = value;
        total_update_message_count.value_namespace = name_space;
        total_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
        update_memory_allocation_fail_count.value_namespace = name_space;
        update_memory_allocation_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
        last_update_memory_allocation_fail_age.value_namespace = name_space;
        last_update_memory_allocation_fail_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count = value;
        update_error_handling_reset_count.value_namespace = name_space;
        update_error_handling_reset_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age = value;
        last_error_handling_reset_age.value_namespace = name_space;
        last_error_handling_reset_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count = value;
        update_error_message_list_count.value_namespace = name_space;
        update_error_message_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
        update_attribute_discard_count.value_namespace = name_space;
        update_attribute_discard_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count = value;
        establishment_total_update_message_count.value_namespace = name_space;
        establishment_total_update_message_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset.yfilter = yfilter;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count.yfilter = yfilter;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age.yfilter = yfilter;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count.yfilter = yfilter;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count.yfilter = yfilter;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-neighbor-address" || name == "first-update-malformed-timestamp" || name == "last-update-malformed-timestamp" || name == "first-update-memory-allocation-fail-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "first-update-error-handling-reset-timestamp" || name == "last-error-handling-reset-timestamp" || name == "establishment-action-count" || name == "update-error-message" || name == "neighbor-address" || name == "update-vrf-name" || name == "update-error-handling-avoid-reset" || name == "total-update-message-count" || name == "update-malformed-message-count" || name == "last-update-malformed-age" || name == "update-memory-allocation-fail-count" || name == "last-update-memory-allocation-fail-age" || name == "update-error-handling-reset-count" || name == "last-error-handling-reset-age" || name == "update-error-message-list-count" || name == "update-attribute-discard-count" || name == "establishment-total-update-message-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::FirstUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::~FirstUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::FirstUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::~FirstUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::FirstUpdateErrorHandlingResetTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::~FirstUpdateErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::LastErrorHandlingResetTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::~LastErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::EstablishmentActionCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "establishment-action-count"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::~EstablishmentActionCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "establishment-action-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorMessage()
    :
    update_error_final_action{YType::enumeration, "update-error-final-action"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_nlri_address_family{YType::enumeration, "update-error-nlri-address-family"},
    update_error_nlri_string{YType::str, "update-error-nlri-string"},
    update_error_nlri_string_truncated{YType::boolean, "update-error-nlri-string-truncated"}
    	,
    update_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>())
	,update_message_reset_data(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>())
{
    update_message_timestamp->parent = this;
    update_message_reset_data->parent = this;

    yang_name = "update-error-message"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::~UpdateErrorMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_data() const
{
    for (std::size_t index=0; index<update_message_data.size(); index++)
    {
        if(update_message_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_element.size(); index++)
    {
        if(update_error_element[index]->has_data())
            return true;
    }
    return update_error_final_action.is_set
	|| update_attribute_discard_count.is_set
	|| update_error_nlri_address_family.is_set
	|| update_error_nlri_string.is_set
	|| update_error_nlri_string_truncated.is_set
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_data())
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_operation() const
{
    for (std::size_t index=0; index<update_message_data.size(); index++)
    {
        if(update_message_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_element.size(); index++)
    {
        if(update_error_element[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_error_final_action.yfilter)
	|| ydk::is_set(update_attribute_discard_count.yfilter)
	|| ydk::is_set(update_error_nlri_address_family.yfilter)
	|| ydk::is_set(update_error_nlri_string.yfilter)
	|| ydk::is_set(update_error_nlri_string_truncated.yfilter)
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_operation())
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_final_action.is_set || is_set(update_error_final_action.yfilter)) leaf_name_data.push_back(update_error_final_action.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_nlri_address_family.is_set || is_set(update_error_nlri_address_family.yfilter)) leaf_name_data.push_back(update_error_nlri_address_family.get_name_leafdata());
    if (update_error_nlri_string.is_set || is_set(update_error_nlri_string.yfilter)) leaf_name_data.push_back(update_error_nlri_string.get_name_leafdata());
    if (update_error_nlri_string_truncated.is_set || is_set(update_error_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_error_nlri_string_truncated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-message-timestamp")
    {
        if(update_message_timestamp == nullptr)
        {
            update_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>();
        }
        return update_message_timestamp;
    }

    if(child_yang_name == "update-message-reset-data")
    {
        if(update_message_reset_data == nullptr)
        {
            update_message_reset_data = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>();
        }
        return update_message_reset_data;
    }

    if(child_yang_name == "update-message-data")
    {
        for(auto const & c : update_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData>();
        c->parent = this;
        update_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-error-element")
    {
        for(auto const & c : update_error_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement>();
        c->parent = this;
        update_error_element.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_message_timestamp != nullptr)
    {
        children["update-message-timestamp"] = update_message_timestamp;
    }

    if(update_message_reset_data != nullptr)
    {
        children["update-message-reset-data"] = update_message_reset_data;
    }

    for (auto const & c : update_message_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_error_element)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-final-action")
    {
        update_error_final_action = value;
        update_error_final_action.value_namespace = name_space;
        update_error_final_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
        update_attribute_discard_count.value_namespace = name_space;
        update_attribute_discard_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family = value;
        update_error_nlri_address_family.value_namespace = name_space;
        update_error_nlri_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string = value;
        update_error_nlri_string.value_namespace = name_space;
        update_error_nlri_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated = value;
        update_error_nlri_string_truncated.value_namespace = name_space;
        update_error_nlri_string_truncated.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-final-action")
    {
        update_error_final_action.yfilter = yfilter;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-message-timestamp" || name == "update-message-reset-data" || name == "update-message-data" || name == "update-error-element" || name == "update-error-final-action" || name == "update-attribute-discard-count" || name == "update-error-nlri-address-family" || name == "update-error-nlri-string" || name == "update-error-nlri-string-truncated")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::UpdateMessageTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "update-message-timestamp"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::~UpdateMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::UpdateMessageResetData()
    :
    update_error_reset_reason{YType::enumeration, "update-error-reset-reason"},
    update_error_reset_notification_code{YType::uint8, "update-error-reset-notification-code"},
    update_error_reset_notification_sub_code{YType::uint16, "update-error-reset-notification-sub-code"},
    update_error_reset_notification_data{YType::str, "update-error-reset-notification-data"},
    update_error_reset_notification_data_length{YType::uint16, "update-error-reset-notification-data-length"}
{

    yang_name = "update-message-reset-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::~UpdateMessageResetData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_data() const
{
    return update_error_reset_reason.is_set
	|| update_error_reset_notification_code.is_set
	|| update_error_reset_notification_sub_code.is_set
	|| update_error_reset_notification_data.is_set
	|| update_error_reset_notification_data_length.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_error_reset_reason.yfilter)
	|| ydk::is_set(update_error_reset_notification_code.yfilter)
	|| ydk::is_set(update_error_reset_notification_sub_code.yfilter)
	|| ydk::is_set(update_error_reset_notification_data.yfilter)
	|| ydk::is_set(update_error_reset_notification_data_length.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-reset-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_reset_reason.is_set || is_set(update_error_reset_reason.yfilter)) leaf_name_data.push_back(update_error_reset_reason.get_name_leafdata());
    if (update_error_reset_notification_code.is_set || is_set(update_error_reset_notification_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_code.get_name_leafdata());
    if (update_error_reset_notification_sub_code.is_set || is_set(update_error_reset_notification_sub_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_sub_code.get_name_leafdata());
    if (update_error_reset_notification_data.is_set || is_set(update_error_reset_notification_data.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data.get_name_leafdata());
    if (update_error_reset_notification_data_length.is_set || is_set(update_error_reset_notification_data_length.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason = value;
        update_error_reset_reason.value_namespace = name_space;
        update_error_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code = value;
        update_error_reset_notification_code.value_namespace = name_space;
        update_error_reset_notification_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code = value;
        update_error_reset_notification_sub_code.value_namespace = name_space;
        update_error_reset_notification_sub_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data = value;
        update_error_reset_notification_data.value_namespace = name_space;
        update_error_reset_notification_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length = value;
        update_error_reset_notification_data_length.value_namespace = name_space;
        update_error_reset_notification_data_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-error-reset-reason" || name == "update-error-reset-notification-code" || name == "update-error-reset-notification-sub-code" || name == "update-error-reset-notification-data" || name == "update-error-reset-notification-data-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::UpdateMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-message-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::~UpdateMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::UpdateErrorElement()
    :
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_length{YType::uint16, "update-attribute-length"},
    update_error_data{YType::str, "update-error-data"},
    update_error_data_length{YType::uint16, "update-error-data-length"},
    update_error_action{YType::enumeration, "update-error-action"}
{

    yang_name = "update-error-element"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::~UpdateErrorElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_data() const
{
    return update_attribute_flags.is_set
	|| update_attribute_code.is_set
	|| update_attribute_length.is_set
	|| update_error_data.is_set
	|| update_error_data_length.is_set
	|| update_error_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_attribute_length.yfilter)
	|| ydk::is_set(update_error_data.yfilter)
	|| ydk::is_set(update_error_data_length.yfilter)
	|| ydk::is_set(update_error_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_length.is_set || is_set(update_attribute_length.yfilter)) leaf_name_data.push_back(update_attribute_length.get_name_leafdata());
    if (update_error_data.is_set || is_set(update_error_data.yfilter)) leaf_name_data.push_back(update_error_data.get_name_leafdata());
    if (update_error_data_length.is_set || is_set(update_error_data_length.yfilter)) leaf_name_data.push_back(update_error_data_length.get_name_leafdata());
    if (update_error_action.is_set || is_set(update_error_action.yfilter)) leaf_name_data.push_back(update_error_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
        update_attribute_flags.value_namespace = name_space;
        update_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
        update_attribute_code.value_namespace = name_space;
        update_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length = value;
        update_attribute_length.value_namespace = name_space;
        update_attribute_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-data")
    {
        update_error_data = value;
        update_error_data.value_namespace = name_space;
        update_error_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length = value;
        update_error_data_length.value_namespace = name_space;
        update_error_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-action")
    {
        update_error_action = value;
        update_error_action.value_namespace = name_space;
        update_error_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length.yfilter = yfilter;
    }
    if(value_path == "update-error-data")
    {
        update_error_data.yfilter = yfilter;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length.yfilter = yfilter;
    }
    if(value_path == "update-error-action")
    {
        update_error_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-flags" || name == "update-attribute-code" || name == "update-attribute-length" || name == "update-error-data" || name == "update-error-data-length" || name == "update-error-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbors()
{

    yang_name = "update-inbound-filter-neighbors"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::~UpdateInboundFilterNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-filter-neighbor")
    {
        for(auto const & c : update_inbound_filter_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor>();
        c->parent = this;
        update_inbound_filter_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_filter_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-filter-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateInboundFilterNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    update_vrf_name{YType::str, "update-vrf-name"},
    update_filter_logging_enabled{YType::boolean, "update-filter-logging-enabled"},
    configured_update_filter_message_buffer_count{YType::uint32, "configured-update-filter-message-buffer-count"},
    operational_update_filter_message_buffer_count{YType::uint32, "operational-update-filter-message-buffer-count"},
    update_filter_message_buffer_circular{YType::boolean, "update-filter-message-buffer-circular"},
    update_attribute_filter_group_name{YType::str, "update-attribute-filter-group-name"},
    operational_update_attribute_filtering_enabled{YType::boolean, "operational-update-attribute-filtering-enabled"},
    message_update_attribute_filtering_enabled{YType::boolean, "message-update-attribute-filtering-enabled"},
    total_filter_update_message_count{YType::uint32, "total-filter-update-message-count"},
    establishment_total_filter_update_message_count{YType::uint32, "establishment-total-filter-update-message-count"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    establishment_update_filtered_message_count{YType::uint32, "establishment-update-filtered-message-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    update_filter_message_list_count{YType::uint32, "update-filter-message-list-count"}
    	,
    update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>())
	,first_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>())
	,last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>())
{
    update_neighbor_address->parent = this;
    first_update_filtered_timestamp->parent = this;
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-neighbor"; yang_parent_name = "update-inbound-filter-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::~UpdateInboundFilterNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_data() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.size(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.size(); index++)
    {
        if(update_filter_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| update_vrf_name.is_set
	|| update_filter_logging_enabled.is_set
	|| configured_update_filter_message_buffer_count.is_set
	|| operational_update_filter_message_buffer_count.is_set
	|| update_filter_message_buffer_circular.is_set
	|| update_attribute_filter_group_name.is_set
	|| operational_update_attribute_filtering_enabled.is_set
	|| message_update_attribute_filtering_enabled.is_set
	|| total_filter_update_message_count.is_set
	|| establishment_total_filter_update_message_count.is_set
	|| update_filtered_message_count.is_set
	|| establishment_update_filtered_message_count.is_set
	|| last_update_filtered_age.is_set
	|| update_filter_message_list_count.is_set
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data())
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_data())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_operation() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.size(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.size(); index++)
    {
        if(update_filter_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_filter_logging_enabled.yfilter)
	|| ydk::is_set(configured_update_filter_message_buffer_count.yfilter)
	|| ydk::is_set(operational_update_filter_message_buffer_count.yfilter)
	|| ydk::is_set(update_filter_message_buffer_circular.yfilter)
	|| ydk::is_set(update_attribute_filter_group_name.yfilter)
	|| ydk::is_set(operational_update_attribute_filtering_enabled.yfilter)
	|| ydk::is_set(message_update_attribute_filtering_enabled.yfilter)
	|| ydk::is_set(total_filter_update_message_count.yfilter)
	|| ydk::is_set(establishment_total_filter_update_message_count.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(establishment_update_filtered_message_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| ydk::is_set(update_filter_message_list_count.yfilter)
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation())
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_operation())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_filter_logging_enabled.is_set || is_set(update_filter_logging_enabled.yfilter)) leaf_name_data.push_back(update_filter_logging_enabled.get_name_leafdata());
    if (configured_update_filter_message_buffer_count.is_set || is_set(configured_update_filter_message_buffer_count.yfilter)) leaf_name_data.push_back(configured_update_filter_message_buffer_count.get_name_leafdata());
    if (operational_update_filter_message_buffer_count.is_set || is_set(operational_update_filter_message_buffer_count.yfilter)) leaf_name_data.push_back(operational_update_filter_message_buffer_count.get_name_leafdata());
    if (update_filter_message_buffer_circular.is_set || is_set(update_filter_message_buffer_circular.yfilter)) leaf_name_data.push_back(update_filter_message_buffer_circular.get_name_leafdata());
    if (update_attribute_filter_group_name.is_set || is_set(update_attribute_filter_group_name.yfilter)) leaf_name_data.push_back(update_attribute_filter_group_name.get_name_leafdata());
    if (operational_update_attribute_filtering_enabled.is_set || is_set(operational_update_attribute_filtering_enabled.yfilter)) leaf_name_data.push_back(operational_update_attribute_filtering_enabled.get_name_leafdata());
    if (message_update_attribute_filtering_enabled.is_set || is_set(message_update_attribute_filtering_enabled.yfilter)) leaf_name_data.push_back(message_update_attribute_filtering_enabled.get_name_leafdata());
    if (total_filter_update_message_count.is_set || is_set(total_filter_update_message_count.yfilter)) leaf_name_data.push_back(total_filter_update_message_count.get_name_leafdata());
    if (establishment_total_filter_update_message_count.is_set || is_set(establishment_total_filter_update_message_count.yfilter)) leaf_name_data.push_back(establishment_total_filter_update_message_count.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (establishment_update_filtered_message_count.is_set || is_set(establishment_update_filtered_message_count.yfilter)) leaf_name_data.push_back(establishment_update_filtered_message_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (update_filter_message_list_count.is_set || is_set(update_filter_message_list_count.yfilter)) leaf_name_data.push_back(update_filter_message_list_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    if(child_yang_name == "first-update-filtered-timestamp")
    {
        if(first_update_filtered_timestamp == nullptr)
        {
            first_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>();
        }
        return first_update_filtered_timestamp;
    }

    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    if(child_yang_name == "update-attribute-filter-attributes")
    {
        for(auto const & c : update_attribute_filter_attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes>();
        c->parent = this;
        update_attribute_filter_attributes.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message")
    {
        for(auto const & c : update_filter_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage>();
        c->parent = this;
        update_filter_message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_neighbor_address != nullptr)
    {
        children["update-neighbor-address"] = update_neighbor_address;
    }

    if(first_update_filtered_timestamp != nullptr)
    {
        children["first-update-filtered-timestamp"] = first_update_filtered_timestamp;
    }

    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    for (auto const & c : update_attribute_filter_attributes)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_filter_message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled = value;
        update_filter_logging_enabled.value_namespace = name_space;
        update_filter_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count = value;
        configured_update_filter_message_buffer_count.value_namespace = name_space;
        configured_update_filter_message_buffer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count = value;
        operational_update_filter_message_buffer_count.value_namespace = name_space;
        operational_update_filter_message_buffer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular = value;
        update_filter_message_buffer_circular.value_namespace = name_space;
        update_filter_message_buffer_circular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name = value;
        update_attribute_filter_group_name.value_namespace = name_space;
        update_attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled = value;
        operational_update_attribute_filtering_enabled.value_namespace = name_space;
        operational_update_attribute_filtering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled = value;
        message_update_attribute_filtering_enabled.value_namespace = name_space;
        message_update_attribute_filtering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count = value;
        total_filter_update_message_count.value_namespace = name_space;
        total_filter_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count = value;
        establishment_total_filter_update_message_count.value_namespace = name_space;
        establishment_total_filter_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count = value;
        establishment_update_filtered_message_count.value_namespace = name_space;
        establishment_update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count = value;
        update_filter_message_list_count.value_namespace = name_space;
        update_filter_message_list_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count.yfilter = yfilter;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count.yfilter = yfilter;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular.yfilter = yfilter;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled.yfilter = yfilter;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled.yfilter = yfilter;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count.yfilter = yfilter;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-neighbor-address" || name == "first-update-filtered-timestamp" || name == "last-update-filtered-timestamp" || name == "update-attribute-filter-attributes" || name == "update-filter-message" || name == "neighbor-address" || name == "update-vrf-name" || name == "update-filter-logging-enabled" || name == "configured-update-filter-message-buffer-count" || name == "operational-update-filter-message-buffer-count" || name == "update-filter-message-buffer-circular" || name == "update-attribute-filter-group-name" || name == "operational-update-attribute-filtering-enabled" || name == "message-update-attribute-filtering-enabled" || name == "total-filter-update-message-count" || name == "establishment-total-filter-update-message-count" || name == "update-filtered-message-count" || name == "establishment-update-filtered-message-count" || name == "last-update-filtered-age" || name == "update-filter-message-list-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::FirstUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::~FirstUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::UpdateAttributeFilterAttributes()
    :
    update_internal_attribute_code{YType::uint32, "update-internal-attribute-code"},
    update_filter_action{YType::enumeration, "update-filter-action"},
    update_filter_match_count{YType::uint32, "update-filter-match-count"},
    establishment_update_filter_match_count{YType::uint32, "establishment-update-filter-match-count"},
    last_update_filter_match_age{YType::uint32, "last-update-filter-match-age"}
    	,
    last_update_filter_match_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>())
{
    last_update_filter_match_timestamp->parent = this;

    yang_name = "update-attribute-filter-attributes"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::~UpdateAttributeFilterAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_data() const
{
    return update_internal_attribute_code.is_set
	|| update_filter_action.is_set
	|| update_filter_match_count.is_set
	|| establishment_update_filter_match_count.is_set
	|| last_update_filter_match_age.is_set
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_internal_attribute_code.yfilter)
	|| ydk::is_set(update_filter_action.yfilter)
	|| ydk::is_set(update_filter_match_count.yfilter)
	|| ydk::is_set(establishment_update_filter_match_count.yfilter)
	|| ydk::is_set(last_update_filter_match_age.yfilter)
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-attribute-filter-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_internal_attribute_code.is_set || is_set(update_internal_attribute_code.yfilter)) leaf_name_data.push_back(update_internal_attribute_code.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());
    if (update_filter_match_count.is_set || is_set(update_filter_match_count.yfilter)) leaf_name_data.push_back(update_filter_match_count.get_name_leafdata());
    if (establishment_update_filter_match_count.is_set || is_set(establishment_update_filter_match_count.yfilter)) leaf_name_data.push_back(establishment_update_filter_match_count.get_name_leafdata());
    if (last_update_filter_match_age.is_set || is_set(last_update_filter_match_age.yfilter)) leaf_name_data.push_back(last_update_filter_match_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filter-match-timestamp")
    {
        if(last_update_filter_match_timestamp == nullptr)
        {
            last_update_filter_match_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>();
        }
        return last_update_filter_match_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filter_match_timestamp != nullptr)
    {
        children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code = value;
        update_internal_attribute_code.value_namespace = name_space;
        update_internal_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
        update_filter_action.value_namespace = name_space;
        update_filter_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count = value;
        update_filter_match_count.value_namespace = name_space;
        update_filter_match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count = value;
        establishment_update_filter_match_count.value_namespace = name_space;
        establishment_update_filter_match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age = value;
        last_update_filter_match_age.value_namespace = name_space;
        last_update_filter_match_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action.yfilter = yfilter;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count.yfilter = yfilter;
    }
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filter-match-timestamp" || name == "update-internal-attribute-code" || name == "update-filter-action" || name == "update-filter-match-count" || name == "establishment-update-filter-match-count" || name == "last-update-filter-match-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::LastUpdateFilterMatchTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filter-match-timestamp"; yang_parent_name = "update-attribute-filter-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::~LastUpdateFilterMatchTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filter-match-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessage()
    :
    update_filtered_attribute_count{YType::uint32, "update-filtered-attribute-count"},
    update_filter_final_action{YType::enumeration, "update-filter-final-action"},
    update_filter_nlri_address_family{YType::enumeration, "update-filter-nlri-address-family"},
    update_filter_nlri_string{YType::str, "update-filter-nlri-string"},
    update_filter_nlri_string_truncated{YType::boolean, "update-filter-nlri-string-truncated"}
    	,
    update_filter_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>())
{
    update_filter_message_timestamp->parent = this;

    yang_name = "update-filter-message"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::~UpdateFilterMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_data() const
{
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_data())
            return true;
    }
    return update_filtered_attribute_count.is_set
	|| update_filter_final_action.is_set
	|| update_filter_nlri_address_family.is_set
	|| update_filter_nlri_string.is_set
	|| update_filter_nlri_string_truncated.is_set
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_operation() const
{
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_filtered_attribute_count.yfilter)
	|| ydk::is_set(update_filter_final_action.yfilter)
	|| ydk::is_set(update_filter_nlri_address_family.yfilter)
	|| ydk::is_set(update_filter_nlri_string.yfilter)
	|| ydk::is_set(update_filter_nlri_string_truncated.yfilter)
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filtered_attribute_count.is_set || is_set(update_filtered_attribute_count.yfilter)) leaf_name_data.push_back(update_filtered_attribute_count.get_name_leafdata());
    if (update_filter_final_action.is_set || is_set(update_filter_final_action.yfilter)) leaf_name_data.push_back(update_filter_final_action.get_name_leafdata());
    if (update_filter_nlri_address_family.is_set || is_set(update_filter_nlri_address_family.yfilter)) leaf_name_data.push_back(update_filter_nlri_address_family.get_name_leafdata());
    if (update_filter_nlri_string.is_set || is_set(update_filter_nlri_string.yfilter)) leaf_name_data.push_back(update_filter_nlri_string.get_name_leafdata());
    if (update_filter_nlri_string_truncated.is_set || is_set(update_filter_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_filter_nlri_string_truncated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-filter-message-timestamp")
    {
        if(update_filter_message_timestamp == nullptr)
        {
            update_filter_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>();
        }
        return update_filter_message_timestamp;
    }

    if(child_yang_name == "update-filter-message-data")
    {
        for(auto const & c : update_filter_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData>();
        c->parent = this;
        update_filter_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-element")
    {
        for(auto const & c : update_filter_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement>();
        c->parent = this;
        update_filter_element.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_filter_message_timestamp != nullptr)
    {
        children["update-filter-message-timestamp"] = update_filter_message_timestamp;
    }

    for (auto const & c : update_filter_message_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_filter_element)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count = value;
        update_filtered_attribute_count.value_namespace = name_space;
        update_filtered_attribute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action = value;
        update_filter_final_action.value_namespace = name_space;
        update_filter_final_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family = value;
        update_filter_nlri_address_family.value_namespace = name_space;
        update_filter_nlri_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string = value;
        update_filter_nlri_string.value_namespace = name_space;
        update_filter_nlri_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated = value;
        update_filter_nlri_string_truncated.value_namespace = name_space;
        update_filter_nlri_string_truncated.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count.yfilter = yfilter;
    }
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-filter-message-timestamp" || name == "update-filter-message-data" || name == "update-filter-element" || name == "update-filtered-attribute-count" || name == "update-filter-final-action" || name == "update-filter-nlri-address-family" || name == "update-filter-nlri-string" || name == "update-filter-nlri-string-truncated")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::UpdateFilterMessageTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "update-filter-message-timestamp"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::~UpdateFilterMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::UpdateFilterMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-filter-message-data"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::~UpdateFilterMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::UpdateFilterElement()
    :
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_filter_action{YType::enumeration, "update-filter-action"}
{

    yang_name = "update-filter-element"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::~UpdateFilterElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_data() const
{
    return update_attribute_flags.is_set
	|| update_attribute_code.is_set
	|| update_filter_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_filter_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
        update_attribute_flags.value_namespace = name_space;
        update_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
        update_attribute_code.value_namespace = name_space;
        update_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
        update_filter_action.value_namespace = name_space;
        update_filter_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-flags" || name == "update-attribute-code" || name == "update-filter-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::Bmp()
    :
    server_summaries(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries>())
	,server_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors>())
{
    server_summaries->parent = this;
    server_neighbors->parent = this;

    yang_name = "bmp"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::~Bmp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::has_data() const
{
    return (server_summaries !=  nullptr && server_summaries->has_data())
	|| (server_neighbors !=  nullptr && server_neighbors->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::has_operation() const
{
    return is_set(yfilter)
	|| (server_summaries !=  nullptr && server_summaries->has_operation())
	|| (server_neighbors !=  nullptr && server_neighbors->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-summaries")
    {
        if(server_summaries == nullptr)
        {
            server_summaries = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries>();
        }
        return server_summaries;
    }

    if(child_yang_name == "server-neighbors")
    {
        if(server_neighbors == nullptr)
        {
            server_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors>();
        }
        return server_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server_summaries != nullptr)
    {
        children["server-summaries"] = server_summaries;
    }

    if(server_neighbors != nullptr)
    {
        children["server-neighbors"] = server_neighbors;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-summaries" || name == "server-neighbors")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummaries()
{

    yang_name = "server-summaries"; yang_parent_name = "bmp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::~ServerSummaries()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::has_data() const
{
    for (std::size_t index=0; index<server_summary.size(); index++)
    {
        if(server_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::has_operation() const
{
    for (std::size_t index=0; index<server_summary.size(); index++)
    {
        if(server_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-summary")
    {
        for(auto const & c : server_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary>();
        c->parent = this;
        server_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-summary")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::ServerSummary()
    :
    server_id{YType::uint32, "server-id"},
    bmp_server_id{YType::uint8, "bmp-server-id"},
    bmp_server_host_name{YType::str, "bmp-server-host-name"},
    bmp_server_port{YType::uint32, "bmp-server-port"},
    bmp_server_state{YType::enumeration, "bmp-server-state"},
    bmp_server_is_flapping{YType::boolean, "bmp-server-is-flapping"},
    bmp_server_nbr_count{YType::uint32, "bmp-server-nbr-count"},
    bmp_init_msg_count{YType::uint32, "bmp-init-msg-count"},
    bmp_termination_msg_count{YType::uint32, "bmp-termination-msg-count"},
    bmp_status_report_count{YType::uint32, "bmp-status-report-count"},
    bmp_per_peer_msg_count{YType::uint32, "bmp-per-peer-msg-count"},
    bmp_peer_msg_drop_count{YType::uint32, "bmp-peer-msg-drop-count"},
    bmp_peer_msg_pending_count{YType::uint32, "bmp-peer-msg-pending-count"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    update_source_interface_name{YType::str, "update-source-interface-name"},
    update_source_vrf_id{YType::uint32, "update-source-vrf-id"},
    bmp_vrf_name{YType::str, "bmp-vrf-name"},
    bmp_vrf_id{YType::uint32, "bmp-vrf-id"},
    bmp_update_mode{YType::enumeration, "bmp-update-mode"},
    tcp_keep_alive_interval{YType::uint32, "tcp-keep-alive-interval"},
    tcp_maximum_segment_size{YType::uint32, "tcp-maximum-segment-size"},
    tcp_write_cb_pending{YType::uint32, "tcp-write-cb-pending"},
    tcp_last_write_result{YType::uint32, "tcp-last-write-result"},
    tcp_last_write_cb_time{YType::uint64, "tcp-last-write-cb-time"},
    tcp_last_write_time{YType::uint64, "tcp-last-write-time"},
    bmpq_last_write_pulse_sent_time{YType::uint64, "bmpq-last-write-pulse-sent-time"},
    bmpq_last_all_write_pulse_sent_time{YType::uint64, "bmpq-last-all-write-pulse-sent-time"},
    bmpq_last_write_pulse_cb_time{YType::uint64, "bmpq-last-write-pulse-cb-time"},
    path_update_count{YType::uint32, "path-update-count"},
    path_withdraw_count{YType::uint32, "path-withdraw-count"},
    path_update_drop{YType::uint32, "path-update-drop"},
    path_withdraw_drop{YType::uint32, "path-withdraw-drop"},
    bmp_peer_msg_pending_count_max{YType::uint32, "bmp-peer-msg-pending-count-max"},
    bmp_peer_msg_pending_count_hwts{YType::uint64, "bmp-peer-msg-pending-count-hwts"},
    bmp_bytes_written_tcp{YType::uint64, "bmp-bytes-written-tcp"},
    tcp_write_time{YType::uint32, "tcp-write-time"},
    bmpr_mon_upd_messages{YType::uint32, "bmpr-mon-upd-messages"},
    bmpr_mon_wdraw_messages{YType::uint32, "bmpr-mon-wdraw-messages"},
    bmp_messages_wdraw_discarded{YType::uint32, "bmp-messages-wdraw-discarded"},
    bmp_pfx_wdraw_discarded{YType::uint32, "bmp-pfx-wdraw-discarded"},
    bmp_per_peer_msg_route_mon_count{YType::uint32, "bmp-per-peer-msg-route-mon-count"},
    bmpr_mon_update_gen_time{YType::uint32, "bmpr-mon-update-gen-time"},
    bmpr_mon_eo_rmessages{YType::uint32, "bmpr-mon-eo-rmessages"},
    bmp_rmon_cur_buffer_size{YType::uint64, "bmp-rmon-cur-buffer-size"},
    bmp_maximum_buffer_size_route_mon{YType::uint64, "bmp-maximum-buffer-size-route-mon"},
    bmp_server_up_count{YType::uint32, "bmp-server-up-count"},
    bmp_upd_gen_in_progress{YType::boolean, "bmp-upd-gen-in-progress"},
    bmp_reset_walk_in_progress{YType::boolean, "bmp-reset-walk-in-progress"}
    	,
    bmp_server_state_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>())
	,bmp_server_state_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>())
	,bmp_server_last_discon_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>())
	,update_source_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>())
{
    bmp_server_state_age->parent = this;
    bmp_server_state_time_spec->parent = this;
    bmp_server_last_discon_time->parent = this;
    update_source_address->parent = this;

    yang_name = "server-summary"; yang_parent_name = "server-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::~ServerSummary()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::has_data() const
{
    for (std::size_t index=0; index<bmpafi_info.size(); index++)
    {
        if(bmpafi_info[index]->has_data())
            return true;
    }
    return server_id.is_set
	|| bmp_server_id.is_set
	|| bmp_server_host_name.is_set
	|| bmp_server_port.is_set
	|| bmp_server_state.is_set
	|| bmp_server_is_flapping.is_set
	|| bmp_server_nbr_count.is_set
	|| bmp_init_msg_count.is_set
	|| bmp_termination_msg_count.is_set
	|| bmp_status_report_count.is_set
	|| bmp_per_peer_msg_count.is_set
	|| bmp_peer_msg_drop_count.is_set
	|| bmp_peer_msg_pending_count.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| update_source_interface_name.is_set
	|| update_source_vrf_id.is_set
	|| bmp_vrf_name.is_set
	|| bmp_vrf_id.is_set
	|| bmp_update_mode.is_set
	|| tcp_keep_alive_interval.is_set
	|| tcp_maximum_segment_size.is_set
	|| tcp_write_cb_pending.is_set
	|| tcp_last_write_result.is_set
	|| tcp_last_write_cb_time.is_set
	|| tcp_last_write_time.is_set
	|| bmpq_last_write_pulse_sent_time.is_set
	|| bmpq_last_all_write_pulse_sent_time.is_set
	|| bmpq_last_write_pulse_cb_time.is_set
	|| path_update_count.is_set
	|| path_withdraw_count.is_set
	|| path_update_drop.is_set
	|| path_withdraw_drop.is_set
	|| bmp_peer_msg_pending_count_max.is_set
	|| bmp_peer_msg_pending_count_hwts.is_set
	|| bmp_bytes_written_tcp.is_set
	|| tcp_write_time.is_set
	|| bmpr_mon_upd_messages.is_set
	|| bmpr_mon_wdraw_messages.is_set
	|| bmp_messages_wdraw_discarded.is_set
	|| bmp_pfx_wdraw_discarded.is_set
	|| bmp_per_peer_msg_route_mon_count.is_set
	|| bmpr_mon_update_gen_time.is_set
	|| bmpr_mon_eo_rmessages.is_set
	|| bmp_rmon_cur_buffer_size.is_set
	|| bmp_maximum_buffer_size_route_mon.is_set
	|| bmp_server_up_count.is_set
	|| bmp_upd_gen_in_progress.is_set
	|| bmp_reset_walk_in_progress.is_set
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_data())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_data())
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_data())
	|| (update_source_address !=  nullptr && update_source_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::has_operation() const
{
    for (std::size_t index=0; index<bmpafi_info.size(); index++)
    {
        if(bmpafi_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter)
	|| ydk::is_set(bmp_server_id.yfilter)
	|| ydk::is_set(bmp_server_host_name.yfilter)
	|| ydk::is_set(bmp_server_port.yfilter)
	|| ydk::is_set(bmp_server_state.yfilter)
	|| ydk::is_set(bmp_server_is_flapping.yfilter)
	|| ydk::is_set(bmp_server_nbr_count.yfilter)
	|| ydk::is_set(bmp_init_msg_count.yfilter)
	|| ydk::is_set(bmp_termination_msg_count.yfilter)
	|| ydk::is_set(bmp_status_report_count.yfilter)
	|| ydk::is_set(bmp_per_peer_msg_count.yfilter)
	|| ydk::is_set(bmp_peer_msg_drop_count.yfilter)
	|| ydk::is_set(bmp_peer_msg_pending_count.yfilter)
	|| ydk::is_set(tos_type.yfilter)
	|| ydk::is_set(tos_value.yfilter)
	|| ydk::is_set(update_source_interface_name.yfilter)
	|| ydk::is_set(update_source_vrf_id.yfilter)
	|| ydk::is_set(bmp_vrf_name.yfilter)
	|| ydk::is_set(bmp_vrf_id.yfilter)
	|| ydk::is_set(bmp_update_mode.yfilter)
	|| ydk::is_set(tcp_keep_alive_interval.yfilter)
	|| ydk::is_set(tcp_maximum_segment_size.yfilter)
	|| ydk::is_set(tcp_write_cb_pending.yfilter)
	|| ydk::is_set(tcp_last_write_result.yfilter)
	|| ydk::is_set(tcp_last_write_cb_time.yfilter)
	|| ydk::is_set(tcp_last_write_time.yfilter)
	|| ydk::is_set(bmpq_last_write_pulse_sent_time.yfilter)
	|| ydk::is_set(bmpq_last_all_write_pulse_sent_time.yfilter)
	|| ydk::is_set(bmpq_last_write_pulse_cb_time.yfilter)
	|| ydk::is_set(path_update_count.yfilter)
	|| ydk::is_set(path_withdraw_count.yfilter)
	|| ydk::is_set(path_update_drop.yfilter)
	|| ydk::is_set(path_withdraw_drop.yfilter)
	|| ydk::is_set(bmp_peer_msg_pending_count_max.yfilter)
	|| ydk::is_set(bmp_peer_msg_pending_count_hwts.yfilter)
	|| ydk::is_set(bmp_bytes_written_tcp.yfilter)
	|| ydk::is_set(tcp_write_time.yfilter)
	|| ydk::is_set(bmpr_mon_upd_messages.yfilter)
	|| ydk::is_set(bmpr_mon_wdraw_messages.yfilter)
	|| ydk::is_set(bmp_messages_wdraw_discarded.yfilter)
	|| ydk::is_set(bmp_pfx_wdraw_discarded.yfilter)
	|| ydk::is_set(bmp_per_peer_msg_route_mon_count.yfilter)
	|| ydk::is_set(bmpr_mon_update_gen_time.yfilter)
	|| ydk::is_set(bmpr_mon_eo_rmessages.yfilter)
	|| ydk::is_set(bmp_rmon_cur_buffer_size.yfilter)
	|| ydk::is_set(bmp_maximum_buffer_size_route_mon.yfilter)
	|| ydk::is_set(bmp_server_up_count.yfilter)
	|| ydk::is_set(bmp_upd_gen_in_progress.yfilter)
	|| ydk::is_set(bmp_reset_walk_in_progress.yfilter)
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_operation())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_operation())
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_operation())
	|| (update_source_address !=  nullptr && update_source_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summary" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (bmp_server_id.is_set || is_set(bmp_server_id.yfilter)) leaf_name_data.push_back(bmp_server_id.get_name_leafdata());
    if (bmp_server_host_name.is_set || is_set(bmp_server_host_name.yfilter)) leaf_name_data.push_back(bmp_server_host_name.get_name_leafdata());
    if (bmp_server_port.is_set || is_set(bmp_server_port.yfilter)) leaf_name_data.push_back(bmp_server_port.get_name_leafdata());
    if (bmp_server_state.is_set || is_set(bmp_server_state.yfilter)) leaf_name_data.push_back(bmp_server_state.get_name_leafdata());
    if (bmp_server_is_flapping.is_set || is_set(bmp_server_is_flapping.yfilter)) leaf_name_data.push_back(bmp_server_is_flapping.get_name_leafdata());
    if (bmp_server_nbr_count.is_set || is_set(bmp_server_nbr_count.yfilter)) leaf_name_data.push_back(bmp_server_nbr_count.get_name_leafdata());
    if (bmp_init_msg_count.is_set || is_set(bmp_init_msg_count.yfilter)) leaf_name_data.push_back(bmp_init_msg_count.get_name_leafdata());
    if (bmp_termination_msg_count.is_set || is_set(bmp_termination_msg_count.yfilter)) leaf_name_data.push_back(bmp_termination_msg_count.get_name_leafdata());
    if (bmp_status_report_count.is_set || is_set(bmp_status_report_count.yfilter)) leaf_name_data.push_back(bmp_status_report_count.get_name_leafdata());
    if (bmp_per_peer_msg_count.is_set || is_set(bmp_per_peer_msg_count.yfilter)) leaf_name_data.push_back(bmp_per_peer_msg_count.get_name_leafdata());
    if (bmp_peer_msg_drop_count.is_set || is_set(bmp_peer_msg_drop_count.yfilter)) leaf_name_data.push_back(bmp_peer_msg_drop_count.get_name_leafdata());
    if (bmp_peer_msg_pending_count.is_set || is_set(bmp_peer_msg_pending_count.yfilter)) leaf_name_data.push_back(bmp_peer_msg_pending_count.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.yfilter)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.yfilter)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (update_source_interface_name.is_set || is_set(update_source_interface_name.yfilter)) leaf_name_data.push_back(update_source_interface_name.get_name_leafdata());
    if (update_source_vrf_id.is_set || is_set(update_source_vrf_id.yfilter)) leaf_name_data.push_back(update_source_vrf_id.get_name_leafdata());
    if (bmp_vrf_name.is_set || is_set(bmp_vrf_name.yfilter)) leaf_name_data.push_back(bmp_vrf_name.get_name_leafdata());
    if (bmp_vrf_id.is_set || is_set(bmp_vrf_id.yfilter)) leaf_name_data.push_back(bmp_vrf_id.get_name_leafdata());
    if (bmp_update_mode.is_set || is_set(bmp_update_mode.yfilter)) leaf_name_data.push_back(bmp_update_mode.get_name_leafdata());
    if (tcp_keep_alive_interval.is_set || is_set(tcp_keep_alive_interval.yfilter)) leaf_name_data.push_back(tcp_keep_alive_interval.get_name_leafdata());
    if (tcp_maximum_segment_size.is_set || is_set(tcp_maximum_segment_size.yfilter)) leaf_name_data.push_back(tcp_maximum_segment_size.get_name_leafdata());
    if (tcp_write_cb_pending.is_set || is_set(tcp_write_cb_pending.yfilter)) leaf_name_data.push_back(tcp_write_cb_pending.get_name_leafdata());
    if (tcp_last_write_result.is_set || is_set(tcp_last_write_result.yfilter)) leaf_name_data.push_back(tcp_last_write_result.get_name_leafdata());
    if (tcp_last_write_cb_time.is_set || is_set(tcp_last_write_cb_time.yfilter)) leaf_name_data.push_back(tcp_last_write_cb_time.get_name_leafdata());
    if (tcp_last_write_time.is_set || is_set(tcp_last_write_time.yfilter)) leaf_name_data.push_back(tcp_last_write_time.get_name_leafdata());
    if (bmpq_last_write_pulse_sent_time.is_set || is_set(bmpq_last_write_pulse_sent_time.yfilter)) leaf_name_data.push_back(bmpq_last_write_pulse_sent_time.get_name_leafdata());
    if (bmpq_last_all_write_pulse_sent_time.is_set || is_set(bmpq_last_all_write_pulse_sent_time.yfilter)) leaf_name_data.push_back(bmpq_last_all_write_pulse_sent_time.get_name_leafdata());
    if (bmpq_last_write_pulse_cb_time.is_set || is_set(bmpq_last_write_pulse_cb_time.yfilter)) leaf_name_data.push_back(bmpq_last_write_pulse_cb_time.get_name_leafdata());
    if (path_update_count.is_set || is_set(path_update_count.yfilter)) leaf_name_data.push_back(path_update_count.get_name_leafdata());
    if (path_withdraw_count.is_set || is_set(path_withdraw_count.yfilter)) leaf_name_data.push_back(path_withdraw_count.get_name_leafdata());
    if (path_update_drop.is_set || is_set(path_update_drop.yfilter)) leaf_name_data.push_back(path_update_drop.get_name_leafdata());
    if (path_withdraw_drop.is_set || is_set(path_withdraw_drop.yfilter)) leaf_name_data.push_back(path_withdraw_drop.get_name_leafdata());
    if (bmp_peer_msg_pending_count_max.is_set || is_set(bmp_peer_msg_pending_count_max.yfilter)) leaf_name_data.push_back(bmp_peer_msg_pending_count_max.get_name_leafdata());
    if (bmp_peer_msg_pending_count_hwts.is_set || is_set(bmp_peer_msg_pending_count_hwts.yfilter)) leaf_name_data.push_back(bmp_peer_msg_pending_count_hwts.get_name_leafdata());
    if (bmp_bytes_written_tcp.is_set || is_set(bmp_bytes_written_tcp.yfilter)) leaf_name_data.push_back(bmp_bytes_written_tcp.get_name_leafdata());
    if (tcp_write_time.is_set || is_set(tcp_write_time.yfilter)) leaf_name_data.push_back(tcp_write_time.get_name_leafdata());
    if (bmpr_mon_upd_messages.is_set || is_set(bmpr_mon_upd_messages.yfilter)) leaf_name_data.push_back(bmpr_mon_upd_messages.get_name_leafdata());
    if (bmpr_mon_wdraw_messages.is_set || is_set(bmpr_mon_wdraw_messages.yfilter)) leaf_name_data.push_back(bmpr_mon_wdraw_messages.get_name_leafdata());
    if (bmp_messages_wdraw_discarded.is_set || is_set(bmp_messages_wdraw_discarded.yfilter)) leaf_name_data.push_back(bmp_messages_wdraw_discarded.get_name_leafdata());
    if (bmp_pfx_wdraw_discarded.is_set || is_set(bmp_pfx_wdraw_discarded.yfilter)) leaf_name_data.push_back(bmp_pfx_wdraw_discarded.get_name_leafdata());
    if (bmp_per_peer_msg_route_mon_count.is_set || is_set(bmp_per_peer_msg_route_mon_count.yfilter)) leaf_name_data.push_back(bmp_per_peer_msg_route_mon_count.get_name_leafdata());
    if (bmpr_mon_update_gen_time.is_set || is_set(bmpr_mon_update_gen_time.yfilter)) leaf_name_data.push_back(bmpr_mon_update_gen_time.get_name_leafdata());
    if (bmpr_mon_eo_rmessages.is_set || is_set(bmpr_mon_eo_rmessages.yfilter)) leaf_name_data.push_back(bmpr_mon_eo_rmessages.get_name_leafdata());
    if (bmp_rmon_cur_buffer_size.is_set || is_set(bmp_rmon_cur_buffer_size.yfilter)) leaf_name_data.push_back(bmp_rmon_cur_buffer_size.get_name_leafdata());
    if (bmp_maximum_buffer_size_route_mon.is_set || is_set(bmp_maximum_buffer_size_route_mon.yfilter)) leaf_name_data.push_back(bmp_maximum_buffer_size_route_mon.get_name_leafdata());
    if (bmp_server_up_count.is_set || is_set(bmp_server_up_count.yfilter)) leaf_name_data.push_back(bmp_server_up_count.get_name_leafdata());
    if (bmp_upd_gen_in_progress.is_set || is_set(bmp_upd_gen_in_progress.yfilter)) leaf_name_data.push_back(bmp_upd_gen_in_progress.get_name_leafdata());
    if (bmp_reset_walk_in_progress.is_set || is_set(bmp_reset_walk_in_progress.yfilter)) leaf_name_data.push_back(bmp_reset_walk_in_progress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-server-state-age")
    {
        if(bmp_server_state_age == nullptr)
        {
            bmp_server_state_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>();
        }
        return bmp_server_state_age;
    }

    if(child_yang_name == "bmp-server-state-time-spec")
    {
        if(bmp_server_state_time_spec == nullptr)
        {
            bmp_server_state_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>();
        }
        return bmp_server_state_time_spec;
    }

    if(child_yang_name == "bmp-server-last-discon-time")
    {
        if(bmp_server_last_discon_time == nullptr)
        {
            bmp_server_last_discon_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>();
        }
        return bmp_server_last_discon_time;
    }

    if(child_yang_name == "update-source-address")
    {
        if(update_source_address == nullptr)
        {
            update_source_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>();
        }
        return update_source_address;
    }

    if(child_yang_name == "bmpafi-info")
    {
        for(auto const & c : bmpafi_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo>();
        c->parent = this;
        bmpafi_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bmp_server_state_age != nullptr)
    {
        children["bmp-server-state-age"] = bmp_server_state_age;
    }

    if(bmp_server_state_time_spec != nullptr)
    {
        children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;
    }

    if(bmp_server_last_discon_time != nullptr)
    {
        children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;
    }

    if(update_source_address != nullptr)
    {
        children["update-source-address"] = update_source_address;
    }

    for (auto const & c : bmpafi_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-id")
    {
        bmp_server_id = value;
        bmp_server_id.value_namespace = name_space;
        bmp_server_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-host-name")
    {
        bmp_server_host_name = value;
        bmp_server_host_name.value_namespace = name_space;
        bmp_server_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-port")
    {
        bmp_server_port = value;
        bmp_server_port.value_namespace = name_space;
        bmp_server_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-state")
    {
        bmp_server_state = value;
        bmp_server_state.value_namespace = name_space;
        bmp_server_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-is-flapping")
    {
        bmp_server_is_flapping = value;
        bmp_server_is_flapping.value_namespace = name_space;
        bmp_server_is_flapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-nbr-count")
    {
        bmp_server_nbr_count = value;
        bmp_server_nbr_count.value_namespace = name_space;
        bmp_server_nbr_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-init-msg-count")
    {
        bmp_init_msg_count = value;
        bmp_init_msg_count.value_namespace = name_space;
        bmp_init_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-termination-msg-count")
    {
        bmp_termination_msg_count = value;
        bmp_termination_msg_count.value_namespace = name_space;
        bmp_termination_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-status-report-count")
    {
        bmp_status_report_count = value;
        bmp_status_report_count.value_namespace = name_space;
        bmp_status_report_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-per-peer-msg-count")
    {
        bmp_per_peer_msg_count = value;
        bmp_per_peer_msg_count.value_namespace = name_space;
        bmp_per_peer_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-drop-count")
    {
        bmp_peer_msg_drop_count = value;
        bmp_peer_msg_drop_count.value_namespace = name_space;
        bmp_peer_msg_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-pending-count")
    {
        bmp_peer_msg_pending_count = value;
        bmp_peer_msg_pending_count.value_namespace = name_space;
        bmp_peer_msg_pending_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
        tos_type.value_namespace = name_space;
        tos_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
        tos_value.value_namespace = name_space;
        tos_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface-name")
    {
        update_source_interface_name = value;
        update_source_interface_name.value_namespace = name_space;
        update_source_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-vrf-id")
    {
        update_source_vrf_id = value;
        update_source_vrf_id.value_namespace = name_space;
        update_source_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-vrf-name")
    {
        bmp_vrf_name = value;
        bmp_vrf_name.value_namespace = name_space;
        bmp_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-vrf-id")
    {
        bmp_vrf_id = value;
        bmp_vrf_id.value_namespace = name_space;
        bmp_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-update-mode")
    {
        bmp_update_mode = value;
        bmp_update_mode.value_namespace = name_space;
        bmp_update_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-keep-alive-interval")
    {
        tcp_keep_alive_interval = value;
        tcp_keep_alive_interval.value_namespace = name_space;
        tcp_keep_alive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-maximum-segment-size")
    {
        tcp_maximum_segment_size = value;
        tcp_maximum_segment_size.value_namespace = name_space;
        tcp_maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-write-cb-pending")
    {
        tcp_write_cb_pending = value;
        tcp_write_cb_pending.value_namespace = name_space;
        tcp_write_cb_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-last-write-result")
    {
        tcp_last_write_result = value;
        tcp_last_write_result.value_namespace = name_space;
        tcp_last_write_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-last-write-cb-time")
    {
        tcp_last_write_cb_time = value;
        tcp_last_write_cb_time.value_namespace = name_space;
        tcp_last_write_cb_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-last-write-time")
    {
        tcp_last_write_time = value;
        tcp_last_write_time.value_namespace = name_space;
        tcp_last_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpq-last-write-pulse-sent-time")
    {
        bmpq_last_write_pulse_sent_time = value;
        bmpq_last_write_pulse_sent_time.value_namespace = name_space;
        bmpq_last_write_pulse_sent_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpq-last-all-write-pulse-sent-time")
    {
        bmpq_last_all_write_pulse_sent_time = value;
        bmpq_last_all_write_pulse_sent_time.value_namespace = name_space;
        bmpq_last_all_write_pulse_sent_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpq-last-write-pulse-cb-time")
    {
        bmpq_last_write_pulse_cb_time = value;
        bmpq_last_write_pulse_cb_time.value_namespace = name_space;
        bmpq_last_write_pulse_cb_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-update-count")
    {
        path_update_count = value;
        path_update_count.value_namespace = name_space;
        path_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-withdraw-count")
    {
        path_withdraw_count = value;
        path_withdraw_count.value_namespace = name_space;
        path_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-update-drop")
    {
        path_update_drop = value;
        path_update_drop.value_namespace = name_space;
        path_update_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-withdraw-drop")
    {
        path_withdraw_drop = value;
        path_withdraw_drop.value_namespace = name_space;
        path_withdraw_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-pending-count-max")
    {
        bmp_peer_msg_pending_count_max = value;
        bmp_peer_msg_pending_count_max.value_namespace = name_space;
        bmp_peer_msg_pending_count_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-pending-count-hwts")
    {
        bmp_peer_msg_pending_count_hwts = value;
        bmp_peer_msg_pending_count_hwts.value_namespace = name_space;
        bmp_peer_msg_pending_count_hwts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-bytes-written-tcp")
    {
        bmp_bytes_written_tcp = value;
        bmp_bytes_written_tcp.value_namespace = name_space;
        bmp_bytes_written_tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-write-time")
    {
        tcp_write_time = value;
        tcp_write_time.value_namespace = name_space;
        tcp_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-upd-messages")
    {
        bmpr_mon_upd_messages = value;
        bmpr_mon_upd_messages.value_namespace = name_space;
        bmpr_mon_upd_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-wdraw-messages")
    {
        bmpr_mon_wdraw_messages = value;
        bmpr_mon_wdraw_messages.value_namespace = name_space;
        bmpr_mon_wdraw_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-messages-wdraw-discarded")
    {
        bmp_messages_wdraw_discarded = value;
        bmp_messages_wdraw_discarded.value_namespace = name_space;
        bmp_messages_wdraw_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-pfx-wdraw-discarded")
    {
        bmp_pfx_wdraw_discarded = value;
        bmp_pfx_wdraw_discarded.value_namespace = name_space;
        bmp_pfx_wdraw_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-per-peer-msg-route-mon-count")
    {
        bmp_per_peer_msg_route_mon_count = value;
        bmp_per_peer_msg_route_mon_count.value_namespace = name_space;
        bmp_per_peer_msg_route_mon_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-update-gen-time")
    {
        bmpr_mon_update_gen_time = value;
        bmpr_mon_update_gen_time.value_namespace = name_space;
        bmpr_mon_update_gen_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-eo-rmessages")
    {
        bmpr_mon_eo_rmessages = value;
        bmpr_mon_eo_rmessages.value_namespace = name_space;
        bmpr_mon_eo_rmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-rmon-cur-buffer-size")
    {
        bmp_rmon_cur_buffer_size = value;
        bmp_rmon_cur_buffer_size.value_namespace = name_space;
        bmp_rmon_cur_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-maximum-buffer-size-route-mon")
    {
        bmp_maximum_buffer_size_route_mon = value;
        bmp_maximum_buffer_size_route_mon.value_namespace = name_space;
        bmp_maximum_buffer_size_route_mon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-up-count")
    {
        bmp_server_up_count = value;
        bmp_server_up_count.value_namespace = name_space;
        bmp_server_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-in-progress")
    {
        bmp_upd_gen_in_progress = value;
        bmp_upd_gen_in_progress.value_namespace = name_space;
        bmp_upd_gen_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-reset-walk-in-progress")
    {
        bmp_reset_walk_in_progress = value;
        bmp_reset_walk_in_progress.value_namespace = name_space;
        bmp_reset_walk_in_progress.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
    if(value_path == "bmp-server-id")
    {
        bmp_server_id.yfilter = yfilter;
    }
    if(value_path == "bmp-server-host-name")
    {
        bmp_server_host_name.yfilter = yfilter;
    }
    if(value_path == "bmp-server-port")
    {
        bmp_server_port.yfilter = yfilter;
    }
    if(value_path == "bmp-server-state")
    {
        bmp_server_state.yfilter = yfilter;
    }
    if(value_path == "bmp-server-is-flapping")
    {
        bmp_server_is_flapping.yfilter = yfilter;
    }
    if(value_path == "bmp-server-nbr-count")
    {
        bmp_server_nbr_count.yfilter = yfilter;
    }
    if(value_path == "bmp-init-msg-count")
    {
        bmp_init_msg_count.yfilter = yfilter;
    }
    if(value_path == "bmp-termination-msg-count")
    {
        bmp_termination_msg_count.yfilter = yfilter;
    }
    if(value_path == "bmp-status-report-count")
    {
        bmp_status_report_count.yfilter = yfilter;
    }
    if(value_path == "bmp-per-peer-msg-count")
    {
        bmp_per_peer_msg_count.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-drop-count")
    {
        bmp_peer_msg_drop_count.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-pending-count")
    {
        bmp_peer_msg_pending_count.yfilter = yfilter;
    }
    if(value_path == "tos-type")
    {
        tos_type.yfilter = yfilter;
    }
    if(value_path == "tos-value")
    {
        tos_value.yfilter = yfilter;
    }
    if(value_path == "update-source-interface-name")
    {
        update_source_interface_name.yfilter = yfilter;
    }
    if(value_path == "update-source-vrf-id")
    {
        update_source_vrf_id.yfilter = yfilter;
    }
    if(value_path == "bmp-vrf-name")
    {
        bmp_vrf_name.yfilter = yfilter;
    }
    if(value_path == "bmp-vrf-id")
    {
        bmp_vrf_id.yfilter = yfilter;
    }
    if(value_path == "bmp-update-mode")
    {
        bmp_update_mode.yfilter = yfilter;
    }
    if(value_path == "tcp-keep-alive-interval")
    {
        tcp_keep_alive_interval.yfilter = yfilter;
    }
    if(value_path == "tcp-maximum-segment-size")
    {
        tcp_maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "tcp-write-cb-pending")
    {
        tcp_write_cb_pending.yfilter = yfilter;
    }
    if(value_path == "tcp-last-write-result")
    {
        tcp_last_write_result.yfilter = yfilter;
    }
    if(value_path == "tcp-last-write-cb-time")
    {
        tcp_last_write_cb_time.yfilter = yfilter;
    }
    if(value_path == "tcp-last-write-time")
    {
        tcp_last_write_time.yfilter = yfilter;
    }
    if(value_path == "bmpq-last-write-pulse-sent-time")
    {
        bmpq_last_write_pulse_sent_time.yfilter = yfilter;
    }
    if(value_path == "bmpq-last-all-write-pulse-sent-time")
    {
        bmpq_last_all_write_pulse_sent_time.yfilter = yfilter;
    }
    if(value_path == "bmpq-last-write-pulse-cb-time")
    {
        bmpq_last_write_pulse_cb_time.yfilter = yfilter;
    }
    if(value_path == "path-update-count")
    {
        path_update_count.yfilter = yfilter;
    }
    if(value_path == "path-withdraw-count")
    {
        path_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "path-update-drop")
    {
        path_update_drop.yfilter = yfilter;
    }
    if(value_path == "path-withdraw-drop")
    {
        path_withdraw_drop.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-pending-count-max")
    {
        bmp_peer_msg_pending_count_max.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-pending-count-hwts")
    {
        bmp_peer_msg_pending_count_hwts.yfilter = yfilter;
    }
    if(value_path == "bmp-bytes-written-tcp")
    {
        bmp_bytes_written_tcp.yfilter = yfilter;
    }
    if(value_path == "tcp-write-time")
    {
        tcp_write_time.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-upd-messages")
    {
        bmpr_mon_upd_messages.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-wdraw-messages")
    {
        bmpr_mon_wdraw_messages.yfilter = yfilter;
    }
    if(value_path == "bmp-messages-wdraw-discarded")
    {
        bmp_messages_wdraw_discarded.yfilter = yfilter;
    }
    if(value_path == "bmp-pfx-wdraw-discarded")
    {
        bmp_pfx_wdraw_discarded.yfilter = yfilter;
    }
    if(value_path == "bmp-per-peer-msg-route-mon-count")
    {
        bmp_per_peer_msg_route_mon_count.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-update-gen-time")
    {
        bmpr_mon_update_gen_time.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-eo-rmessages")
    {
        bmpr_mon_eo_rmessages.yfilter = yfilter;
    }
    if(value_path == "bmp-rmon-cur-buffer-size")
    {
        bmp_rmon_cur_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-maximum-buffer-size-route-mon")
    {
        bmp_maximum_buffer_size_route_mon.yfilter = yfilter;
    }
    if(value_path == "bmp-server-up-count")
    {
        bmp_server_up_count.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-in-progress")
    {
        bmp_upd_gen_in_progress.yfilter = yfilter;
    }
    if(value_path == "bmp-reset-walk-in-progress")
    {
        bmp_reset_walk_in_progress.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-server-state-age" || name == "bmp-server-state-time-spec" || name == "bmp-server-last-discon-time" || name == "update-source-address" || name == "bmpafi-info" || name == "server-id" || name == "bmp-server-id" || name == "bmp-server-host-name" || name == "bmp-server-port" || name == "bmp-server-state" || name == "bmp-server-is-flapping" || name == "bmp-server-nbr-count" || name == "bmp-init-msg-count" || name == "bmp-termination-msg-count" || name == "bmp-status-report-count" || name == "bmp-per-peer-msg-count" || name == "bmp-peer-msg-drop-count" || name == "bmp-peer-msg-pending-count" || name == "tos-type" || name == "tos-value" || name == "update-source-interface-name" || name == "update-source-vrf-id" || name == "bmp-vrf-name" || name == "bmp-vrf-id" || name == "bmp-update-mode" || name == "tcp-keep-alive-interval" || name == "tcp-maximum-segment-size" || name == "tcp-write-cb-pending" || name == "tcp-last-write-result" || name == "tcp-last-write-cb-time" || name == "tcp-last-write-time" || name == "bmpq-last-write-pulse-sent-time" || name == "bmpq-last-all-write-pulse-sent-time" || name == "bmpq-last-write-pulse-cb-time" || name == "path-update-count" || name == "path-withdraw-count" || name == "path-update-drop" || name == "path-withdraw-drop" || name == "bmp-peer-msg-pending-count-max" || name == "bmp-peer-msg-pending-count-hwts" || name == "bmp-bytes-written-tcp" || name == "tcp-write-time" || name == "bmpr-mon-upd-messages" || name == "bmpr-mon-wdraw-messages" || name == "bmp-messages-wdraw-discarded" || name == "bmp-pfx-wdraw-discarded" || name == "bmp-per-peer-msg-route-mon-count" || name == "bmpr-mon-update-gen-time" || name == "bmpr-mon-eo-rmessages" || name == "bmp-rmon-cur-buffer-size" || name == "bmp-maximum-buffer-size-route-mon" || name == "bmp-server-up-count" || name == "bmp-upd-gen-in-progress" || name == "bmp-reset-walk-in-progress")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::BmpServerStateAge()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "bmp-server-state-age"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::~BmpServerStateAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-age";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::BmpServerStateTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "bmp-server-state-time-spec"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::~BmpServerStateTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::BmpServerLastDisconTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "bmp-server-last-discon-time"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::~BmpServerLastDisconTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-last-discon-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::UpdateSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "update-source-address"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::~UpdateSourceAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpafiInfo()
    :
    bmpaf_name{YType::enumeration, "bmpaf-name"},
    bmp_resume_prefix_len{YType::uint32, "bmp-resume-prefix-len"},
    bmp_upd_gen_resume_start_version{YType::uint32, "bmp-upd-gen-resume-start-version"},
    bmp_upd_gen_resume_end_version{YType::uint32, "bmp-upd-gen-resume-end-version"},
    bmp_upd_gen_walk_stopped{YType::boolean, "bmp-upd-gen-walk-stopped"},
    bmp_upd_gen_resume_net_version{YType::uint32, "bmp-upd-gen-resume-net-version"},
    bmp_upd_gen_walk_run_time_stamp{YType::uint64, "bmp-upd-gen-walk-run-time-stamp"},
    bmp_upd_gen_walk_run_count{YType::uint64, "bmp-upd-gen-walk-run-count"},
    bmp_upd_gen_walk_stop_time_stamp{YType::uint64, "bmp-upd-gen-walk-stop-time-stamp"},
    bmp_upd_gen_walk_stop_count{YType::uint64, "bmp-upd-gen-walk-stop-count"},
    bmp_init_eor_end_version{YType::uint32, "bmp-init-eor-end-version"},
    bmp_init_eor_pending_cnt{YType::uint32, "bmp-init-eor-pending-cnt"},
    bmp_filter_neighbor_address_set{YType::boolean, "bmp-filter-neighbor-address-set"},
    bmp_filter_nbr_cnt{YType::uint32, "bmp-filter-nbr-cnt"},
    bmp_send_version{YType::uint32, "bmp-send-version"}
    	,
    bmp_resume_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix>())
	,bmp_filter_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress>())
{
    bmp_resume_prefix->parent = this;
    bmp_filter_neighbor_address->parent = this;

    yang_name = "bmpafi-info"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::~BmpafiInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::has_data() const
{
    return bmpaf_name.is_set
	|| bmp_resume_prefix_len.is_set
	|| bmp_upd_gen_resume_start_version.is_set
	|| bmp_upd_gen_resume_end_version.is_set
	|| bmp_upd_gen_walk_stopped.is_set
	|| bmp_upd_gen_resume_net_version.is_set
	|| bmp_upd_gen_walk_run_time_stamp.is_set
	|| bmp_upd_gen_walk_run_count.is_set
	|| bmp_upd_gen_walk_stop_time_stamp.is_set
	|| bmp_upd_gen_walk_stop_count.is_set
	|| bmp_init_eor_end_version.is_set
	|| bmp_init_eor_pending_cnt.is_set
	|| bmp_filter_neighbor_address_set.is_set
	|| bmp_filter_nbr_cnt.is_set
	|| bmp_send_version.is_set
	|| (bmp_resume_prefix !=  nullptr && bmp_resume_prefix->has_data())
	|| (bmp_filter_neighbor_address !=  nullptr && bmp_filter_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmpaf_name.yfilter)
	|| ydk::is_set(bmp_resume_prefix_len.yfilter)
	|| ydk::is_set(bmp_upd_gen_resume_start_version.yfilter)
	|| ydk::is_set(bmp_upd_gen_resume_end_version.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_stopped.yfilter)
	|| ydk::is_set(bmp_upd_gen_resume_net_version.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_run_time_stamp.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_run_count.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_stop_time_stamp.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_stop_count.yfilter)
	|| ydk::is_set(bmp_init_eor_end_version.yfilter)
	|| ydk::is_set(bmp_init_eor_pending_cnt.yfilter)
	|| ydk::is_set(bmp_filter_neighbor_address_set.yfilter)
	|| ydk::is_set(bmp_filter_nbr_cnt.yfilter)
	|| ydk::is_set(bmp_send_version.yfilter)
	|| (bmp_resume_prefix !=  nullptr && bmp_resume_prefix->has_operation())
	|| (bmp_filter_neighbor_address !=  nullptr && bmp_filter_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmpafi-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmpaf_name.is_set || is_set(bmpaf_name.yfilter)) leaf_name_data.push_back(bmpaf_name.get_name_leafdata());
    if (bmp_resume_prefix_len.is_set || is_set(bmp_resume_prefix_len.yfilter)) leaf_name_data.push_back(bmp_resume_prefix_len.get_name_leafdata());
    if (bmp_upd_gen_resume_start_version.is_set || is_set(bmp_upd_gen_resume_start_version.yfilter)) leaf_name_data.push_back(bmp_upd_gen_resume_start_version.get_name_leafdata());
    if (bmp_upd_gen_resume_end_version.is_set || is_set(bmp_upd_gen_resume_end_version.yfilter)) leaf_name_data.push_back(bmp_upd_gen_resume_end_version.get_name_leafdata());
    if (bmp_upd_gen_walk_stopped.is_set || is_set(bmp_upd_gen_walk_stopped.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_stopped.get_name_leafdata());
    if (bmp_upd_gen_resume_net_version.is_set || is_set(bmp_upd_gen_resume_net_version.yfilter)) leaf_name_data.push_back(bmp_upd_gen_resume_net_version.get_name_leafdata());
    if (bmp_upd_gen_walk_run_time_stamp.is_set || is_set(bmp_upd_gen_walk_run_time_stamp.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_run_time_stamp.get_name_leafdata());
    if (bmp_upd_gen_walk_run_count.is_set || is_set(bmp_upd_gen_walk_run_count.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_run_count.get_name_leafdata());
    if (bmp_upd_gen_walk_stop_time_stamp.is_set || is_set(bmp_upd_gen_walk_stop_time_stamp.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_stop_time_stamp.get_name_leafdata());
    if (bmp_upd_gen_walk_stop_count.is_set || is_set(bmp_upd_gen_walk_stop_count.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_stop_count.get_name_leafdata());
    if (bmp_init_eor_end_version.is_set || is_set(bmp_init_eor_end_version.yfilter)) leaf_name_data.push_back(bmp_init_eor_end_version.get_name_leafdata());
    if (bmp_init_eor_pending_cnt.is_set || is_set(bmp_init_eor_pending_cnt.yfilter)) leaf_name_data.push_back(bmp_init_eor_pending_cnt.get_name_leafdata());
    if (bmp_filter_neighbor_address_set.is_set || is_set(bmp_filter_neighbor_address_set.yfilter)) leaf_name_data.push_back(bmp_filter_neighbor_address_set.get_name_leafdata());
    if (bmp_filter_nbr_cnt.is_set || is_set(bmp_filter_nbr_cnt.yfilter)) leaf_name_data.push_back(bmp_filter_nbr_cnt.get_name_leafdata());
    if (bmp_send_version.is_set || is_set(bmp_send_version.yfilter)) leaf_name_data.push_back(bmp_send_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-resume-prefix")
    {
        if(bmp_resume_prefix == nullptr)
        {
            bmp_resume_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix>();
        }
        return bmp_resume_prefix;
    }

    if(child_yang_name == "bmp-filter-neighbor-address")
    {
        if(bmp_filter_neighbor_address == nullptr)
        {
            bmp_filter_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress>();
        }
        return bmp_filter_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bmp_resume_prefix != nullptr)
    {
        children["bmp-resume-prefix"] = bmp_resume_prefix;
    }

    if(bmp_filter_neighbor_address != nullptr)
    {
        children["bmp-filter-neighbor-address"] = bmp_filter_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmpaf-name")
    {
        bmpaf_name = value;
        bmpaf_name.value_namespace = name_space;
        bmpaf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-resume-prefix-len")
    {
        bmp_resume_prefix_len = value;
        bmp_resume_prefix_len.value_namespace = name_space;
        bmp_resume_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-resume-start-version")
    {
        bmp_upd_gen_resume_start_version = value;
        bmp_upd_gen_resume_start_version.value_namespace = name_space;
        bmp_upd_gen_resume_start_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-resume-end-version")
    {
        bmp_upd_gen_resume_end_version = value;
        bmp_upd_gen_resume_end_version.value_namespace = name_space;
        bmp_upd_gen_resume_end_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-stopped")
    {
        bmp_upd_gen_walk_stopped = value;
        bmp_upd_gen_walk_stopped.value_namespace = name_space;
        bmp_upd_gen_walk_stopped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-resume-net-version")
    {
        bmp_upd_gen_resume_net_version = value;
        bmp_upd_gen_resume_net_version.value_namespace = name_space;
        bmp_upd_gen_resume_net_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-run-time-stamp")
    {
        bmp_upd_gen_walk_run_time_stamp = value;
        bmp_upd_gen_walk_run_time_stamp.value_namespace = name_space;
        bmp_upd_gen_walk_run_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-run-count")
    {
        bmp_upd_gen_walk_run_count = value;
        bmp_upd_gen_walk_run_count.value_namespace = name_space;
        bmp_upd_gen_walk_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-stop-time-stamp")
    {
        bmp_upd_gen_walk_stop_time_stamp = value;
        bmp_upd_gen_walk_stop_time_stamp.value_namespace = name_space;
        bmp_upd_gen_walk_stop_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-stop-count")
    {
        bmp_upd_gen_walk_stop_count = value;
        bmp_upd_gen_walk_stop_count.value_namespace = name_space;
        bmp_upd_gen_walk_stop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-init-eor-end-version")
    {
        bmp_init_eor_end_version = value;
        bmp_init_eor_end_version.value_namespace = name_space;
        bmp_init_eor_end_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-init-eor-pending-cnt")
    {
        bmp_init_eor_pending_cnt = value;
        bmp_init_eor_pending_cnt.value_namespace = name_space;
        bmp_init_eor_pending_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-filter-neighbor-address-set")
    {
        bmp_filter_neighbor_address_set = value;
        bmp_filter_neighbor_address_set.value_namespace = name_space;
        bmp_filter_neighbor_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-filter-nbr-cnt")
    {
        bmp_filter_nbr_cnt = value;
        bmp_filter_nbr_cnt.value_namespace = name_space;
        bmp_filter_nbr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-send-version")
    {
        bmp_send_version = value;
        bmp_send_version.value_namespace = name_space;
        bmp_send_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmpaf-name")
    {
        bmpaf_name.yfilter = yfilter;
    }
    if(value_path == "bmp-resume-prefix-len")
    {
        bmp_resume_prefix_len.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-resume-start-version")
    {
        bmp_upd_gen_resume_start_version.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-resume-end-version")
    {
        bmp_upd_gen_resume_end_version.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-stopped")
    {
        bmp_upd_gen_walk_stopped.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-resume-net-version")
    {
        bmp_upd_gen_resume_net_version.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-run-time-stamp")
    {
        bmp_upd_gen_walk_run_time_stamp.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-run-count")
    {
        bmp_upd_gen_walk_run_count.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-stop-time-stamp")
    {
        bmp_upd_gen_walk_stop_time_stamp.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-stop-count")
    {
        bmp_upd_gen_walk_stop_count.yfilter = yfilter;
    }
    if(value_path == "bmp-init-eor-end-version")
    {
        bmp_init_eor_end_version.yfilter = yfilter;
    }
    if(value_path == "bmp-init-eor-pending-cnt")
    {
        bmp_init_eor_pending_cnt.yfilter = yfilter;
    }
    if(value_path == "bmp-filter-neighbor-address-set")
    {
        bmp_filter_neighbor_address_set.yfilter = yfilter;
    }
    if(value_path == "bmp-filter-nbr-cnt")
    {
        bmp_filter_nbr_cnt.yfilter = yfilter;
    }
    if(value_path == "bmp-send-version")
    {
        bmp_send_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-resume-prefix" || name == "bmp-filter-neighbor-address" || name == "bmpaf-name" || name == "bmp-resume-prefix-len" || name == "bmp-upd-gen-resume-start-version" || name == "bmp-upd-gen-resume-end-version" || name == "bmp-upd-gen-walk-stopped" || name == "bmp-upd-gen-resume-net-version" || name == "bmp-upd-gen-walk-run-time-stamp" || name == "bmp-upd-gen-walk-run-count" || name == "bmp-upd-gen-walk-stop-time-stamp" || name == "bmp-upd-gen-walk-stop-count" || name == "bmp-init-eor-end-version" || name == "bmp-init-eor-pending-cnt" || name == "bmp-filter-neighbor-address-set" || name == "bmp-filter-nbr-cnt" || name == "bmp-send-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::BmpResumePrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bmp-resume-prefix"; yang_parent_name = "bmpafi-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::~BmpResumePrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-resume-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bmp-resume-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::BmpFilterNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "bmp-filter-neighbor-address"; yang_parent_name = "bmpafi-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::~BmpFilterNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-filter-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "bmp-filter-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "bmp-filter-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "bmp-filter-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "bmp-filter-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbors()
{

    yang_name = "server-neighbors"; yang_parent_name = "bmp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::~ServerNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::has_data() const
{
    for (std::size_t index=0; index<server_neighbor.size(); index++)
    {
        if(server_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::has_operation() const
{
    for (std::size_t index=0; index<server_neighbor.size(); index++)
    {
        if(server_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-neighbor")
    {
        for(auto const & c : server_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor>();
        c->parent = this;
        server_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::ServerNeighbor()
    :
    server_id{YType::uint32, "server-id"}
    	,
    monitored_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors>())
{
    monitored_neighbors->parent = this;

    yang_name = "server-neighbor"; yang_parent_name = "server-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::~ServerNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::has_data() const
{
    return server_id.is_set
	|| (monitored_neighbors !=  nullptr && monitored_neighbors->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter)
	|| (monitored_neighbors !=  nullptr && monitored_neighbors->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-neighbor" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitored-neighbors")
    {
        if(monitored_neighbors == nullptr)
        {
            monitored_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors>();
        }
        return monitored_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitored_neighbors != nullptr)
    {
        children["monitored-neighbors"] = monitored_neighbors;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitored-neighbors" || name == "server-id")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbors()
{

    yang_name = "monitored-neighbors"; yang_parent_name = "server-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::~MonitoredNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_data() const
{
    for (std::size_t index=0; index<monitored_neighbor.size(); index++)
    {
        if(monitored_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_operation() const
{
    for (std::size_t index=0; index<monitored_neighbor.size(); index++)
    {
        if(monitored_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitored-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitored-neighbor")
    {
        for(auto const & c : monitored_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor>();
        c->parent = this;
        monitored_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitored_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitored-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::MonitoredNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    bmp_neighbor_msg_pending{YType::uint32, "bmp-neighbor-msg-pending"},
    bmp_neighbor_msg_dropped{YType::uint32, "bmp-neighbor-msg-dropped"},
    bmp_neighbor_peer_up_sent{YType::uint32, "bmp-neighbor-peer-up-sent"},
    bmp_neighbor_peer_down_sent{YType::uint32, "bmp-neighbor-peer-down-sent"},
    bmp_neighbor_route_monitor_sent{YType::uint32, "bmp-neighbor-route-monitor-sent"},
    bmp_neighbor_route_monitor_eor_sent{YType::uint32, "bmp-neighbor-route-monitor-eor-sent"},
    bmp_neighbor_path_update_sent{YType::uint32, "bmp-neighbor-path-update-sent"},
    bmp_neighbor_path_withdraw_sent{YType::uint32, "bmp-neighbor-path-withdraw-sent"},
    bmp_neighbor_path_update_drop{YType::uint32, "bmp-neighbor-path-update-drop"},
    bmp_neighbor_path_withdraw_drop{YType::uint32, "bmp-neighbor-path-withdraw-drop"},
    bmp_neighbor_upd_msg_sent{YType::uint32, "bmp-neighbor-upd-msg-sent"},
    bmp_neighbor_wdraw_msg_sent{YType::uint32, "bmp-neighbor-wdraw-msg-sent"}
    	,
    bmp_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress>())
{
    bmp_neighbor_address->parent = this;

    yang_name = "monitored-neighbor"; yang_parent_name = "monitored-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::~MonitoredNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_data() const
{
    return neighbor_address.is_set
	|| bmp_neighbor_msg_pending.is_set
	|| bmp_neighbor_msg_dropped.is_set
	|| bmp_neighbor_peer_up_sent.is_set
	|| bmp_neighbor_peer_down_sent.is_set
	|| bmp_neighbor_route_monitor_sent.is_set
	|| bmp_neighbor_route_monitor_eor_sent.is_set
	|| bmp_neighbor_path_update_sent.is_set
	|| bmp_neighbor_path_withdraw_sent.is_set
	|| bmp_neighbor_path_update_drop.is_set
	|| bmp_neighbor_path_withdraw_drop.is_set
	|| bmp_neighbor_upd_msg_sent.is_set
	|| bmp_neighbor_wdraw_msg_sent.is_set
	|| (bmp_neighbor_address !=  nullptr && bmp_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(bmp_neighbor_msg_pending.yfilter)
	|| ydk::is_set(bmp_neighbor_msg_dropped.yfilter)
	|| ydk::is_set(bmp_neighbor_peer_up_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_peer_down_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_route_monitor_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_route_monitor_eor_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_path_update_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_path_withdraw_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_path_update_drop.yfilter)
	|| ydk::is_set(bmp_neighbor_path_withdraw_drop.yfilter)
	|| ydk::is_set(bmp_neighbor_upd_msg_sent.yfilter)
	|| ydk::is_set(bmp_neighbor_wdraw_msg_sent.yfilter)
	|| (bmp_neighbor_address !=  nullptr && bmp_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitored-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (bmp_neighbor_msg_pending.is_set || is_set(bmp_neighbor_msg_pending.yfilter)) leaf_name_data.push_back(bmp_neighbor_msg_pending.get_name_leafdata());
    if (bmp_neighbor_msg_dropped.is_set || is_set(bmp_neighbor_msg_dropped.yfilter)) leaf_name_data.push_back(bmp_neighbor_msg_dropped.get_name_leafdata());
    if (bmp_neighbor_peer_up_sent.is_set || is_set(bmp_neighbor_peer_up_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_peer_up_sent.get_name_leafdata());
    if (bmp_neighbor_peer_down_sent.is_set || is_set(bmp_neighbor_peer_down_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_peer_down_sent.get_name_leafdata());
    if (bmp_neighbor_route_monitor_sent.is_set || is_set(bmp_neighbor_route_monitor_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_route_monitor_sent.get_name_leafdata());
    if (bmp_neighbor_route_monitor_eor_sent.is_set || is_set(bmp_neighbor_route_monitor_eor_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_route_monitor_eor_sent.get_name_leafdata());
    if (bmp_neighbor_path_update_sent.is_set || is_set(bmp_neighbor_path_update_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_path_update_sent.get_name_leafdata());
    if (bmp_neighbor_path_withdraw_sent.is_set || is_set(bmp_neighbor_path_withdraw_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_path_withdraw_sent.get_name_leafdata());
    if (bmp_neighbor_path_update_drop.is_set || is_set(bmp_neighbor_path_update_drop.yfilter)) leaf_name_data.push_back(bmp_neighbor_path_update_drop.get_name_leafdata());
    if (bmp_neighbor_path_withdraw_drop.is_set || is_set(bmp_neighbor_path_withdraw_drop.yfilter)) leaf_name_data.push_back(bmp_neighbor_path_withdraw_drop.get_name_leafdata());
    if (bmp_neighbor_upd_msg_sent.is_set || is_set(bmp_neighbor_upd_msg_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_upd_msg_sent.get_name_leafdata());
    if (bmp_neighbor_wdraw_msg_sent.is_set || is_set(bmp_neighbor_wdraw_msg_sent.yfilter)) leaf_name_data.push_back(bmp_neighbor_wdraw_msg_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-neighbor-address")
    {
        if(bmp_neighbor_address == nullptr)
        {
            bmp_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress>();
        }
        return bmp_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bmp_neighbor_address != nullptr)
    {
        children["bmp-neighbor-address"] = bmp_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-msg-pending")
    {
        bmp_neighbor_msg_pending = value;
        bmp_neighbor_msg_pending.value_namespace = name_space;
        bmp_neighbor_msg_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-msg-dropped")
    {
        bmp_neighbor_msg_dropped = value;
        bmp_neighbor_msg_dropped.value_namespace = name_space;
        bmp_neighbor_msg_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-peer-up-sent")
    {
        bmp_neighbor_peer_up_sent = value;
        bmp_neighbor_peer_up_sent.value_namespace = name_space;
        bmp_neighbor_peer_up_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-peer-down-sent")
    {
        bmp_neighbor_peer_down_sent = value;
        bmp_neighbor_peer_down_sent.value_namespace = name_space;
        bmp_neighbor_peer_down_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-route-monitor-sent")
    {
        bmp_neighbor_route_monitor_sent = value;
        bmp_neighbor_route_monitor_sent.value_namespace = name_space;
        bmp_neighbor_route_monitor_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-route-monitor-eor-sent")
    {
        bmp_neighbor_route_monitor_eor_sent = value;
        bmp_neighbor_route_monitor_eor_sent.value_namespace = name_space;
        bmp_neighbor_route_monitor_eor_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-path-update-sent")
    {
        bmp_neighbor_path_update_sent = value;
        bmp_neighbor_path_update_sent.value_namespace = name_space;
        bmp_neighbor_path_update_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-path-withdraw-sent")
    {
        bmp_neighbor_path_withdraw_sent = value;
        bmp_neighbor_path_withdraw_sent.value_namespace = name_space;
        bmp_neighbor_path_withdraw_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-path-update-drop")
    {
        bmp_neighbor_path_update_drop = value;
        bmp_neighbor_path_update_drop.value_namespace = name_space;
        bmp_neighbor_path_update_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-path-withdraw-drop")
    {
        bmp_neighbor_path_withdraw_drop = value;
        bmp_neighbor_path_withdraw_drop.value_namespace = name_space;
        bmp_neighbor_path_withdraw_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-upd-msg-sent")
    {
        bmp_neighbor_upd_msg_sent = value;
        bmp_neighbor_upd_msg_sent.value_namespace = name_space;
        bmp_neighbor_upd_msg_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-neighbor-wdraw-msg-sent")
    {
        bmp_neighbor_wdraw_msg_sent = value;
        bmp_neighbor_wdraw_msg_sent.value_namespace = name_space;
        bmp_neighbor_wdraw_msg_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-msg-pending")
    {
        bmp_neighbor_msg_pending.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-msg-dropped")
    {
        bmp_neighbor_msg_dropped.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-peer-up-sent")
    {
        bmp_neighbor_peer_up_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-peer-down-sent")
    {
        bmp_neighbor_peer_down_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-route-monitor-sent")
    {
        bmp_neighbor_route_monitor_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-route-monitor-eor-sent")
    {
        bmp_neighbor_route_monitor_eor_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-path-update-sent")
    {
        bmp_neighbor_path_update_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-path-withdraw-sent")
    {
        bmp_neighbor_path_withdraw_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-path-update-drop")
    {
        bmp_neighbor_path_update_drop.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-path-withdraw-drop")
    {
        bmp_neighbor_path_withdraw_drop.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-upd-msg-sent")
    {
        bmp_neighbor_upd_msg_sent.yfilter = yfilter;
    }
    if(value_path == "bmp-neighbor-wdraw-msg-sent")
    {
        bmp_neighbor_wdraw_msg_sent.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-neighbor-address" || name == "neighbor-address" || name == "bmp-neighbor-msg-pending" || name == "bmp-neighbor-msg-dropped" || name == "bmp-neighbor-peer-up-sent" || name == "bmp-neighbor-peer-down-sent" || name == "bmp-neighbor-route-monitor-sent" || name == "bmp-neighbor-route-monitor-eor-sent" || name == "bmp-neighbor-path-update-sent" || name == "bmp-neighbor-path-withdraw-sent" || name == "bmp-neighbor-path-update-drop" || name == "bmp-neighbor-path-withdraw-drop" || name == "bmp-neighbor-upd-msg-sent" || name == "bmp-neighbor-wdraw-msg-sent")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::BmpNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "bmp-neighbor-address"; yang_parent_name = "monitored-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::~BmpNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "bmp-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "bmp-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "bmp-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "bmp-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::ProcessInfo()
    :
    process_instance{YType::uint8, "process-instance"},
    vrf_name{YType::str, "vrf-name"},
    vrf_totals{YType::boolean, "vrf-totals"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics>())
{
    global->parent = this;
    vrf->parent = this;
    performance_statistics->parent = this;

    yang_name = "process-info"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::~ProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::has_data() const
{
    return process_instance.is_set
	|| vrf_name.is_set
	|| vrf_totals.is_set
	|| (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_instance.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_totals.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_instance.is_set || is_set(process_instance.yfilter)) leaf_name_data.push_back(process_instance.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_totals.is_set || is_set(vrf_totals.yfilter)) leaf_name_data.push_back(vrf_totals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-instance")
    {
        process_instance = value;
        process_instance.value_namespace = name_space;
        process_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals = value;
        vrf_totals.value_namespace = name_space;
        vrf_totals.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-instance")
    {
        process_instance.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf" || name == "performance-statistics" || name == "process-instance" || name == "vrf-name" || name == "vrf-totals")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::Global()
    :
    process_instance_node{YType::str, "process-instance-node"},
    restart_count{YType::uint32, "restart-count"},
    path_attributes_entry_count{YType::uint32, "path-attributes-entry-count"},
    path_attribute_memory{YType::uint32, "path-attribute-memory"},
    as_path_entry_count{YType::uint32, "as-path-entry-count"},
    as_path_entries_memory{YType::uint32, "as-path-entries-memory"},
    community_entry_count{YType::uint32, "community-entry-count"},
    community_memory{YType::uint32, "community-memory"},
    extended_community_entry_count{YType::uint32, "extended-community-entry-count"},
    extended_community_memory{YType::uint32, "extended-community-memory"},
    pe_distinguisher_label_entry_count{YType::uint32, "pe-distinguisher-label-entry-count"},
    pe_distinguisher_label_memory{YType::uint32, "pe-distinguisher-label-memory"},
    pta_entry_count{YType::uint32, "pta-entry-count"},
    pta_memory{YType::uint32, "pta-memory"},
    tunnel_encap_entry_count{YType::uint32, "tunnel-encap-entry-count"},
    tunnel_encap_memory{YType::uint32, "tunnel-encap-memory"},
    ribrnh_entry_count{YType::uint32, "ribrnh-entry-count"},
    ribrnh_memory{YType::uint32, "ribrnh-memory"},
    ppmp_entry_count{YType::uint32, "ppmp-entry-count"},
    ppmp_memory{YType::uint32, "ppmp-memory"},
    route_reflectors{YType::uint32, "route-reflectors"},
    route_reflector_memory{YType::uint32, "route-reflector-memory"},
    nexthop_count{YType::uint32, "nexthop-count"},
    nexthop_memory{YType::uint32, "nexthop-memory"},
    lsattr_entry_count{YType::uint32, "lsattr-entry-count"},
    lsattr_memory{YType::uint32, "lsattr-memory"},
    attr_set_entry_count{YType::uint32, "attr-set-entry-count"},
    attr_set_memory{YType::uint32, "attr-set-memory"},
    lindex_entry_count{YType::uint32, "lindex-entry-count"},
    lindex_memory{YType::uint32, "lindex-memory"},
    local_as{YType::uint32, "local-as"},
    total_vrf_count{YType::uint32, "total-vrf-count"},
    neighbors_count_total{YType::uint32, "neighbors-count-total"},
    established_neighbors_count_total{YType::uint32, "established-neighbors-count-total"},
    sn_num_non_dflt_vrf_nbrs{YType::uint32, "sn-num-non-dflt-vrf-nbrs"},
    sn_num_non_dflt_vrf_nbrs_estab{YType::uint32, "sn-num-non-dflt-vrf-nbrs-estab"},
    large_community_entry_count{YType::uint32, "large-community-entry-count"},
    large_community_memory{YType::uint32, "large-community-memory"}
{

    yang_name = "global"; yang_parent_name = "process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_data())
            return true;
    }
    return process_instance_node.is_set
	|| restart_count.is_set
	|| path_attributes_entry_count.is_set
	|| path_attribute_memory.is_set
	|| as_path_entry_count.is_set
	|| as_path_entries_memory.is_set
	|| community_entry_count.is_set
	|| community_memory.is_set
	|| extended_community_entry_count.is_set
	|| extended_community_memory.is_set
	|| pe_distinguisher_label_entry_count.is_set
	|| pe_distinguisher_label_memory.is_set
	|| pta_entry_count.is_set
	|| pta_memory.is_set
	|| tunnel_encap_entry_count.is_set
	|| tunnel_encap_memory.is_set
	|| ribrnh_entry_count.is_set
	|| ribrnh_memory.is_set
	|| ppmp_entry_count.is_set
	|| ppmp_memory.is_set
	|| route_reflectors.is_set
	|| route_reflector_memory.is_set
	|| nexthop_count.is_set
	|| nexthop_memory.is_set
	|| lsattr_entry_count.is_set
	|| lsattr_memory.is_set
	|| attr_set_entry_count.is_set
	|| attr_set_memory.is_set
	|| lindex_entry_count.is_set
	|| lindex_memory.is_set
	|| local_as.is_set
	|| total_vrf_count.is_set
	|| neighbors_count_total.is_set
	|| established_neighbors_count_total.is_set
	|| sn_num_non_dflt_vrf_nbrs.is_set
	|| sn_num_non_dflt_vrf_nbrs_estab.is_set
	|| large_community_entry_count.is_set
	|| large_community_memory.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_instance_node.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(path_attributes_entry_count.yfilter)
	|| ydk::is_set(path_attribute_memory.yfilter)
	|| ydk::is_set(as_path_entry_count.yfilter)
	|| ydk::is_set(as_path_entries_memory.yfilter)
	|| ydk::is_set(community_entry_count.yfilter)
	|| ydk::is_set(community_memory.yfilter)
	|| ydk::is_set(extended_community_entry_count.yfilter)
	|| ydk::is_set(extended_community_memory.yfilter)
	|| ydk::is_set(pe_distinguisher_label_entry_count.yfilter)
	|| ydk::is_set(pe_distinguisher_label_memory.yfilter)
	|| ydk::is_set(pta_entry_count.yfilter)
	|| ydk::is_set(pta_memory.yfilter)
	|| ydk::is_set(tunnel_encap_entry_count.yfilter)
	|| ydk::is_set(tunnel_encap_memory.yfilter)
	|| ydk::is_set(ribrnh_entry_count.yfilter)
	|| ydk::is_set(ribrnh_memory.yfilter)
	|| ydk::is_set(ppmp_entry_count.yfilter)
	|| ydk::is_set(ppmp_memory.yfilter)
	|| ydk::is_set(route_reflectors.yfilter)
	|| ydk::is_set(route_reflector_memory.yfilter)
	|| ydk::is_set(nexthop_count.yfilter)
	|| ydk::is_set(nexthop_memory.yfilter)
	|| ydk::is_set(lsattr_entry_count.yfilter)
	|| ydk::is_set(lsattr_memory.yfilter)
	|| ydk::is_set(attr_set_entry_count.yfilter)
	|| ydk::is_set(attr_set_memory.yfilter)
	|| ydk::is_set(lindex_entry_count.yfilter)
	|| ydk::is_set(lindex_memory.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(total_vrf_count.yfilter)
	|| ydk::is_set(neighbors_count_total.yfilter)
	|| ydk::is_set(established_neighbors_count_total.yfilter)
	|| ydk::is_set(sn_num_non_dflt_vrf_nbrs.yfilter)
	|| ydk::is_set(sn_num_non_dflt_vrf_nbrs_estab.yfilter)
	|| ydk::is_set(large_community_entry_count.yfilter)
	|| ydk::is_set(large_community_memory.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_instance_node.is_set || is_set(process_instance_node.yfilter)) leaf_name_data.push_back(process_instance_node.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (path_attributes_entry_count.is_set || is_set(path_attributes_entry_count.yfilter)) leaf_name_data.push_back(path_attributes_entry_count.get_name_leafdata());
    if (path_attribute_memory.is_set || is_set(path_attribute_memory.yfilter)) leaf_name_data.push_back(path_attribute_memory.get_name_leafdata());
    if (as_path_entry_count.is_set || is_set(as_path_entry_count.yfilter)) leaf_name_data.push_back(as_path_entry_count.get_name_leafdata());
    if (as_path_entries_memory.is_set || is_set(as_path_entries_memory.yfilter)) leaf_name_data.push_back(as_path_entries_memory.get_name_leafdata());
    if (community_entry_count.is_set || is_set(community_entry_count.yfilter)) leaf_name_data.push_back(community_entry_count.get_name_leafdata());
    if (community_memory.is_set || is_set(community_memory.yfilter)) leaf_name_data.push_back(community_memory.get_name_leafdata());
    if (extended_community_entry_count.is_set || is_set(extended_community_entry_count.yfilter)) leaf_name_data.push_back(extended_community_entry_count.get_name_leafdata());
    if (extended_community_memory.is_set || is_set(extended_community_memory.yfilter)) leaf_name_data.push_back(extended_community_memory.get_name_leafdata());
    if (pe_distinguisher_label_entry_count.is_set || is_set(pe_distinguisher_label_entry_count.yfilter)) leaf_name_data.push_back(pe_distinguisher_label_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_memory.is_set || is_set(pe_distinguisher_label_memory.yfilter)) leaf_name_data.push_back(pe_distinguisher_label_memory.get_name_leafdata());
    if (pta_entry_count.is_set || is_set(pta_entry_count.yfilter)) leaf_name_data.push_back(pta_entry_count.get_name_leafdata());
    if (pta_memory.is_set || is_set(pta_memory.yfilter)) leaf_name_data.push_back(pta_memory.get_name_leafdata());
    if (tunnel_encap_entry_count.is_set || is_set(tunnel_encap_entry_count.yfilter)) leaf_name_data.push_back(tunnel_encap_entry_count.get_name_leafdata());
    if (tunnel_encap_memory.is_set || is_set(tunnel_encap_memory.yfilter)) leaf_name_data.push_back(tunnel_encap_memory.get_name_leafdata());
    if (ribrnh_entry_count.is_set || is_set(ribrnh_entry_count.yfilter)) leaf_name_data.push_back(ribrnh_entry_count.get_name_leafdata());
    if (ribrnh_memory.is_set || is_set(ribrnh_memory.yfilter)) leaf_name_data.push_back(ribrnh_memory.get_name_leafdata());
    if (ppmp_entry_count.is_set || is_set(ppmp_entry_count.yfilter)) leaf_name_data.push_back(ppmp_entry_count.get_name_leafdata());
    if (ppmp_memory.is_set || is_set(ppmp_memory.yfilter)) leaf_name_data.push_back(ppmp_memory.get_name_leafdata());
    if (route_reflectors.is_set || is_set(route_reflectors.yfilter)) leaf_name_data.push_back(route_reflectors.get_name_leafdata());
    if (route_reflector_memory.is_set || is_set(route_reflector_memory.yfilter)) leaf_name_data.push_back(route_reflector_memory.get_name_leafdata());
    if (nexthop_count.is_set || is_set(nexthop_count.yfilter)) leaf_name_data.push_back(nexthop_count.get_name_leafdata());
    if (nexthop_memory.is_set || is_set(nexthop_memory.yfilter)) leaf_name_data.push_back(nexthop_memory.get_name_leafdata());
    if (lsattr_entry_count.is_set || is_set(lsattr_entry_count.yfilter)) leaf_name_data.push_back(lsattr_entry_count.get_name_leafdata());
    if (lsattr_memory.is_set || is_set(lsattr_memory.yfilter)) leaf_name_data.push_back(lsattr_memory.get_name_leafdata());
    if (attr_set_entry_count.is_set || is_set(attr_set_entry_count.yfilter)) leaf_name_data.push_back(attr_set_entry_count.get_name_leafdata());
    if (attr_set_memory.is_set || is_set(attr_set_memory.yfilter)) leaf_name_data.push_back(attr_set_memory.get_name_leafdata());
    if (lindex_entry_count.is_set || is_set(lindex_entry_count.yfilter)) leaf_name_data.push_back(lindex_entry_count.get_name_leafdata());
    if (lindex_memory.is_set || is_set(lindex_memory.yfilter)) leaf_name_data.push_back(lindex_memory.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (total_vrf_count.is_set || is_set(total_vrf_count.yfilter)) leaf_name_data.push_back(total_vrf_count.get_name_leafdata());
    if (neighbors_count_total.is_set || is_set(neighbors_count_total.yfilter)) leaf_name_data.push_back(neighbors_count_total.get_name_leafdata());
    if (established_neighbors_count_total.is_set || is_set(established_neighbors_count_total.yfilter)) leaf_name_data.push_back(established_neighbors_count_total.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs.is_set || is_set(sn_num_non_dflt_vrf_nbrs.yfilter)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs_estab.is_set || is_set(sn_num_non_dflt_vrf_nbrs_estab.yfilter)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs_estab.get_name_leafdata());
    if (large_community_entry_count.is_set || is_set(large_community_entry_count.yfilter)) leaf_name_data.push_back(large_community_entry_count.get_name_leafdata());
    if (large_community_memory.is_set || is_set(large_community_memory.yfilter)) leaf_name_data.push_back(large_community_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool-size")
    {
        for(auto const & c : pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize>();
        c->parent = this;
        pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-alloc-count")
    {
        for(auto const & c : pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount>();
        c->parent = this;
        pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-free-count")
    {
        for(auto const & c : pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount>();
        c->parent = this;
        pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-size")
    {
        for(auto const & c : msg_log_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize>();
        c->parent = this;
        msg_log_pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-alloc-count")
    {
        for(auto const & c : msg_log_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount>();
        c->parent = this;
        msg_log_pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-free-count")
    {
        for(auto const & c : msg_log_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount>();
        c->parent = this;
        msg_log_pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-size")
    {
        for(auto const & c : bmp_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize>();
        c->parent = this;
        bmp_pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-alloc-count")
    {
        for(auto const & c : bmp_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount>();
        c->parent = this;
        bmp_pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-free-count")
    {
        for(auto const & c : bmp_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount>();
        c->parent = this;
        bmp_pool_free_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-instance-node")
    {
        process_instance_node = value;
        process_instance_node.value_namespace = name_space;
        process_instance_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-attributes-entry-count")
    {
        path_attributes_entry_count = value;
        path_attributes_entry_count.value_namespace = name_space;
        path_attributes_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-attribute-memory")
    {
        path_attribute_memory = value;
        path_attribute_memory.value_namespace = name_space;
        path_attribute_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-entry-count")
    {
        as_path_entry_count = value;
        as_path_entry_count.value_namespace = name_space;
        as_path_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-entries-memory")
    {
        as_path_entries_memory = value;
        as_path_entries_memory.value_namespace = name_space;
        as_path_entries_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-entry-count")
    {
        community_entry_count = value;
        community_entry_count.value_namespace = name_space;
        community_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-memory")
    {
        community_memory = value;
        community_memory.value_namespace = name_space;
        community_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-entry-count")
    {
        extended_community_entry_count = value;
        extended_community_entry_count.value_namespace = name_space;
        extended_community_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-memory")
    {
        extended_community_memory = value;
        extended_community_memory.value_namespace = name_space;
        extended_community_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-distinguisher-label-entry-count")
    {
        pe_distinguisher_label_entry_count = value;
        pe_distinguisher_label_entry_count.value_namespace = name_space;
        pe_distinguisher_label_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-distinguisher-label-memory")
    {
        pe_distinguisher_label_memory = value;
        pe_distinguisher_label_memory.value_namespace = name_space;
        pe_distinguisher_label_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pta-entry-count")
    {
        pta_entry_count = value;
        pta_entry_count.value_namespace = name_space;
        pta_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pta-memory")
    {
        pta_memory = value;
        pta_memory.value_namespace = name_space;
        pta_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-entry-count")
    {
        tunnel_encap_entry_count = value;
        tunnel_encap_entry_count.value_namespace = name_space;
        tunnel_encap_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-memory")
    {
        tunnel_encap_memory = value;
        tunnel_encap_memory.value_namespace = name_space;
        tunnel_encap_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-entry-count")
    {
        ribrnh_entry_count = value;
        ribrnh_entry_count.value_namespace = name_space;
        ribrnh_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-memory")
    {
        ribrnh_memory = value;
        ribrnh_memory.value_namespace = name_space;
        ribrnh_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppmp-entry-count")
    {
        ppmp_entry_count = value;
        ppmp_entry_count.value_namespace = name_space;
        ppmp_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppmp-memory")
    {
        ppmp_memory = value;
        ppmp_memory.value_namespace = name_space;
        ppmp_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflectors")
    {
        route_reflectors = value;
        route_reflectors.value_namespace = name_space;
        route_reflectors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-memory")
    {
        route_reflector_memory = value;
        route_reflector_memory.value_namespace = name_space;
        route_reflector_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-count")
    {
        nexthop_count = value;
        nexthop_count.value_namespace = name_space;
        nexthop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-memory")
    {
        nexthop_memory = value;
        nexthop_memory.value_namespace = name_space;
        nexthop_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsattr-entry-count")
    {
        lsattr_entry_count = value;
        lsattr_entry_count.value_namespace = name_space;
        lsattr_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsattr-memory")
    {
        lsattr_memory = value;
        lsattr_memory.value_namespace = name_space;
        lsattr_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-set-entry-count")
    {
        attr_set_entry_count = value;
        attr_set_entry_count.value_namespace = name_space;
        attr_set_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-set-memory")
    {
        attr_set_memory = value;
        attr_set_memory.value_namespace = name_space;
        attr_set_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lindex-entry-count")
    {
        lindex_entry_count = value;
        lindex_entry_count.value_namespace = name_space;
        lindex_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lindex-memory")
    {
        lindex_memory = value;
        lindex_memory.value_namespace = name_space;
        lindex_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-vrf-count")
    {
        total_vrf_count = value;
        total_vrf_count.value_namespace = name_space;
        total_vrf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbors-count-total")
    {
        neighbors_count_total = value;
        neighbors_count_total.value_namespace = name_space;
        neighbors_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-neighbors-count-total")
    {
        established_neighbors_count_total = value;
        established_neighbors_count_total.value_namespace = name_space;
        established_neighbors_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs")
    {
        sn_num_non_dflt_vrf_nbrs = value;
        sn_num_non_dflt_vrf_nbrs.value_namespace = name_space;
        sn_num_non_dflt_vrf_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs-estab")
    {
        sn_num_non_dflt_vrf_nbrs_estab = value;
        sn_num_non_dflt_vrf_nbrs_estab.value_namespace = name_space;
        sn_num_non_dflt_vrf_nbrs_estab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "large-community-entry-count")
    {
        large_community_entry_count = value;
        large_community_entry_count.value_namespace = name_space;
        large_community_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "large-community-memory")
    {
        large_community_memory = value;
        large_community_memory.value_namespace = name_space;
        large_community_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-instance-node")
    {
        process_instance_node.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "path-attributes-entry-count")
    {
        path_attributes_entry_count.yfilter = yfilter;
    }
    if(value_path == "path-attribute-memory")
    {
        path_attribute_memory.yfilter = yfilter;
    }
    if(value_path == "as-path-entry-count")
    {
        as_path_entry_count.yfilter = yfilter;
    }
    if(value_path == "as-path-entries-memory")
    {
        as_path_entries_memory.yfilter = yfilter;
    }
    if(value_path == "community-entry-count")
    {
        community_entry_count.yfilter = yfilter;
    }
    if(value_path == "community-memory")
    {
        community_memory.yfilter = yfilter;
    }
    if(value_path == "extended-community-entry-count")
    {
        extended_community_entry_count.yfilter = yfilter;
    }
    if(value_path == "extended-community-memory")
    {
        extended_community_memory.yfilter = yfilter;
    }
    if(value_path == "pe-distinguisher-label-entry-count")
    {
        pe_distinguisher_label_entry_count.yfilter = yfilter;
    }
    if(value_path == "pe-distinguisher-label-memory")
    {
        pe_distinguisher_label_memory.yfilter = yfilter;
    }
    if(value_path == "pta-entry-count")
    {
        pta_entry_count.yfilter = yfilter;
    }
    if(value_path == "pta-memory")
    {
        pta_memory.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-entry-count")
    {
        tunnel_encap_entry_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-memory")
    {
        tunnel_encap_memory.yfilter = yfilter;
    }
    if(value_path == "ribrnh-entry-count")
    {
        ribrnh_entry_count.yfilter = yfilter;
    }
    if(value_path == "ribrnh-memory")
    {
        ribrnh_memory.yfilter = yfilter;
    }
    if(value_path == "ppmp-entry-count")
    {
        ppmp_entry_count.yfilter = yfilter;
    }
    if(value_path == "ppmp-memory")
    {
        ppmp_memory.yfilter = yfilter;
    }
    if(value_path == "route-reflectors")
    {
        route_reflectors.yfilter = yfilter;
    }
    if(value_path == "route-reflector-memory")
    {
        route_reflector_memory.yfilter = yfilter;
    }
    if(value_path == "nexthop-count")
    {
        nexthop_count.yfilter = yfilter;
    }
    if(value_path == "nexthop-memory")
    {
        nexthop_memory.yfilter = yfilter;
    }
    if(value_path == "lsattr-entry-count")
    {
        lsattr_entry_count.yfilter = yfilter;
    }
    if(value_path == "lsattr-memory")
    {
        lsattr_memory.yfilter = yfilter;
    }
    if(value_path == "attr-set-entry-count")
    {
        attr_set_entry_count.yfilter = yfilter;
    }
    if(value_path == "attr-set-memory")
    {
        attr_set_memory.yfilter = yfilter;
    }
    if(value_path == "lindex-entry-count")
    {
        lindex_entry_count.yfilter = yfilter;
    }
    if(value_path == "lindex-memory")
    {
        lindex_memory.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "total-vrf-count")
    {
        total_vrf_count.yfilter = yfilter;
    }
    if(value_path == "neighbors-count-total")
    {
        neighbors_count_total.yfilter = yfilter;
    }
    if(value_path == "established-neighbors-count-total")
    {
        established_neighbors_count_total.yfilter = yfilter;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs")
    {
        sn_num_non_dflt_vrf_nbrs.yfilter = yfilter;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs-estab")
    {
        sn_num_non_dflt_vrf_nbrs_estab.yfilter = yfilter;
    }
    if(value_path == "large-community-entry-count")
    {
        large_community_entry_count.yfilter = yfilter;
    }
    if(value_path == "large-community-memory")
    {
        large_community_memory.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-size" || name == "pool-alloc-count" || name == "pool-free-count" || name == "msg-log-pool-size" || name == "msg-log-pool-alloc-count" || name == "msg-log-pool-free-count" || name == "bmp-pool-size" || name == "bmp-pool-alloc-count" || name == "bmp-pool-free-count" || name == "process-instance-node" || name == "restart-count" || name == "path-attributes-entry-count" || name == "path-attribute-memory" || name == "as-path-entry-count" || name == "as-path-entries-memory" || name == "community-entry-count" || name == "community-memory" || name == "extended-community-entry-count" || name == "extended-community-memory" || name == "pe-distinguisher-label-entry-count" || name == "pe-distinguisher-label-memory" || name == "pta-entry-count" || name == "pta-memory" || name == "tunnel-encap-entry-count" || name == "tunnel-encap-memory" || name == "ribrnh-entry-count" || name == "ribrnh-memory" || name == "ppmp-entry-count" || name == "ppmp-memory" || name == "route-reflectors" || name == "route-reflector-memory" || name == "nexthop-count" || name == "nexthop-memory" || name == "lsattr-entry-count" || name == "lsattr-memory" || name == "attr-set-entry-count" || name == "attr-set-memory" || name == "lindex-entry-count" || name == "lindex-memory" || name == "local-as" || name == "total-vrf-count" || name == "neighbors-count-total" || name == "established-neighbors-count-total" || name == "sn-num-non-dflt-vrf-nbrs" || name == "sn-num-non-dflt-vrf-nbrs-estab" || name == "large-community-entry-count" || name == "large-community-memory")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::PoolSize()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pool-size"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::~PoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::PoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pool-alloc-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::~PoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-alloc-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::PoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pool-free-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::~PoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-free-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::MsgLogPoolSize()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "msg-log-pool-size"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::~MsgLogPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::MsgLogPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "msg-log-pool-alloc-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::~MsgLogPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-alloc-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::MsgLogPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "msg-log-pool-free-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::~MsgLogPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-free-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::BmpPoolSize()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bmp-pool-size"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::~BmpPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::BmpPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bmp-pool-alloc-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::~BmpPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-alloc-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::BmpPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bmp-pool-free-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::~BmpPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-free-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::Vrf()
    :
    neighbors_count{YType::uint32, "neighbors-count"},
    established_neighbors_count{YType::uint32, "established-neighbors-count"},
    update_messages_received{YType::uint32, "update-messages-received"},
    update_messages_sent{YType::uint32, "update-messages-sent"},
    notifications_received{YType::uint32, "notifications-received"},
    notifications_sent{YType::uint32, "notifications-sent"},
    network_count{YType::uint32, "network-count"},
    path_count{YType::uint32, "path-count"}
{

    yang_name = "vrf"; yang_parent_name = "process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::has_data() const
{
    return neighbors_count.is_set
	|| established_neighbors_count.is_set
	|| update_messages_received.is_set
	|| update_messages_sent.is_set
	|| notifications_received.is_set
	|| notifications_sent.is_set
	|| network_count.is_set
	|| path_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbors_count.yfilter)
	|| ydk::is_set(established_neighbors_count.yfilter)
	|| ydk::is_set(update_messages_received.yfilter)
	|| ydk::is_set(update_messages_sent.yfilter)
	|| ydk::is_set(notifications_received.yfilter)
	|| ydk::is_set(notifications_sent.yfilter)
	|| ydk::is_set(network_count.yfilter)
	|| ydk::is_set(path_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbors_count.is_set || is_set(neighbors_count.yfilter)) leaf_name_data.push_back(neighbors_count.get_name_leafdata());
    if (established_neighbors_count.is_set || is_set(established_neighbors_count.yfilter)) leaf_name_data.push_back(established_neighbors_count.get_name_leafdata());
    if (update_messages_received.is_set || is_set(update_messages_received.yfilter)) leaf_name_data.push_back(update_messages_received.get_name_leafdata());
    if (update_messages_sent.is_set || is_set(update_messages_sent.yfilter)) leaf_name_data.push_back(update_messages_sent.get_name_leafdata());
    if (notifications_received.is_set || is_set(notifications_received.yfilter)) leaf_name_data.push_back(notifications_received.get_name_leafdata());
    if (notifications_sent.is_set || is_set(notifications_sent.yfilter)) leaf_name_data.push_back(notifications_sent.get_name_leafdata());
    if (network_count.is_set || is_set(network_count.yfilter)) leaf_name_data.push_back(network_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbors-count")
    {
        neighbors_count = value;
        neighbors_count.value_namespace = name_space;
        neighbors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-neighbors-count")
    {
        established_neighbors_count = value;
        established_neighbors_count.value_namespace = name_space;
        established_neighbors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-messages-received")
    {
        update_messages_received = value;
        update_messages_received.value_namespace = name_space;
        update_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-messages-sent")
    {
        update_messages_sent = value;
        update_messages_sent.value_namespace = name_space;
        update_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications-received")
    {
        notifications_received = value;
        notifications_received.value_namespace = name_space;
        notifications_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications-sent")
    {
        notifications_sent = value;
        notifications_sent.value_namespace = name_space;
        notifications_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-count")
    {
        network_count = value;
        network_count.value_namespace = name_space;
        network_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbors-count")
    {
        neighbors_count.yfilter = yfilter;
    }
    if(value_path == "established-neighbors-count")
    {
        established_neighbors_count.yfilter = yfilter;
    }
    if(value_path == "update-messages-received")
    {
        update_messages_received.yfilter = yfilter;
    }
    if(value_path == "update-messages-sent")
    {
        update_messages_sent.yfilter = yfilter;
    }
    if(value_path == "notifications-received")
    {
        notifications_received.yfilter = yfilter;
    }
    if(value_path == "notifications-sent")
    {
        notifications_sent.yfilter = yfilter;
    }
    if(value_path == "network-count")
    {
        network_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors-count" || name == "established-neighbors-count" || name == "update-messages-received" || name == "update-messages-sent" || name == "notifications-received" || name == "notifications-sent" || name == "network-count" || name == "path-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::PerformanceStatistics()
    :
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf>())
{
    global->parent = this;
    vrf->parent = this;

    yang_name = "performance-statistics"; yang_parent_name = "process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Global()
    :
    configuration_items_processed{YType::uint32, "configuration-items-processed"},
    configuration_processing_time{YType::uint32, "configuration-processing-time"},
    edm_requests_count{YType::uint32, "edm-requests-count"},
    edm_processing_time{YType::uint32, "edm-processing-time"},
    brib_api_output_messages_sent{YType::uint32, "brib-api-output-messages-sent"},
    brib_api_output_bytes_sent{YType::uint32, "brib-api-output-bytes-sent"},
    brib_api_output_bytes_generated{YType::uint32, "brib-api-output-bytes-generated"},
    brib_api_output_prefixes_advertised{YType::uint32, "brib-api-output-prefixes-advertised"},
    brib_api_output_prefixes_withdrawn{YType::uint32, "brib-api-output-prefixes-withdrawn"},
    brib_api_output_sending_time{YType::uint32, "brib-api-output-sending-time"},
    brib_api_output_generation_time{YType::uint32, "brib-api-output-generation-time"},
    brib_api_output_calls{YType::uint32, "brib-api-output-calls"},
    brib_api_input_messages{YType::uint32, "brib-api-input-messages"},
    brib_api_input_bytes{YType::uint32, "brib-api-input-bytes"},
    brib_api_input_prefixes_received{YType::uint32, "brib-api-input-prefixes-received"},
    brib_api_input_withdrawn_prefixes{YType::uint32, "brib-api-input-withdrawn-prefixes"},
    brib_api_input_processing_time{YType::uint32, "brib-api-input-processing-time"},
    instance_node_role{YType::boolean, "instance-node-role"},
    active_nsrtcp_phase_two_enter_time{YType::uint32, "active-nsrtcp-phase-two-enter-time"},
    sec_active_nsrtcp_phase_two_enter_time{YType::uint32, "sec-active-nsrtcp-phase-two-enter-time"},
    proc_scoped_sync_state{YType::enumeration, "proc-scoped-sync-state"},
    initial_sync_sessions_added{YType::boolean, "initial-sync-sessions-added"},
    in_event_attach_calls{YType::uint32, "in-event-attach-calls"},
    out_event_attach_calls{YType::uint32, "out-event-attach-calls"},
    in_out_event_attach_calls{YType::uint32, "in-out-event-attach-calls"},
    updgen_timer_id{YType::uint32, "updgen-timer-id"},
    updgen_tree_timer_left{YType::uint64, "updgen-tree-timer-left"},
    updgen_tree_timer_expiry{YType::uint64, "updgen-tree-timer-expiry"},
    current_clock_time{YType::uint64, "current-clock-time"},
    updgen_handler_tm{YType::uint64, "updgen-handler-tm"},
    io_timer_id{YType::uint32, "io-timer-id"},
    io_tree_timer_left{YType::uint64, "io-tree-timer-left"},
    io_tree_timer_expiry{YType::uint64, "io-tree-timer-expiry"},
    io_handler_tm{YType::uint64, "io-handler-tm"},
    qad_messages_sent{YType::uint32, "qad-messages-sent"},
    qadack_sent{YType::uint32, "qadack-sent"},
    qad_send_failure{YType::uint32, "qad-send-failure"},
    qad_ac_ks_failure{YType::uint32, "qad-ac-ks-failure"},
    qad_suspends{YType::uint32, "qad-suspends"},
    qad_resumes{YType::uint32, "qad-resumes"},
    qad_send_drops{YType::uint32, "qad-send-drops"},
    qad_messages_received{YType::uint32, "qad-messages-received"},
    qad_processed{YType::uint32, "qad-processed"},
    qad_ac_ks_received{YType::uint32, "qad-ac-ks-received"},
    qad_timeout_received{YType::uint32, "qad-timeout-received"},
    qad_init_drops{YType::uint32, "qad-init-drops"},
    qadoos_drops{YType::uint32, "qadoos-drops"},
    qad_recv_drops{YType::uint32, "qad-recv-drops"},
    qad_timeout_recvd{YType::uint32, "qad-timeout-recvd"},
    nsr_last_reset_reason{YType::uint8, "nsr-last-reset-reason"},
    redcon_nsr_ready{YType::boolean, "redcon-nsr-ready"},
    redcon_state_time{YType::uint32, "redcon-state-time"},
    active_nsr_state{YType::uint32, "active-nsr-state"},
    sec_active_nsr_state{YType::uint32, "sec-active-nsr-state"},
    total_outstanding_postits{YType::uint32, "total-outstanding-postits"},
    total_neighbors_with_pending_postits{YType::uint32, "total-neighbors-with-pending-postits"},
    tep2p_auto_tunnel_enabled{YType::boolean, "tep2p-auto-tunnel-enabled"}
    	,
    ipv4rib_server(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>())
	,ipv6rib_server(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>())
	,te_connection(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>())
	,lsd_connection(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>())
	,ds_npl(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>())
{
    ipv4rib_server->parent = this;
    ipv6rib_server->parent = this;
    te_connection->parent = this;
    lsd_connection->parent = this;
    ds_npl->parent = this;

    yang_name = "global"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::has_data() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_data())
            return true;
    }
    return configuration_items_processed.is_set
	|| configuration_processing_time.is_set
	|| edm_requests_count.is_set
	|| edm_processing_time.is_set
	|| brib_api_output_messages_sent.is_set
	|| brib_api_output_bytes_sent.is_set
	|| brib_api_output_bytes_generated.is_set
	|| brib_api_output_prefixes_advertised.is_set
	|| brib_api_output_prefixes_withdrawn.is_set
	|| brib_api_output_sending_time.is_set
	|| brib_api_output_generation_time.is_set
	|| brib_api_output_calls.is_set
	|| brib_api_input_messages.is_set
	|| brib_api_input_bytes.is_set
	|| brib_api_input_prefixes_received.is_set
	|| brib_api_input_withdrawn_prefixes.is_set
	|| brib_api_input_processing_time.is_set
	|| instance_node_role.is_set
	|| active_nsrtcp_phase_two_enter_time.is_set
	|| sec_active_nsrtcp_phase_two_enter_time.is_set
	|| proc_scoped_sync_state.is_set
	|| initial_sync_sessions_added.is_set
	|| in_event_attach_calls.is_set
	|| out_event_attach_calls.is_set
	|| in_out_event_attach_calls.is_set
	|| updgen_timer_id.is_set
	|| updgen_tree_timer_left.is_set
	|| updgen_tree_timer_expiry.is_set
	|| current_clock_time.is_set
	|| updgen_handler_tm.is_set
	|| io_timer_id.is_set
	|| io_tree_timer_left.is_set
	|| io_tree_timer_expiry.is_set
	|| io_handler_tm.is_set
	|| qad_messages_sent.is_set
	|| qadack_sent.is_set
	|| qad_send_failure.is_set
	|| qad_ac_ks_failure.is_set
	|| qad_suspends.is_set
	|| qad_resumes.is_set
	|| qad_send_drops.is_set
	|| qad_messages_received.is_set
	|| qad_processed.is_set
	|| qad_ac_ks_received.is_set
	|| qad_timeout_received.is_set
	|| qad_init_drops.is_set
	|| qadoos_drops.is_set
	|| qad_recv_drops.is_set
	|| qad_timeout_recvd.is_set
	|| nsr_last_reset_reason.is_set
	|| redcon_nsr_ready.is_set
	|| redcon_state_time.is_set
	|| active_nsr_state.is_set
	|| sec_active_nsr_state.is_set
	|| total_outstanding_postits.is_set
	|| total_neighbors_with_pending_postits.is_set
	|| tep2p_auto_tunnel_enabled.is_set
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_data())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_data())
	|| (te_connection !=  nullptr && te_connection->has_data())
	|| (lsd_connection !=  nullptr && lsd_connection->has_data())
	|| (ds_npl !=  nullptr && ds_npl->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::has_operation() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configuration_items_processed.yfilter)
	|| ydk::is_set(configuration_processing_time.yfilter)
	|| ydk::is_set(edm_requests_count.yfilter)
	|| ydk::is_set(edm_processing_time.yfilter)
	|| ydk::is_set(brib_api_output_messages_sent.yfilter)
	|| ydk::is_set(brib_api_output_bytes_sent.yfilter)
	|| ydk::is_set(brib_api_output_bytes_generated.yfilter)
	|| ydk::is_set(brib_api_output_prefixes_advertised.yfilter)
	|| ydk::is_set(brib_api_output_prefixes_withdrawn.yfilter)
	|| ydk::is_set(brib_api_output_sending_time.yfilter)
	|| ydk::is_set(brib_api_output_generation_time.yfilter)
	|| ydk::is_set(brib_api_output_calls.yfilter)
	|| ydk::is_set(brib_api_input_messages.yfilter)
	|| ydk::is_set(brib_api_input_bytes.yfilter)
	|| ydk::is_set(brib_api_input_prefixes_received.yfilter)
	|| ydk::is_set(brib_api_input_withdrawn_prefixes.yfilter)
	|| ydk::is_set(brib_api_input_processing_time.yfilter)
	|| ydk::is_set(instance_node_role.yfilter)
	|| ydk::is_set(active_nsrtcp_phase_two_enter_time.yfilter)
	|| ydk::is_set(sec_active_nsrtcp_phase_two_enter_time.yfilter)
	|| ydk::is_set(proc_scoped_sync_state.yfilter)
	|| ydk::is_set(initial_sync_sessions_added.yfilter)
	|| ydk::is_set(in_event_attach_calls.yfilter)
	|| ydk::is_set(out_event_attach_calls.yfilter)
	|| ydk::is_set(in_out_event_attach_calls.yfilter)
	|| ydk::is_set(updgen_timer_id.yfilter)
	|| ydk::is_set(updgen_tree_timer_left.yfilter)
	|| ydk::is_set(updgen_tree_timer_expiry.yfilter)
	|| ydk::is_set(current_clock_time.yfilter)
	|| ydk::is_set(updgen_handler_tm.yfilter)
	|| ydk::is_set(io_timer_id.yfilter)
	|| ydk::is_set(io_tree_timer_left.yfilter)
	|| ydk::is_set(io_tree_timer_expiry.yfilter)
	|| ydk::is_set(io_handler_tm.yfilter)
	|| ydk::is_set(qad_messages_sent.yfilter)
	|| ydk::is_set(qadack_sent.yfilter)
	|| ydk::is_set(qad_send_failure.yfilter)
	|| ydk::is_set(qad_ac_ks_failure.yfilter)
	|| ydk::is_set(qad_suspends.yfilter)
	|| ydk::is_set(qad_resumes.yfilter)
	|| ydk::is_set(qad_send_drops.yfilter)
	|| ydk::is_set(qad_messages_received.yfilter)
	|| ydk::is_set(qad_processed.yfilter)
	|| ydk::is_set(qad_ac_ks_received.yfilter)
	|| ydk::is_set(qad_timeout_received.yfilter)
	|| ydk::is_set(qad_init_drops.yfilter)
	|| ydk::is_set(qadoos_drops.yfilter)
	|| ydk::is_set(qad_recv_drops.yfilter)
	|| ydk::is_set(qad_timeout_recvd.yfilter)
	|| ydk::is_set(nsr_last_reset_reason.yfilter)
	|| ydk::is_set(redcon_nsr_ready.yfilter)
	|| ydk::is_set(redcon_state_time.yfilter)
	|| ydk::is_set(active_nsr_state.yfilter)
	|| ydk::is_set(sec_active_nsr_state.yfilter)
	|| ydk::is_set(total_outstanding_postits.yfilter)
	|| ydk::is_set(total_neighbors_with_pending_postits.yfilter)
	|| ydk::is_set(tep2p_auto_tunnel_enabled.yfilter)
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_operation())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_operation())
	|| (te_connection !=  nullptr && te_connection->has_operation())
	|| (lsd_connection !=  nullptr && lsd_connection->has_operation())
	|| (ds_npl !=  nullptr && ds_npl->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_items_processed.is_set || is_set(configuration_items_processed.yfilter)) leaf_name_data.push_back(configuration_items_processed.get_name_leafdata());
    if (configuration_processing_time.is_set || is_set(configuration_processing_time.yfilter)) leaf_name_data.push_back(configuration_processing_time.get_name_leafdata());
    if (edm_requests_count.is_set || is_set(edm_requests_count.yfilter)) leaf_name_data.push_back(edm_requests_count.get_name_leafdata());
    if (edm_processing_time.is_set || is_set(edm_processing_time.yfilter)) leaf_name_data.push_back(edm_processing_time.get_name_leafdata());
    if (brib_api_output_messages_sent.is_set || is_set(brib_api_output_messages_sent.yfilter)) leaf_name_data.push_back(brib_api_output_messages_sent.get_name_leafdata());
    if (brib_api_output_bytes_sent.is_set || is_set(brib_api_output_bytes_sent.yfilter)) leaf_name_data.push_back(brib_api_output_bytes_sent.get_name_leafdata());
    if (brib_api_output_bytes_generated.is_set || is_set(brib_api_output_bytes_generated.yfilter)) leaf_name_data.push_back(brib_api_output_bytes_generated.get_name_leafdata());
    if (brib_api_output_prefixes_advertised.is_set || is_set(brib_api_output_prefixes_advertised.yfilter)) leaf_name_data.push_back(brib_api_output_prefixes_advertised.get_name_leafdata());
    if (brib_api_output_prefixes_withdrawn.is_set || is_set(brib_api_output_prefixes_withdrawn.yfilter)) leaf_name_data.push_back(brib_api_output_prefixes_withdrawn.get_name_leafdata());
    if (brib_api_output_sending_time.is_set || is_set(brib_api_output_sending_time.yfilter)) leaf_name_data.push_back(brib_api_output_sending_time.get_name_leafdata());
    if (brib_api_output_generation_time.is_set || is_set(brib_api_output_generation_time.yfilter)) leaf_name_data.push_back(brib_api_output_generation_time.get_name_leafdata());
    if (brib_api_output_calls.is_set || is_set(brib_api_output_calls.yfilter)) leaf_name_data.push_back(brib_api_output_calls.get_name_leafdata());
    if (brib_api_input_messages.is_set || is_set(brib_api_input_messages.yfilter)) leaf_name_data.push_back(brib_api_input_messages.get_name_leafdata());
    if (brib_api_input_bytes.is_set || is_set(brib_api_input_bytes.yfilter)) leaf_name_data.push_back(brib_api_input_bytes.get_name_leafdata());
    if (brib_api_input_prefixes_received.is_set || is_set(brib_api_input_prefixes_received.yfilter)) leaf_name_data.push_back(brib_api_input_prefixes_received.get_name_leafdata());
    if (brib_api_input_withdrawn_prefixes.is_set || is_set(brib_api_input_withdrawn_prefixes.yfilter)) leaf_name_data.push_back(brib_api_input_withdrawn_prefixes.get_name_leafdata());
    if (brib_api_input_processing_time.is_set || is_set(brib_api_input_processing_time.yfilter)) leaf_name_data.push_back(brib_api_input_processing_time.get_name_leafdata());
    if (instance_node_role.is_set || is_set(instance_node_role.yfilter)) leaf_name_data.push_back(instance_node_role.get_name_leafdata());
    if (active_nsrtcp_phase_two_enter_time.is_set || is_set(active_nsrtcp_phase_two_enter_time.yfilter)) leaf_name_data.push_back(active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (sec_active_nsrtcp_phase_two_enter_time.is_set || is_set(sec_active_nsrtcp_phase_two_enter_time.yfilter)) leaf_name_data.push_back(sec_active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (proc_scoped_sync_state.is_set || is_set(proc_scoped_sync_state.yfilter)) leaf_name_data.push_back(proc_scoped_sync_state.get_name_leafdata());
    if (initial_sync_sessions_added.is_set || is_set(initial_sync_sessions_added.yfilter)) leaf_name_data.push_back(initial_sync_sessions_added.get_name_leafdata());
    if (in_event_attach_calls.is_set || is_set(in_event_attach_calls.yfilter)) leaf_name_data.push_back(in_event_attach_calls.get_name_leafdata());
    if (out_event_attach_calls.is_set || is_set(out_event_attach_calls.yfilter)) leaf_name_data.push_back(out_event_attach_calls.get_name_leafdata());
    if (in_out_event_attach_calls.is_set || is_set(in_out_event_attach_calls.yfilter)) leaf_name_data.push_back(in_out_event_attach_calls.get_name_leafdata());
    if (updgen_timer_id.is_set || is_set(updgen_timer_id.yfilter)) leaf_name_data.push_back(updgen_timer_id.get_name_leafdata());
    if (updgen_tree_timer_left.is_set || is_set(updgen_tree_timer_left.yfilter)) leaf_name_data.push_back(updgen_tree_timer_left.get_name_leafdata());
    if (updgen_tree_timer_expiry.is_set || is_set(updgen_tree_timer_expiry.yfilter)) leaf_name_data.push_back(updgen_tree_timer_expiry.get_name_leafdata());
    if (current_clock_time.is_set || is_set(current_clock_time.yfilter)) leaf_name_data.push_back(current_clock_time.get_name_leafdata());
    if (updgen_handler_tm.is_set || is_set(updgen_handler_tm.yfilter)) leaf_name_data.push_back(updgen_handler_tm.get_name_leafdata());
    if (io_timer_id.is_set || is_set(io_timer_id.yfilter)) leaf_name_data.push_back(io_timer_id.get_name_leafdata());
    if (io_tree_timer_left.is_set || is_set(io_tree_timer_left.yfilter)) leaf_name_data.push_back(io_tree_timer_left.get_name_leafdata());
    if (io_tree_timer_expiry.is_set || is_set(io_tree_timer_expiry.yfilter)) leaf_name_data.push_back(io_tree_timer_expiry.get_name_leafdata());
    if (io_handler_tm.is_set || is_set(io_handler_tm.yfilter)) leaf_name_data.push_back(io_handler_tm.get_name_leafdata());
    if (qad_messages_sent.is_set || is_set(qad_messages_sent.yfilter)) leaf_name_data.push_back(qad_messages_sent.get_name_leafdata());
    if (qadack_sent.is_set || is_set(qadack_sent.yfilter)) leaf_name_data.push_back(qadack_sent.get_name_leafdata());
    if (qad_send_failure.is_set || is_set(qad_send_failure.yfilter)) leaf_name_data.push_back(qad_send_failure.get_name_leafdata());
    if (qad_ac_ks_failure.is_set || is_set(qad_ac_ks_failure.yfilter)) leaf_name_data.push_back(qad_ac_ks_failure.get_name_leafdata());
    if (qad_suspends.is_set || is_set(qad_suspends.yfilter)) leaf_name_data.push_back(qad_suspends.get_name_leafdata());
    if (qad_resumes.is_set || is_set(qad_resumes.yfilter)) leaf_name_data.push_back(qad_resumes.get_name_leafdata());
    if (qad_send_drops.is_set || is_set(qad_send_drops.yfilter)) leaf_name_data.push_back(qad_send_drops.get_name_leafdata());
    if (qad_messages_received.is_set || is_set(qad_messages_received.yfilter)) leaf_name_data.push_back(qad_messages_received.get_name_leafdata());
    if (qad_processed.is_set || is_set(qad_processed.yfilter)) leaf_name_data.push_back(qad_processed.get_name_leafdata());
    if (qad_ac_ks_received.is_set || is_set(qad_ac_ks_received.yfilter)) leaf_name_data.push_back(qad_ac_ks_received.get_name_leafdata());
    if (qad_timeout_received.is_set || is_set(qad_timeout_received.yfilter)) leaf_name_data.push_back(qad_timeout_received.get_name_leafdata());
    if (qad_init_drops.is_set || is_set(qad_init_drops.yfilter)) leaf_name_data.push_back(qad_init_drops.get_name_leafdata());
    if (qadoos_drops.is_set || is_set(qadoos_drops.yfilter)) leaf_name_data.push_back(qadoos_drops.get_name_leafdata());
    if (qad_recv_drops.is_set || is_set(qad_recv_drops.yfilter)) leaf_name_data.push_back(qad_recv_drops.get_name_leafdata());
    if (qad_timeout_recvd.is_set || is_set(qad_timeout_recvd.yfilter)) leaf_name_data.push_back(qad_timeout_recvd.get_name_leafdata());
    if (nsr_last_reset_reason.is_set || is_set(nsr_last_reset_reason.yfilter)) leaf_name_data.push_back(nsr_last_reset_reason.get_name_leafdata());
    if (redcon_nsr_ready.is_set || is_set(redcon_nsr_ready.yfilter)) leaf_name_data.push_back(redcon_nsr_ready.get_name_leafdata());
    if (redcon_state_time.is_set || is_set(redcon_state_time.yfilter)) leaf_name_data.push_back(redcon_state_time.get_name_leafdata());
    if (active_nsr_state.is_set || is_set(active_nsr_state.yfilter)) leaf_name_data.push_back(active_nsr_state.get_name_leafdata());
    if (sec_active_nsr_state.is_set || is_set(sec_active_nsr_state.yfilter)) leaf_name_data.push_back(sec_active_nsr_state.get_name_leafdata());
    if (total_outstanding_postits.is_set || is_set(total_outstanding_postits.yfilter)) leaf_name_data.push_back(total_outstanding_postits.get_name_leafdata());
    if (total_neighbors_with_pending_postits.is_set || is_set(total_neighbors_with_pending_postits.yfilter)) leaf_name_data.push_back(total_neighbors_with_pending_postits.get_name_leafdata());
    if (tep2p_auto_tunnel_enabled.is_set || is_set(tep2p_auto_tunnel_enabled.yfilter)) leaf_name_data.push_back(tep2p_auto_tunnel_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rib-server")
    {
        if(ipv4rib_server == nullptr)
        {
            ipv4rib_server = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>();
        }
        return ipv4rib_server;
    }

    if(child_yang_name == "ipv6rib-server")
    {
        if(ipv6rib_server == nullptr)
        {
            ipv6rib_server = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>();
        }
        return ipv6rib_server;
    }

    if(child_yang_name == "te-connection")
    {
        if(te_connection == nullptr)
        {
            te_connection = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>();
        }
        return te_connection;
    }

    if(child_yang_name == "lsd-connection")
    {
        if(lsd_connection == nullptr)
        {
            lsd_connection = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>();
        }
        return lsd_connection;
    }

    if(child_yang_name == "ds-npl")
    {
        if(ds_npl == nullptr)
        {
            ds_npl = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>();
        }
        return ds_npl;
    }

    if(child_yang_name == "active-nsr-mode-enter-time")
    {
        for(auto const & c : active_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime>();
        c->parent = this;
        active_nsr_mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "standby-nsr-mode-enter-time")
    {
        for(auto const & c : standby_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime>();
        c->parent = this;
        standby_nsr_mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "active-nsrfo-time")
    {
        for(auto const & c : active_nsrfo_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime>();
        c->parent = this;
        active_nsrfo_time.push_back(c);
        return c;
    }

    if(child_yang_name == "postit-count-info")
    {
        for(auto const & c : postit_count_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo>();
        c->parent = this;
        postit_count_info.push_back(c);
        return c;
    }

    if(child_yang_name == "issu-milestone")
    {
        for(auto const & c : issu_milestone)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone>();
        c->parent = this;
        issu_milestone.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rib_server != nullptr)
    {
        children["ipv4rib-server"] = ipv4rib_server;
    }

    if(ipv6rib_server != nullptr)
    {
        children["ipv6rib-server"] = ipv6rib_server;
    }

    if(te_connection != nullptr)
    {
        children["te-connection"] = te_connection;
    }

    if(lsd_connection != nullptr)
    {
        children["lsd-connection"] = lsd_connection;
    }

    if(ds_npl != nullptr)
    {
        children["ds-npl"] = ds_npl;
    }

    for (auto const & c : active_nsr_mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standby_nsr_mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : active_nsrfo_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : postit_count_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : issu_milestone)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration-items-processed")
    {
        configuration_items_processed = value;
        configuration_items_processed.value_namespace = name_space;
        configuration_items_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-processing-time")
    {
        configuration_processing_time = value;
        configuration_processing_time.value_namespace = name_space;
        configuration_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edm-requests-count")
    {
        edm_requests_count = value;
        edm_requests_count.value_namespace = name_space;
        edm_requests_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edm-processing-time")
    {
        edm_processing_time = value;
        edm_processing_time.value_namespace = name_space;
        edm_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-messages-sent")
    {
        brib_api_output_messages_sent = value;
        brib_api_output_messages_sent.value_namespace = name_space;
        brib_api_output_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-bytes-sent")
    {
        brib_api_output_bytes_sent = value;
        brib_api_output_bytes_sent.value_namespace = name_space;
        brib_api_output_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-bytes-generated")
    {
        brib_api_output_bytes_generated = value;
        brib_api_output_bytes_generated.value_namespace = name_space;
        brib_api_output_bytes_generated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-prefixes-advertised")
    {
        brib_api_output_prefixes_advertised = value;
        brib_api_output_prefixes_advertised.value_namespace = name_space;
        brib_api_output_prefixes_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-prefixes-withdrawn")
    {
        brib_api_output_prefixes_withdrawn = value;
        brib_api_output_prefixes_withdrawn.value_namespace = name_space;
        brib_api_output_prefixes_withdrawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-sending-time")
    {
        brib_api_output_sending_time = value;
        brib_api_output_sending_time.value_namespace = name_space;
        brib_api_output_sending_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-generation-time")
    {
        brib_api_output_generation_time = value;
        brib_api_output_generation_time.value_namespace = name_space;
        brib_api_output_generation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-calls")
    {
        brib_api_output_calls = value;
        brib_api_output_calls.value_namespace = name_space;
        brib_api_output_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-messages")
    {
        brib_api_input_messages = value;
        brib_api_input_messages.value_namespace = name_space;
        brib_api_input_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-bytes")
    {
        brib_api_input_bytes = value;
        brib_api_input_bytes.value_namespace = name_space;
        brib_api_input_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-prefixes-received")
    {
        brib_api_input_prefixes_received = value;
        brib_api_input_prefixes_received.value_namespace = name_space;
        brib_api_input_prefixes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-withdrawn-prefixes")
    {
        brib_api_input_withdrawn_prefixes = value;
        brib_api_input_withdrawn_prefixes.value_namespace = name_space;
        brib_api_input_withdrawn_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-processing-time")
    {
        brib_api_input_processing_time = value;
        brib_api_input_processing_time.value_namespace = name_space;
        brib_api_input_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-node-role")
    {
        instance_node_role = value;
        instance_node_role.value_namespace = name_space;
        instance_node_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-nsrtcp-phase-two-enter-time")
    {
        active_nsrtcp_phase_two_enter_time = value;
        active_nsrtcp_phase_two_enter_time.value_namespace = name_space;
        active_nsrtcp_phase_two_enter_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec-active-nsrtcp-phase-two-enter-time")
    {
        sec_active_nsrtcp_phase_two_enter_time = value;
        sec_active_nsrtcp_phase_two_enter_time.value_namespace = name_space;
        sec_active_nsrtcp_phase_two_enter_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-scoped-sync-state")
    {
        proc_scoped_sync_state = value;
        proc_scoped_sync_state.value_namespace = name_space;
        proc_scoped_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-sync-sessions-added")
    {
        initial_sync_sessions_added = value;
        initial_sync_sessions_added.value_namespace = name_space;
        initial_sync_sessions_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-event-attach-calls")
    {
        in_event_attach_calls = value;
        in_event_attach_calls.value_namespace = name_space;
        in_event_attach_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-event-attach-calls")
    {
        out_event_attach_calls = value;
        out_event_attach_calls.value_namespace = name_space;
        out_event_attach_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-out-event-attach-calls")
    {
        in_out_event_attach_calls = value;
        in_out_event_attach_calls.value_namespace = name_space;
        in_out_event_attach_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-timer-id")
    {
        updgen_timer_id = value;
        updgen_timer_id.value_namespace = name_space;
        updgen_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-tree-timer-left")
    {
        updgen_tree_timer_left = value;
        updgen_tree_timer_left.value_namespace = name_space;
        updgen_tree_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-tree-timer-expiry")
    {
        updgen_tree_timer_expiry = value;
        updgen_tree_timer_expiry.value_namespace = name_space;
        updgen_tree_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-clock-time")
    {
        current_clock_time = value;
        current_clock_time.value_namespace = name_space;
        current_clock_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-handler-tm")
    {
        updgen_handler_tm = value;
        updgen_handler_tm.value_namespace = name_space;
        updgen_handler_tm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-timer-id")
    {
        io_timer_id = value;
        io_timer_id.value_namespace = name_space;
        io_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-tree-timer-left")
    {
        io_tree_timer_left = value;
        io_tree_timer_left.value_namespace = name_space;
        io_tree_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-tree-timer-expiry")
    {
        io_tree_timer_expiry = value;
        io_tree_timer_expiry.value_namespace = name_space;
        io_tree_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-handler-tm")
    {
        io_handler_tm = value;
        io_handler_tm.value_namespace = name_space;
        io_handler_tm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-messages-sent")
    {
        qad_messages_sent = value;
        qad_messages_sent.value_namespace = name_space;
        qad_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qadack-sent")
    {
        qadack_sent = value;
        qadack_sent.value_namespace = name_space;
        qadack_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-send-failure")
    {
        qad_send_failure = value;
        qad_send_failure.value_namespace = name_space;
        qad_send_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-ac-ks-failure")
    {
        qad_ac_ks_failure = value;
        qad_ac_ks_failure.value_namespace = name_space;
        qad_ac_ks_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-suspends")
    {
        qad_suspends = value;
        qad_suspends.value_namespace = name_space;
        qad_suspends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-resumes")
    {
        qad_resumes = value;
        qad_resumes.value_namespace = name_space;
        qad_resumes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-send-drops")
    {
        qad_send_drops = value;
        qad_send_drops.value_namespace = name_space;
        qad_send_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-messages-received")
    {
        qad_messages_received = value;
        qad_messages_received.value_namespace = name_space;
        qad_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-processed")
    {
        qad_processed = value;
        qad_processed.value_namespace = name_space;
        qad_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-ac-ks-received")
    {
        qad_ac_ks_received = value;
        qad_ac_ks_received.value_namespace = name_space;
        qad_ac_ks_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-timeout-received")
    {
        qad_timeout_received = value;
        qad_timeout_received.value_namespace = name_space;
        qad_timeout_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-init-drops")
    {
        qad_init_drops = value;
        qad_init_drops.value_namespace = name_space;
        qad_init_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qadoos-drops")
    {
        qadoos_drops = value;
        qadoos_drops.value_namespace = name_space;
        qadoos_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-recv-drops")
    {
        qad_recv_drops = value;
        qad_recv_drops.value_namespace = name_space;
        qad_recv_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-timeout-recvd")
    {
        qad_timeout_recvd = value;
        qad_timeout_recvd.value_namespace = name_space;
        qad_timeout_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-last-reset-reason")
    {
        nsr_last_reset_reason = value;
        nsr_last_reset_reason.value_namespace = name_space;
        nsr_last_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redcon-nsr-ready")
    {
        redcon_nsr_ready = value;
        redcon_nsr_ready.value_namespace = name_space;
        redcon_nsr_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redcon-state-time")
    {
        redcon_state_time = value;
        redcon_state_time.value_namespace = name_space;
        redcon_state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-nsr-state")
    {
        active_nsr_state = value;
        active_nsr_state.value_namespace = name_space;
        active_nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec-active-nsr-state")
    {
        sec_active_nsr_state = value;
        sec_active_nsr_state.value_namespace = name_space;
        sec_active_nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-outstanding-postits")
    {
        total_outstanding_postits = value;
        total_outstanding_postits.value_namespace = name_space;
        total_outstanding_postits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-neighbors-with-pending-postits")
    {
        total_neighbors_with_pending_postits = value;
        total_neighbors_with_pending_postits.value_namespace = name_space;
        total_neighbors_with_pending_postits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tep2p-auto-tunnel-enabled")
    {
        tep2p_auto_tunnel_enabled = value;
        tep2p_auto_tunnel_enabled.value_namespace = name_space;
        tep2p_auto_tunnel_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration-items-processed")
    {
        configuration_items_processed.yfilter = yfilter;
    }
    if(value_path == "configuration-processing-time")
    {
        configuration_processing_time.yfilter = yfilter;
    }
    if(value_path == "edm-requests-count")
    {
        edm_requests_count.yfilter = yfilter;
    }
    if(value_path == "edm-processing-time")
    {
        edm_processing_time.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-messages-sent")
    {
        brib_api_output_messages_sent.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-bytes-sent")
    {
        brib_api_output_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-bytes-generated")
    {
        brib_api_output_bytes_generated.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-prefixes-advertised")
    {
        brib_api_output_prefixes_advertised.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-prefixes-withdrawn")
    {
        brib_api_output_prefixes_withdrawn.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-sending-time")
    {
        brib_api_output_sending_time.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-generation-time")
    {
        brib_api_output_generation_time.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-calls")
    {
        brib_api_output_calls.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-messages")
    {
        brib_api_input_messages.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-bytes")
    {
        brib_api_input_bytes.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-prefixes-received")
    {
        brib_api_input_prefixes_received.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-withdrawn-prefixes")
    {
        brib_api_input_withdrawn_prefixes.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-processing-time")
    {
        brib_api_input_processing_time.yfilter = yfilter;
    }
    if(value_path == "instance-node-role")
    {
        instance_node_role.yfilter = yfilter;
    }
    if(value_path == "active-nsrtcp-phase-two-enter-time")
    {
        active_nsrtcp_phase_two_enter_time.yfilter = yfilter;
    }
    if(value_path == "sec-active-nsrtcp-phase-two-enter-time")
    {
        sec_active_nsrtcp_phase_two_enter_time.yfilter = yfilter;
    }
    if(value_path == "proc-scoped-sync-state")
    {
        proc_scoped_sync_state.yfilter = yfilter;
    }
    if(value_path == "initial-sync-sessions-added")
    {
        initial_sync_sessions_added.yfilter = yfilter;
    }
    if(value_path == "in-event-attach-calls")
    {
        in_event_attach_calls.yfilter = yfilter;
    }
    if(value_path == "out-event-attach-calls")
    {
        out_event_attach_calls.yfilter = yfilter;
    }
    if(value_path == "in-out-event-attach-calls")
    {
        in_out_event_attach_calls.yfilter = yfilter;
    }
    if(value_path == "updgen-timer-id")
    {
        updgen_timer_id.yfilter = yfilter;
    }
    if(value_path == "updgen-tree-timer-left")
    {
        updgen_tree_timer_left.yfilter = yfilter;
    }
    if(value_path == "updgen-tree-timer-expiry")
    {
        updgen_tree_timer_expiry.yfilter = yfilter;
    }
    if(value_path == "current-clock-time")
    {
        current_clock_time.yfilter = yfilter;
    }
    if(value_path == "updgen-handler-tm")
    {
        updgen_handler_tm.yfilter = yfilter;
    }
    if(value_path == "io-timer-id")
    {
        io_timer_id.yfilter = yfilter;
    }
    if(value_path == "io-tree-timer-left")
    {
        io_tree_timer_left.yfilter = yfilter;
    }
    if(value_path == "io-tree-timer-expiry")
    {
        io_tree_timer_expiry.yfilter = yfilter;
    }
    if(value_path == "io-handler-tm")
    {
        io_handler_tm.yfilter = yfilter;
    }
    if(value_path == "qad-messages-sent")
    {
        qad_messages_sent.yfilter = yfilter;
    }
    if(value_path == "qadack-sent")
    {
        qadack_sent.yfilter = yfilter;
    }
    if(value_path == "qad-send-failure")
    {
        qad_send_failure.yfilter = yfilter;
    }
    if(value_path == "qad-ac-ks-failure")
    {
        qad_ac_ks_failure.yfilter = yfilter;
    }
    if(value_path == "qad-suspends")
    {
        qad_suspends.yfilter = yfilter;
    }
    if(value_path == "qad-resumes")
    {
        qad_resumes.yfilter = yfilter;
    }
    if(value_path == "qad-send-drops")
    {
        qad_send_drops.yfilter = yfilter;
    }
    if(value_path == "qad-messages-received")
    {
        qad_messages_received.yfilter = yfilter;
    }
    if(value_path == "qad-processed")
    {
        qad_processed.yfilter = yfilter;
    }
    if(value_path == "qad-ac-ks-received")
    {
        qad_ac_ks_received.yfilter = yfilter;
    }
    if(value_path == "qad-timeout-received")
    {
        qad_timeout_received.yfilter = yfilter;
    }
    if(value_path == "qad-init-drops")
    {
        qad_init_drops.yfilter = yfilter;
    }
    if(value_path == "qadoos-drops")
    {
        qadoos_drops.yfilter = yfilter;
    }
    if(value_path == "qad-recv-drops")
    {
        qad_recv_drops.yfilter = yfilter;
    }
    if(value_path == "qad-timeout-recvd")
    {
        qad_timeout_recvd.yfilter = yfilter;
    }
    if(value_path == "nsr-last-reset-reason")
    {
        nsr_last_reset_reason.yfilter = yfilter;
    }
    if(value_path == "redcon-nsr-ready")
    {
        redcon_nsr_ready.yfilter = yfilter;
    }
    if(value_path == "redcon-state-time")
    {
        redcon_state_time.yfilter = yfilter;
    }
    if(value_path == "active-nsr-state")
    {
        active_nsr_state.yfilter = yfilter;
    }
    if(value_path == "sec-active-nsr-state")
    {
        sec_active_nsr_state.yfilter = yfilter;
    }
    if(value_path == "total-outstanding-postits")
    {
        total_outstanding_postits.yfilter = yfilter;
    }
    if(value_path == "total-neighbors-with-pending-postits")
    {
        total_neighbors_with_pending_postits.yfilter = yfilter;
    }
    if(value_path == "tep2p-auto-tunnel-enabled")
    {
        tep2p_auto_tunnel_enabled.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rib-server" || name == "ipv6rib-server" || name == "te-connection" || name == "lsd-connection" || name == "ds-npl" || name == "active-nsr-mode-enter-time" || name == "standby-nsr-mode-enter-time" || name == "active-nsrfo-time" || name == "postit-count-info" || name == "issu-milestone" || name == "configuration-items-processed" || name == "configuration-processing-time" || name == "edm-requests-count" || name == "edm-processing-time" || name == "brib-api-output-messages-sent" || name == "brib-api-output-bytes-sent" || name == "brib-api-output-bytes-generated" || name == "brib-api-output-prefixes-advertised" || name == "brib-api-output-prefixes-withdrawn" || name == "brib-api-output-sending-time" || name == "brib-api-output-generation-time" || name == "brib-api-output-calls" || name == "brib-api-input-messages" || name == "brib-api-input-bytes" || name == "brib-api-input-prefixes-received" || name == "brib-api-input-withdrawn-prefixes" || name == "brib-api-input-processing-time" || name == "instance-node-role" || name == "active-nsrtcp-phase-two-enter-time" || name == "sec-active-nsrtcp-phase-two-enter-time" || name == "proc-scoped-sync-state" || name == "initial-sync-sessions-added" || name == "in-event-attach-calls" || name == "out-event-attach-calls" || name == "in-out-event-attach-calls" || name == "updgen-timer-id" || name == "updgen-tree-timer-left" || name == "updgen-tree-timer-expiry" || name == "current-clock-time" || name == "updgen-handler-tm" || name == "io-timer-id" || name == "io-tree-timer-left" || name == "io-tree-timer-expiry" || name == "io-handler-tm" || name == "qad-messages-sent" || name == "qadack-sent" || name == "qad-send-failure" || name == "qad-ac-ks-failure" || name == "qad-suspends" || name == "qad-resumes" || name == "qad-send-drops" || name == "qad-messages-received" || name == "qad-processed" || name == "qad-ac-ks-received" || name == "qad-timeout-received" || name == "qad-init-drops" || name == "qadoos-drops" || name == "qad-recv-drops" || name == "qad-timeout-recvd" || name == "nsr-last-reset-reason" || name == "redcon-nsr-ready" || name == "redcon-state-time" || name == "active-nsr-state" || name == "sec-active-nsr-state" || name == "total-outstanding-postits" || name == "total-neighbors-with-pending-postits" || name == "tep2p-auto-tunnel-enabled")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::Ipv4RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"}
    	,
    first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>())
	,first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>())
{
    first_rib_connection_up_timestamp->parent = this;
    last_rib_connection_up_timestamp->parent = this;
    first_rib_connection_down_timestamp->parent = this;
    last_rib_connection_down_timestamp->parent = this;

    yang_name = "ipv4rib-server"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::~Ipv4RibServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| rib_connection_up_count.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| last_rib_connection_down_age.is_set
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data())
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_rib_connection_up.yfilter)
	|| ydk::is_set(rib_connection_up_count.yfilter)
	|| ydk::is_set(last_rib_connection_up_age.yfilter)
	|| ydk::is_set(rib_connection_down_count.yfilter)
	|| ydk::is_set(last_rib_connection_down_age.yfilter)
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation())
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rib-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.yfilter)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.yfilter)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.yfilter)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.yfilter)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.yfilter)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_rib_connection_up_timestamp != nullptr)
    {
        children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
    }

    if(last_rib_connection_up_timestamp != nullptr)
    {
        children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
    }

    if(first_rib_connection_down_timestamp != nullptr)
    {
        children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
    }

    if(last_rib_connection_down_timestamp != nullptr)
    {
        children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
        is_rib_connection_up.value_namespace = name_space;
        is_rib_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
        rib_connection_up_count.value_namespace = name_space;
        rib_connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
        last_rib_connection_up_age.value_namespace = name_space;
        last_rib_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
        rib_connection_down_count.value_namespace = name_space;
        rib_connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
        last_rib_connection_down_age.value_namespace = name_space;
        last_rib_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up.yfilter = yfilter;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count.yfilter = yfilter;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age.yfilter = yfilter;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count.yfilter = yfilter;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-rib-connection-up-timestamp" || name == "last-rib-connection-up-timestamp" || name == "first-rib-connection-down-timestamp" || name == "last-rib-connection-down-timestamp" || name == "is-rib-connection-up" || name == "rib-connection-up-count" || name == "last-rib-connection-up-age" || name == "rib-connection-down-count" || name == "last-rib-connection-down-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::Ipv6RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"}
    	,
    first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>())
	,first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>())
{
    first_rib_connection_up_timestamp->parent = this;
    last_rib_connection_up_timestamp->parent = this;
    first_rib_connection_down_timestamp->parent = this;
    last_rib_connection_down_timestamp->parent = this;

    yang_name = "ipv6rib-server"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::~Ipv6RibServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| rib_connection_up_count.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| last_rib_connection_down_age.is_set
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data())
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_rib_connection_up.yfilter)
	|| ydk::is_set(rib_connection_up_count.yfilter)
	|| ydk::is_set(last_rib_connection_up_age.yfilter)
	|| ydk::is_set(rib_connection_down_count.yfilter)
	|| ydk::is_set(last_rib_connection_down_age.yfilter)
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation())
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6rib-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.yfilter)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.yfilter)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.yfilter)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.yfilter)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.yfilter)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_rib_connection_up_timestamp != nullptr)
    {
        children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
    }

    if(last_rib_connection_up_timestamp != nullptr)
    {
        children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
    }

    if(first_rib_connection_down_timestamp != nullptr)
    {
        children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
    }

    if(last_rib_connection_down_timestamp != nullptr)
    {
        children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
        is_rib_connection_up.value_namespace = name_space;
        is_rib_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
        rib_connection_up_count.value_namespace = name_space;
        rib_connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
        last_rib_connection_up_age.value_namespace = name_space;
        last_rib_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
        rib_connection_down_count.value_namespace = name_space;
        rib_connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
        last_rib_connection_down_age.value_namespace = name_space;
        last_rib_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up.yfilter = yfilter;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count.yfilter = yfilter;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age.yfilter = yfilter;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count.yfilter = yfilter;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-rib-connection-up-timestamp" || name == "last-rib-connection-up-timestamp" || name == "first-rib-connection-down-timestamp" || name == "last-rib-connection-down-timestamp" || name == "is-rib-connection-up" || name == "rib-connection-up-count" || name == "last-rib-connection-up-age" || name == "rib-connection-down-count" || name == "last-rib-connection-down-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::TeConnection()
    :
    is_connection_up{YType::boolean, "is-connection-up"},
    connection_up_count{YType::uint32, "connection-up-count"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"},
    connection_down_count{YType::uint32, "connection-down-count"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"}
    	,
    first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>())
	,first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>())
{
    first_connection_up_timestamp->parent = this;
    last_connection_up_timestamp->parent = this;
    first_connection_down_timestamp->parent = this;
    last_connection_down_timestamp->parent = this;

    yang_name = "te-connection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::~TeConnection()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_data() const
{
    return is_connection_up.is_set
	|| connection_up_count.is_set
	|| last_connection_up_age.is_set
	|| connection_down_count.is_set
	|| last_connection_down_age.is_set
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data())
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(last_connection_up_age.yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(last_connection_down_age.yfilter)
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation())
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.yfilter)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.yfilter)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_connection_up_timestamp != nullptr)
    {
        children["first-connection-up-timestamp"] = first_connection_up_timestamp;
    }

    if(last_connection_up_timestamp != nullptr)
    {
        children["last-connection-up-timestamp"] = last_connection_up_timestamp;
    }

    if(first_connection_down_timestamp != nullptr)
    {
        children["first-connection-down-timestamp"] = first_connection_down_timestamp;
    }

    if(last_connection_down_timestamp != nullptr)
    {
        children["last-connection-down-timestamp"] = last_connection_down_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
        last_connection_up_age.value_namespace = name_space;
        last_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
        last_connection_down_age.value_namespace = name_space;
        last_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-connection-up-timestamp" || name == "last-connection-up-timestamp" || name == "first-connection-down-timestamp" || name == "last-connection-down-timestamp" || name == "is-connection-up" || name == "connection-up-count" || name == "last-connection-up-age" || name == "connection-down-count" || name == "last-connection-down-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-connection-up-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-connection-up-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-connection-down-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-connection-down-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LsdConnection()
    :
    is_connection_up{YType::boolean, "is-connection-up"},
    connection_up_count{YType::uint32, "connection-up-count"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"},
    connection_down_count{YType::uint32, "connection-down-count"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"}
    	,
    first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>())
	,first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>())
{
    first_connection_up_timestamp->parent = this;
    last_connection_up_timestamp->parent = this;
    first_connection_down_timestamp->parent = this;
    last_connection_down_timestamp->parent = this;

    yang_name = "lsd-connection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::~LsdConnection()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_data() const
{
    return is_connection_up.is_set
	|| connection_up_count.is_set
	|| last_connection_up_age.is_set
	|| connection_down_count.is_set
	|| last_connection_down_age.is_set
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data())
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(last_connection_up_age.yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(last_connection_down_age.yfilter)
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation())
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.yfilter)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.yfilter)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_connection_up_timestamp != nullptr)
    {
        children["first-connection-up-timestamp"] = first_connection_up_timestamp;
    }

    if(last_connection_up_timestamp != nullptr)
    {
        children["last-connection-up-timestamp"] = last_connection_up_timestamp;
    }

    if(first_connection_down_timestamp != nullptr)
    {
        children["first-connection-down-timestamp"] = first_connection_down_timestamp;
    }

    if(last_connection_down_timestamp != nullptr)
    {
        children["last-connection-down-timestamp"] = last_connection_down_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
        last_connection_up_age.value_namespace = name_space;
        last_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
        last_connection_down_age.value_namespace = name_space;
        last_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-connection-up-timestamp" || name == "last-connection-up-timestamp" || name == "first-connection-down-timestamp" || name == "last-connection-down-timestamp" || name == "is-connection-up" || name == "connection-up-count" || name == "last-connection-up-age" || name == "connection-down-count" || name == "last-connection-down-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-connection-up-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-connection-up-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}


}
}

