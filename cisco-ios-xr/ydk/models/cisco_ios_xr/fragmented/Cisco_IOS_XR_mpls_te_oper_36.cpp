
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_67.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_69.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_70.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_37.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_38.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_68.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsPceStdby::Lsps::Lsp::Identifiers::Identifiers()
    :
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_data() const
{
    if (is_presence_container) return true;
    return is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set
	|| ext_tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id" || name == "ext-tunnel-id")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Autoroute::Autoroute()
    :
    is_used{YType::boolean, "is-used"},
    announced{YType::boolean, "announced"},
    metric_type{YType::enumeration, "metric-type"},
    metric{YType::uint32, "metric"}
        ,
    destination(this, {})
{

    yang_name = "autoroute"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Autoroute::~Autoroute()
{
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return is_used.is_set
	|| announced.is_set
	|| metric_type.is_set
	|| metric.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "is-used" || name == "announced" || name == "metric-type" || name == "metric")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Autoroute::Destination::Destination()
    :
    entry{YType::str, "entry"}
{

    yang_name = "destination"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Autoroute::Destination::~Destination()
{
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::Destination::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Autoroute::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Autoroute::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Autoroute::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Autoroute::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Autoroute::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Autoroute::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::BackupPath::BackupPath()
    :
    entry{YType::str, "entry"}
{

    yang_name = "backup-path"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::BackupPath::~BackupPath()
{
}

bool MplsPceStdby::Lsps::Lsp::BackupPath::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Lsp::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Paths()
    :
    bw{YType::uint32, "bw"},
    is_bw_used{YType::boolean, "is-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    applied_bw{YType::uint32, "applied-bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"}
        ,
    ero(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>())
    , lspa(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>())
    , rro(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>())
    , metric(this, {})
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::~Paths()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return bw.is_set
	|| is_bw_used.is_set
	|| reopt_bw.is_set
	|| is_reopt_bw_used.is_set
	|| applied_bw.is_set
	|| is_applied_bw_used.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Lsp::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>();
        }
        return rro;
    }

    if(child_yang_name == "metric")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Metric>();
        ent_->parent = this;
        metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ero != nullptr)
    {
        _children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        _children["lspa"] = lspa;
    }

    if(rro != nullptr)
    {
        _children["rro"] = rro;
    }

    count_ = 0;
    for (auto ent_ : metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "rro" || name == "metric" || name == "bw" || name == "is-bw-used" || name == "reopt-bw" || name == "is-reopt-bw-used" || name == "applied-bw" || name == "is-applied-bw-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Ero()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"}
        ,
    address(this, {})
    , subobject(this, {})
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::~Ero()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subobject")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject>();
        ent_->parent = this;
        subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subobject" || name == "is-used" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::Address()
    :
    entry{YType::str, "entry"}
{

    yang_name = "address"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::~Address()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    if (is_presence_container) return true;
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    is_used{YType::boolean, "is-used"},
    exlude_any{YType::uint32, "exlude-any"},
    include_any{YType::uint32, "include-any"},
    include_all{YType::uint32, "include-all"},
    setup{YType::uint8, "setup"},
    hold{YType::uint8, "hold"},
    lbit{YType::boolean, "lbit"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_data() const
{
    if (is_presence_container) return true;
    return is_used.is_set
	|| exlude_any.is_set
	|| include_any.is_set
	|| include_all.is_set
	|| setup.is_set
	|| hold.is_set
	|| lbit.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(setup.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(lbit.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "exlude-any" || name == "include-any" || name == "include-all" || name == "setup" || name == "hold" || name == "lbit")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Rro()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"}
        ,
    address(this, {})
    , subobject(this, {})
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::~Rro()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subobject")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject>();
        ent_->parent = this;
        subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subobject" || name == "is-used" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::Address()
    :
    entry{YType::str, "entry"}
{

    yang_name = "address"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::~Address()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    if (is_presence_container) return true;
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::Metric()
    :
    type{YType::uint8, "type"},
    cost{YType::uint32, "cost"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Lsps::Creator::Creator()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "creator"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Creator::has_data() const
{
    if (is_presence_container) return true;
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPceStdby::Lsps::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Creator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Delegated::Delegated()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "delegated"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Delegated::has_data() const
{
    if (is_presence_container) return true;
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPceStdby::Lsps::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Delegated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Identifiers::Identifiers()
    :
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Identifiers::has_data() const
{
    if (is_presence_container) return true;
    return is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set
	|| ext_tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter);
}

std::string MplsPceStdby::Lsps::Identifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id" || name == "ext-tunnel-id")
        return true;
    return false;
}

MplsPceStdby::Lsps::Autoroute::Autoroute()
    :
    is_used{YType::boolean, "is-used"},
    announced{YType::boolean, "announced"},
    metric_type{YType::enumeration, "metric-type"},
    metric{YType::uint32, "metric"}
        ,
    destination(this, {})
{

    yang_name = "autoroute"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Autoroute::~Autoroute()
{
}

bool MplsPceStdby::Lsps::Autoroute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return is_used.is_set
	|| announced.is_set
	|| metric_type.is_set
	|| metric.is_set;
}

bool MplsPceStdby::Lsps::Autoroute::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string MplsPceStdby::Lsps::Autoroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Autoroute::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "is-used" || name == "announced" || name == "metric-type" || name == "metric")
        return true;
    return false;
}

MplsPceStdby::Lsps::Autoroute::Destination::Destination()
    :
    entry{YType::str, "entry"}
{

    yang_name = "destination"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Autoroute::Destination::~Destination()
{
}

bool MplsPceStdby::Lsps::Autoroute::Destination::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Autoroute::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Autoroute::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/autoroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Autoroute::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Autoroute::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Autoroute::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Autoroute::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Autoroute::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Autoroute::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Autoroute::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::BackupPath::BackupPath()
    :
    entry{YType::str, "entry"}
{

    yang_name = "backup-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::BackupPath::~BackupPath()
{
}

bool MplsPceStdby::Lsps::BackupPath::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::BackupPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Paths()
    :
    bw{YType::uint32, "bw"},
    is_bw_used{YType::boolean, "is-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    applied_bw{YType::uint32, "applied-bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"}
        ,
    ero(std::make_shared<MplsPceStdby::Lsps::Paths::Ero>())
    , lspa(std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>())
    , rro(std::make_shared<MplsPceStdby::Lsps::Paths::Rro>())
    , metric(this, {})
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::~Paths()
{
}

bool MplsPceStdby::Lsps::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return bw.is_set
	|| is_bw_used.is_set
	|| reopt_bw.is_set
	|| is_reopt_bw_used.is_set
	|| applied_bw.is_set
	|| is_applied_bw_used.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPceStdby::Lsps::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Paths::Rro>();
        }
        return rro;
    }

    if(child_yang_name == "metric")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Paths::Metric>();
        ent_->parent = this;
        metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ero != nullptr)
    {
        _children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        _children["lspa"] = lspa;
    }

    if(rro != nullptr)
    {
        _children["rro"] = rro;
    }

    count_ = 0;
    for (auto ent_ : metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "rro" || name == "metric" || name == "bw" || name == "is-bw-used" || name == "reopt-bw" || name == "is-reopt-bw-used" || name == "applied-bw" || name == "is-applied-bw-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Ero()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"}
        ,
    address(this, {})
    , subobject(this, {})
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Ero::~Ero()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Paths::Ero::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subobject")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Paths::Ero::Subobject>();
        ent_->parent = this;
        subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subobject" || name == "is-used" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Address::Address()
    :
    entry{YType::str, "entry"}
{

    yang_name = "address"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Ero::Address::~Address()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::Address::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Ero::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Ero::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Paths::Ero::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Ero::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_data() const
{
    if (is_presence_container) return true;
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Lspa::Lspa()
    :
    is_used{YType::boolean, "is-used"},
    exlude_any{YType::uint32, "exlude-any"},
    include_any{YType::uint32, "include-any"},
    include_all{YType::uint32, "include-all"},
    setup{YType::uint8, "setup"},
    hold{YType::uint8, "hold"},
    lbit{YType::boolean, "lbit"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_data() const
{
    if (is_presence_container) return true;
    return is_used.is_set
	|| exlude_any.is_set
	|| include_any.is_set
	|| include_all.is_set
	|| setup.is_set
	|| hold.is_set
	|| lbit.is_set;
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(setup.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(lbit.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "exlude-any" || name == "include-any" || name == "include-all" || name == "setup" || name == "hold" || name == "lbit")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Rro()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"}
        ,
    address(this, {})
    , subobject(this, {})
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Rro::~Rro()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<subobject.len(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Paths::Rro::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subobject")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Lsps::Paths::Rro::Subobject>();
        ent_->parent = this;
        subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Lsps::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subobject" || name == "is-used" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Address::Address()
    :
    entry{YType::str, "entry"}
{

    yang_name = "address"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Rro::Address::~Address()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::Address::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Rro::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Rro::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Paths::Rro::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Rro::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_data() const
{
    if (is_presence_container) return true;
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Metric::Metric()
    :
    type{YType::uint8, "type"},
    cost{YType::uint32, "cost"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Paths::Metric::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Lsps::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Lsps::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Statistics::Statistics()
    :
    neighbors{YType::uint32, "neighbors"},
    tunnels{YType::uint32, "tunnels"},
    pce_req_total{YType::uint32, "pce-req-total"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"}
        ,
    igp_statistics(std::make_shared<MplsPceStdby::Statistics::IgpStatistics>())
    , maximum_in_queue_depth(this, {})
    , average_in_queue_depth(this, {})
{
    igp_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Statistics::~Statistics()
{
}

bool MplsPceStdby::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<maximum_in_queue_depth.len(); index++)
    {
        if(maximum_in_queue_depth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<average_in_queue_depth.len(); index++)
    {
        if(average_in_queue_depth[index]->has_data())
            return true;
    }
    return neighbors.is_set
	|| tunnels.is_set
	|| pce_req_total.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| max_file_descriptors.is_set
	|| current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPceStdby::Statistics::has_operation() const
{
    for (std::size_t index=0; index<maximum_in_queue_depth.len(); index++)
    {
        if(maximum_in_queue_depth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<average_in_queue_depth.len(); index++)
    {
        if(average_in_queue_depth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbors.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| ydk::is_set(pce_req_total.yfilter)
	|| ydk::is_set(pce_req_pending.yfilter)
	|| ydk::is_set(pce_req_timed_out.yfilter)
	|| ydk::is_set(max_file_descriptors.yfilter)
	|| ydk::is_set(current_file_descriptors.yfilter)
	|| ydk::is_set(current_pceq_length.yfilter)
	|| ydk::is_set(current_teq_length.yfilter)
	|| ydk::is_set(max_pceq_length.yfilter)
	|| ydk::is_set(max_teq_length.yfilter)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPceStdby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbors.is_set || is_set(neighbors.yfilter)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.yfilter)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.yfilter)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.yfilter)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.yfilter)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (current_file_descriptors.is_set || is_set(current_file_descriptors.yfilter)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.yfilter)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.yfilter)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.yfilter)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.yfilter)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics == nullptr)
        {
            igp_statistics = std::make_shared<MplsPceStdby::Statistics::IgpStatistics>();
        }
        return igp_statistics;
    }

    if(child_yang_name == "maximum-in-queue-depth")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Statistics::MaximumInQueueDepth>();
        ent_->parent = this;
        maximum_in_queue_depth.append(ent_);
        return ent_;
    }

    if(child_yang_name == "average-in-queue-depth")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Statistics::AverageInQueueDepth>();
        ent_->parent = this;
        average_in_queue_depth.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp_statistics != nullptr)
    {
        _children["igp-statistics"] = igp_statistics;
    }

    count_ = 0;
    for (auto ent_ : maximum_in_queue_depth.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : average_in_queue_depth.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbors")
    {
        neighbors = value;
        neighbors.value_namespace = name_space;
        neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
        pce_req_total.value_namespace = name_space;
        pce_req_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
        pce_req_pending.value_namespace = name_space;
        pce_req_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
        pce_req_timed_out.value_namespace = name_space;
        pce_req_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
        max_file_descriptors.value_namespace = name_space;
        max_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
        current_file_descriptors.value_namespace = name_space;
        current_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
        current_pceq_length.value_namespace = name_space;
        current_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
        current_teq_length.value_namespace = name_space;
        current_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
        max_pceq_length.value_namespace = name_space;
        max_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
        max_teq_length.value_namespace = name_space;
        max_teq_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbors")
    {
        neighbors.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total.yfilter = yfilter;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending.yfilter = yfilter;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out.yfilter = yfilter;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length.yfilter = yfilter;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length.yfilter = yfilter;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length.yfilter = yfilter;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-statistics" || name == "maximum-in-queue-depth" || name == "average-in-queue-depth" || name == "neighbors" || name == "tunnels" || name == "pce-req-total" || name == "pce-req-pending" || name == "pce-req-timed-out" || name == "max-file-descriptors" || name == "current-file-descriptors" || name == "current-pceq-length" || name == "current-teq-length" || name == "max-pceq-length" || name == "max-teq-length")
        return true;
    return false;
}

MplsPceStdby::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"}
{

    yang_name = "igp-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPceStdby::Statistics::IgpStatistics::has_data() const
{
    if (is_presence_container) return true;
    return abr_lookup_min.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_avg.is_set
	|| abr_lookup_timeout.is_set
	|| abr_lookup_complete.is_set;
}

bool MplsPceStdby::Statistics::IgpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_lookup_min.yfilter)
	|| ydk::is_set(abr_lookup_max.yfilter)
	|| ydk::is_set(abr_lookup_avg.yfilter)
	|| ydk::is_set(abr_lookup_timeout.yfilter)
	|| ydk::is_set(abr_lookup_complete.yfilter);
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::IgpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_min.is_set || is_set(abr_lookup_min.yfilter)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.yfilter)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.yfilter)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.yfilter)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.yfilter)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Statistics::IgpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Statistics::IgpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
        abr_lookup_min.value_namespace = name_space;
        abr_lookup_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
        abr_lookup_max.value_namespace = name_space;
        abr_lookup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
        abr_lookup_avg.value_namespace = name_space;
        abr_lookup_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
        abr_lookup_timeout.value_namespace = name_space;
        abr_lookup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
        abr_lookup_complete.value_namespace = name_space;
        abr_lookup_complete.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::IgpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::IgpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-lookup-min" || name == "abr-lookup-max" || name == "abr-lookup-avg" || name == "abr-lookup-timeout" || name == "abr-lookup-complete")
        return true;
    return false;
}

MplsPceStdby::Statistics::MaximumInQueueDepth::MaximumInQueueDepth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "maximum-in-queue-depth"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Statistics::MaximumInQueueDepth::~MaximumInQueueDepth()
{
}

bool MplsPceStdby::Statistics::MaximumInQueueDepth::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Statistics::MaximumInQueueDepth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Statistics::MaximumInQueueDepth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::MaximumInQueueDepth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-in-queue-depth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::MaximumInQueueDepth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Statistics::MaximumInQueueDepth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Statistics::MaximumInQueueDepth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Statistics::MaximumInQueueDepth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::MaximumInQueueDepth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::MaximumInQueueDepth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Statistics::AverageInQueueDepth::AverageInQueueDepth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "average-in-queue-depth"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Statistics::AverageInQueueDepth::~AverageInQueueDepth()
{
}

bool MplsPceStdby::Statistics::AverageInQueueDepth::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsPceStdby::Statistics::AverageInQueueDepth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsPceStdby::Statistics::AverageInQueueDepth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::AverageInQueueDepth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-in-queue-depth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::AverageInQueueDepth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Statistics::AverageInQueueDepth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Statistics::AverageInQueueDepth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Statistics::AverageInQueueDepth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::AverageInQueueDepth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::AverageInQueueDepth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsPceStdby::Peers::Peers()
    :
    peer(this, {"peer_address"})
{

    yang_name = "peers"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Peers::~Peers()
{
}

bool MplsPceStdby::Peers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPceStdby::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPceStdby::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Peers::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    error{YType::str, "error"},
    pce_state{YType::enumeration, "pce-state"},
    precedence{YType::uint32, "precedence"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"},
    capability_db_version{YType::boolean, "capability-db-version"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    candidate{YType::boolean, "candidate"},
    statically_configured{YType::boolean, "statically-configured"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    req_reply_min{YType::uint64, "req-reply-min"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    request_timeouts{YType::uint64, "request-timeouts"},
    local_sid{YType::uint8, "local-sid"},
    remote_sid{YType::uint8, "remote-sid"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    max_dead_interval{YType::uint8, "max-dead-interval"}
        ,
    last_tx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>())
    , last_rx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>())
    , ig_ps(this, {})
{
    last_tx_pce_err->parent = this;
    last_rx_pce_err->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Peers::Peer::~Peer()
{
}

bool MplsPceStdby::Peers::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| error.is_set
	|| pce_state.is_set
	|| precedence.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| triggered_sync_capability.is_set
	|| capability_db_version.is_set
	|| delta_sync_capability.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| candidate.is_set
	|| statically_configured.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_keepalive.is_set
	|| negotated_dead_time.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| req_reply_min.is_set
	|| req_reply_max.is_set
	|| req_reply_avg.is_set
	|| request_timeouts.is_set
	|| local_sid.is_set
	|| remote_sid.is_set
	|| min_keepalive_interval.is_set
	|| max_dead_interval.is_set
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data())
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data());
}

bool MplsPceStdby::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(pce_state.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(triggered_sync_capability.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(delta_sync_capability.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(statically_configured.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_keepalive.yfilter)
	|| ydk::is_set(negotated_dead_time.yfilter)
	|| ydk::is_set(pce_req_rx.yfilter)
	|| ydk::is_set(pce_req_tx.yfilter)
	|| ydk::is_set(pce_rep_rx.yfilter)
	|| ydk::is_set(pce_rep_tx.yfilter)
	|| ydk::is_set(pce_err_rx.yfilter)
	|| ydk::is_set(pce_err_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_rpt_rx.yfilter)
	|| ydk::is_set(pce_rpt_tx.yfilter)
	|| ydk::is_set(pce_upd_rx.yfilter)
	|| ydk::is_set(pce_upd_tx.yfilter)
	|| ydk::is_set(pce_init_rx.yfilter)
	|| ydk::is_set(pce_init_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(req_reply_min.yfilter)
	|| ydk::is_set(req_reply_max.yfilter)
	|| ydk::is_set(req_reply_avg.yfilter)
	|| ydk::is_set(request_timeouts.yfilter)
	|| ydk::is_set(local_sid.yfilter)
	|| ydk::is_set(remote_sid.yfilter)
	|| ydk::is_set(min_keepalive_interval.yfilter)
	|| ydk::is_set(max_dead_interval.yfilter)
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation())
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation());
}

std::string MplsPceStdby::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.yfilter)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.yfilter)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.yfilter)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.yfilter)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.yfilter)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.yfilter)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.yfilter)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.yfilter)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.yfilter)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.yfilter)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.yfilter)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.yfilter)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.yfilter)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.yfilter)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.yfilter)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.yfilter)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.yfilter)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.yfilter)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.yfilter)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.yfilter)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.yfilter)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.yfilter)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.yfilter)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.yfilter)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.yfilter)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.yfilter)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err == nullptr)
        {
            last_tx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>();
        }
        return last_tx_pce_err;
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err == nullptr)
        {
            last_rx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>();
        }
        return last_rx_pce_err;
    }

    if(child_yang_name == "ig-ps")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Peers::Peer::IgPs>();
        ent_->parent = this;
        ig_ps.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_tx_pce_err != nullptr)
    {
        _children["last-tx-pce-err"] = last_tx_pce_err;
    }

    if(last_rx_pce_err != nullptr)
    {
        _children["last-rx-pce-err"] = last_rx_pce_err;
    }

    count_ = 0;
    for (auto ent_ : ig_ps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
        pce_state.value_namespace = name_space;
        pce_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
        triggered_sync_capability.value_namespace = name_space;
        triggered_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
        delta_sync_capability.value_namespace = name_space;
        delta_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
        statically_configured.value_namespace = name_space;
        statically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
        negotiated_keepalive.value_namespace = name_space;
        negotiated_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
        negotated_dead_time.value_namespace = name_space;
        negotated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
        pce_req_rx.value_namespace = name_space;
        pce_req_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
        pce_req_tx.value_namespace = name_space;
        pce_req_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
        pce_rep_rx.value_namespace = name_space;
        pce_rep_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
        pce_rep_tx.value_namespace = name_space;
        pce_rep_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
        pce_err_rx.value_namespace = name_space;
        pce_err_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
        pce_err_tx.value_namespace = name_space;
        pce_err_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
        pce_rpt_rx.value_namespace = name_space;
        pce_rpt_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
        pce_rpt_tx.value_namespace = name_space;
        pce_rpt_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
        pce_upd_rx.value_namespace = name_space;
        pce_upd_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
        pce_upd_tx.value_namespace = name_space;
        pce_upd_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
        pce_init_rx.value_namespace = name_space;
        pce_init_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
        pce_init_tx.value_namespace = name_space;
        pce_init_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
        req_reply_min.value_namespace = name_space;
        req_reply_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
        req_reply_max.value_namespace = name_space;
        req_reply_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
        req_reply_avg.value_namespace = name_space;
        req_reply_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
        request_timeouts.value_namespace = name_space;
        request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
        local_sid.value_namespace = name_space;
        local_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
        remote_sid.value_namespace = name_space;
        remote_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
        min_keepalive_interval.value_namespace = name_space;
        min_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
        max_dead_interval.value_namespace = name_space;
        max_dead_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "pce-state")
    {
        pce_state.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "statically-configured")
    {
        statically_configured.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx.yfilter = yfilter;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx.yfilter = yfilter;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx.yfilter = yfilter;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx.yfilter = yfilter;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx.yfilter = yfilter;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min.yfilter = yfilter;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max.yfilter = yfilter;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg.yfilter = yfilter;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts.yfilter = yfilter;
    }
    if(value_path == "local-sid")
    {
        local_sid.yfilter = yfilter;
    }
    if(value_path == "remote-sid")
    {
        remote_sid.yfilter = yfilter;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-tx-pce-err" || name == "last-rx-pce-err" || name == "ig-ps" || name == "peer-address" || name == "error" || name == "pce-state" || name == "precedence" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "triggered-sync-capability" || name == "capability-db-version" || name == "delta-sync-capability" || name == "pcep-up-time" || name == "keepalives" || name == "candidate" || name == "statically-configured" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-keepalive" || name == "negotated-dead-time" || name == "pce-req-rx" || name == "pce-req-tx" || name == "pce-rep-rx" || name == "pce-rep-tx" || name == "pce-err-rx" || name == "pce-err-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-rpt-rx" || name == "pce-rpt-tx" || name == "pce-upd-rx" || name == "pce-upd-tx" || name == "pce-init-rx" || name == "pce-init-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "req-reply-min" || name == "req-reply-max" || name == "req-reply-avg" || name == "request-timeouts" || name == "local-sid" || name == "remote-sid" || name == "min-keepalive-interval" || name == "max-dead-interval")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    has_open_object{YType::boolean, "has-open-object"},
    openversion{YType::uint32, "openversion"},
    open_keepalive{YType::uint32, "open-keepalive"},
    open_dead_time{YType::uint32, "open-dead-time"},
    has_rp_object{YType::boolean, "has-rp-object"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-tx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_data() const
{
    if (is_presence_container) return true;
    return pce_err_type.is_set
	|| pce_err_value.is_set
	|| has_open_object.is_set
	|| openversion.is_set
	|| open_keepalive.is_set
	|| open_dead_time.is_set
	|| has_rp_object.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::LastTxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Peers::Peer::LastTxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-err-type" || name == "pce-err-value" || name == "has-open-object" || name == "openversion" || name == "open-keepalive" || name == "open-dead-time" || name == "has-rp-object" || name == "rp-request-id")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    has_open_object{YType::boolean, "has-open-object"},
    openversion{YType::uint32, "openversion"},
    open_keepalive{YType::uint32, "open-keepalive"},
    open_dead_time{YType::uint32, "open-dead-time"},
    has_rp_object{YType::boolean, "has-rp-object"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-rx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_data() const
{
    if (is_presence_container) return true;
    return pce_err_type.is_set
	|| pce_err_value.is_set
	|| has_open_object.is_set
	|| openversion.is_set
	|| open_keepalive.is_set
	|| open_dead_time.is_set
	|| has_rp_object.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::LastRxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Peers::Peer::LastRxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-err-type" || name == "pce-err-value" || name == "has-open-object" || name == "openversion" || name == "open-keepalive" || name == "open-dead-time" || name == "has-rp-object" || name == "rp-request-id")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::IgPs::IgPs()
    :
    igp_type{YType::enumeration, "igp-type"},
    igp_instance_id{YType::str, "igp-instance-id"}
{

    yang_name = "ig-ps"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsPceStdby::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPceStdby::Peers::Peer::IgPs::has_data() const
{
    if (is_presence_container) return true;
    return igp_type.is_set
	|| igp_instance_id.is_set;
}

bool MplsPceStdby::Peers::Peer::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance_id.is_set || is_set(igp_instance_id.yfilter)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Peers::Peer::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Peers::Peer::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
        igp_instance_id.value_namespace = name_space;
        igp_instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance-id")
    {
        igp_instance_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-type" || name == "igp-instance-id")
        return true;
    return false;
}

MplsPceStdby::Topology::Topology()
    :
    global(std::make_shared<MplsPceStdby::Topology::Global>())
{
    global->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Topology::~Topology()
{
}

bool MplsPceStdby::Topology::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool MplsPceStdby::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPceStdby::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsPceStdby::Topology::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void MplsPceStdby::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

MplsPceStdby::Topology::Global::Global()
    :
    nodes(this, {})
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Topology::Global::~Global()
{
}

bool MplsPceStdby::Topology::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodes.len(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPceStdby::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<nodes.len(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPceStdby::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Topology::Global::Nodes>();
        ent_->parent = this;
        nodes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsPceStdby::Topology::Global::Nodes::Nodes()
    :
    router_id{YType::str, "router-id"},
    igp_area_id{YType::uint32, "igp-area-id"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    pce_cost{YType::uint32, "pce-cost"},
    node_id{YType::str, "node-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"}
{

    yang_name = "nodes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPceStdby::Topology::Global::Nodes::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| igp_area_id.is_set
	|| igp_area_format.is_set
	|| pce_cost.is_set
	|| node_id.is_set
	|| is_pce_border_node.is_set;
}

bool MplsPceStdby::Topology::Global::Nodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(pce_cost.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(is_pce_border_node.yfilter);
}

std::string MplsPceStdby::Topology::Global::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::Global::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.yfilter)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.yfilter)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Topology::Global::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Topology::Global::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
        pce_cost.value_namespace = name_space;
        pce_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
        is_pce_border_node.value_namespace = name_space;
        is_pce_border_node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Topology::Global::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "pce-cost")
    {
        pce_cost.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node.yfilter = yfilter;
    }
}

bool MplsPceStdby::Topology::Global::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "igp-area-id" || name == "igp-area-format" || name == "pce-cost" || name == "node-id" || name == "is-pce-border-node")
        return true;
    return false;
}

MplsPceStdby::Tunnels::Tunnels()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    configured_pce_address{YType::str, "configured-pce-address"},
    sender_pce_address{YType::str, "sender-pce-address"},
    path_state{YType::enumeration, "path-state"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    admin_weight{YType::uint32, "admin-weight"},
    hop_count{YType::uint32, "hop-count"}
        ,
    tunnel(this, {"tunnel_name"})
{

    yang_name = "tunnels"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Tunnels::~Tunnels()
{
}

bool MplsPceStdby::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| is_curr_path_option_pce.is_set
	|| curr_path_option_index.is_set
	|| configured_pce_address.is_set
	|| sender_pce_address.is_set
	|| path_state.is_set
	|| tunnel_state.is_set
	|| admin_weight.is_set
	|| hop_count.is_set;
}

bool MplsPceStdby::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string MplsPceStdby::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<MplsPceStdby::Tunnels::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsPceStdby::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool MplsPceStdby::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "source-address" || name == "destination-address" || name == "is-curr-path-option-pce" || name == "curr-path-option-index" || name == "configured-pce-address" || name == "sender-pce-address" || name == "path-state" || name == "tunnel-state" || name == "admin-weight" || name == "hop-count")
        return true;
    return false;
}

MplsPceStdby::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    configured_pce_address{YType::str, "configured-pce-address"},
    sender_pce_address{YType::str, "sender-pce-address"},
    path_state{YType::enumeration, "path-state"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    admin_weight{YType::uint32, "admin-weight"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsPceStdby::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPceStdby::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| is_curr_path_option_pce.is_set
	|| curr_path_option_index.is_set
	|| configured_pce_address.is_set
	|| sender_pce_address.is_set
	|| path_state.is_set
	|| tunnel_state.is_set
	|| admin_weight.is_set
	|| hop_count.is_set;
}

bool MplsPceStdby::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string MplsPceStdby::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsPceStdby::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsPceStdby::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsPceStdby::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool MplsPceStdby::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "source-address" || name == "destination-address" || name == "is-curr-path-option-pce" || name == "curr-path-option-index" || name == "configured-pce-address" || name == "sender-pce-address" || name == "path-state" || name == "tunnel-state" || name == "admin-weight" || name == "hop-count")
        return true;
    return false;
}

MplsTp::MplsTp()
    :
    tp_links(std::make_shared<MplsTp::TpLinks>())
    , tp_tunnels(std::make_shared<MplsTp::TpTunnels>())
    , tp_midpoints(std::make_shared<MplsTp::TpMidpoints>())
    , tp_global_parameters(std::make_shared<MplsTp::TpGlobalParameters>())
{
    tp_links->parent = this;
    tp_tunnels->parent = this;
    tp_midpoints->parent = this;
    tp_global_parameters->parent = this;

    yang_name = "mpls-tp"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MplsTp::~MplsTp()
{
}

bool MplsTp::has_data() const
{
    if (is_presence_container) return true;
    return (tp_links !=  nullptr && tp_links->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data())
	|| (tp_global_parameters !=  nullptr && tp_global_parameters->has_data());
}

bool MplsTp::has_operation() const
{
    return is_set(yfilter)
	|| (tp_links !=  nullptr && tp_links->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation())
	|| (tp_global_parameters !=  nullptr && tp_global_parameters->has_operation());
}

std::string MplsTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-links")
    {
        if(tp_links == nullptr)
        {
            tp_links = std::make_shared<MplsTp::TpLinks>();
        }
        return tp_links;
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels == nullptr)
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels>();
        }
        return tp_tunnels;
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints == nullptr)
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints>();
        }
        return tp_midpoints;
    }

    if(child_yang_name == "tp-global-parameters")
    {
        if(tp_global_parameters == nullptr)
        {
            tp_global_parameters = std::make_shared<MplsTp::TpGlobalParameters>();
        }
        return tp_global_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tp_links != nullptr)
    {
        _children["tp-links"] = tp_links;
    }

    if(tp_tunnels != nullptr)
    {
        _children["tp-tunnels"] = tp_tunnels;
    }

    if(tp_midpoints != nullptr)
    {
        _children["tp-midpoints"] = tp_midpoints;
    }

    if(tp_global_parameters != nullptr)
    {
        _children["tp-global-parameters"] = tp_global_parameters;
    }

    return _children;
}

void MplsTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MplsTp::clone_ptr() const
{
    return std::make_shared<MplsTp>();
}

std::string MplsTp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsTp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-links" || name == "tp-tunnels" || name == "tp-midpoints" || name == "tp-global-parameters")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks()
    :
    tp_detail_links(std::make_shared<MplsTp::TpLinks::TpDetailLinks>())
    , tp_link_summary(std::make_shared<MplsTp::TpLinks::TpLinkSummary>())
    , tp_links(std::make_shared<MplsTp::TpLinks::TpLinks_>())
{
    tp_detail_links->parent = this;
    tp_link_summary->parent = this;
    tp_links->parent = this;

    yang_name = "tp-links"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpLinks::~TpLinks()
{
}

bool MplsTp::TpLinks::has_data() const
{
    if (is_presence_container) return true;
    return (tp_detail_links !=  nullptr && tp_detail_links->has_data())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_data())
	|| (tp_links !=  nullptr && tp_links->has_data());
}

bool MplsTp::TpLinks::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_links !=  nullptr && tp_detail_links->has_operation())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_operation())
	|| (tp_links !=  nullptr && tp_links->has_operation());
}

std::string MplsTp::TpLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-links")
    {
        if(tp_detail_links == nullptr)
        {
            tp_detail_links = std::make_shared<MplsTp::TpLinks::TpDetailLinks>();
        }
        return tp_detail_links;
    }

    if(child_yang_name == "tp-link-summary")
    {
        if(tp_link_summary == nullptr)
        {
            tp_link_summary = std::make_shared<MplsTp::TpLinks::TpLinkSummary>();
        }
        return tp_link_summary;
    }

    if(child_yang_name == "tp-links")
    {
        if(tp_links == nullptr)
        {
            tp_links = std::make_shared<MplsTp::TpLinks::TpLinks_>();
        }
        return tp_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tp_detail_links != nullptr)
    {
        _children["tp-detail-links"] = tp_detail_links;
    }

    if(tp_link_summary != nullptr)
    {
        _children["tp-link-summary"] = tp_link_summary;
    }

    if(tp_links != nullptr)
    {
        _children["tp-links"] = tp_links;
    }

    return _children;
}

