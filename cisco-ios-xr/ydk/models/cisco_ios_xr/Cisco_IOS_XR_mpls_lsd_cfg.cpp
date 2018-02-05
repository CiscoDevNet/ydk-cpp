
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_lsd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_cfg {

MplsLsd::MplsLsd()
    :
    app_reg_delay_disable{YType::empty, "app-reg-delay-disable"},
    mpls_entropy_label{YType::empty, "mpls-entropy-label"},
    mpls_ip_ttl_propagate_disable{YType::enumeration, "mpls-ip-ttl-propagate-disable"}
    	,
    ipv6(std::make_shared<MplsLsd::Ipv6>())
	,ipv4(std::make_shared<MplsLsd::Ipv4>())
	,label_databases(std::make_shared<MplsLsd::LabelDatabases>())
{
    ipv6->parent = this;
    ipv4->parent = this;
    label_databases->parent = this;

    yang_name = "mpls-lsd"; yang_parent_name = "Cisco-IOS-XR-mpls-lsd-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLsd::~MplsLsd()
{
}

bool MplsLsd::has_data() const
{
    return app_reg_delay_disable.is_set
	|| mpls_entropy_label.is_set
	|| mpls_ip_ttl_propagate_disable.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (label_databases !=  nullptr && label_databases->has_data());
}

bool MplsLsd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_reg_delay_disable.yfilter)
	|| ydk::is_set(mpls_entropy_label.yfilter)
	|| ydk::is_set(mpls_ip_ttl_propagate_disable.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (label_databases !=  nullptr && label_databases->has_operation());
}

std::string MplsLsd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_reg_delay_disable.is_set || is_set(app_reg_delay_disable.yfilter)) leaf_name_data.push_back(app_reg_delay_disable.get_name_leafdata());
    if (mpls_entropy_label.is_set || is_set(mpls_entropy_label.yfilter)) leaf_name_data.push_back(mpls_entropy_label.get_name_leafdata());
    if (mpls_ip_ttl_propagate_disable.is_set || is_set(mpls_ip_ttl_propagate_disable.yfilter)) leaf_name_data.push_back(mpls_ip_ttl_propagate_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<MplsLsd::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<MplsLsd::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "label-databases")
    {
        if(label_databases == nullptr)
        {
            label_databases = std::make_shared<MplsLsd::LabelDatabases>();
        }
        return label_databases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(label_databases != nullptr)
    {
        children["label-databases"] = label_databases;
    }

    return children;
}

void MplsLsd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-reg-delay-disable")
    {
        app_reg_delay_disable = value;
        app_reg_delay_disable.value_namespace = name_space;
        app_reg_delay_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-entropy-label")
    {
        mpls_entropy_label = value;
        mpls_entropy_label.value_namespace = name_space;
        mpls_entropy_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-ip-ttl-propagate-disable")
    {
        mpls_ip_ttl_propagate_disable = value;
        mpls_ip_ttl_propagate_disable.value_namespace = name_space;
        mpls_ip_ttl_propagate_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-reg-delay-disable")
    {
        app_reg_delay_disable.yfilter = yfilter;
    }
    if(value_path == "mpls-entropy-label")
    {
        mpls_entropy_label.yfilter = yfilter;
    }
    if(value_path == "mpls-ip-ttl-propagate-disable")
    {
        mpls_ip_ttl_propagate_disable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> MplsLsd::clone_ptr() const
{
    return std::make_shared<MplsLsd>();
}

std::string MplsLsd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLsd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLsd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLsd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLsd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4" || name == "label-databases" || name == "app-reg-delay-disable" || name == "mpls-entropy-label" || name == "mpls-ip-ttl-propagate-disable")
        return true;
    return false;
}

MplsLsd::Ipv6::Ipv6()
    :
    ttl_expiration_pop{YType::uint32, "ttl-expiration-pop"}
{

    yang_name = "ipv6"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Ipv6::~Ipv6()
{
}

bool MplsLsd::Ipv6::has_data() const
{
    return ttl_expiration_pop.is_set;
}

bool MplsLsd::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl_expiration_pop.yfilter);
}

std::string MplsLsd::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl_expiration_pop.is_set || is_set(ttl_expiration_pop.yfilter)) leaf_name_data.push_back(ttl_expiration_pop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl-expiration-pop")
    {
        ttl_expiration_pop = value;
        ttl_expiration_pop.value_namespace = name_space;
        ttl_expiration_pop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl-expiration-pop")
    {
        ttl_expiration_pop.yfilter = yfilter;
    }
}

bool MplsLsd::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-expiration-pop")
        return true;
    return false;
}

MplsLsd::Ipv4::Ipv4()
    :
    ttl_expiration_pop{YType::uint32, "ttl-expiration-pop"}
{

    yang_name = "ipv4"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::Ipv4::~Ipv4()
{
}

bool MplsLsd::Ipv4::has_data() const
{
    return ttl_expiration_pop.is_set;
}

bool MplsLsd::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl_expiration_pop.yfilter);
}

std::string MplsLsd::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl_expiration_pop.is_set || is_set(ttl_expiration_pop.yfilter)) leaf_name_data.push_back(ttl_expiration_pop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl-expiration-pop")
    {
        ttl_expiration_pop = value;
        ttl_expiration_pop.value_namespace = name_space;
        ttl_expiration_pop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl-expiration-pop")
    {
        ttl_expiration_pop.yfilter = yfilter;
    }
}

bool MplsLsd::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-expiration-pop")
        return true;
    return false;
}

