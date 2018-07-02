
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_sdr_connect.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_sdr_connect {

SdrConnect::SdrConnect()
    :
    connect(std::make_shared<SdrConnect::Connect>())
{
    connect->parent = this;

    yang_name = "sdr-connect"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sdr-connect"; is_top_level_class = true; has_list_ancestor = false; 
}

SdrConnect::~SdrConnect()
{
}

bool SdrConnect::has_data() const
{
    if (is_presence_container) return true;
    return (connect !=  nullptr && connect->has_data());
}

bool SdrConnect::has_operation() const
{
    return is_set(yfilter)
	|| (connect !=  nullptr && connect->has_operation());
}

std::string SdrConnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-connect:sdr-connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<SdrConnect::Connect>();
        }
        return connect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connect != nullptr)
    {
        children["connect"] = connect;
    }

    return children;
}

void SdrConnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SdrConnect::clone_ptr() const
{
    return std::make_shared<SdrConnect>();
}

std::string SdrConnect::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrConnect::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrConnect::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SdrConnect::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SdrConnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect")
        return true;
    return false;
}

SdrConnect::Connect::Connect()
    :
    sdr(this, {"sdr_name", "remote_sdr_name", "csi_id"})
{

    yang_name = "connect"; yang_parent_name = "sdr-connect"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrConnect::Connect::~Connect()
{
}

bool SdrConnect::Connect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConnect::Connect::has_operation() const
{
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConnect::Connect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-connect:sdr-connect/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrConnect::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConnect::Connect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConnect::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        auto c = std::make_shared<SdrConnect::Connect::Sdr>();
        c->parent = this;
        sdr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConnect::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConnect::Connect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConnect::Connect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConnect::Connect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

SdrConnect::Connect::Sdr::Sdr()
    :
    sdr_name{YType::str, "sdr-name"},
    remote_sdr_name{YType::str, "remote-sdr-name"},
    csi_id{YType::uint32, "csi-id"}
{

    yang_name = "sdr"; yang_parent_name = "connect"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrConnect::Connect::Sdr::~Sdr()
{
}

bool SdrConnect::Connect::Sdr::has_data() const
{
    if (is_presence_container) return true;
    return sdr_name.is_set
	|| remote_sdr_name.is_set
	|| csi_id.is_set;
}

bool SdrConnect::Connect::Sdr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(remote_sdr_name.yfilter)
	|| ydk::is_set(csi_id.yfilter);
}

std::string SdrConnect::Connect::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-connect:sdr-connect/connect/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrConnect::Connect::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    ADD_KEY_TOKEN(sdr_name, "sdr-name");
    ADD_KEY_TOKEN(remote_sdr_name, "remote-sdr-name");
    ADD_KEY_TOKEN(csi_id, "csi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConnect::Connect::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (remote_sdr_name.is_set || is_set(remote_sdr_name.yfilter)) leaf_name_data.push_back(remote_sdr_name.get_name_leafdata());
    if (csi_id.is_set || is_set(csi_id.yfilter)) leaf_name_data.push_back(csi_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConnect::Connect::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConnect::Connect::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConnect::Connect::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-sdr-name")
    {
        remote_sdr_name = value;
        remote_sdr_name.value_namespace = name_space;
        remote_sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csi-id")
    {
        csi_id = value;
        csi_id.value_namespace = name_space;
        csi_id.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConnect::Connect::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "remote-sdr-name")
    {
        remote_sdr_name.yfilter = yfilter;
    }
    if(value_path == "csi-id")
    {
        csi_id.yfilter = yfilter;
    }
}

bool SdrConnect::Connect::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-name" || name == "remote-sdr-name" || name == "csi-id")
        return true;
    return false;
}


}
}

