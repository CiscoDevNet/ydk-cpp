
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_static_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_static_cfg {

MplsStatic::MplsStatic()
    :
    enable{YType::empty, "enable"}
    	,
    vrfs(std::make_shared<MplsStatic::Vrfs>())
	,interfaces(std::make_shared<MplsStatic::Interfaces>())
	,default_vrf(std::make_shared<MplsStatic::DefaultVrf>())
{
    vrfs->parent = this;
    interfaces->parent = this;
    default_vrf->parent = this;

    yang_name = "mpls-static"; yang_parent_name = "Cisco-IOS-XR-mpls-static-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    return enable.is_set
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsStatic::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsStatic::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<MplsStatic::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    return children;
}

void MplsStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> MplsStatic::clone_ptr() const
{
    return std::make_shared<MplsStatic>();
}

std::string MplsStatic::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsStatic::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsStatic::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsStatic::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "interfaces" || name == "default-vrf" || name == "enable")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::Vrfs::~Vrfs()
{
}

bool MplsStatic::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"}
    	,
    label_switched_paths(std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths>())
	,afs(std::make_shared<MplsStatic::Vrfs::Vrf::Afs>())
{
    label_switched_paths->parent = this;
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::Vrfs::Vrf::~Vrf()
{
}

bool MplsStatic::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_data())
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsStatic::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_operation())
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-paths")
    {
        if(label_switched_paths == nullptr)
        {
            label_switched_paths = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths>();
        }
        return label_switched_paths;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsStatic::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_switched_paths != nullptr)
    {
        children["label-switched-paths"] = label_switched_paths;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-paths" || name == "afs" || name == "vrf-name" || name == "enable")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPaths()
{

    yang_name = "label-switched-paths"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::~LabelSwitchedPaths()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_switched_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-path")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::LabelSwitchedPath()
    :
    lsp_name{YType::str, "lsp-name"},
    enable{YType::empty, "enable"}
    	,
    backup_paths(std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths>())
	,in_label(std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>())
	,paths(std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>())
{
    backup_paths->parent = this;
    in_label->parent = this;
    paths->parent = this;

    yang_name = "label-switched-path"; yang_parent_name = "label-switched-paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::has_data() const
{
    return lsp_name.is_set
	|| enable.is_set
	|| (backup_paths !=  nullptr && backup_paths->has_data())
	|| (in_label !=  nullptr && in_label->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (backup_paths !=  nullptr && backup_paths->has_operation())
	|| (in_label !=  nullptr && in_label->has_operation())
	|| (paths !=  nullptr && paths->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[lsp-name='" <<lsp_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_name.is_set || is_set(lsp_name.yfilter)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-paths")
    {
        if(backup_paths == nullptr)
        {
            backup_paths = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths>();
        }
        return backup_paths;
    }

    if(child_yang_name == "in-label")
    {
        if(in_label == nullptr)
        {
            in_label = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>();
        }
        return in_label;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_paths != nullptr)
    {
        children["backup-paths"] = backup_paths;
    }

    if(in_label != nullptr)
    {
        children["in-label"] = in_label;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
        lsp_name.value_namespace = name_space;
        lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-name")
    {
        lsp_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-paths" || name == "in-label" || name == "paths" || name == "lsp-name" || name == "enable")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::BackupPaths()
{

    yang_name = "backup-paths"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::~BackupPaths()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "backup-paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::InLabel()
    :
    in_label_value{YType::uint32, "in-label-value"},
    label_mode{YType::enumeration, "label-mode"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    tlh_mode{YType::boolean, "tlh-mode"}
{

    yang_name = "in-label"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::~InLabel()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_data() const
{
    return in_label_value.is_set
	|| label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| tlh_mode.is_set;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label_value.yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(tlh_mode.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label_value.is_set || is_set(in_label_value.yfilter)) leaf_name_data.push_back(in_label_value.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (tlh_mode.is_set || is_set(tlh_mode.yfilter)) leaf_name_data.push_back(tlh_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label-value")
    {
        in_label_value = value;
        in_label_value.value_namespace = name_space;
        in_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlh-mode")
    {
        tlh_mode = value;
        tlh_mode.value_namespace = name_space;
        tlh_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label-value")
    {
        in_label_value.yfilter = yfilter;
    }
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "tlh-mode")
    {
        tlh_mode.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label-value" || name == "label-mode" || name == "prefix" || name == "prefix-length" || name == "tlh-mode")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::~Paths()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::Af()
    :
    afi{YType::enumeration, "afi"},
    enable{YType::empty, "enable"}
    	,
    top_label_hash(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash>())
	,local_labels(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels>())
{
    top_label_hash->parent = this;
    local_labels->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::has_data() const
{
    return afi.is_set
	|| enable.is_set
	|| (top_label_hash !=  nullptr && top_label_hash->has_data())
	|| (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (top_label_hash !=  nullptr && top_label_hash->has_operation())
	|| (local_labels !=  nullptr && local_labels->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[afi='" <<afi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "top-label-hash")
    {
        if(top_label_hash == nullptr)
        {
            top_label_hash = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash>();
        }
        return top_label_hash;
    }

    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels>();
        }
        return local_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(top_label_hash != nullptr)
    {
        children["top-label-hash"] = top_label_hash;
    }

    if(local_labels != nullptr)
    {
        children["local-labels"] = local_labels;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "top-label-hash" || name == "local-labels" || name == "afi" || name == "enable")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::TopLabelHash()
    :
    local_labels(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels>())
{
    local_labels->parent = this;

    yang_name = "top-label-hash"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::~TopLabelHash()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::has_data() const
{
    return (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::has_operation() const
{
    return is_set(yfilter)
	|| (local_labels !=  nullptr && local_labels->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-label-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels>();
        }
        return local_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_labels != nullptr)
    {
        children["local-labels"] = local_labels;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-labels")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabels()
{

    yang_name = "local-labels"; yang_parent_name = "top-label-hash"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    paths->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label_id.yfilter)
	|| (label_type !=  nullptr && label_type->has_operation())
	|| (paths !=  nullptr && paths->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.yfilter)) leaf_name_data.push_back(local_label_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-type")
    {
        if(label_type == nullptr)
        {
            label_type = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>();
        }
        return label_type;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_type != nullptr)
    {
        children["label-type"] = label_type;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
        local_label_id.value_namespace = name_space;
        local_label_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label-id")
    {
        local_label_id.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-type" || name == "paths" || name == "local-label-id")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    label_mode{YType::enumeration, "label-mode"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"}
{

    yang_name = "label-type"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-mode" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabels()
{

    yang_name = "local-labels"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    paths->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label_id.yfilter)
	|| (label_type !=  nullptr && label_type->has_operation())
	|| (paths !=  nullptr && paths->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.yfilter)) leaf_name_data.push_back(local_label_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-type")
    {
        if(label_type == nullptr)
        {
            label_type = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType>();
        }
        return label_type;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_type != nullptr)
    {
        children["label-type"] = label_type;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
        local_label_id.value_namespace = name_space;
        local_label_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label-id")
    {
        local_label_id.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-type" || name == "paths" || name == "local-label-id")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    label_mode{YType::enumeration, "label-mode"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"}
{

    yang_name = "label-type"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-mode" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::Interfaces::~Interfaces()
{
}

bool MplsStatic::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsStatic::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::Interfaces::Interface::~Interface()
{
}

bool MplsStatic::Interfaces::Interface::has_data() const
{
    return interface_name.is_set;
}

bool MplsStatic::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsStatic::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsStatic::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

MplsStatic::DefaultVrf::DefaultVrf()
    :
    enable{YType::empty, "enable"}
    	,
    label_switched_paths(std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths>())
	,afs(std::make_shared<MplsStatic::DefaultVrf::Afs>())
{
    label_switched_paths->parent = this;
    afs->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::DefaultVrf::~DefaultVrf()
{
}

bool MplsStatic::DefaultVrf::has_data() const
{
    return enable.is_set
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_data())
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsStatic::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_operation())
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsStatic::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-paths")
    {
        if(label_switched_paths == nullptr)
        {
            label_switched_paths = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths>();
        }
        return label_switched_paths;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsStatic::DefaultVrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_switched_paths != nullptr)
    {
        children["label-switched-paths"] = label_switched_paths;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsStatic::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-paths" || name == "afs" || name == "enable")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPaths()
{

    yang_name = "label-switched-paths"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::~LabelSwitchedPaths()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_switched_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-path")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::LabelSwitchedPath()
    :
    lsp_name{YType::str, "lsp-name"},
    enable{YType::empty, "enable"}
    	,
    backup_paths(std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths>())
	,in_label(std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>())
	,paths(std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>())
{
    backup_paths->parent = this;
    in_label->parent = this;
    paths->parent = this;

    yang_name = "label-switched-path"; yang_parent_name = "label-switched-paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::has_data() const
{
    return lsp_name.is_set
	|| enable.is_set
	|| (backup_paths !=  nullptr && backup_paths->has_data())
	|| (in_label !=  nullptr && in_label->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (backup_paths !=  nullptr && backup_paths->has_operation())
	|| (in_label !=  nullptr && in_label->has_operation())
	|| (paths !=  nullptr && paths->has_operation());
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/label-switched-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[lsp-name='" <<lsp_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_name.is_set || is_set(lsp_name.yfilter)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-paths")
    {
        if(backup_paths == nullptr)
        {
            backup_paths = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths>();
        }
        return backup_paths;
    }

    if(child_yang_name == "in-label")
    {
        if(in_label == nullptr)
        {
            in_label = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel>();
        }
        return in_label;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_paths != nullptr)
    {
        children["backup-paths"] = backup_paths;
    }

    if(in_label != nullptr)
    {
        children["in-label"] = in_label;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
        lsp_name.value_namespace = name_space;
        lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-name")
    {
        lsp_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-paths" || name == "in-label" || name == "paths" || name == "lsp-name" || name == "enable")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::BackupPaths()
{

    yang_name = "backup-paths"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::~BackupPaths()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "backup-paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::BackupPaths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::InLabel()
    :
    in_label_value{YType::uint32, "in-label-value"},
    label_mode{YType::enumeration, "label-mode"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    tlh_mode{YType::boolean, "tlh-mode"}
{

    yang_name = "in-label"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::~InLabel()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_data() const
{
    return in_label_value.is_set
	|| label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| tlh_mode.is_set;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label_value.yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(tlh_mode.yfilter);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label_value.is_set || is_set(in_label_value.yfilter)) leaf_name_data.push_back(in_label_value.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (tlh_mode.is_set || is_set(tlh_mode.yfilter)) leaf_name_data.push_back(tlh_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label-value")
    {
        in_label_value = value;
        in_label_value.value_namespace = name_space;
        in_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlh-mode")
    {
        tlh_mode = value;
        tlh_mode.value_namespace = name_space;
        tlh_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label-value")
    {
        in_label_value.yfilter = yfilter;
    }
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "tlh-mode")
    {
        tlh_mode.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label-value" || name == "label-mode" || name == "prefix" || name == "prefix-length" || name == "tlh-mode")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::~Paths()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::DefaultVrf::Afs::~Afs()
{
}

bool MplsStatic::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::Af()
    :
    afi{YType::enumeration, "afi"},
    enable{YType::empty, "enable"}
    	,
    top_label_hash(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash>())
	,local_labels(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels>())
{
    top_label_hash->parent = this;
    local_labels->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::has_data() const
{
    return afi.is_set
	|| enable.is_set
	|| (top_label_hash !=  nullptr && top_label_hash->has_data())
	|| (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (top_label_hash !=  nullptr && top_label_hash->has_operation())
	|| (local_labels !=  nullptr && local_labels->has_operation());
}

std::string MplsStatic::DefaultVrf::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-cfg:mpls-static/default-vrf/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[afi='" <<afi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "top-label-hash")
    {
        if(top_label_hash == nullptr)
        {
            top_label_hash = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash>();
        }
        return top_label_hash;
    }

    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels>();
        }
        return local_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(top_label_hash != nullptr)
    {
        children["top-label-hash"] = top_label_hash;
    }

    if(local_labels != nullptr)
    {
        children["local-labels"] = local_labels;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "top-label-hash" || name == "local-labels" || name == "afi" || name == "enable")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::TopLabelHash()
    :
    local_labels(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels>())
{
    local_labels->parent = this;

    yang_name = "top-label-hash"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::~TopLabelHash()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::has_data() const
{
    return (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::has_operation() const
{
    return is_set(yfilter)
	|| (local_labels !=  nullptr && local_labels->has_operation());
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-label-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels>();
        }
        return local_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_labels != nullptr)
    {
        children["local-labels"] = local_labels;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-labels")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabels()
{

    yang_name = "local-labels"; yang_parent_name = "top-label-hash"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    paths->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label_id.yfilter)
	|| (label_type !=  nullptr && label_type->has_operation())
	|| (paths !=  nullptr && paths->has_operation());
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.yfilter)) leaf_name_data.push_back(local_label_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-type")
    {
        if(label_type == nullptr)
        {
            label_type = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType>();
        }
        return label_type;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_type != nullptr)
    {
        children["label-type"] = label_type;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
        local_label_id.value_namespace = name_space;
        local_label_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label-id")
    {
        local_label_id.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-type" || name == "paths" || name == "local-label-id")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    label_mode{YType::enumeration, "label-mode"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"}
{

    yang_name = "label-type"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-mode" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabels()
{

    yang_name = "local-labels"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"}
    	,
    label_type(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType>())
	,paths(std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths>())
{
    label_type->parent = this;
    paths->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::has_data() const
{
    return local_label_id.is_set
	|| (label_type !=  nullptr && label_type->has_data())
	|| (paths !=  nullptr && paths->has_data());
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label_id.yfilter)
	|| (label_type !=  nullptr && label_type->has_operation())
	|| (paths !=  nullptr && paths->has_operation());
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.yfilter)) leaf_name_data.push_back(local_label_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-type")
    {
        if(label_type == nullptr)
        {
            label_type = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType>();
        }
        return label_type;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_type != nullptr)
    {
        children["label-type"] = label_type;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
        local_label_id.value_namespace = name_space;
        local_label_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label-id")
    {
        local_label_id.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-type" || name == "paths" || name == "local-label-id")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::LabelType()
    :
    label_mode{YType::enumeration, "label-mode"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"}
{

    yang_name = "label-type"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::~LabelType()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_data() const
{
    return label_mode.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-mode" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::~Paths()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"},
    path_type{YType::enumeration, "path-type"},
    label_type{YType::enumeration, "label-type"},
    next_hop_label{YType::uint32, "next-hop-label"},
    next_hop_address{YType::str, "next-hop-address"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"},
    metric{YType::uint32, "metric"},
    nh_mode{YType::enumeration, "nh-mode"},
    path_role{YType::enumeration, "path-role"},
    backup_id{YType::uint32, "backup-id"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::~Path()
{
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_data() const
{
    return path_id.is_set
	|| path_type.is_set
	|| label_type.is_set
	|| next_hop_label.is_set
	|| next_hop_address.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| metric.is_set
	|| nh_mode.is_set
	|| path_role.is_set
	|| backup_id.is_set;
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(next_hop_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nh_mode.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(backup_id.yfilter);
}

std::string MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (next_hop_label.is_set || is_set(next_hop_label.yfilter)) leaf_name_data.push_back(next_hop_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nh_mode.is_set || is_set(nh_mode.yfilter)) leaf_name_data.push_back(nh_mode.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label = value;
        next_hop_label.value_namespace = name_space;
        next_hop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-mode")
    {
        nh_mode = value;
        nh_mode.value_namespace = name_space;
        nh_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-label")
    {
        next_hop_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nh-mode")
    {
        nh_mode.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
}

bool MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-type" || name == "label-type" || name == "next-hop-label" || name == "next-hop-address" || name == "interface-name" || name == "afi" || name == "metric" || name == "nh-mode" || name == "path-role" || name == "backup-id")
        return true;
    return false;
}

const Enum::YLeaf MplsStaticPath::pop_and_lookup {1, "pop-and-lookup"};
const Enum::YLeaf MplsStaticPath::cross_connect {2, "cross-connect"};

const Enum::YLeaf MplsStaticAddressFamily::ipv4_unicast {1, "ipv4-unicast"};

const Enum::YLeaf MplsStaticLabelMode::per_vrf {1, "per-vrf"};
const Enum::YLeaf MplsStaticLabelMode::per_prefix {2, "per-prefix"};
const Enum::YLeaf MplsStaticLabelMode::lsp {3, "lsp"};

const Enum::YLeaf MplsStaticPathRole::primary {0, "primary"};
const Enum::YLeaf MplsStaticPathRole::backup {1, "backup"};
const Enum::YLeaf MplsStaticPathRole::primary_backup {2, "primary-backup"};

const Enum::YLeaf MplsStaticNhAddressFamily::ipv4 {1, "ipv4"};
const Enum::YLeaf MplsStaticNhAddressFamily::ipv6 {2, "ipv6"};

const Enum::YLeaf MplsStaticNhMode::configured {0, "configured"};
const Enum::YLeaf MplsStaticNhMode::resolve {1, "resolve"};

const Enum::YLeaf MplsStaticOutLabelTypes::none {0, "none"};
const Enum::YLeaf MplsStaticOutLabelTypes::out_label {1, "out-label"};
const Enum::YLeaf MplsStaticOutLabelTypes::pop {2, "pop"};
const Enum::YLeaf MplsStaticOutLabelTypes::exp_null {3, "exp-null"};
const Enum::YLeaf MplsStaticOutLabelTypes::ipv6_explicit_null {4, "ipv6-explicit-null"};


}
}