MplsLsd::LabelDatabases::LabelDatabases()
{

    yang_name = "label-databases"; yang_parent_name = "mpls-lsd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::LabelDatabases::~LabelDatabases()
{
}

bool MplsLsd::LabelDatabases::has_data() const
{
    for (std::size_t index=0; index<label_database.size(); index++)
    {
        if(label_database[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::LabelDatabases::has_operation() const
{
    for (std::size_t index=0; index<label_database.size(); index++)
    {
        if(label_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLsd::LabelDatabases::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-database")
    {
        auto c = std::make_shared<MplsLsd::LabelDatabases::LabelDatabase>();
        c->parent = this;
        label_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : label_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLsd::LabelDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLsd::LabelDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLsd::LabelDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-database")
        return true;
    return false;
}

MplsLsd::LabelDatabases::LabelDatabase::LabelDatabase()
    :
    label_database_id{YType::uint32, "label-database-id"}
    	,
    label_range(std::make_shared<MplsLsd::LabelDatabases::LabelDatabase::LabelRange>())
{
    label_range->parent = this;

    yang_name = "label-database"; yang_parent_name = "label-databases"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLsd::LabelDatabases::LabelDatabase::~LabelDatabase()
{
}

bool MplsLsd::LabelDatabases::LabelDatabase::has_data() const
{
    return label_database_id.is_set
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::LabelDatabases::LabelDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_database_id.yfilter)
	|| (label_range !=  nullptr && label_range->has_operation());
}

std::string MplsLsd::LabelDatabases::LabelDatabase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/label-databases/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLsd::LabelDatabases::LabelDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-database" <<"[label-database-id='" <<label_database_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelDatabases::LabelDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_database_id.is_set || is_set(label_database_id.yfilter)) leaf_name_data.push_back(label_database_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelDatabases::LabelDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-range")
    {
        if(label_range == nullptr)
        {
            label_range = std::make_shared<MplsLsd::LabelDatabases::LabelDatabase::LabelRange>();
        }
        return label_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelDatabases::LabelDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(label_range != nullptr)
    {
        children["label-range"] = label_range;
    }

    return children;
}

void MplsLsd::LabelDatabases::LabelDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-database-id")
    {
        label_database_id = value;
        label_database_id.value_namespace = name_space;
        label_database_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelDatabases::LabelDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-database-id")
    {
        label_database_id.yfilter = yfilter;
    }
}

bool MplsLsd::LabelDatabases::LabelDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-range" || name == "label-database-id")
        return true;
    return false;
}

MplsLsd::LabelDatabases::LabelDatabase::LabelRange::LabelRange()
    :
    minvalue{YType::uint32, "minvalue"},
    max_value{YType::uint32, "max-value"},
    min_static_value{YType::uint32, "min-static-value"},
    max_static_value{YType::uint32, "max-static-value"}
{

    yang_name = "label-range"; yang_parent_name = "label-database"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLsd::LabelDatabases::LabelDatabase::LabelRange::~LabelRange()
{
}

bool MplsLsd::LabelDatabases::LabelDatabase::LabelRange::has_data() const
{
    return minvalue.is_set
	|| max_value.is_set
	|| min_static_value.is_set
	|| max_static_value.is_set;
}

bool MplsLsd::LabelDatabases::LabelDatabase::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minvalue.yfilter)
	|| ydk::is_set(max_value.yfilter)
	|| ydk::is_set(min_static_value.yfilter)
	|| ydk::is_set(max_static_value.yfilter);
}

std::string MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minvalue.is_set || is_set(minvalue.yfilter)) leaf_name_data.push_back(minvalue.get_name_leafdata());
    if (max_value.is_set || is_set(max_value.yfilter)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (min_static_value.is_set || is_set(min_static_value.yfilter)) leaf_name_data.push_back(min_static_value.get_name_leafdata());
    if (max_static_value.is_set || is_set(max_static_value.yfilter)) leaf_name_data.push_back(max_static_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLsd::LabelDatabases::LabelDatabase::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minvalue")
    {
        minvalue = value;
        minvalue.value_namespace = name_space;
        minvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-value")
    {
        max_value = value;
        max_value.value_namespace = name_space;
        max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-static-value")
    {
        min_static_value = value;
        min_static_value.value_namespace = name_space;
        min_static_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-static-value")
    {
        max_static_value = value;
        max_static_value.value_namespace = name_space;
        max_static_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLsd::LabelDatabases::LabelDatabase::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minvalue")
    {
        minvalue.yfilter = yfilter;
    }
    if(value_path == "max-value")
    {
        max_value.yfilter = yfilter;
    }
    if(value_path == "min-static-value")
    {
        min_static_value.yfilter = yfilter;
    }
    if(value_path == "max-static-value")
    {
        max_static_value.yfilter = yfilter;
    }
}

bool MplsLsd::LabelDatabases::LabelDatabase::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minvalue" || name == "max-value" || name == "min-static-value" || name == "max-static-value")
        return true;
    return false;
}

const Enum::YLeaf MplsIpTtlPropagateDisable::all {0, "all"};
const Enum::YLeaf MplsIpTtlPropagateDisable::forward {1, "forward"};
const Enum::YLeaf MplsIpTtlPropagateDisable::local {2, "local"};


}
}