void MplsTp::TpLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-links" || name == "tp-link-summary" || name == "tp-links")
        return true;
    return false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLinks()
    :
    tp_detail_link(this, {"tp_link_id"})
{

    yang_name = "tp-detail-links"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpLinks::TpDetailLinks::~TpDetailLinks()
{
}

bool MplsTp::TpLinks::TpDetailLinks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_detail_link.len(); index++)
    {
        if(tp_detail_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpLinks::TpDetailLinks::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_link.len(); index++)
    {
        if(tp_detail_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpLinks::TpDetailLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpDetailLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpDetailLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpLinks::TpDetailLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-link")
    {
        auto ent_ = std::make_shared<MplsTp::TpLinks::TpDetailLinks::TpDetailLink>();
        ent_->parent = this;
        tp_detail_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpLinks::TpDetailLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_detail_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTp::TpLinks::TpDetailLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::TpDetailLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::TpDetailLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-link")
        return true;
    return false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::TpDetailLink()
    :
    tp_link_id{YType::uint32, "tp-link-id"},
    link_id{YType::uint32, "link-id"},
    interface{YType::str, "interface"},
    next_hop_address{YType::str, "next-hop-address"},
    link_state{YType::enumeration, "link-state"},
    ls_ps{YType::uint32, "ls-ps"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    unsupported_linecard{YType::boolean, "unsupported-linecard"}
{

    yang_name = "tp-detail-link"; yang_parent_name = "tp-detail-links"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::~TpDetailLink()
{
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_data() const
{
    if (is_presence_container) return true;
    return tp_link_id.is_set
	|| link_id.is_set
	|| interface.is_set
	|| next_hop_address.is_set
	|| link_state.is_set
	|| ls_ps.is_set
	|| reserved_bandwidth.is_set
	|| available_bandwidth.is_set
	|| unsupported_linecard.is_set;
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_link_id.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(unsupported_linecard.yfilter);
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-detail-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-link";
    ADD_KEY_TOKEN(tp_link_id, "tp-link-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.yfilter)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (unsupported_linecard.is_set || is_set(unsupported_linecard.yfilter)) leaf_name_data.push_back(unsupported_linecard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
        tp_link_id.value_namespace = name_space;
        tp_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard = value;
        unsupported_linecard.value_namespace = name_space;
        unsupported_linecard.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link-id" || name == "link-id" || name == "interface" || name == "next-hop-address" || name == "link-state" || name == "ls-ps" || name == "reserved-bandwidth" || name == "available-bandwidth" || name == "unsupported-linecard")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinkSummary::TpLinkSummary()
    :
    links{YType::uint32, "links"}
{

    yang_name = "tp-link-summary"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpLinks::TpLinkSummary::~TpLinkSummary()
{
}

bool MplsTp::TpLinks::TpLinkSummary::has_data() const
{
    if (is_presence_container) return true;
    return links.is_set;
}

bool MplsTp::TpLinks::TpLinkSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string MplsTp::TpLinks::TpLinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpLinks::TpLinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpLinks::TpLinkSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpLinks::TpLinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpLinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpLinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks_::TpLinks_()
    :
    tp_link(this, {"tp_link_id"})
{

    yang_name = "tp-links"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpLinks::TpLinks_::~TpLinks_()
{
}

bool MplsTp::TpLinks::TpLinks_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_link.len(); index++)
    {
        if(tp_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpLinks::TpLinks_::has_operation() const
{
    for (std::size_t index=0; index<tp_link.len(); index++)
    {
        if(tp_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpLinks::TpLinks_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinks_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinks_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpLinks::TpLinks_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-link")
    {
        auto ent_ = std::make_shared<MplsTp::TpLinks::TpLinks_::TpLink>();
        ent_->parent = this;
        tp_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpLinks::TpLinks_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTp::TpLinks::TpLinks_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::TpLinks_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::TpLinks_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks_::TpLink::TpLink()
    :
    tp_link_id{YType::uint32, "tp-link-id"},
    link_id{YType::uint32, "link-id"},
    interface{YType::str, "interface"},
    next_hop_address{YType::str, "next-hop-address"},
    link_state{YType::enumeration, "link-state"},
    available_bandwidth{YType::uint64, "available-bandwidth"}
{

    yang_name = "tp-link"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpLinks::TpLinks_::TpLink::~TpLink()
{
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_data() const
{
    if (is_presence_container) return true;
    return tp_link_id.is_set
	|| link_id.is_set
	|| interface.is_set
	|| next_hop_address.is_set
	|| link_state.is_set
	|| available_bandwidth.is_set;
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_link_id.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter);
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link";
    ADD_KEY_TOKEN(tp_link_id, "tp-link-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinks_::TpLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.yfilter)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpLinks::TpLinks_::TpLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpLinks::TpLinks_::TpLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
        tp_link_id.value_namespace = name_space;
        tp_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link-id" || name == "link-id" || name == "interface" || name == "next-hop-address" || name == "link-state" || name == "available-bandwidth")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels()
    :
    tp_tunnel_summary(std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>())
    , tp_detail_tunnels(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>())
    , tp_tunnels(std::make_shared<MplsTp::TpTunnels::TpTunnels_>())
{
    tp_tunnel_summary->parent = this;
    tp_detail_tunnels->parent = this;
    tp_tunnels->parent = this;

    yang_name = "tp-tunnels"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpTunnels::~TpTunnels()
{
}

bool MplsTp::TpTunnels::has_data() const
{
    if (is_presence_container) return true;
    return (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_data())
	|| (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data());
}

bool MplsTp::TpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_operation())
	|| (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation());
}

std::string MplsTp::TpTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-tunnel-summary")
    {
        if(tp_tunnel_summary == nullptr)
        {
            tp_tunnel_summary = std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>();
        }
        return tp_tunnel_summary;
    }

    if(child_yang_name == "tp-detail-tunnels")
    {
        if(tp_detail_tunnels == nullptr)
        {
            tp_detail_tunnels = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>();
        }
        return tp_detail_tunnels;
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels == nullptr)
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels::TpTunnels_>();
        }
        return tp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tp_tunnel_summary != nullptr)
    {
        _children["tp-tunnel-summary"] = tp_tunnel_summary;
    }

    if(tp_detail_tunnels != nullptr)
    {
        _children["tp-detail-tunnels"] = tp_detail_tunnels;
    }

    if(tp_tunnels != nullptr)
    {
        _children["tp-tunnels"] = tp_tunnels;
    }

    return _children;
}

void MplsTp::TpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-tunnel-summary" || name == "tp-detail-tunnels" || name == "tp-tunnels")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnelSummary::TpTunnelSummary()
    :
    up_working_ls_ps{YType::uint32, "up-working-ls-ps"},
    active_working_ls_ps{YType::uint32, "active-working-ls-ps"},
    down_working_ls_ps{YType::uint32, "down-working-ls-ps"},
    locked_working_ls_ps{YType::uint32, "locked-working-ls-ps"},
    up_protect_ls_ps{YType::uint32, "up-protect-ls-ps"},
    active_protect_ls_ps{YType::uint32, "active-protect-ls-ps"},
    down_protect_ls_ps{YType::uint32, "down-protect-ls-ps"},
    locked_protect_ls_ps{YType::uint32, "locked-protect-ls-ps"},
    up_tunnels{YType::uint32, "up-tunnels"},
    down_tunnels{YType::uint32, "down-tunnels"},
    admin_down_tunnels{YType::uint32, "admin-down-tunnels"},
    complete_fec_working_ls_ps{YType::uint32, "complete-fec-working-ls-ps"},
    complete_fec_protect_ls_ps{YType::uint32, "complete-fec-protect-ls-ps"},
    bfd_session_working_ls_ps{YType::uint32, "bfd-session-working-ls-ps"},
    bfd_session_protect_ls_ps{YType::uint32, "bfd-session-protect-ls-ps"}
{

    yang_name = "tp-tunnel-summary"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpTunnels::TpTunnelSummary::~TpTunnelSummary()
{
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_data() const
{
    if (is_presence_container) return true;
    return up_working_ls_ps.is_set
	|| active_working_ls_ps.is_set
	|| down_working_ls_ps.is_set
	|| locked_working_ls_ps.is_set
	|| up_protect_ls_ps.is_set
	|| active_protect_ls_ps.is_set
	|| down_protect_ls_ps.is_set
	|| locked_protect_ls_ps.is_set
	|| up_tunnels.is_set
	|| down_tunnels.is_set
	|| admin_down_tunnels.is_set
	|| complete_fec_working_ls_ps.is_set
	|| complete_fec_protect_ls_ps.is_set
	|| bfd_session_working_ls_ps.is_set
	|| bfd_session_protect_ls_ps.is_set;
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_working_ls_ps.yfilter)
	|| ydk::is_set(active_working_ls_ps.yfilter)
	|| ydk::is_set(down_working_ls_ps.yfilter)
	|| ydk::is_set(locked_working_ls_ps.yfilter)
	|| ydk::is_set(up_protect_ls_ps.yfilter)
	|| ydk::is_set(active_protect_ls_ps.yfilter)
	|| ydk::is_set(down_protect_ls_ps.yfilter)
	|| ydk::is_set(locked_protect_ls_ps.yfilter)
	|| ydk::is_set(up_tunnels.yfilter)
	|| ydk::is_set(down_tunnels.yfilter)
	|| ydk::is_set(admin_down_tunnels.yfilter)
	|| ydk::is_set(complete_fec_working_ls_ps.yfilter)
	|| ydk::is_set(complete_fec_protect_ls_ps.yfilter)
	|| ydk::is_set(bfd_session_working_ls_ps.yfilter)
	|| ydk::is_set(bfd_session_protect_ls_ps.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_working_ls_ps.is_set || is_set(up_working_ls_ps.yfilter)) leaf_name_data.push_back(up_working_ls_ps.get_name_leafdata());
    if (active_working_ls_ps.is_set || is_set(active_working_ls_ps.yfilter)) leaf_name_data.push_back(active_working_ls_ps.get_name_leafdata());
    if (down_working_ls_ps.is_set || is_set(down_working_ls_ps.yfilter)) leaf_name_data.push_back(down_working_ls_ps.get_name_leafdata());
    if (locked_working_ls_ps.is_set || is_set(locked_working_ls_ps.yfilter)) leaf_name_data.push_back(locked_working_ls_ps.get_name_leafdata());
    if (up_protect_ls_ps.is_set || is_set(up_protect_ls_ps.yfilter)) leaf_name_data.push_back(up_protect_ls_ps.get_name_leafdata());
    if (active_protect_ls_ps.is_set || is_set(active_protect_ls_ps.yfilter)) leaf_name_data.push_back(active_protect_ls_ps.get_name_leafdata());
    if (down_protect_ls_ps.is_set || is_set(down_protect_ls_ps.yfilter)) leaf_name_data.push_back(down_protect_ls_ps.get_name_leafdata());
    if (locked_protect_ls_ps.is_set || is_set(locked_protect_ls_ps.yfilter)) leaf_name_data.push_back(locked_protect_ls_ps.get_name_leafdata());
    if (up_tunnels.is_set || is_set(up_tunnels.yfilter)) leaf_name_data.push_back(up_tunnels.get_name_leafdata());
    if (down_tunnels.is_set || is_set(down_tunnels.yfilter)) leaf_name_data.push_back(down_tunnels.get_name_leafdata());
    if (admin_down_tunnels.is_set || is_set(admin_down_tunnels.yfilter)) leaf_name_data.push_back(admin_down_tunnels.get_name_leafdata());
    if (complete_fec_working_ls_ps.is_set || is_set(complete_fec_working_ls_ps.yfilter)) leaf_name_data.push_back(complete_fec_working_ls_ps.get_name_leafdata());
    if (complete_fec_protect_ls_ps.is_set || is_set(complete_fec_protect_ls_ps.yfilter)) leaf_name_data.push_back(complete_fec_protect_ls_ps.get_name_leafdata());
    if (bfd_session_working_ls_ps.is_set || is_set(bfd_session_working_ls_ps.yfilter)) leaf_name_data.push_back(bfd_session_working_ls_ps.get_name_leafdata());
    if (bfd_session_protect_ls_ps.is_set || is_set(bfd_session_protect_ls_ps.yfilter)) leaf_name_data.push_back(bfd_session_protect_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpTunnelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpTunnelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpTunnelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps = value;
        up_working_ls_ps.value_namespace = name_space;
        up_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps = value;
        active_working_ls_ps.value_namespace = name_space;
        active_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps = value;
        down_working_ls_ps.value_namespace = name_space;
        down_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps = value;
        locked_working_ls_ps.value_namespace = name_space;
        locked_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps = value;
        up_protect_ls_ps.value_namespace = name_space;
        up_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps = value;
        active_protect_ls_ps.value_namespace = name_space;
        active_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps = value;
        down_protect_ls_ps.value_namespace = name_space;
        down_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps = value;
        locked_protect_ls_ps.value_namespace = name_space;
        locked_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels = value;
        up_tunnels.value_namespace = name_space;
        up_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels = value;
        down_tunnels.value_namespace = name_space;
        down_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels = value;
        admin_down_tunnels.value_namespace = name_space;
        admin_down_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps = value;
        complete_fec_working_ls_ps.value_namespace = name_space;
        complete_fec_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps = value;
        complete_fec_protect_ls_ps.value_namespace = name_space;
        complete_fec_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps = value;
        bfd_session_working_ls_ps.value_namespace = name_space;
        bfd_session_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps = value;
        bfd_session_protect_ls_ps.value_namespace = name_space;
        bfd_session_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels.yfilter = yfilter;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels.yfilter = yfilter;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-working-ls-ps" || name == "active-working-ls-ps" || name == "down-working-ls-ps" || name == "locked-working-ls-ps" || name == "up-protect-ls-ps" || name == "active-protect-ls-ps" || name == "down-protect-ls-ps" || name == "locked-protect-ls-ps" || name == "up-tunnels" || name == "down-tunnels" || name == "admin-down-tunnels" || name == "complete-fec-working-ls-ps" || name == "complete-fec-protect-ls-ps" || name == "bfd-session-working-ls-ps" || name == "bfd-session-protect-ls-ps")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnels()
    :
    tp_detail_tunnel(this, {"tp_tunnel_name"})
{

    yang_name = "tp-detail-tunnels"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpTunnels::TpDetailTunnels::~TpDetailTunnels()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_detail_tunnel.len(); index++)
    {
        if(tp_detail_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_tunnel.len(); index++)
    {
        if(tp_detail_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-tunnel")
    {
        auto ent_ = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel>();
        ent_->parent = this;
        tp_detail_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_detail_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::TpDetailTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-tunnel")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::TpDetailTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    req_bandwidth{YType::uint32, "req-bandwidth"},
    oam_interval{YType::uint32, "oam-interval"},
    bfd_interval_active{YType::uint32, "bfd-interval-active"},
    bfd_interval_active_in_micro_sec{YType::boolean, "bfd-interval-active-in-micro-sec"},
    bfd_multiplier_active{YType::uint32, "bfd-multiplier-active"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    tunnel_up_time{YType::uint32, "tunnel-up-time"},
    switchover_trig{YType::enumeration, "switchover-trig"},
    switch_over_time{YType::uint32, "switch-over-time"}
        ,
    tunnel(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>())
    , working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>())
    , protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>())
    , oam_protection_triggers(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>())
{
    tunnel->parent = this;
    working_lsp->parent = this;
    protect_lsp->parent = this;
    oam_protection_triggers->parent = this;

    yang_name = "tp-detail-tunnel"; yang_parent_name = "tp-detail-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::~TpDetailTunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tp_tunnel_name.is_set
	|| req_bandwidth.is_set
	|| oam_interval.is_set
	|| bfd_interval_active.is_set
	|| bfd_interval_active_in_micro_sec.is_set
	|| bfd_multiplier_active.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier_standby.is_set
	|| tunnel_up_time.is_set
	|| switchover_trig.is_set
	|| switch_over_time.is_set
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_tunnel_name.yfilter)
	|| ydk::is_set(req_bandwidth.yfilter)
	|| ydk::is_set(oam_interval.yfilter)
	|| ydk::is_set(bfd_interval_active.yfilter)
	|| ydk::is_set(bfd_interval_active_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier_active.yfilter)
	|| ydk::is_set(bfd_interval_standby.yfilter)
	|| ydk::is_set(bfd_interval_standby_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier_standby.yfilter)
	|| ydk::is_set(tunnel_up_time.yfilter)
	|| ydk::is_set(switchover_trig.yfilter)
	|| ydk::is_set(switch_over_time.yfilter)
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-detail-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnel";
    ADD_KEY_TOKEN(tp_tunnel_name, "tp-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.yfilter)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (req_bandwidth.is_set || is_set(req_bandwidth.yfilter)) leaf_name_data.push_back(req_bandwidth.get_name_leafdata());
    if (oam_interval.is_set || is_set(oam_interval.yfilter)) leaf_name_data.push_back(oam_interval.get_name_leafdata());
    if (bfd_interval_active.is_set || is_set(bfd_interval_active.yfilter)) leaf_name_data.push_back(bfd_interval_active.get_name_leafdata());
    if (bfd_interval_active_in_micro_sec.is_set || is_set(bfd_interval_active_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_active_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier_active.is_set || is_set(bfd_multiplier_active.yfilter)) leaf_name_data.push_back(bfd_multiplier_active.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.yfilter)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.yfilter)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (tunnel_up_time.is_set || is_set(tunnel_up_time.yfilter)) leaf_name_data.push_back(tunnel_up_time.get_name_leafdata());
    if (switchover_trig.is_set || is_set(switchover_trig.yfilter)) leaf_name_data.push_back(switchover_trig.get_name_leafdata());
    if (switch_over_time.is_set || is_set(switch_over_time.yfilter)) leaf_name_data.push_back(switch_over_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers == nullptr)
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>();
        }
        return oam_protection_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(working_lsp != nullptr)
    {
        _children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        _children["protect-lsp"] = protect_lsp;
    }

    if(oam_protection_triggers != nullptr)
    {
        _children["oam-protection-triggers"] = oam_protection_triggers;
    }

    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
        tp_tunnel_name.value_namespace = name_space;
        tp_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth = value;
        req_bandwidth.value_namespace = name_space;
        req_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-interval")
    {
        oam_interval = value;
        oam_interval.value_namespace = name_space;
        oam_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active = value;
        bfd_interval_active.value_namespace = name_space;
        bfd_interval_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec = value;
        bfd_interval_active_in_micro_sec.value_namespace = name_space;
        bfd_interval_active_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active = value;
        bfd_multiplier_active.value_namespace = name_space;
        bfd_multiplier_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
        bfd_interval_standby.value_namespace = name_space;
        bfd_interval_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
        bfd_interval_standby_in_micro_sec.value_namespace = name_space;
        bfd_interval_standby_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
        bfd_multiplier_standby.value_namespace = name_space;
        bfd_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time = value;
        tunnel_up_time.value_namespace = name_space;
        tunnel_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig = value;
        switchover_trig.value_namespace = name_space;
        switchover_trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time = value;
        switch_over_time.value_namespace = name_space;
        switch_over_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oam-interval")
    {
        oam_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby.yfilter = yfilter;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time.yfilter = yfilter;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig.yfilter = yfilter;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "working-lsp" || name == "protect-lsp" || name == "oam-protection-triggers" || name == "tp-tunnel-name" || name == "req-bandwidth" || name == "oam-interval" || name == "bfd-interval-active" || name == "bfd-interval-active-in-micro-sec" || name == "bfd-multiplier-active" || name == "bfd-interval-standby" || name == "bfd-interval-standby-in-micro-sec" || name == "bfd-multiplier-standby" || name == "tunnel-up-time" || name == "switchover-trig" || name == "switch-over-time")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    active_lsp{YType::enumeration, "active-lsp"}
        ,
    working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>())
    , protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>())
{
    working_lsp->parent = this;
    protect_lsp->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::~Tunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| source_tunnel_id.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| remote_tunnel_id.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| active_lsp.is_set
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(working_lsp != nullptr)
    {
        _children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        _children["protect-lsp"] = protect_lsp;
    }

    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working-lsp" || name == "protect-lsp" || name == "tunnel-name" || name == "source-tunnel-id" || name == "source-node-id" || name == "source-global-id" || name == "destination-node-id" || name == "destination-global-id" || name == "remote-tunnel-id" || name == "admin-status" || name == "operation-status" || name == "active-lsp")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::WorkingLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "working-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::ProtectLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "protect-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::WorkingLsp()
    :
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    tp_out_label{YType::uint32, "tp-out-label"},
    link_id{YType::uint32, "link-id"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    in_label{YType::uint32, "in-label"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
        ,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>())
{
    brief_information->parent = this;

    yang_name = "working-lsp"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_data() const
{
    if (is_presence_container) return true;
    return oam_refresh_interval.is_set
	|| tp_out_label.is_set
	|| link_id.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| in_label.is_set
	|| reserved_bandwidth.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(tp_out_label.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(out_next_hop.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.yfilter)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.yfilter)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        if(brief_information == nullptr)
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>();
        }
        return brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_information != nullptr)
    {
        _children["brief-information"] = brief_information;
    }

    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
        tp_out_label.value_namespace = name_space;
        tp_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
        out_next_hop.value_namespace = name_space;
        out_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information" || name == "oam-refresh-interval" || name == "tp-out-label" || name == "link-id" || name == "out-interface-name" || name == "out-next-hop" || name == "in-label" || name == "reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::BriefInformation()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "brief-information"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::ProtectLsp()
    :
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    tp_out_label{YType::uint32, "tp-out-label"},
    link_id{YType::uint32, "link-id"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    in_label{YType::uint32, "in-label"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
        ,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>())
{
    brief_information->parent = this;

    yang_name = "protect-lsp"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_data() const
{
    if (is_presence_container) return true;
    return oam_refresh_interval.is_set
	|| tp_out_label.is_set
	|| link_id.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| in_label.is_set
	|| reserved_bandwidth.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(tp_out_label.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(out_next_hop.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.yfilter)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.yfilter)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        if(brief_information == nullptr)
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>();
        }
        return brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_information != nullptr)
    {
        _children["brief-information"] = brief_information;
    }

    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
        tp_out_label.value_namespace = name_space;
        tp_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
        out_next_hop.value_namespace = name_space;
        out_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information" || name == "oam-refresh-interval" || name == "tp-out-label" || name == "link-id" || name == "out-interface-name" || name == "out-next-hop" || name == "in-label" || name == "reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::BriefInformation()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "brief-information"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::~OamProtectionTriggers()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_data() const
{
    if (is_presence_container) return true;
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "ldi" || name == "lkr")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnels_()
    :
    tp_tunnel(this, {"tp_tunnel_name"})
{

    yang_name = "tp-tunnels"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpTunnels::TpTunnels_::~TpTunnels_()
{
}

bool MplsTp::TpTunnels::TpTunnels_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_tunnel.len(); index++)
    {
        if(tp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpTunnels::TpTunnels_::has_operation() const
{
    for (std::size_t index=0; index<tp_tunnel.len(); index++)
    {
        if(tp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnels_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpTunnels_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-tunnel")
    {
        auto ent_ = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel>();
        ent_->parent = this;
        tp_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpTunnels_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTp::TpTunnels::TpTunnels_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::TpTunnels_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::TpTunnels_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-tunnel")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::TpTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    tunnel_name{YType::str, "tunnel-name"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    active_lsp{YType::enumeration, "active-lsp"}
        ,
    working_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>())
    , protect_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>())
{
    working_lsp->parent = this;
    protect_lsp->parent = this;

    yang_name = "tp-tunnel"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::~TpTunnel()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tp_tunnel_name.is_set
	|| tunnel_name.is_set
	|| source_tunnel_id.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| remote_tunnel_id.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| active_lsp.is_set
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel";
    ADD_KEY_TOKEN(tp_tunnel_name, "tp-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.yfilter)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(working_lsp != nullptr)
    {
        _children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        _children["protect-lsp"] = protect_lsp;
    }

    return _children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
        tp_tunnel_name.value_namespace = name_space;
        tp_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working-lsp" || name == "protect-lsp" || name == "tp-tunnel-name" || name == "tunnel-name" || name == "source-tunnel-id" || name == "source-node-id" || name == "source-global-id" || name == "destination-node-id" || name == "destination-global-id" || name == "remote-tunnel-id" || name == "admin-status" || name == "operation-status" || name == "active-lsp")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::WorkingLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "working-lsp"; yang_parent_name = "tp-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::ProtectLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "protect-lsp"; yang_parent_name = "tp-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints()
    :
    tp_detail_midpoints(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>())
    , tp_midpoint_summary(std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>())
    , tp_midpoints(std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>())
{
    tp_detail_midpoints->parent = this;
    tp_midpoint_summary->parent = this;
    tp_midpoints->parent = this;

    yang_name = "tp-midpoints"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpMidpoints::~TpMidpoints()
{
}

bool MplsTp::TpMidpoints::has_data() const
{
    if (is_presence_container) return true;
    return (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_data())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data());
}

bool MplsTp::TpMidpoints::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_operation())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation());
}

std::string MplsTp::TpMidpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-midpoints")
    {
        if(tp_detail_midpoints == nullptr)
        {
            tp_detail_midpoints = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>();
        }
        return tp_detail_midpoints;
    }

    if(child_yang_name == "tp-midpoint-summary")
    {
        if(tp_midpoint_summary == nullptr)
        {
            tp_midpoint_summary = std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>();
        }
        return tp_midpoint_summary;
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints == nullptr)
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>();
        }
        return tp_midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tp_detail_midpoints != nullptr)
    {
        _children["tp-detail-midpoints"] = tp_detail_midpoints;
    }

    if(tp_midpoint_summary != nullptr)
    {
        _children["tp-midpoint-summary"] = tp_midpoint_summary;
    }

    if(tp_midpoints != nullptr)
    {
        _children["tp-midpoints"] = tp_midpoints;
    }

    return _children;
}

void MplsTp::TpMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-midpoints" || name == "tp-midpoint-summary" || name == "tp-midpoints")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoints()
    :
    tp_detail_midpoint(this, {"tp_midpoint_name"})
{

    yang_name = "tp-detail-midpoints"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpMidpoints::TpDetailMidpoints::~TpDetailMidpoints()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_detail_midpoint.len(); index++)
    {
        if(tp_detail_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_midpoint.len(); index++)
    {
        if(tp_detail_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpDetailMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-midpoint")
    {
        auto ent_ = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint>();
        ent_->parent = this;
        tp_detail_midpoint.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_detail_midpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-midpoint")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::TpDetailMidpoint()
    :
    tp_midpoint_name{YType::str, "tp-midpoint-name"},
    forward_lsp_reserved_bandwidth{YType::uint32, "forward-lsp-reserved-bandwidth"},
    reverse_lsp_reserved_bandwidth{YType::uint32, "reverse-lsp-reserved-bandwidth"}
        ,
    brief_lsp_information(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>())
    , forward_lsp(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>())
    , reverse_lsp(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>())
{
    brief_lsp_information->parent = this;
    forward_lsp->parent = this;
    reverse_lsp->parent = this;

    yang_name = "tp-detail-midpoint"; yang_parent_name = "tp-detail-midpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::~TpDetailMidpoint()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_data() const
{
    if (is_presence_container) return true;
    return tp_midpoint_name.is_set
	|| forward_lsp_reserved_bandwidth.is_set
	|| reverse_lsp_reserved_bandwidth.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (forward_lsp !=  nullptr && forward_lsp->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_midpoint_name.yfilter)
	|| ydk::is_set(forward_lsp_reserved_bandwidth.yfilter)
	|| ydk::is_set(reverse_lsp_reserved_bandwidth.yfilter)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-detail-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoint";
    ADD_KEY_TOKEN(tp_midpoint_name, "tp-midpoint-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.yfilter)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (forward_lsp_reserved_bandwidth.is_set || is_set(forward_lsp_reserved_bandwidth.yfilter)) leaf_name_data.push_back(forward_lsp_reserved_bandwidth.get_name_leafdata());
    if (reverse_lsp_reserved_bandwidth.is_set || is_set(reverse_lsp_reserved_bandwidth.yfilter)) leaf_name_data.push_back(reverse_lsp_reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information == nullptr)
        {
            brief_lsp_information = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>();
        }
        return brief_lsp_information;
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp == nullptr)
        {
            forward_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>();
        }
        return forward_lsp;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>();
        }
        return reverse_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_lsp_information != nullptr)
    {
        _children["brief-lsp-information"] = brief_lsp_information;
    }

    if(forward_lsp != nullptr)
    {
        _children["forward-lsp"] = forward_lsp;
    }

    if(reverse_lsp != nullptr)
    {
        _children["reverse-lsp"] = reverse_lsp;
    }

    return _children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
        tp_midpoint_name.value_namespace = name_space;
        tp_midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth = value;
        forward_lsp_reserved_bandwidth.value_namespace = name_space;
        forward_lsp_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth = value;
        reverse_lsp_reserved_bandwidth.value_namespace = name_space;
        reverse_lsp_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "forward-lsp" || name == "reverse-lsp" || name == "tp-midpoint-name" || name == "forward-lsp-reserved-bandwidth" || name == "reverse-lsp-reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::BriefLspInformation()
    :
    midpoint_name{YType::str, "midpoint-name"},
    tunnel_name{YType::str, "tunnel-name"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"}
{

    yang_name = "brief-lsp-information"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::~BriefLspInformation()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_data() const
{
    if (is_presence_container) return true;
    return midpoint_name.is_set
	|| tunnel_name.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| source_tunnel_id.is_set
	|| lsp_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| reverse_lsp_state.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_tunnel_id.yfilter)
	|| ydk::is_set(forward_lsp_state.yfilter)
	|| ydk::is_set(reverse_lsp_state.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.yfilter)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.yfilter)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.yfilter)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
        destination_tunnel_id.value_namespace = name_space;
        destination_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
        forward_lsp_state.value_namespace = name_space;
        forward_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
        reverse_lsp_state.value_namespace = name_space;
        reverse_lsp_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "midpoint-name" || name == "tunnel-name" || name == "source-node-id" || name == "source-global-id" || name == "source-tunnel-id" || name == "lsp-id" || name == "destination-node-id" || name == "destination-global-id" || name == "destination-tunnel-id" || name == "forward-lsp-state" || name == "reverse-lsp-state")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::ForwardLsp()
    :
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    outgoing_interface{YType::str, "outgoing-interface"},
    next_hop_address{YType::str, "next-hop-address"},
    in_label{YType::uint32, "in-label"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "forward-lsp"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_data() const
{
    if (is_presence_container) return true;
    return out_label.is_set
	|| out_link.is_set
	|| oam_refresh_interval.is_set
	|| outgoing_interface.is_set
	|| next_hop_address.is_set
	|| in_label.is_set
	|| bandwidth.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "out-link" || name == "oam-refresh-interval" || name == "outgoing-interface" || name == "next-hop-address" || name == "in-label" || name == "bandwidth")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::ReverseLsp()
    :
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    outgoing_interface{YType::str, "outgoing-interface"},
    next_hop_address{YType::str, "next-hop-address"},
    in_label{YType::uint32, "in-label"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "reverse-lsp"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_data() const
{
    if (is_presence_container) return true;
    return out_label.is_set
	|| out_link.is_set
	|| oam_refresh_interval.is_set
	|| outgoing_interface.is_set
	|| next_hop_address.is_set
	|| in_label.is_set
	|| bandwidth.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "out-link" || name == "oam-refresh-interval" || name == "outgoing-interface" || name == "next-hop-address" || name == "in-label" || name == "bandwidth")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpointSummary::TpMidpointSummary()
    :
    mid_points{YType::uint32, "mid-points"},
    up_forward_ls_ps{YType::uint32, "up-forward-ls-ps"},
    down_forward_ls_ps{YType::uint32, "down-forward-ls-ps"},
    up_reverse_ls_ps{YType::uint32, "up-reverse-ls-ps"},
    down_reverse_ls_ps{YType::uint32, "down-reverse-ls-ps"}
{

    yang_name = "tp-midpoint-summary"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpMidpoints::TpMidpointSummary::~TpMidpointSummary()
{
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_data() const
{
    if (is_presence_container) return true;
    return mid_points.is_set
	|| up_forward_ls_ps.is_set
	|| down_forward_ls_ps.is_set
	|| up_reverse_ls_ps.is_set
	|| down_reverse_ls_ps.is_set;
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mid_points.yfilter)
	|| ydk::is_set(up_forward_ls_ps.yfilter)
	|| ydk::is_set(down_forward_ls_ps.yfilter)
	|| ydk::is_set(up_reverse_ls_ps.yfilter)
	|| ydk::is_set(down_reverse_ls_ps.yfilter);
}

std::string MplsTp::TpMidpoints::TpMidpointSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoint-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpMidpointSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mid_points.is_set || is_set(mid_points.yfilter)) leaf_name_data.push_back(mid_points.get_name_leafdata());
    if (up_forward_ls_ps.is_set || is_set(up_forward_ls_ps.yfilter)) leaf_name_data.push_back(up_forward_ls_ps.get_name_leafdata());
    if (down_forward_ls_ps.is_set || is_set(down_forward_ls_ps.yfilter)) leaf_name_data.push_back(down_forward_ls_ps.get_name_leafdata());
    if (up_reverse_ls_ps.is_set || is_set(up_reverse_ls_ps.yfilter)) leaf_name_data.push_back(up_reverse_ls_ps.get_name_leafdata());
    if (down_reverse_ls_ps.is_set || is_set(down_reverse_ls_ps.yfilter)) leaf_name_data.push_back(down_reverse_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpMidpoints::TpMidpointSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mid-points")
    {
        mid_points = value;
        mid_points.value_namespace = name_space;
        mid_points.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-forward-ls-ps")
    {
        up_forward_ls_ps = value;
        up_forward_ls_ps.value_namespace = name_space;
        up_forward_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-forward-ls-ps")
    {
        down_forward_ls_ps = value;
        down_forward_ls_ps.value_namespace = name_space;
        down_forward_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-reverse-ls-ps")
    {
        up_reverse_ls_ps = value;
        up_reverse_ls_ps.value_namespace = name_space;
        up_reverse_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-reverse-ls-ps")
    {
        down_reverse_ls_ps = value;
        down_reverse_ls_ps.value_namespace = name_space;
        down_reverse_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpMidpointSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mid-points")
    {
        mid_points.yfilter = yfilter;
    }
    if(value_path == "up-forward-ls-ps")
    {
        up_forward_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-forward-ls-ps")
    {
        down_forward_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-reverse-ls-ps")
    {
        up_reverse_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-reverse-ls-ps")
    {
        down_reverse_ls_ps.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mid-points" || name == "up-forward-ls-ps" || name == "down-forward-ls-ps" || name == "up-reverse-ls-ps" || name == "down-reverse-ls-ps")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoints_()
    :
    tp_midpoint(this, {"tp_midpoint_name"})
{

    yang_name = "tp-midpoints"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpMidpoints::TpMidpoints_::~TpMidpoints_()
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_midpoint.len(); index++)
    {
        if(tp_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_operation() const
{
    for (std::size_t index=0; index<tp_midpoint.len(); index++)
    {
        if(tp_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpMidpoints::TpMidpoints_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpMidpoints_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpMidpoints_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpMidpoints_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-midpoint")
    {
        auto ent_ = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint>();
        ent_->parent = this;
        tp_midpoint.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpMidpoints_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_midpoint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTp::TpMidpoints::TpMidpoints_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::TpMidpoints_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-midpoint")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::TpMidpoint()
    :
    tp_midpoint_name{YType::str, "tp-midpoint-name"},
    midpoint_name{YType::str, "midpoint-name"},
    tunnel_name{YType::str, "tunnel-name"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"}
{

    yang_name = "tp-midpoint"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::~TpMidpoint()
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_data() const
{
    if (is_presence_container) return true;
    return tp_midpoint_name.is_set
	|| midpoint_name.is_set
	|| tunnel_name.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| source_tunnel_id.is_set
	|| lsp_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| reverse_lsp_state.is_set;
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_midpoint_name.yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_tunnel_id.yfilter)
	|| ydk::is_set(forward_lsp_state.yfilter)
	|| ydk::is_set(reverse_lsp_state.yfilter);
}

std::string MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoint";
    ADD_KEY_TOKEN(tp_midpoint_name, "tp-midpoint-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.yfilter)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.yfilter)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.yfilter)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.yfilter)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
        tp_midpoint_name.value_namespace = name_space;
        tp_midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
        destination_tunnel_id.value_namespace = name_space;
        destination_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
        forward_lsp_state.value_namespace = name_space;
        forward_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
        reverse_lsp_state.value_namespace = name_space;
        reverse_lsp_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name.yfilter = yfilter;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-midpoint-name" || name == "midpoint-name" || name == "tunnel-name" || name == "source-node-id" || name == "source-global-id" || name == "source-tunnel-id" || name == "lsp-id" || name == "destination-node-id" || name == "destination-global-id" || name == "destination-tunnel-id" || name == "forward-lsp-state" || name == "reverse-lsp-state")
        return true;
    return false;
}

MplsTp::TpGlobalParameters::TpGlobalParameters()
    :
    node_id{YType::str, "node-id"},
    global_id{YType::uint32, "global-id"},
    oam_refresh{YType::uint32, "oam-refresh"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_interval_in_micro_sec{YType::boolean, "bfd-interval-in-micro-sec"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    wait_to_restore_interval{YType::uint32, "wait-to-restore-interval"},
    alarm_suppression{YType::boolean, "alarm-suppression"},
    soak_time{YType::uint32, "soak-time"}
        ,
    oam_protection_triggers(std::make_shared<MplsTp::TpGlobalParameters::OamProtectionTriggers>())
{
    oam_protection_triggers->parent = this;

    yang_name = "tp-global-parameters"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpGlobalParameters::~TpGlobalParameters()
{
}

bool MplsTp::TpGlobalParameters::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| global_id.is_set
	|| oam_refresh.is_set
	|| bfd_interval.is_set
	|| bfd_interval_in_micro_sec.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier.is_set
	|| bfd_multiplier_standby.is_set
	|| wait_to_restore_interval.is_set
	|| alarm_suppression.is_set
	|| soak_time.is_set
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data());
}

bool MplsTp::TpGlobalParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(oam_refresh.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_interval_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_interval_standby.yfilter)
	|| ydk::is_set(bfd_interval_standby_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_multiplier_standby.yfilter)
	|| ydk::is_set(wait_to_restore_interval.yfilter)
	|| ydk::is_set(alarm_suppression.yfilter)
	|| ydk::is_set(soak_time.yfilter)
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation());
}

std::string MplsTp::TpGlobalParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpGlobalParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-global-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpGlobalParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (oam_refresh.is_set || is_set(oam_refresh.yfilter)) leaf_name_data.push_back(oam_refresh.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_interval_in_micro_sec.is_set || is_set(bfd_interval_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_in_micro_sec.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.yfilter)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.yfilter)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (wait_to_restore_interval.is_set || is_set(wait_to_restore_interval.yfilter)) leaf_name_data.push_back(wait_to_restore_interval.get_name_leafdata());
    if (alarm_suppression.is_set || is_set(alarm_suppression.yfilter)) leaf_name_data.push_back(alarm_suppression.get_name_leafdata());
    if (soak_time.is_set || is_set(soak_time.yfilter)) leaf_name_data.push_back(soak_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpGlobalParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers == nullptr)
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpGlobalParameters::OamProtectionTriggers>();
        }
        return oam_protection_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpGlobalParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oam_protection_triggers != nullptr)
    {
        _children["oam-protection-triggers"] = oam_protection_triggers;
    }

    return _children;
}

void MplsTp::TpGlobalParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh")
    {
        oam_refresh = value;
        oam_refresh.value_namespace = name_space;
        oam_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-in-micro-sec")
    {
        bfd_interval_in_micro_sec = value;
        bfd_interval_in_micro_sec.value_namespace = name_space;
        bfd_interval_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
        bfd_interval_standby.value_namespace = name_space;
        bfd_interval_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
        bfd_interval_standby_in_micro_sec.value_namespace = name_space;
        bfd_interval_standby_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
        bfd_multiplier_standby.value_namespace = name_space;
        bfd_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval = value;
        wait_to_restore_interval.value_namespace = name_space;
        wait_to_restore_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-suppression")
    {
        alarm_suppression = value;
        alarm_suppression.value_namespace = name_space;
        alarm_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soak-time")
    {
        soak_time = value;
        soak_time.value_namespace = name_space;
        soak_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpGlobalParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "oam-refresh")
    {
        oam_refresh.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-in-micro-sec")
    {
        bfd_interval_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval.yfilter = yfilter;
    }
    if(value_path == "alarm-suppression")
    {
        alarm_suppression.yfilter = yfilter;
    }
    if(value_path == "soak-time")
    {
        soak_time.yfilter = yfilter;
    }
}

bool MplsTp::TpGlobalParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-protection-triggers" || name == "node-id" || name == "global-id" || name == "oam-refresh" || name == "bfd-interval" || name == "bfd-interval-in-micro-sec" || name == "bfd-interval-standby" || name == "bfd-interval-standby-in-micro-sec" || name == "bfd-multiplier" || name == "bfd-multiplier-standby" || name == "wait-to-restore-interval" || name == "alarm-suppression" || name == "soak-time")
        return true;
    return false;
}

MplsTp::TpGlobalParameters::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-global-parameters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTp::TpGlobalParameters::OamProtectionTriggers::~OamProtectionTriggers()
{
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_data() const
{
    if (is_presence_container) return true;
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string MplsTp::TpGlobalParameters::OamProtectionTriggers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-global-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpGlobalParameters::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpGlobalParameters::OamProtectionTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTp::TpGlobalParameters::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTp::TpGlobalParameters::OamProtectionTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTp::TpGlobalParameters::OamProtectionTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpGlobalParameters::OamProtectionTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "ldi" || name == "lkr")
        return true;
    return false;
}

MplsTeStandby::MplsTeStandby()
    :
    hardware_out_of_resources(std::make_shared<MplsTeStandby::HardwareOutOfResources>())
    , p2p_p2mp_tunnel(std::make_shared<MplsTeStandby::P2pP2mpTunnel>())
    , topology_nodes(std::make_shared<MplsTeStandby::TopologyNodes>())
    , announce_tunnels_info(std::make_shared<MplsTeStandby::AnnounceTunnelsInfo>())
    , collaborator_timers(std::make_shared<MplsTeStandby::CollaboratorTimers>())
    , auto_tunnel(std::make_shared<MplsTeStandby::AutoTunnel>())
    , soft_preemption(std::make_shared<MplsTeStandby::SoftPreemption>())
    , forwarding_adjacency_destinations(std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations>())
    , igp_areas(std::make_shared<MplsTeStandby::IgpAreas>())
    , wrap_protection(std::make_shared<MplsTeStandby::WrapProtection>())
    , topology(std::make_shared<MplsTeStandby::Topology>())
    , signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters>())
    , diff_serv_te_classes(std::make_shared<MplsTeStandby::DiffServTeClasses>())
    , issu(std::make_shared<MplsTeStandby::Issu>())
    , auto_route_destination_entries(std::make_shared<MplsTeStandby::AutoRouteDestinationEntries>())
    , fast_reroute(std::make_shared<MplsTeStandby::FastReroute>())
    , attribute_sets(std::make_shared<MplsTeStandby::AttributeSets>())
    , igp_area_briefs(std::make_shared<MplsTeStandby::IgpAreaBriefs>())
    , bandwidth_accounting_counters(std::make_shared<MplsTeStandby::BandwidthAccountingCounters>())
    , tunnels(std::make_shared<MplsTeStandby::Tunnels>())
    , maximum_tunnels(std::make_shared<MplsTeStandby::MaximumTunnels>())
    , path_protection(std::make_shared<MplsTeStandby::PathProtection>())
    , fib_next_hop_label_routes(std::make_shared<MplsTeStandby::FibNextHopLabelRoutes>())
    , p2mp(std::make_shared<MplsTeStandby::P2mp>())
    , lsp_out_of_resources(std::make_shared<MplsTeStandby::LspOutOfResources>())
    , bfd(std::make_shared<MplsTeStandby::Bfd>())
    , nsr(std::make_shared<MplsTeStandby::Nsr>())
    , auto_tunnel_services(std::make_shared<MplsTeStandby::AutoTunnelServices>())
    , affinity_map(std::make_shared<MplsTeStandby::AffinityMap>())
    , topology_briefs(std::make_shared<MplsTeStandby::TopologyBriefs>())
{
    hardware_out_of_resources->parent = this;
    p2p_p2mp_tunnel->parent = this;
    topology_nodes->parent = this;
    announce_tunnels_info->parent = this;
    collaborator_timers->parent = this;
    auto_tunnel->parent = this;
    soft_preemption->parent = this;
    forwarding_adjacency_destinations->parent = this;
    igp_areas->parent = this;
    wrap_protection->parent = this;
    topology->parent = this;
    signalling_counters->parent = this;
    diff_serv_te_classes->parent = this;
    issu->parent = this;
    auto_route_destination_entries->parent = this;
    fast_reroute->parent = this;
    attribute_sets->parent = this;
    igp_area_briefs->parent = this;
    bandwidth_accounting_counters->parent = this;
    tunnels->parent = this;
    maximum_tunnels->parent = this;
    path_protection->parent = this;
    fib_next_hop_label_routes->parent = this;
    p2mp->parent = this;
    lsp_out_of_resources->parent = this;
    bfd->parent = this;
    nsr->parent = this;
    auto_tunnel_services->parent = this;
    affinity_map->parent = this;
    topology_briefs->parent = this;

    yang_name = "mpls-te-standby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MplsTeStandby::~MplsTeStandby()
{
}

bool MplsTeStandby::has_data() const
{
    if (is_presence_container) return true;
    return (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_data())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_data())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_data())
	|| (igp_areas !=  nullptr && igp_areas->has_data())
	|| (wrap_protection !=  nullptr && wrap_protection->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (signalling_counters !=  nullptr && signalling_counters->has_data())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (auto_route_destination_entries !=  nullptr && auto_route_destination_entries->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (attribute_sets !=  nullptr && attribute_sets->has_data())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_data())
	|| (bandwidth_accounting_counters !=  nullptr && bandwidth_accounting_counters->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_data())
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_data())
	|| (affinity_map !=  nullptr && affinity_map->has_data())
	|| (topology_briefs !=  nullptr && topology_briefs->has_data());
}

bool MplsTeStandby::has_operation() const
{
    return is_set(yfilter)
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_operation())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_operation())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_operation())
	|| (igp_areas !=  nullptr && igp_areas->has_operation())
	|| (wrap_protection !=  nullptr && wrap_protection->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (signalling_counters !=  nullptr && signalling_counters->has_operation())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (auto_route_destination_entries !=  nullptr && auto_route_destination_entries->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (attribute_sets !=  nullptr && attribute_sets->has_operation())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_operation())
	|| (bandwidth_accounting_counters !=  nullptr && bandwidth_accounting_counters->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_operation())
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_operation())
	|| (affinity_map !=  nullptr && affinity_map->has_operation())
	|| (topology_briefs !=  nullptr && topology_briefs->has_operation());
}

std::string MplsTeStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-out-of-resources")
    {
        if(hardware_out_of_resources == nullptr)
        {
            hardware_out_of_resources = std::make_shared<MplsTeStandby::HardwareOutOfResources>();
        }
        return hardware_out_of_resources;
    }

    if(child_yang_name == "p2p-p2mp-tunnel")
    {
        if(p2p_p2mp_tunnel == nullptr)
        {
            p2p_p2mp_tunnel = std::make_shared<MplsTeStandby::P2pP2mpTunnel>();
        }
        return p2p_p2mp_tunnel;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<MplsTeStandby::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "announce-tunnels-info")
    {
        if(announce_tunnels_info == nullptr)
        {
            announce_tunnels_info = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo>();
        }
        return announce_tunnels_info;
    }

    if(child_yang_name == "collaborator-timers")
    {
        if(collaborator_timers == nullptr)
        {
            collaborator_timers = std::make_shared<MplsTeStandby::CollaboratorTimers>();
        }
        return collaborator_timers;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<MplsTeStandby::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTeStandby::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "forwarding-adjacency-destinations")
    {
        if(forwarding_adjacency_destinations == nullptr)
        {
            forwarding_adjacency_destinations = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations>();
        }
        return forwarding_adjacency_destinations;
    }

    if(child_yang_name == "igp-areas")
    {
        if(igp_areas == nullptr)
        {
            igp_areas = std::make_shared<MplsTeStandby::IgpAreas>();
        }
        return igp_areas;
    }

    if(child_yang_name == "wrap-protection")
    {
        if(wrap_protection == nullptr)
        {
            wrap_protection = std::make_shared<MplsTeStandby::WrapProtection>();
        }
        return wrap_protection;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<MplsTeStandby::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "signalling-counters")
    {
        if(signalling_counters == nullptr)
        {
            signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters>();
        }
        return signalling_counters;
    }

    if(child_yang_name == "diff-serv-te-classes")
    {
        if(diff_serv_te_classes == nullptr)
        {
            diff_serv_te_classes = std::make_shared<MplsTeStandby::DiffServTeClasses>();
        }
        return diff_serv_te_classes;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTeStandby::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "auto-route-destination-entries")
    {
        if(auto_route_destination_entries == nullptr)
        {
            auto_route_destination_entries = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries>();
        }
        return auto_route_destination_entries;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTeStandby::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "attribute-sets")
    {
        if(attribute_sets == nullptr)
        {
            attribute_sets = std::make_shared<MplsTeStandby::AttributeSets>();
        }
        return attribute_sets;
    }

    if(child_yang_name == "igp-area-briefs")
    {
        if(igp_area_briefs == nullptr)
        {
            igp_area_briefs = std::make_shared<MplsTeStandby::IgpAreaBriefs>();
        }
        return igp_area_briefs;
    }

    if(child_yang_name == "bandwidth-accounting-counters")
    {
        if(bandwidth_accounting_counters == nullptr)
        {
            bandwidth_accounting_counters = std::make_shared<MplsTeStandby::BandwidthAccountingCounters>();
        }
        return bandwidth_accounting_counters;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTeStandby::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "maximum-tunnels")
    {
        if(maximum_tunnels == nullptr)
        {
            maximum_tunnels = std::make_shared<MplsTeStandby::MaximumTunnels>();
        }
        return maximum_tunnels;
    }

    if(child_yang_name == "path-protection")
    {
        if(path_protection == nullptr)
        {
            path_protection = std::make_shared<MplsTeStandby::PathProtection>();
        }
        return path_protection;
    }

    if(child_yang_name == "fib-next-hop-label-routes")
    {
        if(fib_next_hop_label_routes == nullptr)
        {
            fib_next_hop_label_routes = std::make_shared<MplsTeStandby::FibNextHopLabelRoutes>();
        }
        return fib_next_hop_label_routes;
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp == nullptr)
        {
            p2mp = std::make_shared<MplsTeStandby::P2mp>();
        }
        return p2mp;
    }

    if(child_yang_name == "lsp-out-of-resources")
    {
        if(lsp_out_of_resources == nullptr)
        {
            lsp_out_of_resources = std::make_shared<MplsTeStandby::LspOutOfResources>();
        }
        return lsp_out_of_resources;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<MplsTeStandby::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<MplsTeStandby::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "auto-tunnel-services")
    {
        if(auto_tunnel_services == nullptr)
        {
            auto_tunnel_services = std::make_shared<MplsTeStandby::AutoTunnelServices>();
        }
        return auto_tunnel_services;
    }

    if(child_yang_name == "affinity-map")
    {
        if(affinity_map == nullptr)
        {
            affinity_map = std::make_shared<MplsTeStandby::AffinityMap>();
        }
        return affinity_map;
    }

    if(child_yang_name == "topology-briefs")
    {
        if(topology_briefs == nullptr)
        {
            topology_briefs = std::make_shared<MplsTeStandby::TopologyBriefs>();
        }
        return topology_briefs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hardware_out_of_resources != nullptr)
    {
        _children["hardware-out-of-resources"] = hardware_out_of_resources;
    }

    if(p2p_p2mp_tunnel != nullptr)
    {
        _children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
    }

    if(topology_nodes != nullptr)
    {
        _children["topology-nodes"] = topology_nodes;
    }

    if(announce_tunnels_info != nullptr)
    {
        _children["announce-tunnels-info"] = announce_tunnels_info;
    }

    if(collaborator_timers != nullptr)
    {
        _children["collaborator-timers"] = collaborator_timers;
    }

    if(auto_tunnel != nullptr)
    {
        _children["auto-tunnel"] = auto_tunnel;
    }

    if(soft_preemption != nullptr)
    {
        _children["soft-preemption"] = soft_preemption;
    }

    if(forwarding_adjacency_destinations != nullptr)
    {
        _children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
    }

    if(igp_areas != nullptr)
    {
        _children["igp-areas"] = igp_areas;
    }

    if(wrap_protection != nullptr)
    {
        _children["wrap-protection"] = wrap_protection;
    }

    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    if(signalling_counters != nullptr)
    {
        _children["signalling-counters"] = signalling_counters;
    }

    if(diff_serv_te_classes != nullptr)
    {
        _children["diff-serv-te-classes"] = diff_serv_te_classes;
    }

    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(auto_route_destination_entries != nullptr)
    {
        _children["auto-route-destination-entries"] = auto_route_destination_entries;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(attribute_sets != nullptr)
    {
        _children["attribute-sets"] = attribute_sets;
    }

    if(igp_area_briefs != nullptr)
    {
        _children["igp-area-briefs"] = igp_area_briefs;
    }

    if(bandwidth_accounting_counters != nullptr)
    {
        _children["bandwidth-accounting-counters"] = bandwidth_accounting_counters;
    }

    if(tunnels != nullptr)
    {
        _children["tunnels"] = tunnels;
    }

    if(maximum_tunnels != nullptr)
    {
        _children["maximum-tunnels"] = maximum_tunnels;
    }

    if(path_protection != nullptr)
    {
        _children["path-protection"] = path_protection;
    }

    if(fib_next_hop_label_routes != nullptr)
    {
        _children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
    }

    if(p2mp != nullptr)
    {
        _children["p2mp"] = p2mp;
    }

    if(lsp_out_of_resources != nullptr)
    {
        _children["lsp-out-of-resources"] = lsp_out_of_resources;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(auto_tunnel_services != nullptr)
    {
        _children["auto-tunnel-services"] = auto_tunnel_services;
    }

    if(affinity_map != nullptr)
    {
        _children["affinity-map"] = affinity_map;
    }

    if(topology_briefs != nullptr)
    {
        _children["topology-briefs"] = topology_briefs;
    }

    return _children;
}

void MplsTeStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MplsTeStandby::clone_ptr() const
{
    return std::make_shared<MplsTeStandby>();
}

std::string MplsTeStandby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTeStandby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTeStandby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsTeStandby::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsTeStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-out-of-resources" || name == "p2p-p2mp-tunnel" || name == "topology-nodes" || name == "announce-tunnels-info" || name == "collaborator-timers" || name == "auto-tunnel" || name == "soft-preemption" || name == "forwarding-adjacency-destinations" || name == "igp-areas" || name == "wrap-protection" || name == "topology" || name == "signalling-counters" || name == "diff-serv-te-classes" || name == "issu" || name == "auto-route-destination-entries" || name == "fast-reroute" || name == "attribute-sets" || name == "igp-area-briefs" || name == "bandwidth-accounting-counters" || name == "tunnels" || name == "maximum-tunnels" || name == "path-protection" || name == "fib-next-hop-label-routes" || name == "p2mp" || name == "lsp-out-of-resources" || name == "bfd" || name == "nsr" || name == "auto-tunnel-services" || name == "affinity-map" || name == "topology-briefs")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::HardwareOutOfResources()
    :
    summary(std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary>())
{
    summary->parent = this;

    yang_name = "hardware-out-of-resources"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::HardwareOutOfResources::~HardwareOutOfResources()
{
}

bool MplsTeStandby::HardwareOutOfResources::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::HardwareOutOfResources::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::HardwareOutOfResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::HardwareOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::HardwareOutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void MplsTeStandby::HardwareOutOfResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::HardwareOutOfResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::HardwareOutOfResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::Summary::Summary()
    :
    hardware_out_of_resources_state(this, {})
{

    yang_name = "summary"; yang_parent_name = "hardware-out-of-resources"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::HardwareOutOfResources::Summary::~Summary()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_out_of_resources_state.len(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.len(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::HardwareOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-out-of-resources-state")
    {
        auto ent_ = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState>();
        ent_->parent = this;
        hardware_out_of_resources_state.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::HardwareOutOfResources::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_out_of_resources_state.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::HardwareOutOfResources::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-out-of-resources-state")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::HardwareOutOfResourcesState()
    :
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    node_protection_disable{YType::boolean, "node-protection-disable"},
    transition_duration{YType::uint32, "transition-duration"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    accept_reopt{YType::boolean, "accept-reopt"}
        ,
    statistics(std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>())
{
    statistics->parent = this;

    yang_name = "hardware-out-of-resources-state"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::~HardwareOutOfResourcesState()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_data() const
{
    if (is_presence_container) return true;
    return hw_oor_state.is_set
	|| te_metric_penalty.is_set
	|| available_bw_percentage.is_set
	|| node_protection_disable.is_set
	|| transition_duration.is_set
	|| minimum_lsp_bandwidth.is_set
	|| accept_reopt.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(te_metric_penalty.yfilter)
	|| ydk::is_set(available_bw_percentage.yfilter)
	|| ydk::is_set(node_protection_disable.yfilter)
	|| ydk::is_set(transition_duration.yfilter)
	|| ydk::is_set(minimum_lsp_bandwidth.yfilter)
	|| ydk::is_set(accept_reopt.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.yfilter)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.yfilter)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (node_protection_disable.is_set || is_set(node_protection_disable.yfilter)) leaf_name_data.push_back(node_protection_disable.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.yfilter)) leaf_name_data.push_back(transition_duration.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.yfilter)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (accept_reopt.is_set || is_set(accept_reopt.yfilter)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
        te_metric_penalty.value_namespace = name_space;
        te_metric_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
        available_bw_percentage.value_namespace = name_space;
        available_bw_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable = value;
        node_protection_disable.value_namespace = name_space;
        node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
        transition_duration.value_namespace = name_space;
        transition_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
        minimum_lsp_bandwidth.value_namespace = name_space;
        minimum_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
        accept_reopt.value_namespace = name_space;
        accept_reopt.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty.yfilter = yfilter;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "transition-duration")
    {
        transition_duration.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accept-reopt")
    {
        accept_reopt.yfilter = yfilter;
    }
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "hw-oor-state" || name == "te-metric-penalty" || name == "available-bw-percentage" || name == "node-protection-disable" || name == "transition-duration" || name == "minimum-lsp-bandwidth" || name == "accept-reopt")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::Statistics()
    :
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    transitions{YType::uint32, "transitions"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"}
{

    yang_name = "statistics"; yang_parent_name = "hardware-out-of-resources-state"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::~Statistics()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return hw_oor_state.is_set
	|| transitions.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set;
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(transitions.yfilter)
	|| ydk::is_set(node_protection_disable_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter);
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/summary/hardware-out-of-resources-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.yfilter)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
        node_protection_disable_number.value_namespace = name_space;
        node_protection_disable_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-oor-state" || name == "transitions" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "rejected-reopt-ls-ps-number")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::P2pP2mpTunnel()
    :
    tunnel_remote_briefs(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs>())
    , tunnel_remotes(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes>())
    , nni_tunnels(std::make_shared<MplsTeStandby::P2pP2mpTunnel::NniTunnels>())
    , tunnel_heads(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelHeads>())
{
    tunnel_remote_briefs->parent = this;
    tunnel_remotes->parent = this;
    nni_tunnels->parent = this;
    tunnel_heads->parent = this;

    yang_name = "p2p-p2mp-tunnel"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::P2pP2mpTunnel::~P2pP2mpTunnel()
{
}

bool MplsTeStandby::P2pP2mpTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_remote_briefs !=  nullptr && tunnel_remote_briefs->has_data())
	|| (tunnel_remotes !=  nullptr && tunnel_remotes->has_data())
	|| (nni_tunnels !=  nullptr && nni_tunnels->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_remote_briefs !=  nullptr && tunnel_remote_briefs->has_operation())
	|| (tunnel_remotes !=  nullptr && tunnel_remotes->has_operation())
	|| (nni_tunnels !=  nullptr && nni_tunnels->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::P2pP2mpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-p2mp-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-remote-briefs")
    {
        if(tunnel_remote_briefs == nullptr)
        {
            tunnel_remote_briefs = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs>();
        }
        return tunnel_remote_briefs;
    }

    if(child_yang_name == "tunnel-remotes")
    {
        if(tunnel_remotes == nullptr)
        {
            tunnel_remotes = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes>();
        }
        return tunnel_remotes;
    }

    if(child_yang_name == "nni-tunnels")
    {
        if(nni_tunnels == nullptr)
        {
            nni_tunnels = std::make_shared<MplsTeStandby::P2pP2mpTunnel::NniTunnels>();
        }
        return nni_tunnels;
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads == nullptr)
        {
            tunnel_heads = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelHeads>();
        }
        return tunnel_heads;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_remote_briefs != nullptr)
    {
        _children["tunnel-remote-briefs"] = tunnel_remote_briefs;
    }

    if(tunnel_remotes != nullptr)
    {
        _children["tunnel-remotes"] = tunnel_remotes;
    }

    if(nni_tunnels != nullptr)
    {
        _children["nni-tunnels"] = nni_tunnels;
    }

    if(tunnel_heads != nullptr)
    {
        _children["tunnel-heads"] = tunnel_heads;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2pP2mpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2pP2mpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-remote-briefs" || name == "tunnel-remotes" || name == "nni-tunnels" || name == "tunnel-heads")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBriefs()
    :
    tunnel_remote_brief(this, {"lsp_id", "tunnel_id", "extended_tunnel_id", "source_address", "ctype", "destination_address", "p2mp_id"})
{

    yang_name = "tunnel-remote-briefs"; yang_parent_name = "p2p-p2mp-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::~TunnelRemoteBriefs()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_remote_brief.len(); index++)
    {
        if(tunnel_remote_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::has_operation() const
{
    for (std::size_t index=0; index<tunnel_remote_brief.len(); index++)
    {
        if(tunnel_remote_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2p-p2mp-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remote-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-remote-brief")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief>();
        ent_->parent = this;
        tunnel_remote_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_remote_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-remote-brief")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::TunnelRemoteBrief()
    :
    lsp_id{YType::uint32, "lsp-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    source_address{YType::str, "source-address"},
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    p2mp_id{YType::uint32, "p2mp-id"},
    signaled_name{YType::str, "signaled-name"},
    uptime{YType::uint32, "uptime"}
        ,
    lsp_fec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec>())
    , s2l(this, {})
{
    lsp_fec->parent = this;

    yang_name = "tunnel-remote-brief"; yang_parent_name = "tunnel-remote-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::~TunnelRemoteBrief()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l.len(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return lsp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| source_address.is_set
	|| ctype.is_set
	|| destination_address.is_set
	|| p2mp_id.is_set
	|| signaled_name.is_set
	|| uptime.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::has_operation() const
{
    for (std::size_t index=0; index<s2l.len(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2p-p2mp-tunnel/tunnel-remote-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remote-brief";
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec>();
        }
        return lsp_fec;
    }

    if(child_yang_name == "s2l")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l>();
        ent_->parent = this;
        s2l.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_fec != nullptr)
    {
        _children["lsp-fec"] = lsp_fec;
    }

    count_ = 0;
    for (auto ent_ : s2l.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "s2l" || name == "lsp-id" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "source-address" || name == "ctype" || name == "destination-address" || name == "p2mp-id" || name == "signaled-name" || name == "uptime")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "tunnel-remote-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::~LspFec()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2l()
    :
    uptime{YType::uint32, "uptime"},
    egress_interface{YType::str, "egress-interface"},
    ingress_interface{YType::str, "ingress-interface"},
    role{YType::enumeration, "role"},
    oper_state{YType::boolean, "oper-state"}
        ,
    s2l_fec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec>())
{
    s2l_fec->parent = this;

    yang_name = "s2l"; yang_parent_name = "tunnel-remote-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::~S2l()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::has_data() const
{
    if (is_presence_container) return true;
    return uptime.is_set
	|| egress_interface.is_set
	|| ingress_interface.is_set
	|| role.is_set
	|| oper_state.is_set
	|| (s2l_fec !=  nullptr && s2l_fec->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(ingress_interface.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.yfilter)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec == nullptr)
        {
            s2l_fec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec>();
        }
        return s2l_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(s2l_fec != nullptr)
    {
        _children["s2l-fec"] = s2l_fec;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
        ingress_interface.value_namespace = name_space;
        ingress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec" || name == "uptime" || name == "egress-interface" || name == "ingress-interface" || name == "role" || name == "oper-state")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::S2lFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "s2l-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::~S2lFec()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemotes()
    :
    tunnel_remote(this, {"lsp_id", "tunnel_id", "extended_tunnel_id", "source_address", "ctype", "destination_address", "p2mp_id"})
{

    yang_name = "tunnel-remotes"; yang_parent_name = "p2p-p2mp-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::~TunnelRemotes()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_remote.len(); index++)
    {
        if(tunnel_remote[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::has_operation() const
{
    for (std::size_t index=0; index<tunnel_remote.len(); index++)
    {
        if(tunnel_remote[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2p-p2mp-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remotes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-remote")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote>();
        ent_->parent = this;
        tunnel_remote.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_remote.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-remote")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::TunnelRemote()
    :
    lsp_id{YType::uint32, "lsp-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    source_address{YType::str, "source-address"},
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    p2mp_id{YType::uint32, "p2mp-id"},
    signaled_name{YType::str, "signaled-name"},
    is_frr_failed{YType::boolean, "is-frr-failed"},
    frr_active_reason{YType::uint32, "frr-active-reason"},
    lsp_bandwidth{YType::uint32, "lsp-bandwidth"},
    lsp_setup_priority{YType::uint8, "lsp-setup-priority"},
    lsp_hold_priority{YType::uint8, "lsp-hold-priority"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    dste_class_match{YType::boolean, "dste-class-match"},
    dste_class_index{YType::uint8, "dste-class-index"},
    type{YType::enumeration, "type"},
    uptime{YType::uint32, "uptime"},
    s2_ls_up{YType::uint32, "s2-ls-up"},
    s2_ls_proceeding{YType::uint32, "s2-ls-proceeding"},
    s2_ls_down{YType::uint32, "s2-ls-down"},
    reoptimize_reason{YType::enumeration, "reoptimize-reason"},
    reoptimize_trigger{YType::enumeration, "reoptimize-trigger"},
    timer_left{YType::uint32, "timer-left"},
    is_passive{YType::boolean, "is-passive"},
    is_interface{YType::boolean, "is-interface"},
    last_path_change{YType::uint32, "last-path-change"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"}
        ,
    lsp_fec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec>())
    , s2l(this, {})
{
    lsp_fec->parent = this;

    yang_name = "tunnel-remote"; yang_parent_name = "tunnel-remotes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::~TunnelRemote()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l.len(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return lsp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| source_address.is_set
	|| ctype.is_set
	|| destination_address.is_set
	|| p2mp_id.is_set
	|| signaled_name.is_set
	|| is_frr_failed.is_set
	|| frr_active_reason.is_set
	|| lsp_bandwidth.is_set
	|| lsp_setup_priority.is_set
	|| lsp_hold_priority.is_set
	|| lsp_bandwidth_type.is_set
	|| dste_class_match.is_set
	|| dste_class_index.is_set
	|| type.is_set
	|| uptime.is_set
	|| s2_ls_up.is_set
	|| s2_ls_proceeding.is_set
	|| s2_ls_down.is_set
	|| reoptimize_reason.is_set
	|| reoptimize_trigger.is_set
	|| timer_left.is_set
	|| is_passive.is_set
	|| is_interface.is_set
	|| last_path_change.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::has_operation() const
{
    for (std::size_t index=0; index<s2l.len(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(is_frr_failed.yfilter)
	|| ydk::is_set(frr_active_reason.yfilter)
	|| ydk::is_set(lsp_bandwidth.yfilter)
	|| ydk::is_set(lsp_setup_priority.yfilter)
	|| ydk::is_set(lsp_hold_priority.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(dste_class_match.yfilter)
	|| ydk::is_set(dste_class_index.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(s2_ls_up.yfilter)
	|| ydk::is_set(s2_ls_proceeding.yfilter)
	|| ydk::is_set(s2_ls_down.yfilter)
	|| ydk::is_set(reoptimize_reason.yfilter)
	|| ydk::is_set(reoptimize_trigger.yfilter)
	|| ydk::is_set(timer_left.yfilter)
	|| ydk::is_set(is_passive.yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(last_path_change.yfilter)
	|| ydk::is_set(persistent_bytes.yfilter)
	|| ydk::is_set(persistent_packets.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2p-p2mp-tunnel/tunnel-remotes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remote";
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (is_frr_failed.is_set || is_set(is_frr_failed.yfilter)) leaf_name_data.push_back(is_frr_failed.get_name_leafdata());
    if (frr_active_reason.is_set || is_set(frr_active_reason.yfilter)) leaf_name_data.push_back(frr_active_reason.get_name_leafdata());
    if (lsp_bandwidth.is_set || is_set(lsp_bandwidth.yfilter)) leaf_name_data.push_back(lsp_bandwidth.get_name_leafdata());
    if (lsp_setup_priority.is_set || is_set(lsp_setup_priority.yfilter)) leaf_name_data.push_back(lsp_setup_priority.get_name_leafdata());
    if (lsp_hold_priority.is_set || is_set(lsp_hold_priority.yfilter)) leaf_name_data.push_back(lsp_hold_priority.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (dste_class_match.is_set || is_set(dste_class_match.yfilter)) leaf_name_data.push_back(dste_class_match.get_name_leafdata());
    if (dste_class_index.is_set || is_set(dste_class_index.yfilter)) leaf_name_data.push_back(dste_class_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (s2_ls_up.is_set || is_set(s2_ls_up.yfilter)) leaf_name_data.push_back(s2_ls_up.get_name_leafdata());
    if (s2_ls_proceeding.is_set || is_set(s2_ls_proceeding.yfilter)) leaf_name_data.push_back(s2_ls_proceeding.get_name_leafdata());
    if (s2_ls_down.is_set || is_set(s2_ls_down.yfilter)) leaf_name_data.push_back(s2_ls_down.get_name_leafdata());
    if (reoptimize_reason.is_set || is_set(reoptimize_reason.yfilter)) leaf_name_data.push_back(reoptimize_reason.get_name_leafdata());
    if (reoptimize_trigger.is_set || is_set(reoptimize_trigger.yfilter)) leaf_name_data.push_back(reoptimize_trigger.get_name_leafdata());
    if (timer_left.is_set || is_set(timer_left.yfilter)) leaf_name_data.push_back(timer_left.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.yfilter)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.yfilter)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.yfilter)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.yfilter)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec>();
        }
        return lsp_fec;
    }

    if(child_yang_name == "s2l")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l>();
        ent_->parent = this;
        s2l.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_fec != nullptr)
    {
        _children["lsp-fec"] = lsp_fec;
    }

    count_ = 0;
    for (auto ent_ : s2l.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed = value;
        is_frr_failed.value_namespace = name_space;
        is_frr_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason = value;
        frr_active_reason.value_namespace = name_space;
        frr_active_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth = value;
        lsp_bandwidth.value_namespace = name_space;
        lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority = value;
        lsp_setup_priority.value_namespace = name_space;
        lsp_setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority = value;
        lsp_hold_priority.value_namespace = name_space;
        lsp_hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match = value;
        dste_class_match.value_namespace = name_space;
        dste_class_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index = value;
        dste_class_index.value_namespace = name_space;
        dste_class_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up = value;
        s2_ls_up.value_namespace = name_space;
        s2_ls_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding = value;
        s2_ls_proceeding.value_namespace = name_space;
        s2_ls_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down = value;
        s2_ls_down.value_namespace = name_space;
        s2_ls_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason = value;
        reoptimize_reason.value_namespace = name_space;
        reoptimize_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger = value;
        reoptimize_trigger.value_namespace = name_space;
        reoptimize_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-left")
    {
        timer_left = value;
        timer_left.value_namespace = name_space;
        timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
        is_passive.value_namespace = name_space;
        is_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
        is_interface.value_namespace = name_space;
        is_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
        last_path_change.value_namespace = name_space;
        last_path_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
        persistent_bytes.value_namespace = name_space;
        persistent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
        persistent_packets.value_namespace = name_space;
        persistent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed.yfilter = yfilter;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match.yfilter = yfilter;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up.yfilter = yfilter;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding.yfilter = yfilter;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down.yfilter = yfilter;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason.yfilter = yfilter;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger.yfilter = yfilter;
    }
    if(value_path == "timer-left")
    {
        timer_left.yfilter = yfilter;
    }
    if(value_path == "is-passive")
    {
        is_passive.yfilter = yfilter;
    }
    if(value_path == "is-interface")
    {
        is_interface.yfilter = yfilter;
    }
    if(value_path == "last-path-change")
    {
        last_path_change.yfilter = yfilter;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes.yfilter = yfilter;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "s2l" || name == "lsp-id" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "source-address" || name == "ctype" || name == "destination-address" || name == "p2mp-id" || name == "signaled-name" || name == "is-frr-failed" || name == "frr-active-reason" || name == "lsp-bandwidth" || name == "lsp-setup-priority" || name == "lsp-hold-priority" || name == "lsp-bandwidth-type" || name == "dste-class-match" || name == "dste-class-index" || name == "type" || name == "uptime" || name == "s2-ls-up" || name == "s2-ls-proceeding" || name == "s2-ls-down" || name == "reoptimize-reason" || name == "reoptimize-trigger" || name == "timer-left" || name == "is-passive" || name == "is-interface" || name == "last-path-change" || name == "persistent-bytes" || name == "persistent-packets")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "tunnel-remote"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::~LspFec()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2l()
    :
    pcalc_area{YType::str, "pcalc-area"},
    is_expanded_ero{YType::boolean, "is-expanded-ero"},
    path_reeval_query_mid{YType::uint32, "path-reeval-query-mid"},
    time_since_last_query_received_mid{YType::uint32, "time-since-last-query-received-mid"},
    time_since_last_preferred_path_exists_send_mid{YType::uint32, "time-since-last-preferred-path-exists-send-mid"},
    time_since_last_preferred_tree_exists_send_mid{YType::uint32, "time-since-last-preferred-tree-exists-send-mid"},
    expanded_ero_area_id{YType::str, "expanded-ero-area-id"},
    expanded_ero_affinity_bits{YType::uint32, "expanded-ero-affinity-bits"},
    expanded_ero_affinity_mask{YType::uint32, "expanded-ero-affinity-mask"},
    expanded_ero_metric_type{YType::enumeration, "expanded-ero-metric-type"},
    expanded_ero_metric{YType::uint32, "expanded-ero-metric"},
    abr_auto_discovered{YType::str, "abr-auto-discovered"},
    is_frr_enabled{YType::boolean, "is-frr-enabled"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    path_rro_enabled{YType::boolean, "path-rro-enabled"},
    weight{YType::uint64, "weight"},
    reverse_weight{YType::uint64, "reverse-weight"},
    uptime{YType::uint32, "uptime"},
    egress_interface{YType::str, "egress-interface"},
    egress_interface_state{YType::enumeration, "egress-interface-state"},
    egress_interface_brief{YType::str, "egress-interface-brief"},
    ingress_interface{YType::str, "ingress-interface"},
    ingress_interface_state{YType::enumeration, "ingress-interface-state"},
    ingress_interface_brief{YType::str, "ingress-interface-brief"},
    s2l_local_label{YType::uint32, "s2l-local-label"},
    s2l_out_label{YType::uint32, "s2l-out-label"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    frr_out_tunnel_interface{YType::str, "frr-out-tunnel-interface"},
    role{YType::enumeration, "role"},
    signalling_status{YType::enumeration, "signalling-status"},
    local_router_id{YType::str, "local-router-id"},
    upstream_router_id{YType::str, "upstream-router-id"},
    downstream_router_id{YType::str, "downstream-router-id"},
    next_hop_address{YType::str, "next-hop-address"},
    next_next_hop_address{YType::str, "next-next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    incoming_address{YType::str, "incoming-address"},
    backup_tunnel_interface{YType::str, "backup-tunnel-interface"},
    node_hop_count{YType::uint8, "node-hop-count"},
    is_optical{YType::boolean, "is-optical"},
    s2l_reverse_ero_obj_present{YType::boolean, "s2l-reverse-ero-obj-present"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_name{YType::str, "reverse-lsp-name"},
    s2l_reverse_tspec_obj_present{YType::boolean, "s2l-reverse-tspec-obj-present"},
    path_using_strict_spf{YType::boolean, "path-using-strict-spf"}
        ,
    s2l_fec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec>())
    , active_path_option(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption>())
    , out_xro(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OutXro>())
    , in_xro(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::InXro>())
    , tspec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Tspec>())
    , generic_tspec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericTspec>())
    , fspec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Fspec>())
    , generic_fspec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericFspec>())
    , next_hop_address_generic(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::NextHopAddressGeneric>())
    , previous_hop_address_generic(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PreviousHopAddressGeneric>())
    , incoming_address_generic(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::IncomingAddressGeneric>())
    , s2l_convergence(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lConvergence>())
    , soft_preemption(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SoftPreemption>())
    , gmpls_labels(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GmplsLabels>())
    , otn_s2l(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OtnS2l>())
    , head_end_bfd_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::HeadEndBfdInfo>())
    , tail_end_bfd_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::TailEndBfdInfo>())
    , srlg_collection(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SrlgCollection>())
    , association(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Association>())
    , protection(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Protection>())
    , reverse_lsp_fec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseLspFec>())
    , reverse_tspec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseTspec>())
    , flex_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::FlexInfo>())
    , lsp_wrap_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::LspWrapInfo>())
    , diversity_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::DiversityInfo>())
    , accumulated_path_metrics(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedPathMetrics>())
    , accumulated_reverse_path_metrics(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedReversePathMetrics>())
    , s2l_reverse_lsp_sub_obj(this, {})
    , shared_risk_link_group(this, {})
    , out_ero(this, {})
    , in_ero(this, {})
    , path_rro(this, {})
    , resv_rro(this, {})
    , path_affinity_array(this, {})
    , reverse_ero_in(this, {})
    , s2l_segment_routing_path(this, {})
{
    s2l_fec->parent = this;
    active_path_option->parent = this;
    out_xro->parent = this;
    in_xro->parent = this;
    tspec->parent = this;
    generic_tspec->parent = this;
    fspec->parent = this;
    generic_fspec->parent = this;
    next_hop_address_generic->parent = this;
    previous_hop_address_generic->parent = this;
    incoming_address_generic->parent = this;
    s2l_convergence->parent = this;
    soft_preemption->parent = this;
    gmpls_labels->parent = this;
    otn_s2l->parent = this;
    head_end_bfd_info->parent = this;
    tail_end_bfd_info->parent = this;
    srlg_collection->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp_fec->parent = this;
    reverse_tspec->parent = this;
    flex_info->parent = this;
    lsp_wrap_info->parent = this;
    diversity_info->parent = this;
    accumulated_path_metrics->parent = this;
    accumulated_reverse_path_metrics->parent = this;

    yang_name = "s2l"; yang_parent_name = "tunnel-remote"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::~S2l()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.len(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.len(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<in_ero.len(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_rro.len(); index++)
    {
        if(path_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.len(); index++)
    {
        if(resv_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.len(); index++)
    {
        if(path_affinity_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.len(); index++)
    {
        if(reverse_ero_in[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.len(); index++)
    {
        if(s2l_segment_routing_path[index]->has_data())
            return true;
    }
    return pcalc_area.is_set
	|| is_expanded_ero.is_set
	|| path_reeval_query_mid.is_set
	|| time_since_last_query_received_mid.is_set
	|| time_since_last_preferred_path_exists_send_mid.is_set
	|| time_since_last_preferred_tree_exists_send_mid.is_set
	|| expanded_ero_area_id.is_set
	|| expanded_ero_affinity_bits.is_set
	|| expanded_ero_affinity_mask.is_set
	|| expanded_ero_metric_type.is_set
	|| expanded_ero_metric.is_set
	|| abr_auto_discovered.is_set
	|| is_frr_enabled.is_set
	|| is_node_protected.is_set
	|| is_bandwidth_protect.is_set
	|| path_rro_enabled.is_set
	|| weight.is_set
	|| reverse_weight.is_set
	|| uptime.is_set
	|| egress_interface.is_set
	|| egress_interface_state.is_set
	|| egress_interface_brief.is_set
	|| ingress_interface.is_set
	|| ingress_interface_state.is_set
	|| ingress_interface_brief.is_set
	|| s2l_local_label.is_set
	|| s2l_out_label.is_set
	|| outbound_frr_state.is_set
	|| frr_out_tunnel_interface.is_set
	|| role.is_set
	|| signalling_status.is_set
	|| local_router_id.is_set
	|| upstream_router_id.is_set
	|| downstream_router_id.is_set
	|| next_hop_address.is_set
	|| next_next_hop_address.is_set
	|| previous_hop_address.is_set
	|| incoming_address.is_set
	|| backup_tunnel_interface.is_set
	|| node_hop_count.is_set
	|| is_optical.is_set
	|| s2l_reverse_ero_obj_present.is_set
	|| reverse_lsp_present.is_set
	|| reverse_lsp_connected.is_set
	|| reverse_lsp_name.is_set
	|| s2l_reverse_tspec_obj_present.is_set
	|| path_using_strict_spf.is_set
	|| (s2l_fec !=  nullptr && s2l_fec->has_data())
	|| (active_path_option !=  nullptr && active_path_option->has_data())
	|| (out_xro !=  nullptr && out_xro->has_data())
	|| (in_xro !=  nullptr && in_xro->has_data())
	|| (tspec !=  nullptr && tspec->has_data())
	|| (generic_tspec !=  nullptr && generic_tspec->has_data())
	|| (fspec !=  nullptr && fspec->has_data())
	|| (generic_fspec !=  nullptr && generic_fspec->has_data())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_data())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_data())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_data())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_data())
	|| (otn_s2l !=  nullptr && otn_s2l->has_data())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_data())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_data())
	|| (srlg_collection !=  nullptr && srlg_collection->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_data())
	|| (diversity_info !=  nullptr && diversity_info->has_data())
	|| (accumulated_path_metrics !=  nullptr && accumulated_path_metrics->has_data())
	|| (accumulated_reverse_path_metrics !=  nullptr && accumulated_reverse_path_metrics->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::has_operation() const
{
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.len(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.len(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<in_ero.len(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_rro.len(); index++)
    {
        if(path_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.len(); index++)
    {
        if(resv_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.len(); index++)
    {
        if(path_affinity_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.len(); index++)
    {
        if(reverse_ero_in[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.len(); index++)
    {
        if(s2l_segment_routing_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pcalc_area.yfilter)
	|| ydk::is_set(is_expanded_ero.yfilter)
	|| ydk::is_set(path_reeval_query_mid.yfilter)
	|| ydk::is_set(time_since_last_query_received_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_path_exists_send_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)
	|| ydk::is_set(expanded_ero_area_id.yfilter)
	|| ydk::is_set(expanded_ero_affinity_bits.yfilter)
	|| ydk::is_set(expanded_ero_affinity_mask.yfilter)
	|| ydk::is_set(expanded_ero_metric_type.yfilter)
	|| ydk::is_set(expanded_ero_metric.yfilter)
	|| ydk::is_set(abr_auto_discovered.yfilter)
	|| ydk::is_set(is_frr_enabled.yfilter)
	|| ydk::is_set(is_node_protected.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(path_rro_enabled.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(reverse_weight.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(egress_interface_state.yfilter)
	|| ydk::is_set(egress_interface_brief.yfilter)
	|| ydk::is_set(ingress_interface.yfilter)
	|| ydk::is_set(ingress_interface_state.yfilter)
	|| ydk::is_set(ingress_interface_brief.yfilter)
	|| ydk::is_set(s2l_local_label.yfilter)
	|| ydk::is_set(s2l_out_label.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(frr_out_tunnel_interface.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(signalling_status.yfilter)
	|| ydk::is_set(local_router_id.yfilter)
	|| ydk::is_set(upstream_router_id.yfilter)
	|| ydk::is_set(downstream_router_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(incoming_address.yfilter)
	|| ydk::is_set(backup_tunnel_interface.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(is_optical.yfilter)
	|| ydk::is_set(s2l_reverse_ero_obj_present.yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| ydk::is_set(reverse_lsp_name.yfilter)
	|| ydk::is_set(s2l_reverse_tspec_obj_present.yfilter)
	|| ydk::is_set(path_using_strict_spf.yfilter)
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation())
	|| (active_path_option !=  nullptr && active_path_option->has_operation())
	|| (out_xro !=  nullptr && out_xro->has_operation())
	|| (in_xro !=  nullptr && in_xro->has_operation())
	|| (tspec !=  nullptr && tspec->has_operation())
	|| (generic_tspec !=  nullptr && generic_tspec->has_operation())
	|| (fspec !=  nullptr && fspec->has_operation())
	|| (generic_fspec !=  nullptr && generic_fspec->has_operation())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_operation())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_operation())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_operation())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_operation())
	|| (otn_s2l !=  nullptr && otn_s2l->has_operation())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_operation())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_operation())
	|| (srlg_collection !=  nullptr && srlg_collection->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_operation())
	|| (diversity_info !=  nullptr && diversity_info->has_operation())
	|| (accumulated_path_metrics !=  nullptr && accumulated_path_metrics->has_operation())
	|| (accumulated_reverse_path_metrics !=  nullptr && accumulated_reverse_path_metrics->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcalc_area.is_set || is_set(pcalc_area.yfilter)) leaf_name_data.push_back(pcalc_area.get_name_leafdata());
    if (is_expanded_ero.is_set || is_set(is_expanded_ero.yfilter)) leaf_name_data.push_back(is_expanded_ero.get_name_leafdata());
    if (path_reeval_query_mid.is_set || is_set(path_reeval_query_mid.yfilter)) leaf_name_data.push_back(path_reeval_query_mid.get_name_leafdata());
    if (time_since_last_query_received_mid.is_set || is_set(time_since_last_query_received_mid.yfilter)) leaf_name_data.push_back(time_since_last_query_received_mid.get_name_leafdata());
    if (time_since_last_preferred_path_exists_send_mid.is_set || is_set(time_since_last_preferred_path_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_path_exists_send_mid.get_name_leafdata());
    if (time_since_last_preferred_tree_exists_send_mid.is_set || is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_tree_exists_send_mid.get_name_leafdata());
    if (expanded_ero_area_id.is_set || is_set(expanded_ero_area_id.yfilter)) leaf_name_data.push_back(expanded_ero_area_id.get_name_leafdata());
    if (expanded_ero_affinity_bits.is_set || is_set(expanded_ero_affinity_bits.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_bits.get_name_leafdata());
    if (expanded_ero_affinity_mask.is_set || is_set(expanded_ero_affinity_mask.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_mask.get_name_leafdata());
    if (expanded_ero_metric_type.is_set || is_set(expanded_ero_metric_type.yfilter)) leaf_name_data.push_back(expanded_ero_metric_type.get_name_leafdata());
    if (expanded_ero_metric.is_set || is_set(expanded_ero_metric.yfilter)) leaf_name_data.push_back(expanded_ero_metric.get_name_leafdata());
    if (abr_auto_discovered.is_set || is_set(abr_auto_discovered.yfilter)) leaf_name_data.push_back(abr_auto_discovered.get_name_leafdata());
    if (is_frr_enabled.is_set || is_set(is_frr_enabled.yfilter)) leaf_name_data.push_back(is_frr_enabled.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.yfilter)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (path_rro_enabled.is_set || is_set(path_rro_enabled.yfilter)) leaf_name_data.push_back(path_rro_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (reverse_weight.is_set || is_set(reverse_weight.yfilter)) leaf_name_data.push_back(reverse_weight.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (egress_interface_state.is_set || is_set(egress_interface_state.yfilter)) leaf_name_data.push_back(egress_interface_state.get_name_leafdata());
    if (egress_interface_brief.is_set || is_set(egress_interface_brief.yfilter)) leaf_name_data.push_back(egress_interface_brief.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.yfilter)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_state.is_set || is_set(ingress_interface_state.yfilter)) leaf_name_data.push_back(ingress_interface_state.get_name_leafdata());
    if (ingress_interface_brief.is_set || is_set(ingress_interface_brief.yfilter)) leaf_name_data.push_back(ingress_interface_brief.get_name_leafdata());
    if (s2l_local_label.is_set || is_set(s2l_local_label.yfilter)) leaf_name_data.push_back(s2l_local_label.get_name_leafdata());
    if (s2l_out_label.is_set || is_set(s2l_out_label.yfilter)) leaf_name_data.push_back(s2l_out_label.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (frr_out_tunnel_interface.is_set || is_set(frr_out_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_out_tunnel_interface.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (signalling_status.is_set || is_set(signalling_status.yfilter)) leaf_name_data.push_back(signalling_status.get_name_leafdata());
    if (local_router_id.is_set || is_set(local_router_id.yfilter)) leaf_name_data.push_back(local_router_id.get_name_leafdata());
    if (upstream_router_id.is_set || is_set(upstream_router_id.yfilter)) leaf_name_data.push_back(upstream_router_id.get_name_leafdata());
    if (downstream_router_id.is_set || is_set(downstream_router_id.yfilter)) leaf_name_data.push_back(downstream_router_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_next_hop_address.is_set || is_set(next_next_hop_address.yfilter)) leaf_name_data.push_back(next_next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (incoming_address.is_set || is_set(incoming_address.yfilter)) leaf_name_data.push_back(incoming_address.get_name_leafdata());
    if (backup_tunnel_interface.is_set || is_set(backup_tunnel_interface.yfilter)) leaf_name_data.push_back(backup_tunnel_interface.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (is_optical.is_set || is_set(is_optical.yfilter)) leaf_name_data.push_back(is_optical.get_name_leafdata());
    if (s2l_reverse_ero_obj_present.is_set || is_set(s2l_reverse_ero_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_ero_obj_present.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_name.is_set || is_set(reverse_lsp_name.yfilter)) leaf_name_data.push_back(reverse_lsp_name.get_name_leafdata());
    if (s2l_reverse_tspec_obj_present.is_set || is_set(s2l_reverse_tspec_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_tspec_obj_present.get_name_leafdata());
    if (path_using_strict_spf.is_set || is_set(path_using_strict_spf.yfilter)) leaf_name_data.push_back(path_using_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec == nullptr)
        {
            s2l_fec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec>();
        }
        return s2l_fec;
    }

    if(child_yang_name == "active-path-option")
    {
        if(active_path_option == nullptr)
        {
            active_path_option = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption>();
        }
        return active_path_option;
    }

    if(child_yang_name == "out-xro")
    {
        if(out_xro == nullptr)
        {
            out_xro = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OutXro>();
        }
        return out_xro;
    }

    if(child_yang_name == "in-xro")
    {
        if(in_xro == nullptr)
        {
            in_xro = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::InXro>();
        }
        return in_xro;
    }

    if(child_yang_name == "tspec")
    {
        if(tspec == nullptr)
        {
            tspec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Tspec>();
        }
        return tspec;
    }

    if(child_yang_name == "generic-tspec")
    {
        if(generic_tspec == nullptr)
        {
            generic_tspec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericTspec>();
        }
        return generic_tspec;
    }

    if(child_yang_name == "fspec")
    {
        if(fspec == nullptr)
        {
            fspec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Fspec>();
        }
        return fspec;
    }

    if(child_yang_name == "generic-fspec")
    {
        if(generic_fspec == nullptr)
        {
            generic_fspec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericFspec>();
        }
        return generic_fspec;
    }

    if(child_yang_name == "next-hop-address-generic")
    {
        if(next_hop_address_generic == nullptr)
        {
            next_hop_address_generic = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::NextHopAddressGeneric>();
        }
        return next_hop_address_generic;
    }

    if(child_yang_name == "previous-hop-address-generic")
    {
        if(previous_hop_address_generic == nullptr)
        {
            previous_hop_address_generic = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PreviousHopAddressGeneric>();
        }
        return previous_hop_address_generic;
    }

    if(child_yang_name == "incoming-address-generic")
    {
        if(incoming_address_generic == nullptr)
        {
            incoming_address_generic = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::IncomingAddressGeneric>();
        }
        return incoming_address_generic;
    }

    if(child_yang_name == "s2l-convergence")
    {
        if(s2l_convergence == nullptr)
        {
            s2l_convergence = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lConvergence>();
        }
        return s2l_convergence;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "gmpls-labels")
    {
        if(gmpls_labels == nullptr)
        {
            gmpls_labels = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GmplsLabels>();
        }
        return gmpls_labels;
    }

    if(child_yang_name == "otn-s2l")
    {
        if(otn_s2l == nullptr)
        {
            otn_s2l = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OtnS2l>();
        }
        return otn_s2l;
    }

    if(child_yang_name == "head-end-bfd-info")
    {
        if(head_end_bfd_info == nullptr)
        {
            head_end_bfd_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::HeadEndBfdInfo>();
        }
        return head_end_bfd_info;
    }

    if(child_yang_name == "tail-end-bfd-info")
    {
        if(tail_end_bfd_info == nullptr)
        {
            tail_end_bfd_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::TailEndBfdInfo>();
        }
        return tail_end_bfd_info;
    }

    if(child_yang_name == "srlg-collection")
    {
        if(srlg_collection == nullptr)
        {
            srlg_collection = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SrlgCollection>();
        }
        return srlg_collection;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    if(child_yang_name == "reverse-tspec")
    {
        if(reverse_tspec == nullptr)
        {
            reverse_tspec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseTspec>();
        }
        return reverse_tspec;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "lsp-wrap-info")
    {
        if(lsp_wrap_info == nullptr)
        {
            lsp_wrap_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::LspWrapInfo>();
        }
        return lsp_wrap_info;
    }

    if(child_yang_name == "diversity-info")
    {
        if(diversity_info == nullptr)
        {
            diversity_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::DiversityInfo>();
        }
        return diversity_info;
    }

    if(child_yang_name == "accumulated-path-metrics")
    {
        if(accumulated_path_metrics == nullptr)
        {
            accumulated_path_metrics = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedPathMetrics>();
        }
        return accumulated_path_metrics;
    }

    if(child_yang_name == "accumulated-reverse-path-metrics")
    {
        if(accumulated_reverse_path_metrics == nullptr)
        {
            accumulated_reverse_path_metrics = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedReversePathMetrics>();
        }
        return accumulated_reverse_path_metrics;
    }

    if(child_yang_name == "s2l-reverse-lsp-sub-obj")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lReverseLspSubObj>();
        ent_->parent = this;
        s2l_reverse_lsp_sub_obj.append(ent_);
        return ent_;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SharedRiskLinkGroup>();
        ent_->parent = this;
        shared_risk_link_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "out-ero")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OutEro>();
        ent_->parent = this;
        out_ero.append(ent_);
        return ent_;
    }

    if(child_yang_name == "in-ero")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::InEro>();
        ent_->parent = this;
        in_ero.append(ent_);
        return ent_;
    }

    if(child_yang_name == "path-rro")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PathRro>();
        ent_->parent = this;
        path_rro.append(ent_);
        return ent_;
    }

    if(child_yang_name == "resv-rro")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ResvRro>();
        ent_->parent = this;
        resv_rro.append(ent_);
        return ent_;
    }

    if(child_yang_name == "path-affinity-array")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PathAffinityArray>();
        ent_->parent = this;
        path_affinity_array.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reverse-ero-in")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseEroIn>();
        ent_->parent = this;
        reverse_ero_in.append(ent_);
        return ent_;
    }

    if(child_yang_name == "s2l-segment-routing-path")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lSegmentRoutingPath>();
        ent_->parent = this;
        s2l_segment_routing_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(s2l_fec != nullptr)
    {
        _children["s2l-fec"] = s2l_fec;
    }

    if(active_path_option != nullptr)
    {
        _children["active-path-option"] = active_path_option;
    }

    if(out_xro != nullptr)
    {
        _children["out-xro"] = out_xro;
    }

    if(in_xro != nullptr)
    {
        _children["in-xro"] = in_xro;
    }

    if(tspec != nullptr)
    {
        _children["tspec"] = tspec;
    }

    if(generic_tspec != nullptr)
    {
        _children["generic-tspec"] = generic_tspec;
    }

    if(fspec != nullptr)
    {
        _children["fspec"] = fspec;
    }

    if(generic_fspec != nullptr)
    {
        _children["generic-fspec"] = generic_fspec;
    }

    if(next_hop_address_generic != nullptr)
    {
        _children["next-hop-address-generic"] = next_hop_address_generic;
    }

    if(previous_hop_address_generic != nullptr)
    {
        _children["previous-hop-address-generic"] = previous_hop_address_generic;
    }

    if(incoming_address_generic != nullptr)
    {
        _children["incoming-address-generic"] = incoming_address_generic;
    }

    if(s2l_convergence != nullptr)
    {
        _children["s2l-convergence"] = s2l_convergence;
    }

    if(soft_preemption != nullptr)
    {
        _children["soft-preemption"] = soft_preemption;
    }

    if(gmpls_labels != nullptr)
    {
        _children["gmpls-labels"] = gmpls_labels;
    }

    if(otn_s2l != nullptr)
    {
        _children["otn-s2l"] = otn_s2l;
    }

    if(head_end_bfd_info != nullptr)
    {
        _children["head-end-bfd-info"] = head_end_bfd_info;
    }

    if(tail_end_bfd_info != nullptr)
    {
        _children["tail-end-bfd-info"] = tail_end_bfd_info;
    }

    if(srlg_collection != nullptr)
    {
        _children["srlg-collection"] = srlg_collection;
    }

    if(association != nullptr)
    {
        _children["association"] = association;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    if(reverse_lsp_fec != nullptr)
    {
        _children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    if(reverse_tspec != nullptr)
    {
        _children["reverse-tspec"] = reverse_tspec;
    }

    if(flex_info != nullptr)
    {
        _children["flex-info"] = flex_info;
    }

    if(lsp_wrap_info != nullptr)
    {
        _children["lsp-wrap-info"] = lsp_wrap_info;
    }

    if(diversity_info != nullptr)
    {
        _children["diversity-info"] = diversity_info;
    }

    if(accumulated_path_metrics != nullptr)
    {
        _children["accumulated-path-metrics"] = accumulated_path_metrics;
    }

    if(accumulated_reverse_path_metrics != nullptr)
    {
        _children["accumulated-reverse-path-metrics"] = accumulated_reverse_path_metrics;
    }

    count_ = 0;
    for (auto ent_ : s2l_reverse_lsp_sub_obj.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : shared_risk_link_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : out_ero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : in_ero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : path_rro.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : resv_rro.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : path_affinity_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reverse_ero_in.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : s2l_segment_routing_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcalc-area")
    {
        pcalc_area = value;
        pcalc_area.value_namespace = name_space;
        pcalc_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero = value;
        is_expanded_ero.value_namespace = name_space;
        is_expanded_ero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid = value;
        path_reeval_query_mid.value_namespace = name_space;
        path_reeval_query_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid = value;
        time_since_last_query_received_mid.value_namespace = name_space;
        time_since_last_query_received_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid = value;
        time_since_last_preferred_path_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_path_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid = value;
        time_since_last_preferred_tree_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_tree_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id = value;
        expanded_ero_area_id.value_namespace = name_space;
        expanded_ero_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits = value;
        expanded_ero_affinity_bits.value_namespace = name_space;
        expanded_ero_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask = value;
        expanded_ero_affinity_mask.value_namespace = name_space;
        expanded_ero_affinity_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type = value;
        expanded_ero_metric_type.value_namespace = name_space;
        expanded_ero_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric = value;
        expanded_ero_metric.value_namespace = name_space;
        expanded_ero_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered = value;
        abr_auto_discovered.value_namespace = name_space;
        abr_auto_discovered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled = value;
        is_frr_enabled.value_namespace = name_space;
        is_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
        is_node_protected.value_namespace = name_space;
        is_node_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled = value;
        path_rro_enabled.value_namespace = name_space;
        path_rro_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight = value;
        reverse_weight.value_namespace = name_space;
        reverse_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state = value;
        egress_interface_state.value_namespace = name_space;
        egress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief = value;
        egress_interface_brief.value_namespace = name_space;
        egress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
        ingress_interface.value_namespace = name_space;
        ingress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state = value;
        ingress_interface_state.value_namespace = name_space;
        ingress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief = value;
        ingress_interface_brief.value_namespace = name_space;
        ingress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label = value;
        s2l_local_label.value_namespace = name_space;
        s2l_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label = value;
        s2l_out_label.value_namespace = name_space;
        s2l_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface = value;
        frr_out_tunnel_interface.value_namespace = name_space;
        frr_out_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-status")
    {
        signalling_status = value;
        signalling_status.value_namespace = name_space;
        signalling_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-router-id")
    {
        local_router_id = value;
        local_router_id.value_namespace = name_space;
        local_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id = value;
        upstream_router_id.value_namespace = name_space;
        upstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id = value;
        downstream_router_id.value_namespace = name_space;
        downstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-address")
    {
        next_next_hop_address = value;
        next_next_hop_address.value_namespace = name_space;
        next_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-address")
    {
        incoming_address = value;
        incoming_address.value_namespace = name_space;
        incoming_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface = value;
        backup_tunnel_interface.value_namespace = name_space;
        backup_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-optical")
    {
        is_optical = value;
        is_optical.value_namespace = name_space;
        is_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present = value;
        s2l_reverse_ero_obj_present.value_namespace = name_space;
        s2l_reverse_ero_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name = value;
        reverse_lsp_name.value_namespace = name_space;
        reverse_lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present = value;
        s2l_reverse_tspec_obj_present.value_namespace = name_space;
        s2l_reverse_tspec_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf = value;
        path_using_strict_spf.value_namespace = name_space;
        path_using_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcalc-area")
    {
        pcalc_area.yfilter = yfilter;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero.yfilter = yfilter;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric.yfilter = yfilter;
    }
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered.yfilter = yfilter;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state.yfilter = yfilter;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label.yfilter = yfilter;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "signalling-status")
    {
        signalling_status.yfilter = yfilter;
    }
    if(value_path == "local-router-id")
    {
        local_router_id.yfilter = yfilter;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id.yfilter = yfilter;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-address")
    {
        next_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "incoming-address")
    {
        incoming_address.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "is-optical")
    {
        is_optical.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present.yfilter = yfilter;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec" || name == "active-path-option" || name == "out-xro" || name == "in-xro" || name == "tspec" || name == "generic-tspec" || name == "fspec" || name == "generic-fspec" || name == "next-hop-address-generic" || name == "previous-hop-address-generic" || name == "incoming-address-generic" || name == "s2l-convergence" || name == "soft-preemption" || name == "gmpls-labels" || name == "otn-s2l" || name == "head-end-bfd-info" || name == "tail-end-bfd-info" || name == "srlg-collection" || name == "association" || name == "protection" || name == "reverse-lsp-fec" || name == "reverse-tspec" || name == "flex-info" || name == "lsp-wrap-info" || name == "diversity-info" || name == "accumulated-path-metrics" || name == "accumulated-reverse-path-metrics" || name == "s2l-reverse-lsp-sub-obj" || name == "shared-risk-link-group" || name == "out-ero" || name == "in-ero" || name == "path-rro" || name == "resv-rro" || name == "path-affinity-array" || name == "reverse-ero-in" || name == "s2l-segment-routing-path" || name == "pcalc-area" || name == "is-expanded-ero" || name == "path-reeval-query-mid" || name == "time-since-last-query-received-mid" || name == "time-since-last-preferred-path-exists-send-mid" || name == "time-since-last-preferred-tree-exists-send-mid" || name == "expanded-ero-area-id" || name == "expanded-ero-affinity-bits" || name == "expanded-ero-affinity-mask" || name == "expanded-ero-metric-type" || name == "expanded-ero-metric" || name == "abr-auto-discovered" || name == "is-frr-enabled" || name == "is-node-protected" || name == "is-bandwidth-protect" || name == "path-rro-enabled" || name == "weight" || name == "reverse-weight" || name == "uptime" || name == "egress-interface" || name == "egress-interface-state" || name == "egress-interface-brief" || name == "ingress-interface" || name == "ingress-interface-state" || name == "ingress-interface-brief" || name == "s2l-local-label" || name == "s2l-out-label" || name == "outbound-frr-state" || name == "frr-out-tunnel-interface" || name == "role" || name == "signalling-status" || name == "local-router-id" || name == "upstream-router-id" || name == "downstream-router-id" || name == "next-hop-address" || name == "next-next-hop-address" || name == "previous-hop-address" || name == "incoming-address" || name == "backup-tunnel-interface" || name == "node-hop-count" || name == "is-optical" || name == "s2l-reverse-ero-obj-present" || name == "reverse-lsp-present" || name == "reverse-lsp-connected" || name == "reverse-lsp-name" || name == "s2l-reverse-tspec-obj-present" || name == "path-using-strict-spf")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::S2lFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "s2l-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::~S2lFec()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::ActivePathOption()
    :
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    option_index{YType::uint32, "option-index"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    explicit_path_name{YType::str, "explicit-path-name"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    holddown_duration{YType::uint16, "holddown-duration"},
    pce_address{YType::str, "pce-address"},
    path_option_area_id{YType::str, "path-option-area-id"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_verbatim{YType::boolean, "is-verbatim"},
    is_disabled{YType::boolean, "is-disabled"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    attribute_set_found{YType::boolean, "attribute-set-found"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"}
        ,
    attribute_set(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet>())
    , xro_attribute_set(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet>())
    , path_calculation_error(this, {})
    , remerge_error(this, {})
    , signalling_error(this, {})
{
    attribute_set->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "active-path-option"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::~ActivePathOption()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.len(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.len(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return option_index_is_valid.is_set
	|| option_index.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| explicit_path_name.is_set
	|| explicit_path_id.is_set
	|| holddown_duration.is_set
	|| pce_address.is_set
	|| path_option_area_id.is_set
	|| is_strict_explicit_path.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_verbatim.is_set
	|| is_disabled.is_set
	|| has_attribute_set.is_set
	|| attribute_set_found.is_set
	|| has_xro_attribute_set.is_set
	|| xro_attribute_set_found.is_set
	|| is_segment_routing.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.len(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.len(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_index_is_valid.yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(path_option_name.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(explicit_path_id.yfilter)
	|| ydk::is_set(holddown_duration.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(path_option_area_id.yfilter)
	|| ydk::is_set(is_strict_explicit_path.yfilter)
	|| ydk::is_set(is_helddown.yfilter)
	|| ydk::is_set(is_lockdown.yfilter)
	|| ydk::is_set(is_verbatim.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(attribute_set_found.yfilter)
	|| ydk::is_set(has_xro_attribute_set.yfilter)
	|| ydk::is_set(xro_attribute_set_found.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(protected_by_path_option_index.yfilter)
	|| ydk::is_set(restored_from_path_option_index.yfilter)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index_is_valid.is_set || is_set(option_index_is_valid.yfilter)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.yfilter)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.yfilter)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.yfilter)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.yfilter)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.yfilter)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.yfilter)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.yfilter)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.yfilter)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (attribute_set_found.is_set || is_set(attribute_set_found.yfilter)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.yfilter)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.yfilter)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.yfilter)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.yfilter)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    if(child_yang_name == "path-calculation-error")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::PathCalculationError>();
        ent_->parent = this;
        path_calculation_error.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remerge-error")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::RemergeError>();
        ent_->parent = this;
        remerge_error.append(ent_);
        return ent_;
    }

    if(child_yang_name == "signalling-error")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::SignallingError>();
        ent_->parent = this;
        signalling_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set != nullptr)
    {
        _children["attribute-set"] = attribute_set;
    }

    if(xro_attribute_set != nullptr)
    {
        _children["xro-attribute-set"] = xro_attribute_set;
    }

    count_ = 0;
    for (auto ent_ : path_calculation_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remerge_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : signalling_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
        option_index_is_valid.value_namespace = name_space;
        option_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
        path_option_name.value_namespace = name_space;
        path_option_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
        explicit_path_id.value_namespace = name_space;
        explicit_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
        holddown_duration.value_namespace = name_space;
        holddown_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
        path_option_area_id.value_namespace = name_space;
        path_option_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
        is_strict_explicit_path.value_namespace = name_space;
        is_strict_explicit_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
        is_helddown.value_namespace = name_space;
        is_helddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
        is_lockdown.value_namespace = name_space;
        is_lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
        is_verbatim.value_namespace = name_space;
        is_verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
        attribute_set_found.value_namespace = name_space;
        attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
        has_xro_attribute_set.value_namespace = name_space;
        has_xro_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
        xro_attribute_set_found.value_namespace = name_space;
        xro_attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
        protected_by_path_option_index.value_namespace = name_space;
        protected_by_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
        restored_from_path_option_index.value_namespace = name_space;
        restored_from_path_option_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-name")
    {
        path_option_name.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id.yfilter = yfilter;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path.yfilter = yfilter;
    }
    if(value_path == "is-helddown")
    {
        is_helddown.yfilter = yfilter;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown.yfilter = yfilter;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index.yfilter = yfilter;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set" || name == "xro-attribute-set" || name == "path-calculation-error" || name == "remerge-error" || name == "signalling-error" || name == "option-index-is-valid" || name == "option-index" || name == "path-option-name" || name == "path-option-type" || name == "explicit-path-name" || name == "explicit-path-id" || name == "holddown-duration" || name == "pce-address" || name == "path-option-area-id" || name == "is-strict-explicit-path" || name == "is-helddown" || name == "is-lockdown" || name == "is-verbatim" || name == "is-disabled" || name == "has-attribute-set" || name == "attribute-set-found" || name == "has-xro-attribute-set" || name == "xro-attribute-set-found" || name == "is-segment-routing" || name == "protected-by-path-option-index" || name == "restored-from-path-option-index")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
        ,
    attribute_set_union(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::~AttributeSet()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_union != nullptr)
    {
        _children["attribute-set-union"] = attribute_set_union;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
        ,
    attribute_set_path_option(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
    , attribute_set_autobackup(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
    , attribute_set_automesh(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
    , attribute_set_xro(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>())
    , attribute_set_p2mpte(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>())
    , attribute_set_aps_pp(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
    , attribute_set_p2p_te(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_path_option != nullptr)
    {
        _children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        _children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        _children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        _children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        _children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        _children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        _children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_delay_limit_configured{YType::boolean, "is-delay-limit-configured"},
    delay_limit{YType::uint32, "delay-limit"}
        ,
    affinity(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
    , bfd_reverse_path(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
    , tunnel_id(this, {})
    , version_info(this, {})
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_delay_limit_configured.is_set
	|| delay_limit.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_delay_limit_configured.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_delay_limit_configured.is_set || is_set(is_delay_limit_configured.yfilter)) leaf_name_data.push_back(is_delay_limit_configured.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "version-info")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        ent_->parent = this;
        version_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        _children["bfd-reverse-path"] = bfd_reverse_path;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : version_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured = value;
        is_delay_limit_configured.value_namespace = name_space;
        is_delay_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured" || name == "is-delay-limit-configured" || name == "delay-limit")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
        ,
    signalled_name(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
    , affinity(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
    , logging(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
    , policy_class_entry(this, {})
    , tunnel_id(this, {})
    , protected_interface(this, {})
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        ent_->parent = this;
        policy_class_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "protected-interface")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        ent_->parent = this;
        protected_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signalled_name != nullptr)
    {
        _children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    count_ = 0;
    for (auto ent_ : policy_class_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : protected_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return protected_interface.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    forward_class{YType::uint32, "forward-class"},
    is_forward_class_configured{YType::boolean, "is-forward-class-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    record_route{YType::boolean, "record-route"},
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    bandwidth{YType::uint32, "bandwidth"},
    load_share{YType::uint32, "load-share"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"}
        ,
    affinity(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
    , logging(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
    , policy_class_entry(this, {})
    , mesh_group_id(this, {})
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| forward_class.is_set
	|| is_forward_class_configured.is_set
	|| is_affinity_configured.is_set
	|| fast_reroute.is_set
	|| frr_node_protection.is_set
	|| frr_bandwidth_protection.is_set
	|| record_route.is_set
	|| auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| soft_preemption_configured.is_set
	|| bandwidth.is_set
	|| load_share.is_set
	|| is_interface_bw_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(is_forward_class_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (is_forward_class_configured.is_set || is_set(is_forward_class_configured.yfilter)) leaf_name_data.push_back(is_forward_class_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        ent_->parent = this;
        policy_class_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mesh-group-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        ent_->parent = this;
        mesh_group_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    count_ = 0;
    for (auto ent_ : policy_class_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mesh_group_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured = value;
        is_forward_class_configured.value_namespace = name_space;
        is_forward_class_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-forward-class-configured" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    if (is_presence_container) return true;
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xro != nullptr)
    {
        _children["xro"] = xro;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
        ,
    xro_subobject(this, {})
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        ent_->parent = this;
        xro_subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xro_subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
        ,
    ipv4_subobject(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
    , ipv6_subobject(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
    , unnumbered_subobject(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
    , as_subobject(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
    , srlg_subobject(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
    , lsp_subobject(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_subobject != nullptr)
    {
        _children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        _children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        _children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        _children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        _children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        _children["lsp-subobject"] = lsp_subobject;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    if (is_presence_container) return true;
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    if (is_presence_container) return true;
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
        ,
    fec(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    if (is_presence_container) return true;
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec != nullptr)
    {
        _children["fec"] = fec;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::AttributeSetP2mpte()
    :
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"}
        ,
    affinity(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>())
    , tunnel_id(this, {})
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::~AttributeSetP2mpte()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_affinity_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
        ,
    revert_schedule(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    if (is_presence_container) return true;
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(revert_schedule != nullptr)
    {
        _children["revert-schedule"] = revert_schedule;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    if (is_presence_container) return true;
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::AttributeSetP2pTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"}
        ,
    affinity(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>())
    , logging(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>())
    , prepend_list(std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>())
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::~AttributeSetP2pTe()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| path_selection_metric.is_set
	|| is_path_selection_metric_configured.is_set
	|| path_selection_segment_routing_margin.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_path_select_configured.is_set
	|| is_prepend_list_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        _children["prepend-list"] = prepend_list;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::~Logging()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependList()
    :
    prepend_entry(this, {})
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry>();
        ent_->parent = this;
        prepend_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prepend_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}


}
}

