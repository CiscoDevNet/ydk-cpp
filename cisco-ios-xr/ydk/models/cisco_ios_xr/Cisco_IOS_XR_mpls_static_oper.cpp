
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_static_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_static_oper {

MplsStatic::MplsStatic()
    :
    vrfs(std::make_shared<MplsStatic::Vrfs>())
    , summary(std::make_shared<MplsStatic::Summary>())
    , local_labels(std::make_shared<MplsStatic::LocalLabels>())
{
    vrfs->parent = this;
    summary->parent = this;
    local_labels->parent = this;

    yang_name = "mpls-static"; yang_parent_name = "Cisco-IOS-XR-mpls-static-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    if (is_presence_container) return true;
    return (vrfs !=  nullptr && vrfs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (local_labels !=  nullptr && local_labels->has_operation());
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsStatic::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsStatic::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::LocalLabels>();
        }
        return local_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(local_labels != nullptr)
    {
        _children["local-labels"] = local_labels;
    }

    return _children;
}

void MplsStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MplsStatic::clone_ptr() const
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
    if(name == "vrfs" || name == "summary" || name == "local-labels")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsStatic::Vrfs::~Vrfs()
{
}

bool MplsStatic::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
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

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    vrf_name{YType::str, "vrf-name"}
        ,
    lsps(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps>())
    , local_labels(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels>())
{
    lsps->parent = this;
    local_labels->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsStatic::Vrfs::Vrf::~Vrf()
{
}

bool MplsStatic::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (lsps !=  nullptr && lsps->has_data())
	|| (local_labels !=  nullptr && local_labels->has_data());
}

bool MplsStatic::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (local_labels !=  nullptr && local_labels->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels>();
        }
        return local_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsps != nullptr)
    {
        _children["lsps"] = lsps;
    }

    if(local_labels != nullptr)
    {
        _children["local-labels"] = local_labels;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsps" || name == "local-labels" || name == "vrf-name")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsps()
    :
    lsp(this, {"lsp_name"})
{

    yang_name = "lsps"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::~Lsps()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp.len(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.len(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp>();
        ent_->parent = this;
        lsp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Lsp()
    :
    lsp_name{YType::str, "lsp-name"},
    lsp_name_xr{YType::str, "lsp-name-xr"}
        ,
    label(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label>())
{
    label->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::~Lsp()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_name.is_set
	|| lsp_name_xr.is_set
	|| (label !=  nullptr && label->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_name.yfilter)
	|| ydk::is_set(lsp_name_xr.yfilter)
	|| (label !=  nullptr && label->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    ADD_KEY_TOKEN(lsp_name, "lsp-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_name.is_set || is_set(lsp_name.yfilter)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (lsp_name_xr.is_set || is_set(lsp_name_xr.yfilter)) leaf_name_data.push_back(lsp_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
        lsp_name.value_namespace = name_space;
        lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-name-xr")
    {
        lsp_name_xr = value;
        lsp_name_xr.value_namespace = name_space;
        lsp_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-name")
    {
        lsp_name.yfilter = yfilter;
    }
    if(value_path == "lsp-name-xr")
    {
        lsp_name_xr.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "lsp-name" || name == "lsp-name-xr")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Label()
    :
    label{YType::uint32, "label"},
    label_mode{YType::enumeration, "label-mode"},
    label_status{YType::enumeration, "label-status"},
    vrf_name{YType::str, "vrf-name"},
    pathset_via_resolve{YType::boolean, "pathset-via-resolve"},
    backup_pathset_via_resolve{YType::boolean, "backup-pathset-via-resolve"},
    address_family{YType::enumeration, "address-family"}
        ,
    prefix(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix>())
    , pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh>())
    , backup_pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh>())
    , path_info(this, {})
    , backup_path_info(this, {})
{
    prefix->parent = this;
    pathset_resolve_nh->parent = this;
    backup_pathset_resolve_nh->parent = this;

    yang_name = "label"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::~Label()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_path_info.len(); index++)
    {
        if(backup_path_info[index]->has_data())
            return true;
    }
    return label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| vrf_name.is_set
	|| pathset_via_resolve.is_set
	|| backup_pathset_via_resolve.is_set
	|| address_family.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_data())
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_operation() const
{
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_path_info.len(); index++)
    {
        if(backup_path_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(label_status.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(pathset_via_resolve.yfilter)
	|| ydk::is_set(backup_pathset_via_resolve.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_operation())
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.yfilter)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (pathset_via_resolve.is_set || is_set(pathset_via_resolve.yfilter)) leaf_name_data.push_back(pathset_via_resolve.get_name_leafdata());
    if (backup_pathset_via_resolve.is_set || is_set(backup_pathset_via_resolve.yfilter)) leaf_name_data.push_back(backup_pathset_via_resolve.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "pathset-resolve-nh")
    {
        if(pathset_resolve_nh == nullptr)
        {
            pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh>();
        }
        return pathset_resolve_nh;
    }

    if(child_yang_name == "backup-pathset-resolve-nh")
    {
        if(backup_pathset_resolve_nh == nullptr)
        {
            backup_pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh>();
        }
        return backup_pathset_resolve_nh;
    }

    if(child_yang_name == "path-info")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo>();
        ent_->parent = this;
        path_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-path-info")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo>();
        ent_->parent = this;
        backup_path_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(pathset_resolve_nh != nullptr)
    {
        _children["pathset-resolve-nh"] = pathset_resolve_nh;
    }

    if(backup_pathset_resolve_nh != nullptr)
    {
        _children["backup-pathset-resolve-nh"] = backup_pathset_resolve_nh;
    }

    count_ = 0;
    for (auto ent_ : path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-status")
    {
        label_status = value;
        label_status.value_namespace = name_space;
        label_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve = value;
        pathset_via_resolve.value_namespace = name_space;
        pathset_via_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve = value;
        backup_pathset_via_resolve.value_namespace = name_space;
        backup_pathset_via_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "label-status")
    {
        label_status.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve.yfilter = yfilter;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pathset-resolve-nh" || name == "backup-pathset-resolve-nh" || name == "path-info" || name == "backup-path-info" || name == "label" || name == "label-mode" || name == "label-status" || name == "vrf-name" || name == "pathset-via-resolve" || name == "backup-pathset-via-resolve" || name == "address-family")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_>())
{
    prefix->parent = this;

    yang_name = "prefix"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::~Prefix()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::Prefix_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "prefix"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::PathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "pathset-resolve-nh"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::~PathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathset-resolve-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::BackupPathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "backup-pathset-resolve-nh"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::~BackupPathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pathset-resolve-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::PathInfo()
    :
    path_number{YType::uint32, "path-number"},
    type{YType::enumeration, "type"},
    path_role{YType::enumeration, "path-role"},
    path_id{YType::uint8, "path-id"},
    backup_id{YType::uint8, "backup-id"},
    status{YType::enumeration, "status"}
        ,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "path-info"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::~PathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_data() const
{
    if (is_presence_container) return true;
    return path_number.is_set
	|| type.is_set
	|| path_role.is_set
	|| path_id.is_set
	|| backup_id.is_set
	|| status.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_number.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_number.is_set || is_set(path_number.yfilter)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-number")
    {
        path_number = value;
        path_number.value_namespace = name_space;
        path_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-number")
    {
        path_number.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "path-number" || name == "type" || name == "path-role" || name == "path-id" || name == "backup-id" || name == "status")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Nexthop()
    :
    label{YType::uint32, "label"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"}
        ,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "label" || name == "interface-name" || name == "afi")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::BackupPathInfo()
    :
    path_number{YType::uint32, "path-number"},
    type{YType::enumeration, "type"},
    path_role{YType::enumeration, "path-role"},
    path_id{YType::uint8, "path-id"},
    backup_id{YType::uint8, "backup-id"},
    status{YType::enumeration, "status"}
        ,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "backup-path-info"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::~BackupPathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::has_data() const
{
    if (is_presence_container) return true;
    return path_number.is_set
	|| type.is_set
	|| path_role.is_set
	|| path_id.is_set
	|| backup_id.is_set
	|| status.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_number.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_number.is_set || is_set(path_number.yfilter)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-number")
    {
        path_number = value;
        path_number.value_namespace = name_space;
        path_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-number")
    {
        path_number.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "path-number" || name == "type" || name == "path-role" || name == "path-id" || name == "backup-id" || name == "status")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Nexthop()
    :
    label{YType::uint32, "label"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"}
        ,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "backup-path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "label" || name == "interface-name" || name == "afi")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabels()
    :
    local_label(this, {"local_label_id"})
{

    yang_name = "local-labels"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_label.len(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.len(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel>();
        ent_->parent = this;
        local_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::Vrfs::Vrf::LocalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"},
    label{YType::uint32, "label"},
    label_mode{YType::enumeration, "label-mode"},
    label_status{YType::enumeration, "label-status"},
    vrf_name{YType::str, "vrf-name"},
    pathset_via_resolve{YType::boolean, "pathset-via-resolve"},
    backup_pathset_via_resolve{YType::boolean, "backup-pathset-via-resolve"},
    address_family{YType::enumeration, "address-family"}
        ,
    prefix(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix>())
    , pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh>())
    , backup_pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh>())
    , path_info(this, {})
    , backup_path_info(this, {})
{
    prefix->parent = this;
    pathset_resolve_nh->parent = this;
    backup_pathset_resolve_nh->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_path_info.len(); index++)
    {
        if(backup_path_info[index]->has_data())
            return true;
    }
    return local_label_id.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| vrf_name.is_set
	|| pathset_via_resolve.is_set
	|| backup_pathset_via_resolve.is_set
	|| address_family.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_data())
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_operation() const
{
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_path_info.len(); index++)
    {
        if(backup_path_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_label_id.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(label_status.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(pathset_via_resolve.yfilter)
	|| ydk::is_set(backup_pathset_via_resolve.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_operation())
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label";
    ADD_KEY_TOKEN(local_label_id, "local-label-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.yfilter)) leaf_name_data.push_back(local_label_id.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.yfilter)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (pathset_via_resolve.is_set || is_set(pathset_via_resolve.yfilter)) leaf_name_data.push_back(pathset_via_resolve.get_name_leafdata());
    if (backup_pathset_via_resolve.is_set || is_set(backup_pathset_via_resolve.yfilter)) leaf_name_data.push_back(backup_pathset_via_resolve.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "pathset-resolve-nh")
    {
        if(pathset_resolve_nh == nullptr)
        {
            pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh>();
        }
        return pathset_resolve_nh;
    }

    if(child_yang_name == "backup-pathset-resolve-nh")
    {
        if(backup_pathset_resolve_nh == nullptr)
        {
            backup_pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh>();
        }
        return backup_pathset_resolve_nh;
    }

    if(child_yang_name == "path-info")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo>();
        ent_->parent = this;
        path_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-path-info")
    {
        auto ent_ = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo>();
        ent_->parent = this;
        backup_path_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(pathset_resolve_nh != nullptr)
    {
        _children["pathset-resolve-nh"] = pathset_resolve_nh;
    }

    if(backup_pathset_resolve_nh != nullptr)
    {
        _children["backup-pathset-resolve-nh"] = backup_pathset_resolve_nh;
    }

    count_ = 0;
    for (auto ent_ : path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
        local_label_id.value_namespace = name_space;
        local_label_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-status")
    {
        label_status = value;
        label_status.value_namespace = name_space;
        label_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve = value;
        pathset_via_resolve.value_namespace = name_space;
        pathset_via_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve = value;
        backup_pathset_via_resolve.value_namespace = name_space;
        backup_pathset_via_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label-id")
    {
        local_label_id.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "label-status")
    {
        label_status.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve.yfilter = yfilter;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pathset-resolve-nh" || name == "backup-pathset-resolve-nh" || name == "path-info" || name == "backup-path-info" || name == "local-label-id" || name == "label" || name == "label-mode" || name == "label-status" || name == "vrf-name" || name == "pathset-via-resolve" || name == "backup-pathset-via-resolve" || name == "address-family")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_>())
{
    prefix->parent = this;

    yang_name = "prefix"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::~Prefix()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::Prefix_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "prefix"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::PathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "pathset-resolve-nh"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::~PathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathset-resolve-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::BackupPathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "backup-pathset-resolve-nh"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::~BackupPathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pathset-resolve-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::PathInfo()
    :
    path_number{YType::uint32, "path-number"},
    type{YType::enumeration, "type"},
    path_role{YType::enumeration, "path-role"},
    path_id{YType::uint8, "path-id"},
    backup_id{YType::uint8, "backup-id"},
    status{YType::enumeration, "status"}
        ,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "path-info"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::~PathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_data() const
{
    if (is_presence_container) return true;
    return path_number.is_set
	|| type.is_set
	|| path_role.is_set
	|| path_id.is_set
	|| backup_id.is_set
	|| status.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_number.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_number.is_set || is_set(path_number.yfilter)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-number")
    {
        path_number = value;
        path_number.value_namespace = name_space;
        path_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-number")
    {
        path_number.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "path-number" || name == "type" || name == "path-role" || name == "path-id" || name == "backup-id" || name == "status")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Nexthop()
    :
    label{YType::uint32, "label"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"}
        ,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "label" || name == "interface-name" || name == "afi")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::BackupPathInfo()
    :
    path_number{YType::uint32, "path-number"},
    type{YType::enumeration, "type"},
    path_role{YType::enumeration, "path-role"},
    path_id{YType::uint8, "path-id"},
    backup_id{YType::uint8, "backup-id"},
    status{YType::enumeration, "status"}
        ,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "backup-path-info"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::~BackupPathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::has_data() const
{
    if (is_presence_container) return true;
    return path_number.is_set
	|| type.is_set
	|| path_role.is_set
	|| path_id.is_set
	|| backup_id.is_set
	|| status.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_number.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_number.is_set || is_set(path_number.yfilter)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-number")
    {
        path_number = value;
        path_number.value_namespace = name_space;
        path_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-number")
    {
        path_number.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "path-number" || name == "type" || name == "path-role" || name == "path-id" || name == "backup-id" || name == "status")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Nexthop()
    :
    label{YType::uint32, "label"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"}
        ,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "backup-path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "label" || name == "interface-name" || name == "afi")
        return true;
    return false;
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::Summary::Summary()
    :
    lsp_count{YType::uint32, "lsp-count"},
    label_count{YType::uint32, "label-count"},
    label_error_count{YType::uint32, "label-error-count"},
    label_discrepancy_count{YType::uint32, "label-discrepancy-count"},
    vrf_count{YType::uint32, "vrf-count"},
    active_vrf_count{YType::uint32, "active-vrf-count"},
    interface_count{YType::uint32, "interface-count"},
    interface_foward_reference_count{YType::uint32, "interface-foward-reference-count"},
    mpls_enabled_interface_count{YType::uint32, "mpls-enabled-interface-count"},
    ipv4_res_nh_count{YType::uint32, "ipv4-res-nh-count"},
    ipv6_res_nh_count{YType::uint32, "ipv6-res-nh-count"},
    lsd_connected{YType::boolean, "lsd-connected"},
    im_connected{YType::boolean, "im-connected"},
    rsi_connected{YType::boolean, "rsi-connected"},
    ribv4_connected{YType::boolean, "ribv4-connected"},
    ribv6_connected{YType::boolean, "ribv6-connected"}
{

    yang_name = "summary"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsStatic::Summary::~Summary()
{
}

bool MplsStatic::Summary::has_data() const
{
    if (is_presence_container) return true;
    return lsp_count.is_set
	|| label_count.is_set
	|| label_error_count.is_set
	|| label_discrepancy_count.is_set
	|| vrf_count.is_set
	|| active_vrf_count.is_set
	|| interface_count.is_set
	|| interface_foward_reference_count.is_set
	|| mpls_enabled_interface_count.is_set
	|| ipv4_res_nh_count.is_set
	|| ipv6_res_nh_count.is_set
	|| lsd_connected.is_set
	|| im_connected.is_set
	|| rsi_connected.is_set
	|| ribv4_connected.is_set
	|| ribv6_connected.is_set;
}

bool MplsStatic::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_count.yfilter)
	|| ydk::is_set(label_count.yfilter)
	|| ydk::is_set(label_error_count.yfilter)
	|| ydk::is_set(label_discrepancy_count.yfilter)
	|| ydk::is_set(vrf_count.yfilter)
	|| ydk::is_set(active_vrf_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(interface_foward_reference_count.yfilter)
	|| ydk::is_set(mpls_enabled_interface_count.yfilter)
	|| ydk::is_set(ipv4_res_nh_count.yfilter)
	|| ydk::is_set(ipv6_res_nh_count.yfilter)
	|| ydk::is_set(lsd_connected.yfilter)
	|| ydk::is_set(im_connected.yfilter)
	|| ydk::is_set(rsi_connected.yfilter)
	|| ydk::is_set(ribv4_connected.yfilter)
	|| ydk::is_set(ribv6_connected.yfilter);
}

std::string MplsStatic::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_count.is_set || is_set(lsp_count.yfilter)) leaf_name_data.push_back(lsp_count.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());
    if (label_error_count.is_set || is_set(label_error_count.yfilter)) leaf_name_data.push_back(label_error_count.get_name_leafdata());
    if (label_discrepancy_count.is_set || is_set(label_discrepancy_count.yfilter)) leaf_name_data.push_back(label_discrepancy_count.get_name_leafdata());
    if (vrf_count.is_set || is_set(vrf_count.yfilter)) leaf_name_data.push_back(vrf_count.get_name_leafdata());
    if (active_vrf_count.is_set || is_set(active_vrf_count.yfilter)) leaf_name_data.push_back(active_vrf_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (interface_foward_reference_count.is_set || is_set(interface_foward_reference_count.yfilter)) leaf_name_data.push_back(interface_foward_reference_count.get_name_leafdata());
    if (mpls_enabled_interface_count.is_set || is_set(mpls_enabled_interface_count.yfilter)) leaf_name_data.push_back(mpls_enabled_interface_count.get_name_leafdata());
    if (ipv4_res_nh_count.is_set || is_set(ipv4_res_nh_count.yfilter)) leaf_name_data.push_back(ipv4_res_nh_count.get_name_leafdata());
    if (ipv6_res_nh_count.is_set || is_set(ipv6_res_nh_count.yfilter)) leaf_name_data.push_back(ipv6_res_nh_count.get_name_leafdata());
    if (lsd_connected.is_set || is_set(lsd_connected.yfilter)) leaf_name_data.push_back(lsd_connected.get_name_leafdata());
    if (im_connected.is_set || is_set(im_connected.yfilter)) leaf_name_data.push_back(im_connected.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.yfilter)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (ribv4_connected.is_set || is_set(ribv4_connected.yfilter)) leaf_name_data.push_back(ribv4_connected.get_name_leafdata());
    if (ribv6_connected.is_set || is_set(ribv6_connected.yfilter)) leaf_name_data.push_back(ribv6_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-count")
    {
        lsp_count = value;
        lsp_count.value_namespace = name_space;
        lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error-count")
    {
        label_error_count = value;
        label_error_count.value_namespace = name_space;
        label_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-discrepancy-count")
    {
        label_discrepancy_count = value;
        label_discrepancy_count.value_namespace = name_space;
        label_discrepancy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-count")
    {
        vrf_count = value;
        vrf_count.value_namespace = name_space;
        vrf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-vrf-count")
    {
        active_vrf_count = value;
        active_vrf_count.value_namespace = name_space;
        active_vrf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-foward-reference-count")
    {
        interface_foward_reference_count = value;
        interface_foward_reference_count.value_namespace = name_space;
        interface_foward_reference_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-enabled-interface-count")
    {
        mpls_enabled_interface_count = value;
        mpls_enabled_interface_count.value_namespace = name_space;
        mpls_enabled_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-res-nh-count")
    {
        ipv4_res_nh_count = value;
        ipv4_res_nh_count.value_namespace = name_space;
        ipv4_res_nh_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-res-nh-count")
    {
        ipv6_res_nh_count = value;
        ipv6_res_nh_count.value_namespace = name_space;
        ipv6_res_nh_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected = value;
        lsd_connected.value_namespace = name_space;
        lsd_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "im-connected")
    {
        im_connected = value;
        im_connected.value_namespace = name_space;
        im_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
        rsi_connected.value_namespace = name_space;
        rsi_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribv4-connected")
    {
        ribv4_connected = value;
        ribv4_connected.value_namespace = name_space;
        ribv4_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribv6-connected")
    {
        ribv6_connected = value;
        ribv6_connected.value_namespace = name_space;
        ribv6_connected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-count")
    {
        lsp_count.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
    if(value_path == "label-error-count")
    {
        label_error_count.yfilter = yfilter;
    }
    if(value_path == "label-discrepancy-count")
    {
        label_discrepancy_count.yfilter = yfilter;
    }
    if(value_path == "vrf-count")
    {
        vrf_count.yfilter = yfilter;
    }
    if(value_path == "active-vrf-count")
    {
        active_vrf_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-foward-reference-count")
    {
        interface_foward_reference_count.yfilter = yfilter;
    }
    if(value_path == "mpls-enabled-interface-count")
    {
        mpls_enabled_interface_count.yfilter = yfilter;
    }
    if(value_path == "ipv4-res-nh-count")
    {
        ipv4_res_nh_count.yfilter = yfilter;
    }
    if(value_path == "ipv6-res-nh-count")
    {
        ipv6_res_nh_count.yfilter = yfilter;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected.yfilter = yfilter;
    }
    if(value_path == "im-connected")
    {
        im_connected.yfilter = yfilter;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected.yfilter = yfilter;
    }
    if(value_path == "ribv4-connected")
    {
        ribv4_connected.yfilter = yfilter;
    }
    if(value_path == "ribv6-connected")
    {
        ribv6_connected.yfilter = yfilter;
    }
}

bool MplsStatic::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-count" || name == "label-count" || name == "label-error-count" || name == "label-discrepancy-count" || name == "vrf-count" || name == "active-vrf-count" || name == "interface-count" || name == "interface-foward-reference-count" || name == "mpls-enabled-interface-count" || name == "ipv4-res-nh-count" || name == "ipv6-res-nh-count" || name == "lsd-connected" || name == "im-connected" || name == "rsi-connected" || name == "ribv4-connected" || name == "ribv6-connected")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabels()
    :
    local_label(this, {"local_label_id"})
{

    yang_name = "local-labels"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsStatic::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::LocalLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_label.len(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.len(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::LocalLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        auto ent_ = std::make_shared<MplsStatic::LocalLabels::LocalLabel>();
        ent_->parent = this;
        local_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsStatic::LocalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::LocalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::LocalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"},
    label{YType::uint32, "label"},
    label_mode{YType::enumeration, "label-mode"},
    label_status{YType::enumeration, "label-status"},
    vrf_name{YType::str, "vrf-name"},
    pathset_via_resolve{YType::boolean, "pathset-via-resolve"},
    backup_pathset_via_resolve{YType::boolean, "backup-pathset-via-resolve"},
    address_family{YType::enumeration, "address-family"}
        ,
    prefix(std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix>())
    , pathset_resolve_nh(std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh>())
    , backup_pathset_resolve_nh(std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh>())
    , path_info(this, {})
    , backup_path_info(this, {})
{
    prefix->parent = this;
    pathset_resolve_nh->parent = this;
    backup_pathset_resolve_nh->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsStatic::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::LocalLabels::LocalLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<backup_path_info.len(); index++)
    {
        if(backup_path_info[index]->has_data())
            return true;
    }
    return local_label_id.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| vrf_name.is_set
	|| pathset_via_resolve.is_set
	|| backup_pathset_via_resolve.is_set
	|| address_family.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_data())
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::has_operation() const
{
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<backup_path_info.len(); index++)
    {
        if(backup_path_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_label_id.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(label_mode.yfilter)
	|| ydk::is_set(label_status.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(pathset_via_resolve.yfilter)
	|| ydk::is_set(backup_pathset_via_resolve.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_operation())
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/local-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label";
    ADD_KEY_TOKEN(local_label_id, "local-label-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.yfilter)) leaf_name_data.push_back(local_label_id.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.yfilter)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.yfilter)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (pathset_via_resolve.is_set || is_set(pathset_via_resolve.yfilter)) leaf_name_data.push_back(pathset_via_resolve.get_name_leafdata());
    if (backup_pathset_via_resolve.is_set || is_set(backup_pathset_via_resolve.yfilter)) leaf_name_data.push_back(backup_pathset_via_resolve.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "pathset-resolve-nh")
    {
        if(pathset_resolve_nh == nullptr)
        {
            pathset_resolve_nh = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh>();
        }
        return pathset_resolve_nh;
    }

    if(child_yang_name == "backup-pathset-resolve-nh")
    {
        if(backup_pathset_resolve_nh == nullptr)
        {
            backup_pathset_resolve_nh = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh>();
        }
        return backup_pathset_resolve_nh;
    }

    if(child_yang_name == "path-info")
    {
        auto ent_ = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo>();
        ent_->parent = this;
        path_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "backup-path-info")
    {
        auto ent_ = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo>();
        ent_->parent = this;
        backup_path_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(pathset_resolve_nh != nullptr)
    {
        _children["pathset-resolve-nh"] = pathset_resolve_nh;
    }

    if(backup_pathset_resolve_nh != nullptr)
    {
        _children["backup-pathset-resolve-nh"] = backup_pathset_resolve_nh;
    }

    count_ = 0;
    for (auto ent_ : path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : backup_path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
        local_label_id.value_namespace = name_space;
        local_label_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
        label_mode.value_namespace = name_space;
        label_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-status")
    {
        label_status = value;
        label_status.value_namespace = name_space;
        label_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve = value;
        pathset_via_resolve.value_namespace = name_space;
        pathset_via_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve = value;
        backup_pathset_via_resolve.value_namespace = name_space;
        backup_pathset_via_resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label-id")
    {
        local_label_id.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "label-mode")
    {
        label_mode.yfilter = yfilter;
    }
    if(value_path == "label-status")
    {
        label_status.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve.yfilter = yfilter;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "pathset-resolve-nh" || name == "backup-pathset-resolve-nh" || name == "path-info" || name == "backup-path-info" || name == "local-label-id" || name == "label" || name == "label-mode" || name == "label-status" || name == "vrf-name" || name == "pathset-via-resolve" || name == "backup-pathset-via-resolve" || name == "address-family")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_>())
{
    prefix->parent = this;

    yang_name = "prefix"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::Prefix::~Prefix()
{
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::Prefix_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "prefix"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::PathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "pathset-resolve-nh"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::~PathsetResolveNh()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathset-resolve-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::BackupPathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "backup-pathset-resolve-nh"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::~BackupPathsetResolveNh()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pathset-resolve-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::PathInfo()
    :
    path_number{YType::uint32, "path-number"},
    type{YType::enumeration, "type"},
    path_role{YType::enumeration, "path-role"},
    path_id{YType::uint8, "path-id"},
    backup_id{YType::uint8, "backup-id"},
    status{YType::enumeration, "status"}
        ,
    nexthop(std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "path-info"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::~PathInfo()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_data() const
{
    if (is_presence_container) return true;
    return path_number.is_set
	|| type.is_set
	|| path_role.is_set
	|| path_id.is_set
	|| backup_id.is_set
	|| status.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_number.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::PathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_number.is_set || is_set(path_number.yfilter)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-number")
    {
        path_number = value;
        path_number.value_namespace = name_space;
        path_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-number")
    {
        path_number.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "path-number" || name == "type" || name == "path-role" || name == "path-id" || name == "backup-id" || name == "status")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Nexthop()
    :
    label{YType::uint32, "label"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"}
        ,
    address(std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "label" || name == "interface-name" || name == "afi")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::BackupPathInfo()
    :
    path_number{YType::uint32, "path-number"},
    type{YType::enumeration, "type"},
    path_role{YType::enumeration, "path-role"},
    path_id{YType::uint8, "path-id"},
    backup_id{YType::uint8, "backup-id"},
    status{YType::enumeration, "status"}
        ,
    nexthop(std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "backup-path-info"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::~BackupPathInfo()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::has_data() const
{
    if (is_presence_container) return true;
    return path_number.is_set
	|| type.is_set
	|| path_role.is_set
	|| path_id.is_set
	|| backup_id.is_set
	|| status.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_number.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(path_role.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_number.is_set || is_set(path_number.yfilter)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.yfilter)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_id.is_set || is_set(backup_id.yfilter)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-number")
    {
        path_number = value;
        path_number.value_namespace = name_space;
        path_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-role")
    {
        path_role = value;
        path_role.value_namespace = name_space;
        path_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-id")
    {
        backup_id = value;
        backup_id.value_namespace = name_space;
        backup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-number")
    {
        path_number.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "path-role")
    {
        path_role.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-id")
    {
        backup_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "path-number" || name == "type" || name == "path-role" || name == "path-id" || name == "backup-id" || name == "status")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Nexthop()
    :
    label{YType::uint32, "label"},
    interface_name{YType::str, "interface-name"},
    afi{YType::enumeration, "afi"}
        ,
    address(std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "backup-path-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| interface_name.is_set
	|| afi.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "label" || name == "interface-name" || name == "afi")
        return true;
    return false;
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "address"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

const Enum::YLeaf MgmtMplsStaticPathStatus::path_next_hop_none {0, "path-next-hop-none"};
const Enum::YLeaf MgmtMplsStaticPathStatus::path_next_hop_interface_down {1, "path-next-hop-interface-down"};
const Enum::YLeaf MgmtMplsStaticPathStatus::path_next_hop_valid {2, "path-next-hop-valid"};
const Enum::YLeaf MgmtMplsStaticPathStatus::resolve_failed {3, "resolve-failed"};
const Enum::YLeaf MgmtMplsStaticPathStatus::frr_backup {4, "frr-backup"};
const Enum::YLeaf MgmtMplsStaticPathStatus::backup {5, "backup"};

const Enum::YLeaf MgmtStaticLspAfi::not_applicable {0, "not-applicable"};
const Enum::YLeaf MgmtStaticLspAfi::ipv4 {1, "ipv4"};
const Enum::YLeaf MgmtStaticLspAfi::ipv6 {2, "ipv6"};

const Enum::YLeaf MplsStaticPathRole::primary {0, "primary"};
const Enum::YLeaf MplsStaticPathRole::backup {1, "backup"};
const Enum::YLeaf MplsStaticPathRole::primary_and_backup {2, "primary-and-backup"};

const Enum::YLeaf MgmtStaticPath::cross_connect_path {0, "cross-connect-path"};
const Enum::YLeaf MgmtStaticPath::pop_lookup_path {1, "pop-lookup-path"};

const Enum::YLeaf MgmtStaticAddr::not_applicable {0, "not-applicable"};
const Enum::YLeaf MgmtStaticAddr::ipv4 {1, "ipv4"};
const Enum::YLeaf MgmtStaticAddr::ipv6 {2, "ipv6"};

const Enum::YLeaf MgmtMplsStaticLabelStatus::not_created {0, "not-created"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::vrf_down {1, "vrf-down"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::rewrite_vrf_down {2, "rewrite-vrf-down"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::lsd_disconnected {3, "lsd-disconnected"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::lsd_failed {4, "lsd-failed"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::wait_for_lsd_reply {5, "wait-for-lsd-reply"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::label_created {6, "label-created"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::label_create_failed {7, "label-create-failed"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::label_rewrite_failed {8, "label-rewrite-failed"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::rewrite_next_hop_interface_down {9, "rewrite-next-hop-interface-down"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::label_discrepancy {10, "label-discrepancy"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::rewrite_discrepancy {11, "rewrite-discrepancy"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::rewrite_nexthop_unresolved {12, "rewrite-nexthop-unresolved"};
const Enum::YLeaf MgmtMplsStaticLabelStatus::label_status_unknown {13, "label-status-unknown"};

const Enum::YLeaf MgmtMplsStaticLabelMode::none {0, "none"};
const Enum::YLeaf MgmtMplsStaticLabelMode::per_prefix {1, "per-prefix"};
const Enum::YLeaf MgmtMplsStaticLabelMode::per_vrf {2, "per-vrf"};
const Enum::YLeaf MgmtMplsStaticLabelMode::cross_connect {3, "cross-connect"};


}
}

