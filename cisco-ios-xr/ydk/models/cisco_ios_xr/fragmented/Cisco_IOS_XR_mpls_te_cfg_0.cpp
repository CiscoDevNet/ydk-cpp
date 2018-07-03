
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::MplsTe()
    :
    enable_traffic_engineering{YType::empty, "enable-traffic-engineering"}
        ,
    diff_serv_traffic_engineering(std::make_shared<MplsTe::DiffServTrafficEngineering>())
    , named_tunnels(std::make_shared<MplsTe::NamedTunnels>())
    , gmpls_uni(std::make_shared<MplsTe::GmplsUni>())
    , global_attributes(std::make_shared<MplsTe::GlobalAttributes>())
    , transport_profile(std::make_shared<MplsTe::TransportProfile>())
    , interfaces(std::make_shared<MplsTe::Interfaces>())
    , gmpls_nni(std::make_shared<MplsTe::GmplsNni>())
    , lcac(std::make_shared<MplsTe::Lcac>())
{
    diff_serv_traffic_engineering->parent = this;
    named_tunnels->parent = this;
    gmpls_uni->parent = this;
    global_attributes->parent = this;
    transport_profile->parent = this;
    interfaces->parent = this;
    gmpls_nni->parent = this;
    lcac->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "Cisco-IOS-XR-mpls-te-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

MplsTe::~MplsTe()
{
}

bool MplsTe::has_data() const
{
    if (is_presence_container) return true;
    return enable_traffic_engineering.is_set
	|| (diff_serv_traffic_engineering !=  nullptr && diff_serv_traffic_engineering->has_data())
	|| (named_tunnels !=  nullptr && named_tunnels->has_data())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_data())
	|| (global_attributes !=  nullptr && global_attributes->has_data())
	|| (transport_profile !=  nullptr && transport_profile->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (gmpls_nni !=  nullptr && gmpls_nni->has_data())
	|| (lcac !=  nullptr && lcac->has_data());
}

bool MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_traffic_engineering.yfilter)
	|| (diff_serv_traffic_engineering !=  nullptr && diff_serv_traffic_engineering->has_operation())
	|| (named_tunnels !=  nullptr && named_tunnels->has_operation())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_operation())
	|| (global_attributes !=  nullptr && global_attributes->has_operation())
	|| (transport_profile !=  nullptr && transport_profile->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (gmpls_nni !=  nullptr && gmpls_nni->has_operation())
	|| (lcac !=  nullptr && lcac->has_operation());
}

std::string MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_traffic_engineering.is_set || is_set(enable_traffic_engineering.yfilter)) leaf_name_data.push_back(enable_traffic_engineering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diff-serv-traffic-engineering")
    {
        if(diff_serv_traffic_engineering == nullptr)
        {
            diff_serv_traffic_engineering = std::make_shared<MplsTe::DiffServTrafficEngineering>();
        }
        return diff_serv_traffic_engineering;
    }

    if(child_yang_name == "named-tunnels")
    {
        if(named_tunnels == nullptr)
        {
            named_tunnels = std::make_shared<MplsTe::NamedTunnels>();
        }
        return named_tunnels;
    }

    if(child_yang_name == "gmpls-uni")
    {
        if(gmpls_uni == nullptr)
        {
            gmpls_uni = std::make_shared<MplsTe::GmplsUni>();
        }
        return gmpls_uni;
    }

    if(child_yang_name == "global-attributes")
    {
        if(global_attributes == nullptr)
        {
            global_attributes = std::make_shared<MplsTe::GlobalAttributes>();
        }
        return global_attributes;
    }

    if(child_yang_name == "transport-profile")
    {
        if(transport_profile == nullptr)
        {
            transport_profile = std::make_shared<MplsTe::TransportProfile>();
        }
        return transport_profile;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTe::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "gmpls-nni")
    {
        if(gmpls_nni == nullptr)
        {
            gmpls_nni = std::make_shared<MplsTe::GmplsNni>();
        }
        return gmpls_nni;
    }

    if(child_yang_name == "lcac")
    {
        if(lcac == nullptr)
        {
            lcac = std::make_shared<MplsTe::Lcac>();
        }
        return lcac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(diff_serv_traffic_engineering != nullptr)
    {
        children["diff-serv-traffic-engineering"] = diff_serv_traffic_engineering;
    }

    if(named_tunnels != nullptr)
    {
        children["named-tunnels"] = named_tunnels;
    }

    if(gmpls_uni != nullptr)
    {
        children["gmpls-uni"] = gmpls_uni;
    }

    if(global_attributes != nullptr)
    {
        children["global-attributes"] = global_attributes;
    }

    if(transport_profile != nullptr)
    {
        children["transport-profile"] = transport_profile;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(gmpls_nni != nullptr)
    {
        children["gmpls-nni"] = gmpls_nni;
    }

    if(lcac != nullptr)
    {
        children["lcac"] = lcac;
    }

    return children;
}

void MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-traffic-engineering")
    {
        enable_traffic_engineering = value;
        enable_traffic_engineering.value_namespace = name_space;
        enable_traffic_engineering.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-traffic-engineering")
    {
        enable_traffic_engineering.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> MplsTe::clone_ptr() const
{
    return std::make_shared<MplsTe>();
}

std::string MplsTe::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTe::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTe::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsTe::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diff-serv-traffic-engineering" || name == "named-tunnels" || name == "gmpls-uni" || name == "global-attributes" || name == "transport-profile" || name == "interfaces" || name == "gmpls-nni" || name == "lcac" || name == "enable-traffic-engineering")
        return true;
    return false;
}

MplsTe::DiffServTrafficEngineering::DiffServTrafficEngineering()
    :
    bandwidth_constraint_model{YType::enumeration, "bandwidth-constraint-model"},
    mode_ietf{YType::enumeration, "mode-ietf"}
        ,
    classes(std::make_shared<MplsTe::DiffServTrafficEngineering::Classes>())
{
    classes->parent = this;

    yang_name = "diff-serv-traffic-engineering"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::DiffServTrafficEngineering::~DiffServTrafficEngineering()
{
}

bool MplsTe::DiffServTrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_constraint_model.is_set
	|| mode_ietf.is_set
	|| (classes !=  nullptr && classes->has_data());
}

bool MplsTe::DiffServTrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_constraint_model.yfilter)
	|| ydk::is_set(mode_ietf.yfilter)
	|| (classes !=  nullptr && classes->has_operation());
}

std::string MplsTe::DiffServTrafficEngineering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_constraint_model.is_set || is_set(bandwidth_constraint_model.yfilter)) leaf_name_data.push_back(bandwidth_constraint_model.get_name_leafdata());
    if (mode_ietf.is_set || is_set(mode_ietf.yfilter)) leaf_name_data.push_back(mode_ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<MplsTe::DiffServTrafficEngineering::Classes>();
        }
        return classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    return children;
}

void MplsTe::DiffServTrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-constraint-model")
    {
        bandwidth_constraint_model = value;
        bandwidth_constraint_model.value_namespace = name_space;
        bandwidth_constraint_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-ietf")
    {
        mode_ietf = value;
        mode_ietf.value_namespace = name_space;
        mode_ietf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::DiffServTrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-constraint-model")
    {
        bandwidth_constraint_model.yfilter = yfilter;
    }
    if(value_path == "mode-ietf")
    {
        mode_ietf.yfilter = yfilter;
    }
}

bool MplsTe::DiffServTrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classes" || name == "bandwidth-constraint-model" || name == "mode-ietf")
        return true;
    return false;
}

