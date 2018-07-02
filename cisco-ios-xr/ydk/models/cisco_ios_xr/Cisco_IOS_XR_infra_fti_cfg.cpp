
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_fti_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_fti_cfg {

DciFabricInterconnect::DciFabricInterconnect()
    :
    identity{YType::str, "identity"}
        ,
    fabrics(std::make_shared<DciFabricInterconnect::Fabrics>())
    , acp(std::make_shared<DciFabricInterconnect::Acp>())
{
    fabrics->parent = this;
    acp->parent = this;

    yang_name = "dci-fabric-interconnect"; yang_parent_name = "Cisco-IOS-XR-infra-fti-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

DciFabricInterconnect::~DciFabricInterconnect()
{
}

bool DciFabricInterconnect::has_data() const
{
    if (is_presence_container) return true;
    return identity.is_set
	|| (fabrics !=  nullptr && fabrics->has_data())
	|| (acp !=  nullptr && acp->has_data());
}

bool DciFabricInterconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (fabrics !=  nullptr && fabrics->has_operation())
	|| (acp !=  nullptr && acp->has_operation());
}

std::string DciFabricInterconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabrics")
    {
        if(fabrics == nullptr)
        {
            fabrics = std::make_shared<DciFabricInterconnect::Fabrics>();
        }
        return fabrics;
    }

    if(child_yang_name == "acp")
    {
        if(acp == nullptr)
        {
            acp = std::make_shared<DciFabricInterconnect::Acp>();
        }
        return acp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabrics != nullptr)
    {
        children["fabrics"] = fabrics;
    }

    if(acp != nullptr)
    {
        children["acp"] = acp;
    }

    return children;
}

void DciFabricInterconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> DciFabricInterconnect::clone_ptr() const
{
    return std::make_shared<DciFabricInterconnect>();
}

std::string DciFabricInterconnect::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string DciFabricInterconnect::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function DciFabricInterconnect::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DciFabricInterconnect::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool DciFabricInterconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabrics" || name == "acp" || name == "identity")
        return true;
    return false;
}

DciFabricInterconnect::Fabrics::Fabrics()
    :
    fabric(this, {"id1"})
{

    yang_name = "fabrics"; yang_parent_name = "dci-fabric-interconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Fabrics::~Fabrics()
{
}

bool DciFabricInterconnect::Fabrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabric.len(); index++)
    {
        if(fabric[index]->has_data())
            return true;
    }
    return false;
}

