
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lmp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lmp_cfg {

Lmp::Lmp()
    :
    enable{YType::empty, "enable"}
        ,
    gmpls_uni(std::make_shared<Lmp::GmplsUni>())
{
    gmpls_uni->parent = this;

    yang_name = "lmp"; yang_parent_name = "Cisco-IOS-XR-lmp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Lmp::~Lmp()
{
}

bool Lmp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_data());
}

bool Lmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_operation());
}

std::string Lmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmpls-uni")
    {
        if(gmpls_uni == nullptr)
        {
            gmpls_uni = std::make_shared<Lmp::GmplsUni>();
        }
        return gmpls_uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmpls_uni != nullptr)
    {
        _children["gmpls-uni"] = gmpls_uni;
    }

    return _children;
}

void Lmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Lmp::clone_ptr() const
{
    return std::make_shared<Lmp>();
}

std::string Lmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Lmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmpls-uni" || name == "enable")
        return true;
    return false;
}

Lmp::GmplsUni::GmplsUni()
    :
    neighbors(std::make_shared<Lmp::GmplsUni::Neighbors>())
    , router_id(nullptr) // presence node
    , controllers(std::make_shared<Lmp::GmplsUni::Controllers>())
{
    neighbors->parent = this;
    controllers->parent = this;

    yang_name = "gmpls-uni"; yang_parent_name = "lmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::~GmplsUni()
{
}

bool Lmp::GmplsUni::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (controllers !=  nullptr && controllers->has_data());
}

bool Lmp::GmplsUni::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string Lmp::GmplsUni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Lmp::GmplsUni::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Lmp::GmplsUni::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<Lmp::GmplsUni::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(router_id != nullptr)
    {
        _children["router-id"] = router_id;
    }

    if(controllers != nullptr)
    {
        _children["controllers"] = controllers;
    }

    return _children;
}