MplsTe::DiffServTrafficEngineering::Classes::Classes()
    :
    class_(this, {"class_number"})
{

    yang_name = "classes"; yang_parent_name = "diff-serv-traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::DiffServTrafficEngineering::Classes::~Classes()
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::DiffServTrafficEngineering::Classes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/diff-serv-traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTrafficEngineering::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTrafficEngineering::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<MplsTe::DiffServTrafficEngineering::Classes::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTrafficEngineering::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::DiffServTrafficEngineering::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::DiffServTrafficEngineering::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

MplsTe::DiffServTrafficEngineering::Classes::Class::Class()
    :
    class_number{YType::uint32, "class-number"},
    class_type{YType::uint32, "class-type"},
    class_priority{YType::uint32, "class-priority"},
    unused{YType::boolean, "unused"}
{

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::DiffServTrafficEngineering::Classes::Class::~Class()
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class::has_data() const
{
    if (is_presence_container) return true;
    return class_number.is_set
	|| class_type.is_set
	|| class_priority.is_set
	|| unused.is_set;
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_number.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(class_priority.yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string MplsTe::DiffServTrafficEngineering::Classes::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/diff-serv-traffic-engineering/classes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTrafficEngineering::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(class_number, "class-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTrafficEngineering::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.yfilter)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (class_priority.is_set || is_set(class_priority.yfilter)) leaf_name_data.push_back(class_priority.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTrafficEngineering::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::DiffServTrafficEngineering::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-number")
    {
        class_number = value;
        class_number.value_namespace = name_space;
        class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-priority")
    {
        class_priority = value;
        class_priority.value_namespace = name_space;
        class_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::DiffServTrafficEngineering::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-number")
    {
        class_number.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "class-priority")
    {
        class_priority.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "class-type" || name == "class-priority" || name == "unused")
        return true;
    return false;
}

MplsTe::NamedTunnels::NamedTunnels()
    :
    enable{YType::empty, "enable"}
        ,
    tunnels(std::make_shared<MplsTe::NamedTunnels::Tunnels>())
{
    tunnels->parent = this;

    yang_name = "named-tunnels"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::NamedTunnels::~NamedTunnels()
{
}

bool MplsTe::NamedTunnels::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTe::NamedTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTe::NamedTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NamedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTe::NamedTunnels::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsTe::NamedTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnels" || name == "enable")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnels()
    :
    tunnel(this, {"tunnel_name", "tunnel_type"})
{

    yang_name = "tunnels"; yang_parent_name = "named-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::NamedTunnels::Tunnels::~Tunnels()
{
}

bool MplsTe::NamedTunnels::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/named-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NamedTunnels::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    enable{YType::empty, "enable"}
        ,
    tunnel_attributes(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes>())
    , tunnel_id(nullptr) // presence node
{
    tunnel_attributes->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| enable.is_set
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_data())
	|| (tunnel_id !=  nullptr && tunnel_id->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_operation())
	|| (tunnel_id !=  nullptr && tunnel_id->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/named-tunnels/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    ADD_KEY_TOKEN(tunnel_type, "tunnel-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-attributes")
    {
        if(tunnel_attributes == nullptr)
        {
            tunnel_attributes = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes>();
        }
        return tunnel_attributes;
    }

    if(child_yang_name == "tunnel-id")
    {
        if(tunnel_id == nullptr)
        {
            tunnel_id = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId>();
        }
        return tunnel_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_attributes != nullptr)
    {
        children["tunnel-attributes"] = tunnel_attributes;
    }

    if(tunnel_id != nullptr)
    {
        children["tunnel-id"] = tunnel_id;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-attributes" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-type" || name == "enable")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelAttributes()
    :
    shutdown{YType::empty, "shutdown"},
    forward_class{YType::uint32, "forward-class"},
    destination{YType::str, "destination"},
    record_route{YType::empty, "record-route"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    soft_preemption{YType::empty, "soft-preemption"},
    load_share{YType::uint32, "load-share"}
        ,
    path_setups(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups>())
    , tunnel_path_selection(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection>())
    , auto_bandwidth(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth>())
    , priority(nullptr) // presence node
    , affinity_mask(nullptr) // presence node
    , logging(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging>())
    , bandwidth(nullptr) // presence node
    , autoroute(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute>())
    , new_style_affinity_affinity_types(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes>())
    , fast_reroute(nullptr) // presence node
{
    path_setups->parent = this;
    tunnel_path_selection->parent = this;
    auto_bandwidth->parent = this;
    logging->parent = this;
    autoroute->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "tunnel-attributes"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::~TunnelAttributes()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| forward_class.is_set
	|| destination.is_set
	|| record_route.is_set
	|| path_selection_metric.is_set
	|| soft_preemption.is_set
	|| load_share.is_set
	|| (path_setups !=  nullptr && path_setups->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| (path_setups !=  nullptr && path_setups->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-setups")
    {
        if(path_setups == nullptr)
        {
            path_setups = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups>();
        }
        return path_setups;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_setups != nullptr)
    {
        children["path-setups"] = path_setups;
    }

    if(tunnel_path_selection != nullptr)
    {
        children["tunnel-path-selection"] = tunnel_path_selection;
    }

    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-setups" || name == "tunnel-path-selection" || name == "auto-bandwidth" || name == "priority" || name == "affinity-mask" || name == "logging" || name == "bandwidth" || name == "autoroute" || name == "new-style-affinity-affinity-types" || name == "fast-reroute" || name == "shutdown" || name == "forward-class" || name == "destination" || name == "record-route" || name == "path-selection-metric" || name == "soft-preemption" || name == "load-share")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetups()
    :
    path_setup(this, {"path_setup_name"})
{

    yang_name = "path-setups"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::~PathSetups()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_setup.len(); index++)
    {
        if(path_setup[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_operation() const
{
    for (std::size_t index=0; index<path_setup.len(); index++)
    {
        if(path_setup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-setup")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup>();
        c->parent = this;
        path_setup.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_setup.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-setup")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathSetup()
    :
    path_setup_name{YType::str, "path-setup-name"},
    preference{YType::uint32, "preference"},
    enable{YType::empty, "enable"}
        ,
    path_computation(nullptr) // presence node
{

    yang_name = "path-setup"; yang_parent_name = "path-setups"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::~PathSetup()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_data() const
{
    if (is_presence_container) return true;
    return path_setup_name.is_set
	|| preference.is_set
	|| enable.is_set
	|| (path_computation !=  nullptr && path_computation->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_setup_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_computation !=  nullptr && path_computation->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup";
    ADD_KEY_TOKEN(path_setup_name, "path-setup-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_setup_name.is_set || is_set(path_setup_name.yfilter)) leaf_name_data.push_back(path_setup_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-computation")
    {
        if(path_computation == nullptr)
        {
            path_computation = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation>();
        }
        return path_computation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_computation != nullptr)
    {
        children["path-computation"] = path_computation;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-setup-name")
    {
        path_setup_name = value;
        path_setup_name.value_namespace = name_space;
        path_setup_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-setup-name")
    {
        path_setup_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-computation" || name == "path-setup-name" || name == "preference" || name == "enable")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::PathComputation()
    :
    path_computation_method{YType::enumeration, "path-computation-method"},
    explicit_path_name{YType::str, "explicit-path-name"},
    path_computation_server{YType::str, "path-computation-server"}
{

    yang_name = "path-computation"; yang_parent_name = "path-setup"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::~PathComputation()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_data() const
{
    if (is_presence_container) return true;
    return path_computation_method.is_set
	|| explicit_path_name.is_set
	|| path_computation_server.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(path_computation_server.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-computation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-computation-method" || name == "explicit-path-name" || name == "path-computation-server")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    tiebreaker{YType::enumeration, "tiebreaker"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"}
        ,
    invalidation(nullptr) // presence node
{

    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_data() const
{
    if (is_presence_container) return true;
    return tiebreaker.is_set
	|| path_selection_hop_limit.is_set
	|| path_selection_cost_limit.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(path_selection_hop_limit.yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.yfilter)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
        path_selection_hop_limit.value_namespace = name_space;
        path_selection_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "tiebreaker" || name == "path-selection-hop-limit" || name == "path-selection-cost-limit")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::enumeration, "path-invalidation-action"}
{

    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-timeout" || name == "path-invalidation-action")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoBandwidth()
    :
    underflow_enable{YType::boolean, "underflow-enable"},
    enabled{YType::boolean, "enabled"},
    application_frequency{YType::uint32, "application-frequency"},
    overflow_enable{YType::boolean, "overflow-enable"},
    collection_only{YType::empty, "collection-only"}
        ,
    underflow(nullptr) // presence node
    , overflow(nullptr) // presence node
    , bandwidth_limits(nullptr) // presence node
    , adjustment_threshold(nullptr) // presence node
{

    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return underflow_enable.is_set
	|| enabled.is_set
	|| application_frequency.is_set
	|| overflow_enable.is_set
	|| collection_only.is_set
	|| (underflow !=  nullptr && underflow->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_enable.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(overflow_enable.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| (underflow !=  nullptr && underflow->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_enable.is_set || is_set(underflow_enable.yfilter)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.yfilter)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits == nullptr)
        {
            bandwidth_limits = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits>();
        }
        return bandwidth_limits;
    }

    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold == nullptr)
        {
            adjustment_threshold = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold>();
        }
        return adjustment_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(underflow != nullptr)
    {
        children["underflow"] = underflow;
    }

    if(overflow != nullptr)
    {
        children["overflow"] = overflow;
    }

    if(bandwidth_limits != nullptr)
    {
        children["bandwidth-limits"] = bandwidth_limits;
    }

    if(adjustment_threshold != nullptr)
    {
        children["adjustment-threshold"] = adjustment_threshold;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
        underflow_enable.value_namespace = name_space;
        underflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
        overflow_enable.value_namespace = name_space;
        overflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-enable")
    {
        underflow_enable.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow" || name == "overflow" || name == "bandwidth-limits" || name == "adjustment-threshold" || name == "underflow-enable" || name == "enabled" || name == "application-frequency" || name == "overflow-enable" || name == "collection-only")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"},
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"}
{

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_data() const
{
    if (is_presence_container) return true;
    return underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set
	|| underflow_threshold_limit.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());
    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow-threshold-percent" || name == "underflow-threshold-value" || name == "underflow-threshold-limit")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"},
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"}
{

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_data() const
{
    if (is_presence_container) return true;
    return overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set
	|| overflow_threshold_limit.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());
    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-threshold-percent" || name == "overflow-threshold-value" || name == "overflow-threshold-limit")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"},
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"}
{

    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_min_limit.is_set
	|| bandwidth_max_limit.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_min_limit.yfilter)
	|| ydk::is_set(bandwidth_max_limit.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.yfilter)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());
    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.yfilter)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
        bandwidth_min_limit.value_namespace = name_space;
        bandwidth_min_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
        bandwidth_max_limit.value_namespace = name_space;
        bandwidth_max_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit.yfilter = yfilter;
    }
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-min-limit" || name == "bandwidth-max-limit")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{

    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    if (is_presence_container) return true;
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold-percent" || name == "adjustment-threshold-value")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::~Priority()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::~AffinityMask()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::Logging()
    :
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    all{YType::empty, "all"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::~Logging()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_switch_over_change_message.is_set
	|| all.is_set
	|| record_route_messsage.is_set
	|| bfd_state_message.is_set
	|| bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| pcalc_failure_message.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-switch-over-change-message" || name == "all" || name == "record-route-messsage" || name == "bfd-state-message" || name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "reroute-messsage" || name == "state-message" || name == "insufficient-bw-message" || name == "reoptimized-message" || name == "pcalc-failure-message")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Autoroute()
    :
    autoroute_announce(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce>())
    , destinations(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations>())
{
    autoroute_announce->parent = this;
    destinations->parent = this;

    yang_name = "autoroute"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::~Autoroute()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_data() const
{
    if (is_presence_container) return true;
    return (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destinations !=  nullptr && destinations->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destinations !=  nullptr && destinations->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce == nullptr)
        {
            autoroute_announce = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce>();
        }
        return autoroute_announce;
    }

    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations>();
        }
        return destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autoroute_announce != nullptr)
    {
        children["autoroute-announce"] = autoroute_announce;
    }

    if(destinations != nullptr)
    {
        children["destinations"] = destinations;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-announce" || name == "destinations")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
        ,
    exclude_traffic(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
    , metric(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    metric->parent = this;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic == nullptr)
        {
            exclude_traffic = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
        }
        return exclude_traffic;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exclude_traffic != nullptr)
    {
        children["exclude-traffic"] = exclude_traffic;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-traffic" || name == "metric" || name == "enable" || name == "include-ipv6")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{

    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    if (is_presence_container) return true;
    return segment_routing.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    metric_type{YType::enumeration, "metric-type"},
    absolute_metric{YType::uint32, "absolute-metric"},
    relative_metric{YType::int32, "relative-metric"},
    constant_metric{YType::uint32, "constant-metric"}
{

    yang_name = "metric"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_type.is_set
	|| absolute_metric.is_set
	|| relative_metric.is_set
	|| constant_metric.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(absolute_metric.yfilter)
	|| ydk::is_set(relative_metric.yfilter)
	|| ydk::is_set(constant_metric.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (absolute_metric.is_set || is_set(absolute_metric.yfilter)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.yfilter)) leaf_name_data.push_back(relative_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.yfilter)) leaf_name_data.push_back(constant_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
        absolute_metric.value_namespace = name_space;
        absolute_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
        relative_metric.value_namespace = name_space;
        relative_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
        constant_metric.value_namespace = name_space;
        constant_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "absolute-metric")
    {
        absolute_metric.yfilter = yfilter;
    }
    if(value_path == "relative-metric")
    {
        relative_metric.yfilter = yfilter;
    }
    if(value_path == "constant-metric")
    {
        constant_metric.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-type" || name == "absolute-metric" || name == "relative-metric" || name == "constant-metric")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destinations()
    :
    destination(this, {"destination_address"})
{

    yang_name = "destinations"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::~Destinations()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination>();
        c->parent = this;
        destination.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : destination.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::~Destination()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
    :
    new_style_affinity_affinity_type(this, {"affinity_type"})
    , new_style_affinity_affinity_type_affinity1(this, {"affinity_type", "affinity1"})
    , new_style_affinity_affinity_type_affinity1_affinity2(this, {"affinity_type", "affinity1", "affinity2"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3(this, {"affinity_type", "affinity1", "affinity2", "affinity3"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9", "affinity10"})
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : new_style_affinity_affinity_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    ADD_KEY_TOKEN(affinity10, "affinity10");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::~FastReroute()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::TunnelId()
    :
    tunnel_id_type{YType::enumeration, "tunnel-id-type"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "tunnel-id"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::~TunnelId()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id_type.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id_type.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id_type.is_set || is_set(tunnel_id_type.yfilter)) leaf_name_data.push_back(tunnel_id_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id-type")
    {
        tunnel_id_type = value;
        tunnel_id_type.value_namespace = name_space;
        tunnel_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id-type")
    {
        tunnel_id_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id-type" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::GmplsUni::GmplsUni()
    :
    timers(std::make_shared<MplsTe::GmplsUni::Timers>())
    , controllers(std::make_shared<MplsTe::GmplsUni::Controllers>())
{
    timers->parent = this;
    controllers->parent = this;

    yang_name = "gmpls-uni"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GmplsUni::~GmplsUni()
{
}

bool MplsTe::GmplsUni::has_data() const
{
    if (is_presence_container) return true;
    return (timers !=  nullptr && timers->has_data())
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsUni::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation())
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsUni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GmplsUni::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<MplsTe::GmplsUni::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void MplsTe::GmplsUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers" || name == "controllers")
        return true;
    return false;
}

MplsTe::GmplsUni::Timers::Timers()
    :
    path_option_timers(std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers>())
{
    path_option_timers->parent = this;

    yang_name = "timers"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GmplsUni::Timers::~Timers()
{
}

bool MplsTe::GmplsUni::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (path_option_timers !=  nullptr && path_option_timers->has_data());
}

bool MplsTe::GmplsUni::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (path_option_timers !=  nullptr && path_option_timers->has_operation());
}

std::string MplsTe::GmplsUni::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-timers")
    {
        if(path_option_timers == nullptr)
        {
            path_option_timers = std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers>();
        }
        return path_option_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_option_timers != nullptr)
    {
        children["path-option-timers"] = path_option_timers;
    }

    return children;
}

void MplsTe::GmplsUni::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-timers")
        return true;
    return false;
}

MplsTe::GmplsUni::Timers::PathOptionTimers::PathOptionTimers()
    :
    holddown(std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown>())
{
    holddown->parent = this;

    yang_name = "path-option-timers"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GmplsUni::Timers::PathOptionTimers::~PathOptionTimers()
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_data() const
{
    if (is_presence_container) return true;
    return (holddown !=  nullptr && holddown->has_data());
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_operation() const
{
    return is_set(yfilter)
	|| (holddown !=  nullptr && holddown->has_operation());
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Timers::PathOptionTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::PathOptionTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown>();
        }
        return holddown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Timers::PathOptionTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(holddown != nullptr)
    {
        children["holddown"] = holddown;
    }

    return children;
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown")
        return true;
    return false;
}

MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::Holddown()
    :
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "holddown"; yang_parent_name = "path-option-timers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::~Holddown()
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| maximum.is_set;
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/timers/path-option-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "maximum")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controllers()
    :
    controller(this, {"controller_name"})
{

    yang_name = "controllers"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GmplsUni::Controllers::~Controllers()
{
}

bool MplsTe::GmplsUni::Controllers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsUni::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsUni::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<MplsTe::GmplsUni::Controllers::Controller>();
        c->parent = this;
        controller.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : controller.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    enable{YType::empty, "enable"}
        ,
    announce(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::Announce>())
    , controller_logging(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::ControllerLogging>())
    , gmpls_unitunnel_head(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead>())
{
    announce->parent = this;
    controller_logging->parent = this;
    gmpls_unitunnel_head->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GmplsUni::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| enable.is_set
	|| (announce !=  nullptr && announce->has_data())
	|| (controller_logging !=  nullptr && controller_logging->has_data())
	|| (gmpls_unitunnel_head !=  nullptr && gmpls_unitunnel_head->has_data());
}

bool MplsTe::GmplsUni::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (announce !=  nullptr && announce->has_operation())
	|| (controller_logging !=  nullptr && controller_logging->has_operation())
	|| (gmpls_unitunnel_head !=  nullptr && gmpls_unitunnel_head->has_operation());
}

std::string MplsTe::GmplsUni::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "controller-logging")
    {
        if(controller_logging == nullptr)
        {
            controller_logging = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::ControllerLogging>();
        }
        return controller_logging;
    }

    if(child_yang_name == "gmpls-unitunnel-head")
    {
        if(gmpls_unitunnel_head == nullptr)
        {
            gmpls_unitunnel_head = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead>();
        }
        return gmpls_unitunnel_head;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(controller_logging != nullptr)
    {
        children["controller-logging"] = controller_logging;
    }

    if(gmpls_unitunnel_head != nullptr)
    {
        children["gmpls-unitunnel-head"] = gmpls_unitunnel_head;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce" || name == "controller-logging" || name == "gmpls-unitunnel-head" || name == "controller-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::Announce::Announce()
    :
    srl_gs{YType::empty, "srl-gs"}
{

    yang_name = "announce"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::Announce::~Announce()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_data() const
{
    if (is_presence_container) return true;
    return srl_gs.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srl_gs.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::Announce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srl_gs.is_set || is_set(srl_gs.yfilter)) leaf_name_data.push_back(srl_gs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::Announce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srl-gs")
    {
        srl_gs = value;
        srl_gs.value_namespace = name_space;
        srl_gs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::Announce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srl-gs")
    {
        srl_gs.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::ControllerLogging()
    :
    discovered_srlg_change_logging{YType::empty, "discovered-srlg-change-logging"}
{

    yang_name = "controller-logging"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::~ControllerLogging()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_data() const
{
    if (is_presence_container) return true;
    return discovered_srlg_change_logging.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discovered_srlg_change_logging.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discovered_srlg_change_logging.is_set || is_set(discovered_srlg_change_logging.yfilter)) leaf_name_data.push_back(discovered_srlg_change_logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discovered-srlg-change-logging")
    {
        discovered_srlg_change_logging = value;
        discovered_srlg_change_logging.value_namespace = name_space;
        discovered_srlg_change_logging.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discovered-srlg-change-logging")
    {
        discovered_srlg_change_logging.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg-change-logging")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::GmplsUnitunnelHead()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    enable{YType::empty, "enable"},
    destination{YType::str, "destination"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"}
        ,
    path_options(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions>())
    , recording(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording>())
    , logging(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging>())
    , priority(nullptr) // presence node
{
    path_options->parent = this;
    recording->parent = this;
    logging->parent = this;

    yang_name = "gmpls-unitunnel-head"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::~GmplsUnitunnelHead()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| enable.is_set
	|| destination.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| (path_options !=  nullptr && path_options->has_data())
	|| (recording !=  nullptr && recording->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (recording !=  nullptr && recording->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-unitunnel-head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions>();
        }
        return path_options;
    }

    if(child_yang_name == "recording")
    {
        if(recording == nullptr)
        {
            recording = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording>();
        }
        return recording;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    if(recording != nullptr)
    {
        children["recording"] = recording;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-options" || name == "recording" || name == "logging" || name == "priority" || name == "tunnel-id" || name == "enable" || name == "destination" || name == "record-route" || name == "signalled-name")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOptions()
    :
    path_option(this, {"preference_level"})
{

    yang_name = "path-options"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::~PathOptions()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto c = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption>();
        c->parent = this;
        path_option.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_option.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    xro_type{YType::empty, "xro-type"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"},
    lockdown{YType::enumeration, "lockdown"},
    verbatim{YType::enumeration, "verbatim"},
    signaled_label{YType::enumeration, "signaled-label"},
    dwdm_channel{YType::uint32, "dwdm-channel"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::~PathOption()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_data() const
{
    if (is_presence_container) return true;
    return preference_level.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| xro_type.is_set
	|| xro_attribute_set_name.is_set
	|| lockdown.is_set
	|| verbatim.is_set
	|| signaled_label.is_set
	|| dwdm_channel.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(xro_type.yfilter)
	|| ydk::is_set(xro_attribute_set_name.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(signaled_label.yfilter)
	|| ydk::is_set(dwdm_channel.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    ADD_KEY_TOKEN(preference_level, "preference-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (xro_type.is_set || is_set(xro_type.yfilter)) leaf_name_data.push_back(xro_type.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.yfilter)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (signaled_label.is_set || is_set(signaled_label.yfilter)) leaf_name_data.push_back(signaled_label.get_name_leafdata());
    if (dwdm_channel.is_set || is_set(dwdm_channel.yfilter)) leaf_name_data.push_back(dwdm_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-type")
    {
        xro_type = value;
        xro_type.value_namespace = name_space;
        xro_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
        xro_attribute_set_name.value_namespace = name_space;
        xro_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-label")
    {
        signaled_label = value;
        signaled_label.value_namespace = name_space;
        signaled_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-channel")
    {
        dwdm_channel = value;
        dwdm_channel.value_namespace = name_space;
        dwdm_channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "xro-type")
    {
        xro_type.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "signaled-label")
    {
        signaled_label.yfilter = yfilter;
    }
    if(value_path == "dwdm-channel")
    {
        dwdm_channel.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "path-type" || name == "path-id" || name == "path-name" || name == "xro-type" || name == "xro-attribute-set-name" || name == "lockdown" || name == "verbatim" || name == "signaled-label" || name == "dwdm-channel")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::Recording()
    :
    srlg{YType::empty, "srlg"}
{

    yang_name = "recording"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::~Recording()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_data() const
{
    if (is_presence_container) return true;
    return srlg.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recording";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::Logging()
    :
    state_message{YType::empty, "state-message"}
{

    yang_name = "logging"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::~Logging()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_data() const
{
    if (is_presence_container) return true;
    return state_message.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-message")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::~Priority()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::GlobalAttributes()
    :
    log_nsr_status{YType::empty, "log-nsr-status"},
    log_issu_status{YType::empty, "log-issu-status"},
    reoptimize_link_up{YType::empty, "reoptimize-link-up"},
    reoptimize_delay_cleanup_timer{YType::uint32, "reoptimize-delay-cleanup-timer"},
    disable_reoptimize_affinity_failure{YType::empty, "disable-reoptimize-affinity-failure"},
    maximum_tunnels{YType::uint32, "maximum-tunnels"},
    link_holddown_timer{YType::uint32, "link-holddown-timer"},
    fault_oam{YType::empty, "fault-oam"},
    enable_unequal_load_balancing{YType::empty, "enable-unequal-load-balancing"},
    log_tail{YType::empty, "log-tail"},
    reoptimize_delay_after_frr_timer{YType::uint32, "reoptimize-delay-after-frr-timer"},
    auto_bandwidth_collect_frequency{YType::uint32, "auto-bandwidth-collect-frequency"},
    reopt_delay_path_protect_switchover_timer{YType::uint32, "reopt-delay-path-protect-switchover-timer"},
    log_all{YType::empty, "log-all"},
    loose_path_retry_period{YType::uint32, "loose-path-retry-period"},
    reoptimize_load_balancing{YType::empty, "reoptimize-load-balancing"},
    log_head{YType::empty, "log-head"},
    path_selection_ignore_overload{YType::empty, "path-selection-ignore-overload"},
    graceful_preemption_on_bandwidth_reduction{YType::empty, "graceful-preemption-on-bandwidth-reduction"},
    advertise_explicit_nulls{YType::empty, "advertise-explicit-nulls"},
    reoptimize_delay_install_timer{YType::uint32, "reoptimize-delay-install-timer"},
    reoptimize_delay_after_affinity_failure_timer{YType::uint32, "reoptimize-delay-after-affinity-failure-timer"},
    log_frr_protection{YType::enumeration, "log-frr-protection"},
    reoptimize_timer_frequency{YType::uint32, "reoptimize-timer-frequency"},
    log_mid{YType::empty, "log-mid"},
    log_preemption{YType::empty, "log-preemption"}
        ,
    auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel>())
    , hardware_out_of_resource(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource>())
    , secondary_router_ids(std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds>())
    , srlg(std::make_shared<MplsTe::GlobalAttributes::Srlg>())
    , queues(std::make_shared<MplsTe::GlobalAttributes::Queues>())
    , mib(std::make_shared<MplsTe::GlobalAttributes::Mib>())
    , attribute_set(std::make_shared<MplsTe::GlobalAttributes::AttributeSet>())
    , bfd_over_lsp(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp>())
    , bandwidth_accounting(std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting>())
    , pce_attributes(std::make_shared<MplsTe::GlobalAttributes::PceAttributes>())
    , lsp_out_of_resource(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource>())
    , soft_preemption(std::make_shared<MplsTe::GlobalAttributes::SoftPreemption>())
    , fast_reroute(std::make_shared<MplsTe::GlobalAttributes::FastReroute>())
    , path_selection(std::make_shared<MplsTe::GlobalAttributes::PathSelection>())
    , affinity_mappings(std::make_shared<MplsTe::GlobalAttributes::AffinityMappings>())
{
    auto_tunnel->parent = this;
    hardware_out_of_resource->parent = this;
    secondary_router_ids->parent = this;
    srlg->parent = this;
    queues->parent = this;
    mib->parent = this;
    attribute_set->parent = this;
    bfd_over_lsp->parent = this;
    bandwidth_accounting->parent = this;
    pce_attributes->parent = this;
    lsp_out_of_resource->parent = this;
    soft_preemption->parent = this;
    fast_reroute->parent = this;
    path_selection->parent = this;
    affinity_mappings->parent = this;

    yang_name = "global-attributes"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::~GlobalAttributes()
{
}

bool MplsTe::GlobalAttributes::has_data() const
{
    if (is_presence_container) return true;
    return log_nsr_status.is_set
	|| log_issu_status.is_set
	|| reoptimize_link_up.is_set
	|| reoptimize_delay_cleanup_timer.is_set
	|| disable_reoptimize_affinity_failure.is_set
	|| maximum_tunnels.is_set
	|| link_holddown_timer.is_set
	|| fault_oam.is_set
	|| enable_unequal_load_balancing.is_set
	|| log_tail.is_set
	|| reoptimize_delay_after_frr_timer.is_set
	|| auto_bandwidth_collect_frequency.is_set
	|| reopt_delay_path_protect_switchover_timer.is_set
	|| log_all.is_set
	|| loose_path_retry_period.is_set
	|| reoptimize_load_balancing.is_set
	|| log_head.is_set
	|| path_selection_ignore_overload.is_set
	|| graceful_preemption_on_bandwidth_reduction.is_set
	|| advertise_explicit_nulls.is_set
	|| reoptimize_delay_install_timer.is_set
	|| reoptimize_delay_after_affinity_failure_timer.is_set
	|| log_frr_protection.is_set
	|| reoptimize_timer_frequency.is_set
	|| log_mid.is_set
	|| log_preemption.is_set
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (hardware_out_of_resource !=  nullptr && hardware_out_of_resource->has_data())
	|| (secondary_router_ids !=  nullptr && secondary_router_ids->has_data())
	|| (srlg !=  nullptr && srlg->has_data())
	|| (queues !=  nullptr && queues->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (bandwidth_accounting !=  nullptr && bandwidth_accounting->has_data())
	|| (pce_attributes !=  nullptr && pce_attributes->has_data())
	|| (lsp_out_of_resource !=  nullptr && lsp_out_of_resource->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_data());
}

bool MplsTe::GlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_nsr_status.yfilter)
	|| ydk::is_set(log_issu_status.yfilter)
	|| ydk::is_set(reoptimize_link_up.yfilter)
	|| ydk::is_set(reoptimize_delay_cleanup_timer.yfilter)
	|| ydk::is_set(disable_reoptimize_affinity_failure.yfilter)
	|| ydk::is_set(maximum_tunnels.yfilter)
	|| ydk::is_set(link_holddown_timer.yfilter)
	|| ydk::is_set(fault_oam.yfilter)
	|| ydk::is_set(enable_unequal_load_balancing.yfilter)
	|| ydk::is_set(log_tail.yfilter)
	|| ydk::is_set(reoptimize_delay_after_frr_timer.yfilter)
	|| ydk::is_set(auto_bandwidth_collect_frequency.yfilter)
	|| ydk::is_set(reopt_delay_path_protect_switchover_timer.yfilter)
	|| ydk::is_set(log_all.yfilter)
	|| ydk::is_set(loose_path_retry_period.yfilter)
	|| ydk::is_set(reoptimize_load_balancing.yfilter)
	|| ydk::is_set(log_head.yfilter)
	|| ydk::is_set(path_selection_ignore_overload.yfilter)
	|| ydk::is_set(graceful_preemption_on_bandwidth_reduction.yfilter)
	|| ydk::is_set(advertise_explicit_nulls.yfilter)
	|| ydk::is_set(reoptimize_delay_install_timer.yfilter)
	|| ydk::is_set(reoptimize_delay_after_affinity_failure_timer.yfilter)
	|| ydk::is_set(log_frr_protection.yfilter)
	|| ydk::is_set(reoptimize_timer_frequency.yfilter)
	|| ydk::is_set(log_mid.yfilter)
	|| ydk::is_set(log_preemption.yfilter)
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (hardware_out_of_resource !=  nullptr && hardware_out_of_resource->has_operation())
	|| (secondary_router_ids !=  nullptr && secondary_router_ids->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation())
	|| (queues !=  nullptr && queues->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (bandwidth_accounting !=  nullptr && bandwidth_accounting->has_operation())
	|| (pce_attributes !=  nullptr && pce_attributes->has_operation())
	|| (lsp_out_of_resource !=  nullptr && lsp_out_of_resource->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_operation());
}

std::string MplsTe::GlobalAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_nsr_status.is_set || is_set(log_nsr_status.yfilter)) leaf_name_data.push_back(log_nsr_status.get_name_leafdata());
    if (log_issu_status.is_set || is_set(log_issu_status.yfilter)) leaf_name_data.push_back(log_issu_status.get_name_leafdata());
    if (reoptimize_link_up.is_set || is_set(reoptimize_link_up.yfilter)) leaf_name_data.push_back(reoptimize_link_up.get_name_leafdata());
    if (reoptimize_delay_cleanup_timer.is_set || is_set(reoptimize_delay_cleanup_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_cleanup_timer.get_name_leafdata());
    if (disable_reoptimize_affinity_failure.is_set || is_set(disable_reoptimize_affinity_failure.yfilter)) leaf_name_data.push_back(disable_reoptimize_affinity_failure.get_name_leafdata());
    if (maximum_tunnels.is_set || is_set(maximum_tunnels.yfilter)) leaf_name_data.push_back(maximum_tunnels.get_name_leafdata());
    if (link_holddown_timer.is_set || is_set(link_holddown_timer.yfilter)) leaf_name_data.push_back(link_holddown_timer.get_name_leafdata());
    if (fault_oam.is_set || is_set(fault_oam.yfilter)) leaf_name_data.push_back(fault_oam.get_name_leafdata());
    if (enable_unequal_load_balancing.is_set || is_set(enable_unequal_load_balancing.yfilter)) leaf_name_data.push_back(enable_unequal_load_balancing.get_name_leafdata());
    if (log_tail.is_set || is_set(log_tail.yfilter)) leaf_name_data.push_back(log_tail.get_name_leafdata());
    if (reoptimize_delay_after_frr_timer.is_set || is_set(reoptimize_delay_after_frr_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_after_frr_timer.get_name_leafdata());
    if (auto_bandwidth_collect_frequency.is_set || is_set(auto_bandwidth_collect_frequency.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect_frequency.get_name_leafdata());
    if (reopt_delay_path_protect_switchover_timer.is_set || is_set(reopt_delay_path_protect_switchover_timer.yfilter)) leaf_name_data.push_back(reopt_delay_path_protect_switchover_timer.get_name_leafdata());
    if (log_all.is_set || is_set(log_all.yfilter)) leaf_name_data.push_back(log_all.get_name_leafdata());
    if (loose_path_retry_period.is_set || is_set(loose_path_retry_period.yfilter)) leaf_name_data.push_back(loose_path_retry_period.get_name_leafdata());
    if (reoptimize_load_balancing.is_set || is_set(reoptimize_load_balancing.yfilter)) leaf_name_data.push_back(reoptimize_load_balancing.get_name_leafdata());
    if (log_head.is_set || is_set(log_head.yfilter)) leaf_name_data.push_back(log_head.get_name_leafdata());
    if (path_selection_ignore_overload.is_set || is_set(path_selection_ignore_overload.yfilter)) leaf_name_data.push_back(path_selection_ignore_overload.get_name_leafdata());
    if (graceful_preemption_on_bandwidth_reduction.is_set || is_set(graceful_preemption_on_bandwidth_reduction.yfilter)) leaf_name_data.push_back(graceful_preemption_on_bandwidth_reduction.get_name_leafdata());
    if (advertise_explicit_nulls.is_set || is_set(advertise_explicit_nulls.yfilter)) leaf_name_data.push_back(advertise_explicit_nulls.get_name_leafdata());
    if (reoptimize_delay_install_timer.is_set || is_set(reoptimize_delay_install_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_install_timer.get_name_leafdata());
    if (reoptimize_delay_after_affinity_failure_timer.is_set || is_set(reoptimize_delay_after_affinity_failure_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_after_affinity_failure_timer.get_name_leafdata());
    if (log_frr_protection.is_set || is_set(log_frr_protection.yfilter)) leaf_name_data.push_back(log_frr_protection.get_name_leafdata());
    if (reoptimize_timer_frequency.is_set || is_set(reoptimize_timer_frequency.yfilter)) leaf_name_data.push_back(reoptimize_timer_frequency.get_name_leafdata());
    if (log_mid.is_set || is_set(log_mid.yfilter)) leaf_name_data.push_back(log_mid.get_name_leafdata());
    if (log_preemption.is_set || is_set(log_preemption.yfilter)) leaf_name_data.push_back(log_preemption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "hardware-out-of-resource")
    {
        if(hardware_out_of_resource == nullptr)
        {
            hardware_out_of_resource = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource>();
        }
        return hardware_out_of_resource;
    }

    if(child_yang_name == "secondary-router-ids")
    {
        if(secondary_router_ids == nullptr)
        {
            secondary_router_ids = std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds>();
        }
        return secondary_router_ids;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<MplsTe::GlobalAttributes::Srlg>();
        }
        return srlg;
    }

    if(child_yang_name == "queues")
    {
        if(queues == nullptr)
        {
            queues = std::make_shared<MplsTe::GlobalAttributes::Queues>();
        }
        return queues;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<MplsTe::GlobalAttributes::Mib>();
        }
        return mib;
    }

    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTe::GlobalAttributes::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "bandwidth-accounting")
    {
        if(bandwidth_accounting == nullptr)
        {
            bandwidth_accounting = std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting>();
        }
        return bandwidth_accounting;
    }

    if(child_yang_name == "pce-attributes")
    {
        if(pce_attributes == nullptr)
        {
            pce_attributes = std::make_shared<MplsTe::GlobalAttributes::PceAttributes>();
        }
        return pce_attributes;
    }

    if(child_yang_name == "lsp-out-of-resource")
    {
        if(lsp_out_of_resource == nullptr)
        {
            lsp_out_of_resource = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource>();
        }
        return lsp_out_of_resource;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::GlobalAttributes::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "affinity-mappings")
    {
        if(affinity_mappings == nullptr)
        {
            affinity_mappings = std::make_shared<MplsTe::GlobalAttributes::AffinityMappings>();
        }
        return affinity_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(hardware_out_of_resource != nullptr)
    {
        children["hardware-out-of-resource"] = hardware_out_of_resource;
    }

    if(secondary_router_ids != nullptr)
    {
        children["secondary-router-ids"] = secondary_router_ids;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    if(queues != nullptr)
    {
        children["queues"] = queues;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    if(attribute_set != nullptr)
    {
        children["attribute-set"] = attribute_set;
    }

    if(bfd_over_lsp != nullptr)
    {
        children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(bandwidth_accounting != nullptr)
    {
        children["bandwidth-accounting"] = bandwidth_accounting;
    }

    if(pce_attributes != nullptr)
    {
        children["pce-attributes"] = pce_attributes;
    }

    if(lsp_out_of_resource != nullptr)
    {
        children["lsp-out-of-resource"] = lsp_out_of_resource;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(affinity_mappings != nullptr)
    {
        children["affinity-mappings"] = affinity_mappings;
    }

    return children;
}

void MplsTe::GlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-nsr-status")
    {
        log_nsr_status = value;
        log_nsr_status.value_namespace = name_space;
        log_nsr_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-issu-status")
    {
        log_issu_status = value;
        log_issu_status.value_namespace = name_space;
        log_issu_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-link-up")
    {
        reoptimize_link_up = value;
        reoptimize_link_up.value_namespace = name_space;
        reoptimize_link_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-cleanup-timer")
    {
        reoptimize_delay_cleanup_timer = value;
        reoptimize_delay_cleanup_timer.value_namespace = name_space;
        reoptimize_delay_cleanup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-reoptimize-affinity-failure")
    {
        disable_reoptimize_affinity_failure = value;
        disable_reoptimize_affinity_failure.value_namespace = name_space;
        disable_reoptimize_affinity_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tunnels")
    {
        maximum_tunnels = value;
        maximum_tunnels.value_namespace = name_space;
        maximum_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-holddown-timer")
    {
        link_holddown_timer = value;
        link_holddown_timer.value_namespace = name_space;
        link_holddown_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-oam")
    {
        fault_oam = value;
        fault_oam.value_namespace = name_space;
        fault_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-unequal-load-balancing")
    {
        enable_unequal_load_balancing = value;
        enable_unequal_load_balancing.value_namespace = name_space;
        enable_unequal_load_balancing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-tail")
    {
        log_tail = value;
        log_tail.value_namespace = name_space;
        log_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-after-frr-timer")
    {
        reoptimize_delay_after_frr_timer = value;
        reoptimize_delay_after_frr_timer.value_namespace = name_space;
        reoptimize_delay_after_frr_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect-frequency")
    {
        auto_bandwidth_collect_frequency = value;
        auto_bandwidth_collect_frequency.value_namespace = name_space;
        auto_bandwidth_collect_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-delay-path-protect-switchover-timer")
    {
        reopt_delay_path_protect_switchover_timer = value;
        reopt_delay_path_protect_switchover_timer.value_namespace = name_space;
        reopt_delay_path_protect_switchover_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-all")
    {
        log_all = value;
        log_all.value_namespace = name_space;
        log_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loose-path-retry-period")
    {
        loose_path_retry_period = value;
        loose_path_retry_period.value_namespace = name_space;
        loose_path_retry_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-load-balancing")
    {
        reoptimize_load_balancing = value;
        reoptimize_load_balancing.value_namespace = name_space;
        reoptimize_load_balancing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-head")
    {
        log_head = value;
        log_head.value_namespace = name_space;
        log_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-ignore-overload")
    {
        path_selection_ignore_overload = value;
        path_selection_ignore_overload.value_namespace = name_space;
        path_selection_ignore_overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-preemption-on-bandwidth-reduction")
    {
        graceful_preemption_on_bandwidth_reduction = value;
        graceful_preemption_on_bandwidth_reduction.value_namespace = name_space;
        graceful_preemption_on_bandwidth_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-explicit-nulls")
    {
        advertise_explicit_nulls = value;
        advertise_explicit_nulls.value_namespace = name_space;
        advertise_explicit_nulls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-install-timer")
    {
        reoptimize_delay_install_timer = value;
        reoptimize_delay_install_timer.value_namespace = name_space;
        reoptimize_delay_install_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-after-affinity-failure-timer")
    {
        reoptimize_delay_after_affinity_failure_timer = value;
        reoptimize_delay_after_affinity_failure_timer.value_namespace = name_space;
        reoptimize_delay_after_affinity_failure_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-frr-protection")
    {
        log_frr_protection = value;
        log_frr_protection.value_namespace = name_space;
        log_frr_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer-frequency")
    {
        reoptimize_timer_frequency = value;
        reoptimize_timer_frequency.value_namespace = name_space;
        reoptimize_timer_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-mid")
    {
        log_mid = value;
        log_mid.value_namespace = name_space;
        log_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-preemption")
    {
        log_preemption = value;
        log_preemption.value_namespace = name_space;
        log_preemption.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-nsr-status")
    {
        log_nsr_status.yfilter = yfilter;
    }
    if(value_path == "log-issu-status")
    {
        log_issu_status.yfilter = yfilter;
    }
    if(value_path == "reoptimize-link-up")
    {
        reoptimize_link_up.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-cleanup-timer")
    {
        reoptimize_delay_cleanup_timer.yfilter = yfilter;
    }
    if(value_path == "disable-reoptimize-affinity-failure")
    {
        disable_reoptimize_affinity_failure.yfilter = yfilter;
    }
    if(value_path == "maximum-tunnels")
    {
        maximum_tunnels.yfilter = yfilter;
    }
    if(value_path == "link-holddown-timer")
    {
        link_holddown_timer.yfilter = yfilter;
    }
    if(value_path == "fault-oam")
    {
        fault_oam.yfilter = yfilter;
    }
    if(value_path == "enable-unequal-load-balancing")
    {
        enable_unequal_load_balancing.yfilter = yfilter;
    }
    if(value_path == "log-tail")
    {
        log_tail.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-after-frr-timer")
    {
        reoptimize_delay_after_frr_timer.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect-frequency")
    {
        auto_bandwidth_collect_frequency.yfilter = yfilter;
    }
    if(value_path == "reopt-delay-path-protect-switchover-timer")
    {
        reopt_delay_path_protect_switchover_timer.yfilter = yfilter;
    }
    if(value_path == "log-all")
    {
        log_all.yfilter = yfilter;
    }
    if(value_path == "loose-path-retry-period")
    {
        loose_path_retry_period.yfilter = yfilter;
    }
    if(value_path == "reoptimize-load-balancing")
    {
        reoptimize_load_balancing.yfilter = yfilter;
    }
    if(value_path == "log-head")
    {
        log_head.yfilter = yfilter;
    }
    if(value_path == "path-selection-ignore-overload")
    {
        path_selection_ignore_overload.yfilter = yfilter;
    }
    if(value_path == "graceful-preemption-on-bandwidth-reduction")
    {
        graceful_preemption_on_bandwidth_reduction.yfilter = yfilter;
    }
    if(value_path == "advertise-explicit-nulls")
    {
        advertise_explicit_nulls.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-install-timer")
    {
        reoptimize_delay_install_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-after-affinity-failure-timer")
    {
        reoptimize_delay_after_affinity_failure_timer.yfilter = yfilter;
    }
    if(value_path == "log-frr-protection")
    {
        log_frr_protection.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer-frequency")
    {
        reoptimize_timer_frequency.yfilter = yfilter;
    }
    if(value_path == "log-mid")
    {
        log_mid.yfilter = yfilter;
    }
    if(value_path == "log-preemption")
    {
        log_preemption.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-tunnel" || name == "hardware-out-of-resource" || name == "secondary-router-ids" || name == "srlg" || name == "queues" || name == "mib" || name == "attribute-set" || name == "bfd-over-lsp" || name == "bandwidth-accounting" || name == "pce-attributes" || name == "lsp-out-of-resource" || name == "soft-preemption" || name == "fast-reroute" || name == "path-selection" || name == "affinity-mappings" || name == "log-nsr-status" || name == "log-issu-status" || name == "reoptimize-link-up" || name == "reoptimize-delay-cleanup-timer" || name == "disable-reoptimize-affinity-failure" || name == "maximum-tunnels" || name == "link-holddown-timer" || name == "fault-oam" || name == "enable-unequal-load-balancing" || name == "log-tail" || name == "reoptimize-delay-after-frr-timer" || name == "auto-bandwidth-collect-frequency" || name == "reopt-delay-path-protect-switchover-timer" || name == "log-all" || name == "loose-path-retry-period" || name == "reoptimize-load-balancing" || name == "log-head" || name == "path-selection-ignore-overload" || name == "graceful-preemption-on-bandwidth-reduction" || name == "advertise-explicit-nulls" || name == "reoptimize-delay-install-timer" || name == "reoptimize-delay-after-affinity-failure-timer" || name == "log-frr-protection" || name == "reoptimize-timer-frequency" || name == "log-mid" || name == "log-preemption")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::AutoTunnel()
    :
    pcc(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc>())
    , p2p_auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel>())
    , backup(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup>())
    , mesh(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh>())
    , p2mp_auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel>())
{
    pcc->parent = this;
    p2p_auto_tunnel->parent = this;
    backup->parent = this;
    mesh->parent = this;
    p2mp_auto_tunnel->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (pcc !=  nullptr && pcc->has_data())
	|| (p2p_auto_tunnel !=  nullptr && p2p_auto_tunnel->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (p2mp_auto_tunnel !=  nullptr && p2mp_auto_tunnel->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (pcc !=  nullptr && pcc->has_operation())
	|| (p2p_auto_tunnel !=  nullptr && p2p_auto_tunnel->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (p2mp_auto_tunnel !=  nullptr && p2mp_auto_tunnel->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc>();
        }
        return pcc;
    }

    if(child_yang_name == "p2p-auto-tunnel")
    {
        if(p2p_auto_tunnel == nullptr)
        {
            p2p_auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel>();
        }
        return p2p_auto_tunnel;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "p2mp-auto-tunnel")
    {
        if(p2mp_auto_tunnel == nullptr)
        {
            p2mp_auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel>();
        }
        return p2mp_auto_tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    if(p2p_auto_tunnel != nullptr)
    {
        children["p2p-auto-tunnel"] = p2p_auto_tunnel;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(p2mp_auto_tunnel != nullptr)
    {
        children["p2mp-auto-tunnel"] = p2mp_auto_tunnel;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc" || name == "p2p-auto-tunnel" || name == "backup" || name == "mesh" || name == "p2mp-auto-tunnel")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::Pcc()
    :
    tunnel_range(nullptr) // presence node
{

    yang_name = "pcc"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::TunnelRange()
    :
    min_tunnel_id{YType::uint32, "min-tunnel-id"},
    max_tunnel_id{YType::uint32, "max-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_data() const
{
    if (is_presence_container) return true;
    return min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::P2pAutoTunnel()
    :
    tunnel_range(nullptr) // presence node
{

    yang_name = "p2p-auto-tunnel"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::~P2pAutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::TunnelRange()
    :
    min_tunnel_id{YType::uint32, "min-tunnel-id"},
    max_tunnel_id{YType::uint32, "max-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "p2p-auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::has_data() const
{
    if (is_presence_container) return true;
    return min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/p2p-auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Backup()
    :
    affinity_ignore{YType::empty, "affinity-ignore"}
        ,
    timers(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers>())
    , tunnel_range(nullptr) // presence node
{
    timers->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_data() const
{
    if (is_presence_container) return true;
    return affinity_ignore.is_set
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_ignore.yfilter)
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_ignore.is_set || is_set(affinity_ignore.yfilter)) leaf_name_data.push_back(affinity_ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-ignore")
    {
        affinity_ignore = value;
        affinity_ignore.value_namespace = name_space;
        affinity_ignore.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-ignore")
    {
        affinity_ignore.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers" || name == "tunnel-range" || name == "affinity-ignore")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Timers()
    :
    removal(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (removal !=  nullptr && removal->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::~Removal()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_data() const
{
    if (is_presence_container) return true;
    return unused.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::TunnelRange()
    :
    min_tunnel_id{YType::uint32, "min-tunnel-id"},
    max_tunnel_id{YType::uint32, "max-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_data() const
{
    if (is_presence_container) return true;
    return min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Mesh()
    :
    mesh_groups(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups>())
    , timers(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers>())
    , tunnel_range(nullptr) // presence node
{
    mesh_groups->parent = this;
    timers->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_data() const
{
    if (is_presence_container) return true;
    return (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-groups" || name == "timers" || name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroups()
    :
    mesh_group(this, {"mesh_group_id"})
{

    yang_name = "mesh-groups"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mesh_group.len(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.len(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mesh_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    destination_list{YType::str, "destination-list"},
    disable{YType::empty, "disable"},
    attribute_set{YType::str, "attribute-set"},
    create{YType::empty, "create"},
    one_hop{YType::empty, "one-hop"}
{

    yang_name = "mesh-group"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return mesh_group_id.is_set
	|| destination_list.is_set
	|| disable.is_set
	|| attribute_set.is_set
	|| create.is_set
	|| one_hop.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(destination_list.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(attribute_set.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(one_hop.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    ADD_KEY_TOKEN(mesh_group_id, "mesh-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (destination_list.is_set || is_set(destination_list.yfilter)) leaf_name_data.push_back(destination_list.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (attribute_set.is_set || is_set(attribute_set.yfilter)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (one_hop.is_set || is_set(one_hop.yfilter)) leaf_name_data.push_back(one_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list")
    {
        destination_list = value;
        destination_list.value_namespace = name_space;
        destination_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set")
    {
        attribute_set = value;
        attribute_set.value_namespace = name_space;
        attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-hop")
    {
        one_hop = value;
        one_hop.value_namespace = name_space;
        one_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-list")
    {
        destination_list.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "attribute-set")
    {
        attribute_set.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "one-hop")
    {
        one_hop.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-id" || name == "destination-list" || name == "disable" || name == "attribute-set" || name == "create" || name == "one-hop")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Timers()
    :
    removal(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (removal !=  nullptr && removal->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::~Removal()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_data() const
{
    if (is_presence_container) return true;
    return unused.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::TunnelRange()
    :
    min_tunnel_id{YType::uint32, "min-tunnel-id"},
    max_tunnel_id{YType::uint32, "max-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_data() const
{
    if (is_presence_container) return true;
    return min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::P2mpAutoTunnel()
    :
    tunnel_range(nullptr) // presence node
{

    yang_name = "p2mp-auto-tunnel"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::~P2mpAutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::TunnelRange()
    :
    min_tunnel_id{YType::uint32, "min-tunnel-id"},
    max_tunnel_id{YType::uint32, "max-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "p2mp-auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::has_data() const
{
    if (is_presence_container) return true;
    return min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/p2mp-auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::HardwareOutOfResource()
    :
    oor_red_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState>())
    , oor_yellow_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState>())
    , oor_green_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState>())
{
    oor_red_state->parent = this;
    oor_yellow_state->parent = this;
    oor_green_state->parent = this;

    yang_name = "hardware-out-of-resource"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::HardwareOutOfResource::~HardwareOutOfResource()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_data() const
{
    if (is_presence_container) return true;
    return (oor_red_state !=  nullptr && oor_red_state->has_data())
	|| (oor_yellow_state !=  nullptr && oor_yellow_state->has_data())
	|| (oor_green_state !=  nullptr && oor_green_state->has_data());
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (oor_red_state !=  nullptr && oor_red_state->has_operation())
	|| (oor_yellow_state !=  nullptr && oor_yellow_state->has_operation())
	|| (oor_green_state !=  nullptr && oor_green_state->has_operation());
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-red-state")
    {
        if(oor_red_state == nullptr)
        {
            oor_red_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState>();
        }
        return oor_red_state;
    }

    if(child_yang_name == "oor-yellow-state")
    {
        if(oor_yellow_state == nullptr)
        {
            oor_yellow_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState>();
        }
        return oor_yellow_state;
    }

    if(child_yang_name == "oor-green-state")
    {
        if(oor_green_state == nullptr)
        {
            oor_green_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState>();
        }
        return oor_green_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oor_red_state != nullptr)
    {
        children["oor-red-state"] = oor_red_state;
    }

    if(oor_yellow_state != nullptr)
    {
        children["oor-yellow-state"] = oor_yellow_state;
    }

    if(oor_green_state != nullptr)
    {
        children["oor-green-state"] = oor_green_state;
    }

    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-red-state" || name == "oor-yellow-state" || name == "oor-green-state")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::OorRedState()
    :
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_accept_lsp_min_bandwidth{YType::uint32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_metric_te_penalty{YType::uint32, "oor-metric-te-penalty"}
{

    yang_name = "oor-red-state"; yang_parent_name = "hardware-out-of-resource"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::~OorRedState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_data() const
{
    if (is_presence_container) return true;
    return oor_node_protection_disable.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_metric_te_penalty.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oor_node_protection_disable.yfilter)
	|| ydk::is_set(oor_available_bandwidth_percentage.yfilter)
	|| ydk::is_set(oor_accept_lsp_min_bandwidth.yfilter)
	|| ydk::is_set(oor_accept_reopt_lsp.yfilter)
	|| ydk::is_set(oor_metric_te_penalty.yfilter);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-red-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.yfilter)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.yfilter)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.yfilter)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.yfilter)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.yfilter)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
        oor_node_protection_disable.value_namespace = name_space;
        oor_node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
        oor_available_bandwidth_percentage.value_namespace = name_space;
        oor_available_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
        oor_accept_lsp_min_bandwidth.value_namespace = name_space;
        oor_accept_lsp_min_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
        oor_accept_reopt_lsp.value_namespace = name_space;
        oor_accept_reopt_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
        oor_metric_te_penalty.value_namespace = name_space;
        oor_metric_te_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp.yfilter = yfilter;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-node-protection-disable" || name == "oor-available-bandwidth-percentage" || name == "oor-accept-lsp-min-bandwidth" || name == "oor-accept-reopt-lsp" || name == "oor-metric-te-penalty")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::OorYellowState()
    :
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_accept_lsp_min_bandwidth{YType::uint32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_metric_te_penalty{YType::uint32, "oor-metric-te-penalty"}
{

    yang_name = "oor-yellow-state"; yang_parent_name = "hardware-out-of-resource"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::~OorYellowState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_data() const
{
    if (is_presence_container) return true;
    return oor_node_protection_disable.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_metric_te_penalty.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oor_node_protection_disable.yfilter)
	|| ydk::is_set(oor_available_bandwidth_percentage.yfilter)
	|| ydk::is_set(oor_accept_lsp_min_bandwidth.yfilter)
	|| ydk::is_set(oor_accept_reopt_lsp.yfilter)
	|| ydk::is_set(oor_metric_te_penalty.yfilter);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-yellow-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.yfilter)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.yfilter)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.yfilter)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.yfilter)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.yfilter)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
        oor_node_protection_disable.value_namespace = name_space;
        oor_node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
        oor_available_bandwidth_percentage.value_namespace = name_space;
        oor_available_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
        oor_accept_lsp_min_bandwidth.value_namespace = name_space;
        oor_accept_lsp_min_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
        oor_accept_reopt_lsp.value_namespace = name_space;
        oor_accept_reopt_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
        oor_metric_te_penalty.value_namespace = name_space;
        oor_metric_te_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp.yfilter = yfilter;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-node-protection-disable" || name == "oor-available-bandwidth-percentage" || name == "oor-accept-lsp-min-bandwidth" || name == "oor-accept-reopt-lsp" || name == "oor-metric-te-penalty")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::OorGreenState()
    :
    oor_recovery_duration{YType::uint32, "oor-recovery-duration"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_accept_lsp_min_bandwidth{YType::uint32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_metric_te_penalty{YType::uint32, "oor-metric-te-penalty"}
{

    yang_name = "oor-green-state"; yang_parent_name = "hardware-out-of-resource"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::~OorGreenState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_data() const
{
    if (is_presence_container) return true;
    return oor_recovery_duration.is_set
	|| oor_node_protection_disable.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_metric_te_penalty.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oor_recovery_duration.yfilter)
	|| ydk::is_set(oor_node_protection_disable.yfilter)
	|| ydk::is_set(oor_available_bandwidth_percentage.yfilter)
	|| ydk::is_set(oor_accept_lsp_min_bandwidth.yfilter)
	|| ydk::is_set(oor_accept_reopt_lsp.yfilter)
	|| ydk::is_set(oor_metric_te_penalty.yfilter);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-green-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_recovery_duration.is_set || is_set(oor_recovery_duration.yfilter)) leaf_name_data.push_back(oor_recovery_duration.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.yfilter)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.yfilter)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.yfilter)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.yfilter)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.yfilter)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oor-recovery-duration")
    {
        oor_recovery_duration = value;
        oor_recovery_duration.value_namespace = name_space;
        oor_recovery_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
        oor_node_protection_disable.value_namespace = name_space;
        oor_node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
        oor_available_bandwidth_percentage.value_namespace = name_space;
        oor_available_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
        oor_accept_lsp_min_bandwidth.value_namespace = name_space;
        oor_accept_lsp_min_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
        oor_accept_reopt_lsp.value_namespace = name_space;
        oor_accept_reopt_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
        oor_metric_te_penalty.value_namespace = name_space;
        oor_metric_te_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oor-recovery-duration")
    {
        oor_recovery_duration.yfilter = yfilter;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp.yfilter = yfilter;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-recovery-duration" || name == "oor-node-protection-disable" || name == "oor-available-bandwidth-percentage" || name == "oor-accept-lsp-min-bandwidth" || name == "oor-accept-reopt-lsp" || name == "oor-metric-te-penalty")
        return true;
    return false;
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterIds()
    :
    secondary_router_id(this, {"secondary_router_id_value"})
{

    yang_name = "secondary-router-ids"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::SecondaryRouterIds::~SecondaryRouterIds()
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::SecondaryRouterIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SecondaryRouterIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-router-id")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::SecondaryRouterIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : secondary_router_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::SecondaryRouterId()
    :
    secondary_router_id_value{YType::str, "secondary-router-id-value"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "secondary-router-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_data() const
{
    if (is_presence_container) return true;
    return secondary_router_id_value.is_set;
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_router_id_value.yfilter);
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/secondary-router-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    ADD_KEY_TOKEN(secondary_router_id_value, "secondary-router-id-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_router_id_value.is_set || is_set(secondary_router_id_value.yfilter)) leaf_name_data.push_back(secondary_router_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-router-id-value")
    {
        secondary_router_id_value = value;
        secondary_router_id_value.value_namespace = name_space;
        secondary_router_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-router-id-value")
    {
        secondary_router_id_value.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id-value")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Srlg()
    :
    default_admin_weight{YType::uint32, "default-admin-weight"},
    enable{YType::empty, "enable"}
        ,
    names(std::make_shared<MplsTe::GlobalAttributes::Srlg::Names>())
{
    names->parent = this;

    yang_name = "srlg"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::Srlg::~Srlg()
{
}

bool MplsTe::GlobalAttributes::Srlg::has_data() const
{
    if (is_presence_container) return true;
    return default_admin_weight.is_set
	|| enable.is_set
	|| (names !=  nullptr && names->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_admin_weight.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (names !=  nullptr && names->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_admin_weight.is_set || is_set(default_admin_weight.yfilter)) leaf_name_data.push_back(default_admin_weight.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        if(names == nullptr)
        {
            names = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names>();
        }
        return names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-admin-weight")
    {
        default_admin_weight = value;
        default_admin_weight.value_namespace = name_space;
        default_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-admin-weight")
    {
        default_admin_weight.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "names" || name == "default-admin-weight" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Names()
    :
    name(this, {"srlg_name"})
{

    yang_name = "names"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::Srlg::Names::~Names()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Srlg::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name>();
        c->parent = this;
        name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::Srlg::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::Name()
    :
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"}
        ,
    static_srlg_members(std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers>())
{
    static_srlg_members->parent = this;

    yang_name = "name"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::Srlg::Names::Name::~Name()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_data() const
{
    if (is_presence_container) return true;
    return srlg_name.is_set
	|| admin_weight.is_set
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/names/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(srlg_name, "srlg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members == nullptr)
        {
            static_srlg_members = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers>();
        }
        return static_srlg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_srlg_members != nullptr)
    {
        children["static-srlg-members"] = static_srlg_members;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-srlg-members" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMembers()
    :
    static_srlg_member(this, {"from_address"})
{

    yang_name = "static-srlg-members"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_srlg_member.len(); index++)
    {
        if(static_srlg_member[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<static_srlg_member.len(); index++)
    {
        if(static_srlg_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-srlg-member")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember>();
        c->parent = this;
        static_srlg_member.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : static_srlg_member.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-srlg-member")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::StaticSrlgMember()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "static-srlg-member"; yang_parent_name = "static-srlg-members"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::~StaticSrlgMember()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_data() const
{
    if (is_presence_container) return true;
    return from_address.is_set
	|| to_address.is_set;
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-member";
    ADD_KEY_TOKEN(from_address, "from-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Queues::Queues()
    :
    queue(this, {"role"})
{

    yang_name = "queues"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::Queues::~Queues()
{
}

bool MplsTe::GlobalAttributes::Queues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queue.len(); index++)
    {
        if(queue[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Queues::has_operation() const
{
    for (std::size_t index=0; index<queue.len(); index++)
    {
        if(queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::Queues::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Queues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queues";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Queues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Queues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::Queues::Queue>();
        c->parent = this;
        queue.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Queues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : queue.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::Queues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::Queues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::Queues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Queues::Queue::Queue()
    :
    role{YType::enumeration, "role"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue"; yang_parent_name = "queues"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::Queues::Queue::~Queue()
{
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| value_.is_set;
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string MplsTe::GlobalAttributes::Queues::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/queues/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Queues::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    ADD_KEY_TOKEN(role, "role");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Queues::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Queues::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Queues::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::Queues::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Queues::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role" || name == "value")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Mib::Mib()
    :
    midpoint_lsp_stats_collection_disable{YType::empty, "midpoint-lsp-stats-collection-disable"}
{

    yang_name = "mib"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::Mib::~Mib()
{
}

bool MplsTe::GlobalAttributes::Mib::has_data() const
{
    if (is_presence_container) return true;
    return midpoint_lsp_stats_collection_disable.is_set;
}

bool MplsTe::GlobalAttributes::Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(midpoint_lsp_stats_collection_disable.yfilter);
}

std::string MplsTe::GlobalAttributes::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_lsp_stats_collection_disable.is_set || is_set(midpoint_lsp_stats_collection_disable.yfilter)) leaf_name_data.push_back(midpoint_lsp_stats_collection_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "midpoint-lsp-stats-collection-disable")
    {
        midpoint_lsp_stats_collection_disable = value;
        midpoint_lsp_stats_collection_disable.value_namespace = name_space;
        midpoint_lsp_stats_collection_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "midpoint-lsp-stats-collection-disable")
    {
        midpoint_lsp_stats_collection_disable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "midpoint-lsp-stats-collection-disable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AttributeSet()
    :
    path_option_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes>())
    , p2mpte_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes>())
    , p2p_te_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes>())
    , auto_backup_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes>())
    , otn_pp_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes>())
    , auto_mesh_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes>())
    , xro_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes>())
{
    path_option_attributes->parent = this;
    p2mpte_attributes->parent = this;
    p2p_te_attributes->parent = this;
    auto_backup_attributes->parent = this;
    otn_pp_attributes->parent = this;
    auto_mesh_attributes->parent = this;
    xro_attributes->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::~AttributeSet()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return (path_option_attributes !=  nullptr && path_option_attributes->has_data())
	|| (p2mpte_attributes !=  nullptr && p2mpte_attributes->has_data())
	|| (p2p_te_attributes !=  nullptr && p2p_te_attributes->has_data())
	|| (auto_backup_attributes !=  nullptr && auto_backup_attributes->has_data())
	|| (otn_pp_attributes !=  nullptr && otn_pp_attributes->has_data())
	|| (auto_mesh_attributes !=  nullptr && auto_mesh_attributes->has_data())
	|| (xro_attributes !=  nullptr && xro_attributes->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| (path_option_attributes !=  nullptr && path_option_attributes->has_operation())
	|| (p2mpte_attributes !=  nullptr && p2mpte_attributes->has_operation())
	|| (p2p_te_attributes !=  nullptr && p2p_te_attributes->has_operation())
	|| (auto_backup_attributes !=  nullptr && auto_backup_attributes->has_operation())
	|| (otn_pp_attributes !=  nullptr && otn_pp_attributes->has_operation())
	|| (auto_mesh_attributes !=  nullptr && auto_mesh_attributes->has_operation())
	|| (xro_attributes !=  nullptr && xro_attributes->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-attributes")
    {
        if(path_option_attributes == nullptr)
        {
            path_option_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes>();
        }
        return path_option_attributes;
    }

    if(child_yang_name == "p2mpte-attributes")
    {
        if(p2mpte_attributes == nullptr)
        {
            p2mpte_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes>();
        }
        return p2mpte_attributes;
    }

    if(child_yang_name == "p2p-te-attributes")
    {
        if(p2p_te_attributes == nullptr)
        {
            p2p_te_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes>();
        }
        return p2p_te_attributes;
    }

    if(child_yang_name == "auto-backup-attributes")
    {
        if(auto_backup_attributes == nullptr)
        {
            auto_backup_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes>();
        }
        return auto_backup_attributes;
    }

    if(child_yang_name == "otn-pp-attributes")
    {
        if(otn_pp_attributes == nullptr)
        {
            otn_pp_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes>();
        }
        return otn_pp_attributes;
    }

    if(child_yang_name == "auto-mesh-attributes")
    {
        if(auto_mesh_attributes == nullptr)
        {
            auto_mesh_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes>();
        }
        return auto_mesh_attributes;
    }

    if(child_yang_name == "xro-attributes")
    {
        if(xro_attributes == nullptr)
        {
            xro_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes>();
        }
        return xro_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_option_attributes != nullptr)
    {
        children["path-option-attributes"] = path_option_attributes;
    }

    if(p2mpte_attributes != nullptr)
    {
        children["p2mpte-attributes"] = p2mpte_attributes;
    }

    if(p2p_te_attributes != nullptr)
    {
        children["p2p-te-attributes"] = p2p_te_attributes;
    }

    if(auto_backup_attributes != nullptr)
    {
        children["auto-backup-attributes"] = auto_backup_attributes;
    }

    if(otn_pp_attributes != nullptr)
    {
        children["otn-pp-attributes"] = otn_pp_attributes;
    }

    if(auto_mesh_attributes != nullptr)
    {
        children["auto-mesh-attributes"] = auto_mesh_attributes;
    }

    if(xro_attributes != nullptr)
    {
        children["xro-attributes"] = xro_attributes;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-attributes" || name == "p2mpte-attributes" || name == "p2p-te-attributes" || name == "auto-backup-attributes" || name == "otn-pp-attributes" || name == "auto-mesh-attributes" || name == "xro-attributes")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttributes()
    :
    path_option_attribute(this, {"attribute_set_name"})
{

    yang_name = "path-option-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::~PathOptionAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option_attribute.len(); index++)
    {
        if(path_option_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_operation() const
{
    for (std::size_t index=0; index<path_option_attribute.len(); index++)
    {
        if(path_option_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute>();
        c->parent = this;
        path_option_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_option_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::PathOptionAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
        ,
    bfd_reverse_path(nullptr) // presence node
    , att_path_option_path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection>())
    , pce(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce>())
    , affinity_mask(nullptr) // presence node
    , bandwidth(nullptr) // presence node
    , new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes>())
{
    att_path_option_path_selection->parent = this;
    pce->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "path-option-attribute"; yang_parent_name = "path-option-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::~PathOptionAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set_name.is_set
	|| enable.is_set
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data())
	|| (att_path_option_path_selection !=  nullptr && att_path_option_path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation())
	|| (att_path_option_path_selection !=  nullptr && att_path_option_path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/path-option-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-attribute";
    ADD_KEY_TOKEN(attribute_set_name, "attribute-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "att-path-option-path-selection")
    {
        if(att_path_option_path_selection == nullptr)
        {
            att_path_option_path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection>();
        }
        return att_path_option_path_selection;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    if(att_path_option_path_selection != nullptr)
    {
        children["att-path-option-path-selection"] = att_path_option_path_selection;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-reverse-path" || name == "att-path-option-path-selection" || name == "pce" || name == "affinity-mask" || name == "bandwidth" || name == "new-style-affinity-affinity-types" || name == "attribute-set-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::BfdReversePath()
    :
    bfd_reverse_path_type{YType::enumeration, "bfd-reverse-path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return bfd_reverse_path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_reverse_path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_reverse_path_type.is_set || is_set(bfd_reverse_path_type.yfilter)) leaf_name_data.push_back(bfd_reverse_path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-reverse-path-type")
    {
        bfd_reverse_path_type = value;
        bfd_reverse_path_type.value_namespace = name_space;
        bfd_reverse_path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-reverse-path-type")
    {
        bfd_reverse_path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-reverse-path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::AttPathOptionPathSelection()
    :
    path_selection_exclude_list{YType::str, "path-selection-exclude-list"},
    enable{YType::empty, "enable"},
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"}
        ,
    invalidation(nullptr) // presence node
{

    yang_name = "att-path-option-path-selection"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::~AttPathOptionPathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_data() const
{
    if (is_presence_container) return true;
    return path_selection_exclude_list.is_set
	|| enable.is_set
	|| path_selection_cost_limit.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_selection_exclude_list.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "att-path-option-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_exclude_list.is_set || is_set(path_selection_exclude_list.yfilter)) leaf_name_data.push_back(path_selection_exclude_list.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-selection-exclude-list")
    {
        path_selection_exclude_list = value;
        path_selection_exclude_list.value_namespace = name_space;
        path_selection_exclude_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-selection-exclude-list")
    {
        path_selection_exclude_list.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "path-selection-exclude-list" || name == "enable" || name == "path-selection-cost-limit")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::enumeration, "path-invalidation-action"}
{

    yang_name = "invalidation"; yang_parent_name = "att-path-option-path-selection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-timeout" || name == "path-invalidation-action")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Pce()
    :
    enable{YType::empty, "enable"}
        ,
    bidirectional(nullptr) // presence node
    , disjoint_path(nullptr) // presence node
{

    yang_name = "pce"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::~Pce()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional" || name == "disjoint-path" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::Bidirectional()
    :
    bd_source_address{YType::str, "bd-source-address"},
    bd_group_id{YType::uint32, "bd-group-id"}
{

    yang_name = "bidirectional"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::~Bidirectional()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_data() const
{
    if (is_presence_container) return true;
    return bd_source_address.is_set
	|| bd_group_id.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_source_address.yfilter)
	|| ydk::is_set(bd_group_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_source_address.is_set || is_set(bd_source_address.yfilter)) leaf_name_data.push_back(bd_source_address.get_name_leafdata());
    if (bd_group_id.is_set || is_set(bd_group_id.yfilter)) leaf_name_data.push_back(bd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-source-address")
    {
        bd_source_address = value;
        bd_source_address.value_namespace = name_space;
        bd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-group-id")
    {
        bd_group_id = value;
        bd_group_id.value_namespace = name_space;
        bd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-source-address")
    {
        bd_source_address.yfilter = yfilter;
    }
    if(value_path == "bd-group-id")
    {
        bd_group_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-source-address" || name == "bd-group-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::DisjointPath()
    :
    dp_source_address{YType::str, "dp-source-address"},
    dp_type{YType::uint32, "dp-type"},
    dp_group_id{YType::uint32, "dp-group-id"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::~DisjointPath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_data() const
{
    if (is_presence_container) return true;
    return dp_source_address.is_set
	|| dp_type.is_set
	|| dp_group_id.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dp_source_address.yfilter)
	|| ydk::is_set(dp_type.yfilter)
	|| ydk::is_set(dp_group_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_source_address.is_set || is_set(dp_source_address.yfilter)) leaf_name_data.push_back(dp_source_address.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.yfilter)) leaf_name_data.push_back(dp_type.get_name_leafdata());
    if (dp_group_id.is_set || is_set(dp_group_id.yfilter)) leaf_name_data.push_back(dp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp-source-address")
    {
        dp_source_address = value;
        dp_source_address.value_namespace = name_space;
        dp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
        dp_type.value_namespace = name_space;
        dp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-group-id")
    {
        dp_group_id = value;
        dp_group_id.value_namespace = name_space;
        dp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp-source-address")
    {
        dp_source_address.yfilter = yfilter;
    }
    if(value_path == "dp-type")
    {
        dp_type.yfilter = yfilter;
    }
    if(value_path == "dp-group-id")
    {
        dp_group_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp-source-address" || name == "dp-type" || name == "dp-group-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
    :
    new_style_affinity_affinity_type(this, {"affinity_type"})
    , new_style_affinity_affinity_type_affinity1(this, {"affinity_type", "affinity1"})
    , new_style_affinity_affinity_type_affinity1_affinity2(this, {"affinity_type", "affinity1", "affinity2"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3(this, {"affinity_type", "affinity1", "affinity2", "affinity3"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9", "affinity10"})
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : new_style_affinity_affinity_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    ADD_KEY_TOKEN(affinity10, "affinity10");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttributes()
    :
    p2mpte_attribute(this, {"attribute_set_name"})
{

    yang_name = "p2mpte-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::~P2mpteAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2mpte_attribute.len(); index++)
    {
        if(p2mpte_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2mpte_attribute.len(); index++)
    {
        if(p2mpte_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mpte-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mpte-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute>();
        c->parent = this;
        p2mpte_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : p2mpte_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mpte-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::P2mpteAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"}
        ,
    priority(nullptr) // presence node
    , affinity_mask(nullptr) // presence node
    , bandwidth(nullptr) // presence node
    , path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection>())
    , new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes>())
    , fast_reroute(nullptr) // presence node
    , logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging>())
{
    path_selection->parent = this;
    new_style_affinity_affinity_types->parent = this;
    logging->parent = this;

    yang_name = "p2mpte-attribute"; yang_parent_name = "p2mpte-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::~P2mpteAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set_name.is_set
	|| interface_bandwidth.is_set
	|| enable.is_set
	|| record_route.is_set
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/p2mpte-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mpte-attribute";
    ADD_KEY_TOKEN(attribute_set_name, "attribute-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "affinity-mask" || name == "bandwidth" || name == "path-selection" || name == "new-style-affinity-affinity-types" || name == "fast-reroute" || name == "logging" || name == "attribute-set-name" || name == "interface-bandwidth" || name == "enable" || name == "record-route")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
    :
    new_style_affinity_affinity_type(this, {"affinity_type"})
    , new_style_affinity_affinity_type_affinity1(this, {"affinity_type", "affinity1"})
    , new_style_affinity_affinity_type_affinity1_affinity2(this, {"affinity_type", "affinity1", "affinity2"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3(this, {"affinity_type", "affinity1", "affinity2", "affinity3"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9", "affinity10"})
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : new_style_affinity_affinity_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    ADD_KEY_TOKEN(affinity10, "affinity10");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::Logging()
    :
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    all{YType::empty, "all"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    state_message{YType::empty, "state-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"},
    reroute_messsage{YType::empty, "reroute-messsage"}
{

    yang_name = "logging"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::has_data() const
{
    if (is_presence_container) return true;
    return insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| bandwidth_change_message.is_set
	|| all.is_set
	|| pcalc_failure_message.is_set
	|| state_message.is_set
	|| reoptimize_attempts_message.is_set
	|| sub_lsp_state_message.is_set
	|| reroute_messsage.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(sub_lsp_state_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.yfilter)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
        sub_lsp_state_message.value_namespace = name_space;
        sub_lsp_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insufficient-bw-message" || name == "reoptimized-message" || name == "bandwidth-change-message" || name == "all" || name == "pcalc-failure-message" || name == "state-message" || name == "reoptimize-attempts-message" || name == "sub-lsp-state-message" || name == "reroute-messsage")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttributes()
    :
    p2p_te_attribute(this, {"attribute_set_name"})
{

    yang_name = "p2p-te-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::~P2pTeAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2p_te_attribute.len(); index++)
    {
        if(p2p_te_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2p_te_attribute.len(); index++)
    {
        if(p2p_te_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-te-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-te-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute>();
        c->parent = this;
        p2p_te_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : p2p_te_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-te-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::P2pTeAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
        ,
    path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection>())
    , pce(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce>())
    , affinity_mask(nullptr) // presence node
    , logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging>())
    , new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes>())
{
    path_selection->parent = this;
    pce->parent = this;
    logging->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "p2p-te-attribute"; yang_parent_name = "p2p-te-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::~P2pTeAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set_name.is_set
	|| enable.is_set
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/p2p-te-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-te-attribute";
    ADD_KEY_TOKEN(attribute_set_name, "attribute-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-selection" || name == "pce" || name == "affinity-mask" || name == "logging" || name == "new-style-affinity-affinity-types" || name == "attribute-set-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::PathSelection()
    :
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    enable{YType::empty, "enable"}
        ,
    segment_routing_prepend(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend>())
    , invalidation(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation>())
{
    segment_routing_prepend->parent = this;
    invalidation->parent = this;

    yang_name = "path-selection"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::has_data() const
{
    if (is_presence_container) return true;
    return path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| enable.is_set
	|| (segment_routing_prepend !=  nullptr && segment_routing_prepend->has_data())
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (segment_routing_prepend !=  nullptr && segment_routing_prepend->has_operation())
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-prepend")
    {
        if(segment_routing_prepend == nullptr)
        {
            segment_routing_prepend = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend>();
        }
        return segment_routing_prepend;
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment_routing_prepend != nullptr)
    {
        children["segment-routing-prepend"] = segment_routing_prepend;
    }

    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-prepend" || name == "invalidation" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::SegmentRoutingPrepend()
    :
    enable{YType::empty, "enable"}
        ,
    indexes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes>())
{
    indexes->parent = this;

    yang_name = "segment-routing-prepend"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::~SegmentRoutingPrepend()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (indexes !=  nullptr && indexes->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (indexes !=  nullptr && indexes->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-prepend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes>();
        }
        return indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(indexes != nullptr)
    {
        children["indexes"] = indexes;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indexes" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Indexes()
    :
    index_(this, {"index_number"})
{

    yang_name = "indexes"; yang_parent_name = "segment-routing-prepend"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::~Indexes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<index_.len(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.len(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index>();
        c->parent = this;
        index_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : index_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::Index()
    :
    index_number{YType::uint32, "index-number"},
    prepend_type{YType::enumeration, "prepend-type"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "index"; yang_parent_name = "indexes"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::~Index()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::has_data() const
{
    if (is_presence_container) return true;
    return index_number.is_set
	|| prepend_type.is_set
	|| mpls_label.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_number.yfilter)
	|| ydk::is_set(prepend_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    ADD_KEY_TOKEN(index_number, "index-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_number.is_set || is_set(index_number.yfilter)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (prepend_type.is_set || is_set(prepend_type.yfilter)) leaf_name_data.push_back(prepend_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index-number")
    {
        index_number = value;
        index_number.value_namespace = name_space;
        index_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepend-type")
    {
        prepend_type = value;
        prepend_type.value_namespace = name_space;
        prepend_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index-number")
    {
        index_number.yfilter = yfilter;
    }
    if(value_path == "prepend-type")
    {
        prepend_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index-number" || name == "prepend-type" || name == "mpls-label")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::Invalidation()
    :
    invalidation_timer{YType::uint32, "invalidation-timer"},
    invalidation_timer_expire_type{YType::enumeration, "invalidation-timer-expire-type"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return invalidation_timer.is_set
	|| invalidation_timer_expire_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalidation_timer.yfilter)
	|| ydk::is_set(invalidation_timer_expire_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalidation_timer.is_set || is_set(invalidation_timer.yfilter)) leaf_name_data.push_back(invalidation_timer.get_name_leafdata());
    if (invalidation_timer_expire_type.is_set || is_set(invalidation_timer_expire_type.yfilter)) leaf_name_data.push_back(invalidation_timer_expire_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalidation-timer")
    {
        invalidation_timer = value;
        invalidation_timer.value_namespace = name_space;
        invalidation_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidation-timer-expire-type")
    {
        invalidation_timer_expire_type = value;
        invalidation_timer_expire_type.value_namespace = name_space;
        invalidation_timer_expire_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalidation-timer")
    {
        invalidation_timer.yfilter = yfilter;
    }
    if(value_path == "invalidation-timer-expire-type")
    {
        invalidation_timer_expire_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation-timer" || name == "invalidation-timer-expire-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Pce()
    :
    enable{YType::empty, "enable"}
        ,
    bidirectional(nullptr) // presence node
    , disjoint_path(nullptr) // presence node
{

    yang_name = "pce"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::~Pce()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional" || name == "disjoint-path" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::Bidirectional()
    :
    bd_source_address{YType::str, "bd-source-address"},
    bd_group_id{YType::uint32, "bd-group-id"}
{

    yang_name = "bidirectional"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::~Bidirectional()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::has_data() const
{
    if (is_presence_container) return true;
    return bd_source_address.is_set
	|| bd_group_id.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_source_address.yfilter)
	|| ydk::is_set(bd_group_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_source_address.is_set || is_set(bd_source_address.yfilter)) leaf_name_data.push_back(bd_source_address.get_name_leafdata());
    if (bd_group_id.is_set || is_set(bd_group_id.yfilter)) leaf_name_data.push_back(bd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-source-address")
    {
        bd_source_address = value;
        bd_source_address.value_namespace = name_space;
        bd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-group-id")
    {
        bd_group_id = value;
        bd_group_id.value_namespace = name_space;
        bd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-source-address")
    {
        bd_source_address.yfilter = yfilter;
    }
    if(value_path == "bd-group-id")
    {
        bd_group_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-source-address" || name == "bd-group-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::DisjointPath()
    :
    dp_source_address{YType::str, "dp-source-address"},
    dp_type{YType::uint32, "dp-type"},
    dp_group_id{YType::uint32, "dp-group-id"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::~DisjointPath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::has_data() const
{
    if (is_presence_container) return true;
    return dp_source_address.is_set
	|| dp_type.is_set
	|| dp_group_id.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dp_source_address.yfilter)
	|| ydk::is_set(dp_type.yfilter)
	|| ydk::is_set(dp_group_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_source_address.is_set || is_set(dp_source_address.yfilter)) leaf_name_data.push_back(dp_source_address.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.yfilter)) leaf_name_data.push_back(dp_type.get_name_leafdata());
    if (dp_group_id.is_set || is_set(dp_group_id.yfilter)) leaf_name_data.push_back(dp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp-source-address")
    {
        dp_source_address = value;
        dp_source_address.value_namespace = name_space;
        dp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
        dp_type.value_namespace = name_space;
        dp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-group-id")
    {
        dp_group_id = value;
        dp_group_id.value_namespace = name_space;
        dp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp-source-address")
    {
        dp_source_address.yfilter = yfilter;
    }
    if(value_path == "dp-type")
    {
        dp_type.yfilter = yfilter;
    }
    if(value_path == "dp-group-id")
    {
        dp_group_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp-source-address" || name == "dp-type" || name == "dp-group-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::Logging()
    :
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    all{YType::empty, "all"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"}
{

    yang_name = "logging"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_switch_over_change_message.is_set
	|| all.is_set
	|| record_route_messsage.is_set
	|| bfd_state_message.is_set
	|| bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| pcalc_failure_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-switch-over-change-message" || name == "all" || name == "record-route-messsage" || name == "bfd-state-message" || name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "reroute-messsage" || name == "state-message" || name == "insufficient-bw-message" || name == "reoptimized-message" || name == "pcalc-failure-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
    :
    new_style_affinity_affinity_type(this, {"affinity_type"})
    , new_style_affinity_affinity_type_affinity1(this, {"affinity_type", "affinity1"})
    , new_style_affinity_affinity_type_affinity1_affinity2(this, {"affinity_type", "affinity1", "affinity2"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3(this, {"affinity_type", "affinity1", "affinity2", "affinity3"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9", "affinity10"})
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.append(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : new_style_affinity_affinity_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

const Enum::YLeaf MplsTeBackupBandwidthClass::class0 {0, "class0"};
const Enum::YLeaf MplsTeBackupBandwidthClass::class1 {1, "class1"};
const Enum::YLeaf MplsTeBackupBandwidthClass::any_class {9, "any-class"};

const Enum::YLeaf SrPrepend::none_type {0, "none-type"};
const Enum::YLeaf SrPrepend::next_label {1, "next-label"};
const Enum::YLeaf SrPrepend::bgp_n_hop {2, "bgp-n-hop"};

const Enum::YLeaf MplsTePathComputationMethod::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathComputationMethod::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathComputationMethod::pce {2, "pce"};
const Enum::YLeaf MplsTePathComputationMethod::explicit_ {3, "explicit"};

const Enum::YLeaf OtnDestination::number_ed {0, "number-ed"};
const Enum::YLeaf OtnDestination::un_number_ed {1, "un-number-ed"};

const Enum::YLeaf MplsTeSwitchingCap::psc1 {1, "psc1"};
const Enum::YLeaf MplsTeSwitchingCap::lsc {150, "lsc"};
const Enum::YLeaf MplsTeSwitchingCap::fsc {200, "fsc"};

const Enum::YLeaf MplsTeBfdSessionDownAction::re_setup {1, "re-setup"};

const Enum::YLeaf RoutePriorityRole::route_priority_role_head_back_up {0, "route-priority-role-head-back-up"};
const Enum::YLeaf RoutePriorityRole::route_priority_role_head_primary {1, "route-priority-role-head-primary"};
const Enum::YLeaf RoutePriorityRole::route_priority_role_middle {2, "route-priority-role-middle"};

const Enum::YLeaf MplsTebfdSession::regular_bfd {1, "regular-bfd"};
const Enum::YLeaf MplsTebfdSession::sbfd {2, "sbfd"};
const Enum::YLeaf MplsTebfdSession::redundant_sbfd {3, "redundant-sbfd"};

const Enum::YLeaf MplsTeLogFrrProtection::frr_active_primary {1, "frr-active-primary"};
const Enum::YLeaf MplsTeLogFrrProtection::backup {256, "backup"};
const Enum::YLeaf MplsTeLogFrrProtection::frr_ready_primary {512, "frr-ready-primary"};
const Enum::YLeaf MplsTeLogFrrProtection::primary {513, "primary"};
const Enum::YLeaf MplsTeLogFrrProtection::all {769, "all"};

const Enum::YLeaf MplsTeTunnelAffinity::include {1, "include"};
const Enum::YLeaf MplsTeTunnelAffinity::include_strict {2, "include-strict"};
const Enum::YLeaf MplsTeTunnelAffinity::exclude {3, "exclude"};
const Enum::YLeaf MplsTeTunnelAffinity::exclude_all {4, "exclude-all"};
const Enum::YLeaf MplsTeTunnelAffinity::ignore {5, "ignore"};

const Enum::YLeaf IetfMode::standard {3, "standard"};

const Enum::YLeaf MplsTePathOptionProperty::none {0, "none"};
const Enum::YLeaf MplsTePathOptionProperty::lockdown {1, "lockdown"};
const Enum::YLeaf MplsTePathOptionProperty::verbatim {4, "verbatim"};
const Enum::YLeaf MplsTePathOptionProperty::pce {8, "pce"};
const Enum::YLeaf MplsTePathOptionProperty::segment_routing {16, "segment-routing"};

const Enum::YLeaf GmplsttiMode::sm {1, "sm"};
const Enum::YLeaf GmplsttiMode::pm {2, "pm"};
const Enum::YLeaf GmplsttiMode::tcm {3, "tcm"};

const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpire::tunnel_action_tear {1, "tunnel-action-tear"};
const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpire::tunnel_action_drop {2, "tunnel-action-drop"};

const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_unidir_no_aps {4, "1plus1-unidir-no-aps"};
const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_unidir_aps {8, "1plus1-unidir-aps"};
const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_bdir_aps {16, "1plus1-bdir-aps"};

const Enum::YLeaf MplsTeSwitchingEncoding::packet {1, "packet"};
const Enum::YLeaf MplsTeSwitchingEncoding::ethernet {2, "ethernet"};
const Enum::YLeaf MplsTeSwitchingEncoding::sondet_sdh {5, "sondet-sdh"};

const Enum::YLeaf MplsTeSigNameOption::none {0, "none"};
const Enum::YLeaf MplsTeSigNameOption::address {1, "address"};
const Enum::YLeaf MplsTeSigNameOption::name {2, "name"};

const Enum::YLeaf OtnProtectionSwitchLockout::none {0, "none"};
const Enum::YLeaf OtnProtectionSwitchLockout::working {1, "working"};

const Enum::YLeaf MplsTeTunnelId::auto_ {0, "auto"};
const Enum::YLeaf MplsTeTunnelId::explicit_ {1, "explicit"};

const Enum::YLeaf MplsTeAffinityValue::hex_value {1, "hex-value"};
const Enum::YLeaf MplsTeAffinityValue::bit_position {2, "bit-position"};

const Enum::YLeaf OtnStaticUni::unknown {0, "unknown"};
const Enum::YLeaf OtnStaticUni::xc {1, "xc"};
const Enum::YLeaf OtnStaticUni::termination {2, "termination"};

const Enum::YLeaf MplsTeOtnSncMode::snc_n {1, "snc-n"};
const Enum::YLeaf MplsTeOtnSncMode::snc_i {2, "snc-i"};
const Enum::YLeaf MplsTeOtnSncMode::snc_s {3, "snc-s"};

const Enum::YLeaf OtnPayload::unknown {0, "unknown"};
const Enum::YLeaf OtnPayload::bmp {50, "bmp"};
const Enum::YLeaf OtnPayload::gfp_f {54, "gfp-f"};
const Enum::YLeaf OtnPayload::gmp {55, "gmp"};
const Enum::YLeaf OtnPayload::gfp_f_ext {70, "gfp-f-ext"};

const Enum::YLeaf OspfAreaMode::ospf_int {0, "ospf-int"};
const Enum::YLeaf OspfAreaMode::ospfip_addr {1, "ospfip-addr"};

const Enum::YLeaf MplsTeIgpProtocol::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocol::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocol::ospf {2, "ospf"};

const Enum::YLeaf MplsTePathSelectionTiebreaker::min_fill {1, "min-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreaker::max_fill {2, "max-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreaker::random {3, "random"};

const Enum::YLeaf MplsTePathOption::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathOption::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathOption::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePathOption::explicit_number {4, "explicit-number"};
const Enum::YLeaf MplsTePathOption::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePathOption::sr {6, "sr"};

const Enum::YLeaf PathInvalidationAction::tear {1, "tear"};
const Enum::YLeaf PathInvalidationAction::drop {2, "drop"};

const Enum::YLeaf OtnSignaledBandwidth::odu1 {1, "odu1"};
const Enum::YLeaf OtnSignaledBandwidth::odu2 {2, "odu2"};
const Enum::YLeaf OtnSignaledBandwidth::odu3 {3, "odu3"};
const Enum::YLeaf OtnSignaledBandwidth::odu4 {4, "odu4"};
const Enum::YLeaf OtnSignaledBandwidth::odu0 {10, "odu0"};
const Enum::YLeaf OtnSignaledBandwidth::odu2e {11, "odu2e"};
const Enum::YLeaf OtnSignaledBandwidth::od_uflex_cbr {20, "od-uflex-cbr"};
const Enum::YLeaf OtnSignaledBandwidth::od_uflex_gfp_resize {21, "od-uflex-gfp-resize"};
const Enum::YLeaf OtnSignaledBandwidth::od_uflex_gfp_not_resize {22, "od-uflex-gfp-not-resize"};
const Enum::YLeaf OtnSignaledBandwidth::odu1e {23, "odu1e"};
const Enum::YLeaf OtnSignaledBandwidth::odu1f {24, "odu1f"};
const Enum::YLeaf OtnSignaledBandwidth::odu2f {25, "odu2f"};
const Enum::YLeaf OtnSignaledBandwidth::odu3e1 {26, "odu3e1"};
const Enum::YLeaf OtnSignaledBandwidth::odu3e2 {27, "odu3e2"};

const Enum::YLeaf MplsTeAutorouteMetric::relative {1, "relative"};
const Enum::YLeaf MplsTeAutorouteMetric::absolute {2, "absolute"};
const Enum::YLeaf MplsTeAutorouteMetric::constant {3, "constant"};

const Enum::YLeaf BindingSegmentId::any_label {1, "any-label"};
const Enum::YLeaf BindingSegmentId::specified_label {2, "specified-label"};

const Enum::YLeaf MplsTesrlgExclude::mandatory {1, "mandatory"};
const Enum::YLeaf MplsTesrlgExclude::preferred {2, "preferred"};
const Enum::YLeaf MplsTesrlgExclude::weighted {3, "weighted"};

const Enum::YLeaf MplsTeSignaledLabel::not_set {0, "not-set"};
const Enum::YLeaf MplsTeSignaledLabel::dwdm {1, "dwdm"};

const Enum::YLeaf BandwidthConstraint::bandwidth_constraint_maximum_allocation_model {1, "bandwidth-constraint-maximum-allocation-model"};

const Enum::YLeaf MplsTeSwitchingEncode::none {0, "none"};
const Enum::YLeaf MplsTeSwitchingEncode::packet {1, "packet"};
const Enum::YLeaf MplsTeSwitchingEncode::ethernet {2, "ethernet"};
const Enum::YLeaf MplsTeSwitchingEncode::sondet_sdh {5, "sondet-sdh"};

const Enum::YLeaf MplsTePathSelectionMetric::igp {1, "igp"};
const Enum::YLeaf MplsTePathSelectionMetric::te {2, "te"};

const Enum::YLeaf MplsTePathOptionProtection::active {0, "active"};
const Enum::YLeaf MplsTePathOptionProtection::protecting {1, "protecting"};

const Enum::YLeaf OtnSignaledBandwidthFlexFraming::cbr {20, "cbr"};
const Enum::YLeaf OtnSignaledBandwidthFlexFraming::framed_gfp_fixed {21, "framed-gfp-fixed"};
const Enum::YLeaf OtnSignaledBandwidthFlexFraming::framed_gfp_resize {22, "framed-gfp-resize"};

const Enum::YLeaf MplsTeBandwidthLimit::unlimited {64, "unlimited"};
const Enum::YLeaf MplsTeBandwidthLimit::limited {128, "limited"};

const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::adj_unprotected {1, "adj-unprotected"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::adj_protected {2, "adj-protected"};

const Enum::YLeaf LinkNextHop::none {1, "none"};
const Enum::YLeaf LinkNextHop::ipv4_address {2, "ipv4-address"};

const Enum::YLeaf MplsLcacFloodingIgp::ospf {0, "ospf"};

const Enum::YLeaf BfdReversePath::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf MplsTeOtnApsRestorationStyle::keep_failed_lsp {1, "keep-failed-lsp"};
const Enum::YLeaf MplsTeOtnApsRestorationStyle::delete_failed_lsp {2, "delete-failed-lsp"};

const Enum::YLeaf MplsTeBandwidthDste::standard_dste {0, "standard-dste"};
const Enum::YLeaf MplsTeBandwidthDste::pre_standard_dste {1, "pre-standard-dste"};

const Enum::YLeaf MplsTePathDiversityConformance::strict {0, "strict"};
const Enum::YLeaf MplsTePathDiversityConformance::best_effort {1, "best-effort"};

const Enum::YLeaf MplsTeBackupBandwidthPool::any_pool {1, "any-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPool::global_pool {2, "global-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPool::sub_pool {4, "sub-pool"};

const Enum::YLeaf MplsTeOtnApsProtectionMode::revertive {1, "revertive"};
const Enum::YLeaf MplsTeOtnApsProtectionMode::non_revertive {2, "non-revertive"};

const Enum::YLeaf MplsTeSwitchingIndex::link {255, "link"};

const Enum::YLeaf MplsTeConfigTunnel::p2p {0, "p2p"};
const Enum::YLeaf MplsTeConfigTunnel::p2mp {1, "p2mp"};


}
}