bool DciFabricInterconnect::Fabrics::has_operation() const
{
    for (std::size_t index=0; index<fabric.len(); index++)
    {
        if(fabric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DciFabricInterconnect::Fabrics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Fabrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Fabrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Fabrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        auto c = std::make_shared<DciFabricInterconnect::Fabrics::Fabric>();
        c->parent = this;
        fabric.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Fabrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabric.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DciFabricInterconnect::Fabrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::Fabrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DciFabricInterconnect::Fabrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

DciFabricInterconnect::Fabrics::Fabric::Fabric()
    :
    id1{YType::uint32, "id1"},
    ssl{YType::str, "ssl"}
        ,
    controllers(std::make_shared<DciFabricInterconnect::Fabrics::Fabric::Controllers>())
{
    controllers->parent = this;

    yang_name = "fabric"; yang_parent_name = "fabrics"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Fabrics::Fabric::~Fabric()
{
}

bool DciFabricInterconnect::Fabrics::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return id1.is_set
	|| ssl.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool DciFabricInterconnect::Fabrics::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(ssl.yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string DciFabricInterconnect::Fabrics::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/fabrics/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Fabrics::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    ADD_KEY_TOKEN(id1, "id1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Fabrics::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (ssl.is_set || is_set(ssl.yfilter)) leaf_name_data.push_back(ssl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Fabrics::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<DciFabricInterconnect::Fabrics::Fabric::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Fabrics::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void DciFabricInterconnect::Fabrics::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssl")
    {
        ssl = value;
        ssl.value_namespace = name_space;
        ssl.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Fabrics::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "ssl")
    {
        ssl.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Fabrics::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "id1" || name == "ssl")
        return true;
    return false;
}

DciFabricInterconnect::Fabrics::Fabric::Controllers::Controllers()
    :
    controller(this, {"ip1"})
{

    yang_name = "controllers"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::Fabrics::Fabric::Controllers::~Controllers()
{
}

bool DciFabricInterconnect::Fabrics::Fabric::Controllers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool DciFabricInterconnect::Fabrics::Fabric::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DciFabricInterconnect::Fabrics::Fabric::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Fabrics::Fabric::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Fabrics::Fabric::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller>();
        c->parent = this;
        controller.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Fabrics::Fabric::Controllers::get_children() const
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

void DciFabricInterconnect::Fabrics::Fabric::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::Fabrics::Fabric::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DciFabricInterconnect::Fabrics::Fabric::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::Controller()
    :
    ip1{YType::str, "ip1"}
{

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::~Controller()
{
}

bool DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::has_data() const
{
    if (is_presence_container) return true;
    return ip1.is_set;
}

bool DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip1.yfilter);
}

std::string DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(ip1, "ip1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip1.is_set || is_set(ip1.yfilter)) leaf_name_data.push_back(ip1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip1")
    {
        ip1 = value;
        ip1.value_namespace = name_space;
        ip1.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip1")
    {
        ip1.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip1")
        return true;
    return false;
}

DciFabricInterconnect::Acp::Acp()
    :
    nve_id{YType::uint32, "nve-id"},
    bgp_as{YType::uint32, "bgp-as"},
    bg_name{YType::str, "bg-name"}
        ,
    bd_range(std::make_shared<DciFabricInterconnect::Acp::BdRange>())
    , vni_range(std::make_shared<DciFabricInterconnect::Acp::VniRange>())
    , bvi_range(std::make_shared<DciFabricInterconnect::Acp::BviRange>())
    , vrfs(std::make_shared<DciFabricInterconnect::Acp::Vrfs>())
{
    bd_range->parent = this;
    vni_range->parent = this;
    bvi_range->parent = this;
    vrfs->parent = this;

    yang_name = "acp"; yang_parent_name = "dci-fabric-interconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::~Acp()
{
}

bool DciFabricInterconnect::Acp::has_data() const
{
    if (is_presence_container) return true;
    return nve_id.is_set
	|| bgp_as.is_set
	|| bg_name.is_set
	|| (bd_range !=  nullptr && bd_range->has_data())
	|| (vni_range !=  nullptr && vni_range->has_data())
	|| (bvi_range !=  nullptr && bvi_range->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool DciFabricInterconnect::Acp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nve_id.yfilter)
	|| ydk::is_set(bgp_as.yfilter)
	|| ydk::is_set(bg_name.yfilter)
	|| (bd_range !=  nullptr && bd_range->has_operation())
	|| (vni_range !=  nullptr && vni_range->has_operation())
	|| (bvi_range !=  nullptr && bvi_range->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string DciFabricInterconnect::Acp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nve_id.is_set || is_set(nve_id.yfilter)) leaf_name_data.push_back(nve_id.get_name_leafdata());
    if (bgp_as.is_set || is_set(bgp_as.yfilter)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (bg_name.is_set || is_set(bg_name.yfilter)) leaf_name_data.push_back(bg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Acp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-range")
    {
        if(bd_range == nullptr)
        {
            bd_range = std::make_shared<DciFabricInterconnect::Acp::BdRange>();
        }
        return bd_range;
    }

    if(child_yang_name == "vni-range")
    {
        if(vni_range == nullptr)
        {
            vni_range = std::make_shared<DciFabricInterconnect::Acp::VniRange>();
        }
        return vni_range;
    }

    if(child_yang_name == "bvi-range")
    {
        if(bvi_range == nullptr)
        {
            bvi_range = std::make_shared<DciFabricInterconnect::Acp::BviRange>();
        }
        return bvi_range;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<DciFabricInterconnect::Acp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Acp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bd_range != nullptr)
    {
        children["bd-range"] = bd_range;
    }

    if(vni_range != nullptr)
    {
        children["vni-range"] = vni_range;
    }

    if(bvi_range != nullptr)
    {
        children["bvi-range"] = bvi_range;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void DciFabricInterconnect::Acp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nve-id")
    {
        nve_id = value;
        nve_id.value_namespace = name_space;
        nve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as")
    {
        bgp_as = value;
        bgp_as.value_namespace = name_space;
        bgp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bg-name")
    {
        bg_name = value;
        bg_name.value_namespace = name_space;
        bg_name.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Acp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nve-id")
    {
        nve_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as")
    {
        bgp_as.yfilter = yfilter;
    }
    if(value_path == "bg-name")
    {
        bg_name.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Acp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-range" || name == "vni-range" || name == "bvi-range" || name == "vrfs" || name == "nve-id" || name == "bgp-as" || name == "bg-name")
        return true;
    return false;
}

DciFabricInterconnect::Acp::BdRange::BdRange()
    :
    bd_min{YType::uint32, "bd-min"},
    bd_max{YType::uint32, "bd-max"}
{

    yang_name = "bd-range"; yang_parent_name = "acp"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::BdRange::~BdRange()
{
}

bool DciFabricInterconnect::Acp::BdRange::has_data() const
{
    if (is_presence_container) return true;
    return bd_min.is_set
	|| bd_max.is_set;
}

bool DciFabricInterconnect::Acp::BdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_min.yfilter)
	|| ydk::is_set(bd_max.yfilter);
}

std::string DciFabricInterconnect::Acp::BdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/acp/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::BdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::BdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_min.is_set || is_set(bd_min.yfilter)) leaf_name_data.push_back(bd_min.get_name_leafdata());
    if (bd_max.is_set || is_set(bd_max.yfilter)) leaf_name_data.push_back(bd_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Acp::BdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Acp::BdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DciFabricInterconnect::Acp::BdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-min")
    {
        bd_min = value;
        bd_min.value_namespace = name_space;
        bd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-max")
    {
        bd_max = value;
        bd_max.value_namespace = name_space;
        bd_max.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Acp::BdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-min")
    {
        bd_min.yfilter = yfilter;
    }
    if(value_path == "bd-max")
    {
        bd_max.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Acp::BdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-min" || name == "bd-max")
        return true;
    return false;
}

DciFabricInterconnect::Acp::VniRange::VniRange()
    :
    vni_min{YType::uint32, "vni-min"},
    vni_max{YType::uint32, "vni-max"}
{

    yang_name = "vni-range"; yang_parent_name = "acp"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::VniRange::~VniRange()
{
}

bool DciFabricInterconnect::Acp::VniRange::has_data() const
{
    if (is_presence_container) return true;
    return vni_min.is_set
	|| vni_max.is_set;
}

bool DciFabricInterconnect::Acp::VniRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni_min.yfilter)
	|| ydk::is_set(vni_max.yfilter);
}

std::string DciFabricInterconnect::Acp::VniRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/acp/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::VniRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::VniRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_min.is_set || is_set(vni_min.yfilter)) leaf_name_data.push_back(vni_min.get_name_leafdata());
    if (vni_max.is_set || is_set(vni_max.yfilter)) leaf_name_data.push_back(vni_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Acp::VniRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Acp::VniRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DciFabricInterconnect::Acp::VniRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-min")
    {
        vni_min = value;
        vni_min.value_namespace = name_space;
        vni_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-max")
    {
        vni_max = value;
        vni_max.value_namespace = name_space;
        vni_max.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Acp::VniRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-min")
    {
        vni_min.yfilter = yfilter;
    }
    if(value_path == "vni-max")
    {
        vni_max.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Acp::VniRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni-min" || name == "vni-max")
        return true;
    return false;
}

DciFabricInterconnect::Acp::BviRange::BviRange()
    :
    bvi_min{YType::uint32, "bvi-min"},
    bvi_max{YType::uint32, "bvi-max"}
{

    yang_name = "bvi-range"; yang_parent_name = "acp"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::BviRange::~BviRange()
{
}

bool DciFabricInterconnect::Acp::BviRange::has_data() const
{
    if (is_presence_container) return true;
    return bvi_min.is_set
	|| bvi_max.is_set;
}

bool DciFabricInterconnect::Acp::BviRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvi_min.yfilter)
	|| ydk::is_set(bvi_max.yfilter);
}

std::string DciFabricInterconnect::Acp::BviRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/acp/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::BviRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvi-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::BviRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvi_min.is_set || is_set(bvi_min.yfilter)) leaf_name_data.push_back(bvi_min.get_name_leafdata());
    if (bvi_max.is_set || is_set(bvi_max.yfilter)) leaf_name_data.push_back(bvi_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Acp::BviRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Acp::BviRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DciFabricInterconnect::Acp::BviRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvi-min")
    {
        bvi_min = value;
        bvi_min.value_namespace = name_space;
        bvi_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-max")
    {
        bvi_max = value;
        bvi_max.value_namespace = name_space;
        bvi_max.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Acp::BviRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvi-min")
    {
        bvi_min.yfilter = yfilter;
    }
    if(value_path == "bvi-max")
    {
        bvi_max.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Acp::BviRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bvi-min" || name == "bvi-max")
        return true;
    return false;
}

DciFabricInterconnect::Acp::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "acp"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::Vrfs::~Vrfs()
{
}

bool DciFabricInterconnect::Acp::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool DciFabricInterconnect::Acp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DciFabricInterconnect::Acp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/acp/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Acp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<DciFabricInterconnect::Acp::Vrfs::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Acp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DciFabricInterconnect::Acp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::Acp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DciFabricInterconnect::Acp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

DciFabricInterconnect::Acp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    bvi_vrf_ip{YType::str, "bvi-vrf-ip"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::Vrfs::Vrf::~Vrf()
{
}

bool DciFabricInterconnect::Acp::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| bvi_vrf_ip.is_set;
}

bool DciFabricInterconnect::Acp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(bvi_vrf_ip.yfilter);
}

std::string DciFabricInterconnect::Acp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-cfg:dci-fabric-interconnect/acp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (bvi_vrf_ip.is_set || is_set(bvi_vrf_ip.yfilter)) leaf_name_data.push_back(bvi_vrf_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DciFabricInterconnect::Acp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DciFabricInterconnect::Acp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DciFabricInterconnect::Acp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-vrf-ip")
    {
        bvi_vrf_ip = value;
        bvi_vrf_ip.value_namespace = name_space;
        bvi_vrf_ip.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Acp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "bvi-vrf-ip")
    {
        bvi_vrf_ip.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Acp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "bvi-vrf-ip")
        return true;
    return false;
}


}
}