void Lmp::GmplsUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "router-id" || name == "controllers")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbors()
    :
    neighbor(this, {"neighbor_name"})
{

    yang_name = "neighbors"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::Neighbors::~Neighbors()
{
}

bool Lmp::GmplsUni::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Lmp::GmplsUni::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lmp::GmplsUni::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Neighbor()
    :
    neighbor_name{YType::str, "neighbor-name"},
    enable{YType::empty, "enable"},
    neighbor_router_id{YType::str, "neighbor-router-id"}
        ,
    ipcc(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc>())
{
    ipcc->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::Neighbors::Neighbor::~Neighbor()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_name.is_set
	|| enable.is_set
	|| neighbor_router_id.is_set
	|| (ipcc !=  nullptr && ipcc->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| (ipcc !=  nullptr && ipcc->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp/gmpls-uni/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_name, "neighbor-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_name.is_set || is_set(neighbor_name.yfilter)) leaf_name_data.push_back(neighbor_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcc")
    {
        if(ipcc == nullptr)
        {
            ipcc = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc>();
        }
        return ipcc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipcc != nullptr)
    {
        _children["ipcc"] = ipcc;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-name")
    {
        neighbor_name = value;
        neighbor_name.value_namespace = name_space;
        neighbor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-name")
    {
        neighbor_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcc" || name == "neighbor-name" || name == "enable" || name == "neighbor-router-id")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Ipcc()
    :
    routed(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed>())
{
    routed->parent = this;

    yang_name = "ipcc"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::~Ipcc()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::has_data() const
{
    if (is_presence_container) return true;
    return (routed !=  nullptr && routed->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::has_operation() const
{
    return is_set(yfilter)
	|| (routed !=  nullptr && routed->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routed")
    {
        if(routed == nullptr)
        {
            routed = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed>();
        }
        return routed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routed != nullptr)
    {
        _children["routed"] = routed;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::Routed()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "routed"; yang_parent_name = "ipcc"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::~Routed()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Routed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Lmp::GmplsUni::RouterId::RouterId()
    :
    interface_name{YType::str, "interface-name"},
    address{YType::str, "address"}
{

    yang_name = "router-id"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Lmp::GmplsUni::RouterId::~RouterId()
{
}

bool Lmp::GmplsUni::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| address.is_set;
}

bool Lmp::GmplsUni::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Lmp::GmplsUni::RouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controllers()
    :
    controller(this, {"controller_name"})
{

    yang_name = "controllers"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::Controllers::~Controllers()
{
}

bool Lmp::GmplsUni::Controllers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Lmp::GmplsUni::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lmp::GmplsUni::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto ent_ = std::make_shared<Lmp::GmplsUni::Controllers::Controller>();
        ent_->parent = this;
        controller.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::GmplsUni::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    enable{YType::empty, "enable"}
        ,
    local_link_id(std::make_shared<Lmp::GmplsUni::Controllers::Controller::LocalLinkId>())
    , adjacency(std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency>())
{
    local_link_id->parent = this;
    adjacency->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::Controllers::Controller::~Controller()
{
}

bool Lmp::GmplsUni::Controllers::Controller::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| enable.is_set
	|| (local_link_id !=  nullptr && local_link_id->has_data())
	|| (adjacency !=  nullptr && adjacency->has_data());
}

bool Lmp::GmplsUni::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (local_link_id !=  nullptr && local_link_id->has_operation())
	|| (adjacency !=  nullptr && adjacency->has_operation());
}

std::string Lmp::GmplsUni::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-cfg:lmp/gmpls-uni/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-link-id")
    {
        if(local_link_id == nullptr)
        {
            local_link_id = std::make_shared<Lmp::GmplsUni::Controllers::Controller::LocalLinkId>();
        }
        return local_link_id;
    }

    if(child_yang_name == "adjacency")
    {
        if(adjacency == nullptr)
        {
            adjacency = std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency>();
        }
        return adjacency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_link_id != nullptr)
    {
        _children["local-link-id"] = local_link_id;
    }

    if(adjacency != nullptr)
    {
        _children["adjacency"] = adjacency;
    }

    return _children;
}

void Lmp::GmplsUni::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Lmp::GmplsUni::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Lmp::GmplsUni::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-id" || name == "adjacency" || name == "controller-name" || name == "enable")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controller::LocalLinkId::LocalLinkId()
    :
    address_type{YType::enumeration, "address-type"},
    unnumbered{YType::uint32, "unnumbered"},
    address{YType::str, "address"}
{

    yang_name = "local-link-id"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Controllers::Controller::LocalLinkId::~LocalLinkId()
{
}

bool Lmp::GmplsUni::Controllers::Controller::LocalLinkId::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| unnumbered.is_set
	|| address.is_set;
}

bool Lmp::GmplsUni::Controllers::Controller::LocalLinkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Lmp::GmplsUni::Controllers::Controller::LocalLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::Controller::LocalLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::Controller::LocalLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::Controller::LocalLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Controllers::Controller::LocalLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Controllers::Controller::LocalLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Controllers::Controller::LocalLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "unnumbered" || name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::Adjacency()
    :
    remote_neighbor(std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor>())
{
    remote_neighbor->parent = this;

    yang_name = "adjacency"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::~Adjacency()
{
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::has_data() const
{
    if (is_presence_container) return true;
    return (remote_neighbor !=  nullptr && remote_neighbor->has_data());
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::has_operation() const
{
    return is_set(yfilter)
	|| (remote_neighbor !=  nullptr && remote_neighbor->has_operation());
}

std::string Lmp::GmplsUni::Controllers::Controller::Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::Controller::Adjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::Controller::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-neighbor")
    {
        if(remote_neighbor == nullptr)
        {
            remote_neighbor = std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor>();
        }
        return remote_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::Controller::Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_neighbor != nullptr)
    {
        _children["remote-neighbor"] = remote_neighbor;
    }

    return _children;
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-neighbor")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::RemoteNeighbor()
    :
    neighbor_association{YType::str, "neighbor-association"},
    link_switching_capability{YType::enumeration, "link-switching-capability"},
    flexi_grid_capable{YType::uint32, "flexi-grid-capable"}
        ,
    interface_id(std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId>())
    , link_id(std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId>())
{
    interface_id->parent = this;
    link_id->parent = this;

    yang_name = "remote-neighbor"; yang_parent_name = "adjacency"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::~RemoteNeighbor()
{
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_association.is_set
	|| link_switching_capability.is_set
	|| flexi_grid_capable.is_set
	|| (interface_id !=  nullptr && interface_id->has_data())
	|| (link_id !=  nullptr && link_id->has_data());
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_association.yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(flexi_grid_capable.yfilter)
	|| (interface_id !=  nullptr && interface_id->has_operation())
	|| (link_id !=  nullptr && link_id->has_operation());
}

std::string Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_association.is_set || is_set(neighbor_association.yfilter)) leaf_name_data.push_back(neighbor_association.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (flexi_grid_capable.is_set || is_set(flexi_grid_capable.yfilter)) leaf_name_data.push_back(flexi_grid_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId>();
        }
        return interface_id;
    }

    if(child_yang_name == "link-id")
    {
        if(link_id == nullptr)
        {
            link_id = std::make_shared<Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId>();
        }
        return link_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_id != nullptr)
    {
        _children["interface-id"] = interface_id;
    }

    if(link_id != nullptr)
    {
        _children["link-id"] = link_id;
    }

    return _children;
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-association")
    {
        neighbor_association = value;
        neighbor_association.value_namespace = name_space;
        neighbor_association.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flexi-grid-capable")
    {
        flexi_grid_capable = value;
        flexi_grid_capable.value_namespace = name_space;
        flexi_grid_capable.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-association")
    {
        neighbor_association.yfilter = yfilter;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "flexi-grid-capable")
    {
        flexi_grid_capable.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "link-id" || name == "neighbor-association" || name == "link-switching-capability" || name == "flexi-grid-capable")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::InterfaceId()
    :
    address_type{YType::enumeration, "address-type"},
    unnumbered{YType::uint32, "unnumbered"},
    address{YType::str, "address"}
{

    yang_name = "interface-id"; yang_parent_name = "remote-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::~InterfaceId()
{
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| unnumbered.is_set
	|| address.is_set;
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "unnumbered" || name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::LinkId()
    :
    address_type{YType::enumeration, "address-type"},
    unnumbered{YType::uint32, "unnumbered"},
    address{YType::str, "address"}
{

    yang_name = "link-id"; yang_parent_name = "remote-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::~LinkId()
{
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| unnumbered.is_set
	|| address.is_set;
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Controllers::Controller::Adjacency::RemoteNeighbor::LinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "unnumbered" || name == "address")
        return true;
    return false;
}

const Enum::YLeaf OlmAddr::ipv4 {101, "ipv4"};
const Enum::YLeaf OlmAddr::ipv6 {102, "ipv6"};
const Enum::YLeaf OlmAddr::unnumbered {103, "unnumbered"};
const Enum::YLeaf OlmAddr::nsap {104, "nsap"};

const Enum::YLeaf OlmSwitchingCap::lsc {150, "lsc"};
const Enum::YLeaf OlmSwitchingCap::fsc {200, "fsc"};


}
}

