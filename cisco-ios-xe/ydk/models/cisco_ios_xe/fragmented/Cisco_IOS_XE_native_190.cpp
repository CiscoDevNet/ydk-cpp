
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_190.hpp"
#include "Cisco_IOS_XE_native_191.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{

    yang_name = "backup"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    if (is_presence_container) return true;
    return best_external.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Best()
    :
    range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{

    yang_name = "best-external"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    if (is_presence_container) return true;
    return backup.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::AggregateTimer()
    :
    aggregate_timer{YType::uint8, "aggregate-timer"},
    disable_timer{YType::enumeration, "disable-timer"}
{

    yang_name = "aggregate-timer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::~AggregateTimer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::has_data() const
{
    if (is_presence_container) return true;
    return aggregate_timer.is_set
	|| disable_timer.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_timer.yfilter)
	|| ydk::is_set(disable_timer.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_timer.is_set || is_set(aggregate_timer.yfilter)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (disable_timer.is_set || is_set(disable_timer.yfilter)) leaf_name_data.push_back(disable_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
        aggregate_timer.value_namespace = name_space;
        aggregate_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-timer")
    {
        disable_timer = value;
        disable_timer.value_namespace = name_space;
        disable_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-timer")
    {
        aggregate_timer.yfilter = yfilter;
    }
    if(value_path == "disable-timer")
    {
        disable_timer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-timer" || name == "disable-timer")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::Bestpath()
    :
    igp_metric(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric>())
    , prefix_validate(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate>())
{
    igp_metric->parent = this;
    prefix_validate->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::has_data() const
{
    if (is_presence_container) return true;
    return (igp_metric !=  nullptr && igp_metric->has_data())
	|| (prefix_validate !=  nullptr && prefix_validate->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::has_operation() const
{
    return is_set(yfilter)
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (prefix_validate !=  nullptr && prefix_validate->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "prefix-validate")
    {
        if(prefix_validate == nullptr)
        {
            prefix_validate = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate>();
        }
        return prefix_validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp_metric != nullptr)
    {
        _children["igp-metric"] = igp_metric;
    }

    if(prefix_validate != nullptr)
    {
        _children["prefix-validate"] = prefix_validate;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-metric" || name == "prefix-validate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "igp-metric"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::IgpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::PrefixValidate()
    :
    allow_invalid{YType::empty, "allow-invalid"},
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-validate"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::~PrefixValidate()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::has_data() const
{
    if (is_presence_container) return true;
    return allow_invalid.is_set
	|| disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_invalid.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_invalid.is_set || is_set(allow_invalid.yfilter)) leaf_name_data.push_back(allow_invalid.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-invalid")
    {
        allow_invalid = value;
        allow_invalid.value_namespace = name_space;
        allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-invalid")
    {
        allow_invalid.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath::PrefixValidate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-invalid" || name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
        ,
    dampen(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dampen != nullptr)
    {
        _children["dampen"] = dampen;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"}
{

    yang_name = "dampen"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::has_data() const
{
    if (is_presence_container) return true;
    return half_life_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set
	|| max_suppress_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "reuse-time" || name == "suppress-time" || name == "max-suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::Recursion()
    :
    host{YType::empty, "host"}
{

    yang_name = "recursion"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::~Recursion()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{

    yang_name = "route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::RouterId()
    :
    ip_id{YType::str, "ip-id"},
    vrf{YType::enumeration, "vrf"}
        ,
    interface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface>())
{
    interface->parent = this;

    yang_name = "router-id"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::~RouterId()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return ip_id.is_set
	|| vrf.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_id.is_set || is_set(ip_id.yfilter)) leaf_name_data.push_back(ip_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-id")
    {
        ip_id = value;
        ip_id.value_namespace = name_space;
        ip_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-id")
    {
        ip_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip-id" || name == "vrf")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::~Interface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_>())
    , adm_distance(this, {"distance", "srcip", "wildbits"})
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::~Distance()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adm_distance.len(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.len(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "adm-distance")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance>();
        ent_->parent = this;
        adm_distance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    count_ = 0;
    for (auto ent_ : adm_distance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "adm-distance")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{

    yang_name = "bgp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extern_as.yfilter)
	|| ydk::is_set(internal_as.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.yfilter)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.yfilter)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
        extern_as.value_namespace = name_space;
        extern_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
        internal_as.value_namespace = name_space;
        internal_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extern-as")
    {
        extern_as.yfilter = yfilter;
    }
    if(value_path == "internal-as")
    {
        internal_as.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extern-as" || name == "internal-as" || name == "local")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{

    yang_name = "adm-distance"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::has_data() const
{
    if (is_presence_container) return true;
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(wildbits.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance";
    ADD_KEY_TOKEN(distance, "distance");
    ADD_KEY_TOKEN(srcip, "srcip");
    ADD_KEY_TOKEN(wildbits, "wildbits");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.yfilter)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
        wildbits.value_namespace = name_space;
        wildbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "wildbits")
    {
        wildbits.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance::AdmDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "srcip" || name == "wildbits" || name == "acl")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Import()
    :
    path(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path>())
    , vpnv4(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4>())
    , vpnv6(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6>())
    , l2vpn(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn>())
{
    path->parent = this;
    vpnv4->parent = this;
    vpnv6->parent = this;
    l2vpn->parent = this;

    yang_name = "import"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::~Import()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::has_data() const
{
    if (is_presence_container) return true;
    return (path !=  nullptr && path->has_data())
	|| (vpnv4 !=  nullptr && vpnv4->has_data())
	|| (vpnv6 !=  nullptr && vpnv6->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::has_operation() const
{
    return is_set(yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (vpnv4 !=  nullptr && vpnv4->has_operation())
	|| (vpnv6 !=  nullptr && vpnv6->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path>();
        }
        return path;
    }

    if(child_yang_name == "vpnv4")
    {
        if(vpnv4 == nullptr)
        {
            vpnv4 = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4>();
        }
        return vpnv4;
    }

    if(child_yang_name == "vpnv6")
    {
        if(vpnv6 == nullptr)
        {
            vpnv6 = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6>();
        }
        return vpnv6;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(vpnv4 != nullptr)
    {
        _children["vpnv4"] = vpnv4;
    }

    if(vpnv6 != nullptr)
    {
        _children["vpnv6"] = vpnv6;
    }

    if(l2vpn != nullptr)
    {
        _children["l2vpn"] = l2vpn;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "vpnv4" || name == "vpnv6" || name == "l2vpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Path()
    :
    limit{YType::uint8, "limit"}
        ,
    selection(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection>())
{
    selection->parent = this;

    yang_name = "path"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::~Path()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| (selection !=  nullptr && selection->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| (selection !=  nullptr && selection->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection")
    {
        if(selection == nullptr)
        {
            selection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection>();
        }
        return selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(selection != nullptr)
    {
        _children["selection"] = selection;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection" || name == "limit")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::Selection()
    :
    all{YType::empty, "all"}
{

    yang_name = "selection"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::~Selection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Path::Selection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::Vpnv4()
    :
    unicast{YType::empty, "unicast"},
    re_originate{YType::empty, "re-originate"}
{

    yang_name = "vpnv4"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::~Vpnv4()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set
	|| re_originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(re_originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpnv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (re_originate.is_set || is_set(re_originate.yfilter)) leaf_name_data.push_back(re_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-originate")
    {
        re_originate = value;
        re_originate.value_namespace = name_space;
        re_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "re-originate")
    {
        re_originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "re-originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::Vpnv6()
    :
    unicast{YType::empty, "unicast"},
    re_originate{YType::empty, "re-originate"}
{

    yang_name = "vpnv6"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::~Vpnv6()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set
	|| re_originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(re_originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpnv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (re_originate.is_set || is_set(re_originate.yfilter)) leaf_name_data.push_back(re_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-originate")
    {
        re_originate = value;
        re_originate.value_namespace = name_space;
        re_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "re-originate")
    {
        re_originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::Vpnv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "re-originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::L2vpn()
    :
    evpn{YType::empty, "evpn"},
    re_originate{YType::empty, "re-originate"}
{

    yang_name = "l2vpn"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::~L2vpn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return evpn.is_set
	|| re_originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn.yfilter)
	|| ydk::is_set(re_originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn.is_set || is_set(evpn.yfilter)) leaf_name_data.push_back(evpn.get_name_leafdata());
    if (re_originate.is_set || is_set(re_originate.yfilter)) leaf_name_data.push_back(re_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn")
    {
        evpn = value;
        evpn.value_namespace = name_space;
        evpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-originate")
    {
        re_originate = value;
        re_originate.value_namespace = name_space;
        re_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn")
    {
        evpn.yfilter = yfilter;
    }
    if(value_path == "re-originate")
    {
        re_originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn" || name == "re-originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::MaximumPaths()
    :
    ebgp{YType::uint16, "ebgp"},
    eibgp{YType::uint16, "eibgp"}
        ,
    ibgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp>())
    , external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter>())
{
    ibgp->parent = this;
    external_rtfilter->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::has_data() const
{
    if (is_presence_container) return true;
    return ebgp.is_set
	|| eibgp.is_set
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ebgp.yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ebgp.is_set || is_set(ebgp.yfilter)) leaf_name_data.push_back(ebgp.get_name_leafdata());
    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    if(external_rtfilter != nullptr)
    {
        _children["external-rtfilter"] = external_rtfilter;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ebgp")
    {
        ebgp = value;
        ebgp.value_namespace = name_space;
        ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ebgp")
    {
        ebgp.yfilter = yfilter;
    }
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ibgp" || name == "external-rtfilter" || name == "ebgp" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::Ibgp()
    :
    unequal_cost{YType::uint16, "unequal-cost"},
    max{YType::uint16, "max"}
{

    yang_name = "ibgp"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return unequal_cost.is_set
	|| max.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unequal-cost" || name == "max")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{

    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::get_children() const
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    peer_group{YType::empty, "peer-group"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    remote_as{YType::str, "remote-as"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
        ,
    advertise_map(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap>())
    , aigp(nullptr) // presence node
    , allowas_in(nullptr) // presence node
    , announce(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce>())
    , as_override(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability>())
    , default_originate(nullptr) // presence node
    , ebgp_multihop(nullptr) // presence node
    , fall_over(nullptr) // presence node
    , filter_list(this, {"inout"})
    , ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode>())
    , inherit(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit>())
    , local_as(nullptr) // presence node
    , log_neighbor_changes(nullptr) // presence node
    , maximum_prefix(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , password(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password>())
    , path_attribute(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute>())
    , prefix_list(this, {"inout"})
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , send_label(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer>())
    , timers(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers>())
    , translate_update(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate>())
    , transport(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport>())
    , ttl_security(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity>())
    , update_source(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource>())
{
    advertise_map->parent = this;
    announce->parent = this;
    capability->parent = this;
    ha_mode->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    password->parent = this;
    path_attribute->parent = this;
    slow_peer->parent = this;
    timers->parent = this;
    translate_update->parent = this;
    transport->parent = this;
    ttl_security->parent = this;
    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| peer_group.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| remote_as.is_set
	|| route_reflector_client.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (advertise_map !=  nullptr && advertise_map->has_data())
	|| (aigp !=  nullptr && aigp->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (announce !=  nullptr && announce->has_data())
	|| (as_override !=  nullptr && as_override->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (advertise_map !=  nullptr && advertise_map->has_operation())
	|| (aigp !=  nullptr && aigp->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (announce !=  nullptr && announce->has_operation())
	|| (as_override !=  nullptr && as_override->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise_map != nullptr)
    {
        _children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        _children["aigp"] = aigp;
    }

    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(announce != nullptr)
    {
        _children["announce"] = announce;
    }

    if(as_override != nullptr)
    {
        _children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        _children["fall-over"] = fall_over;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ha_mode != nullptr)
    {
        _children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        _children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        _children["path-attribute"] = path_attribute;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        _children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        _children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        _children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        _children["update-source"] = update_source;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-map" || name == "aigp" || name == "allowas-in" || name == "announce" || name == "as-override" || name == "capability" || name == "default-originate" || name == "ebgp-multihop" || name == "fall-over" || name == "filter-list" || name == "ha-mode" || name == "inherit" || name == "local-as" || name == "log-neighbor-changes" || name == "maximum-prefix" || name == "next-hop-self" || name == "password" || name == "path-attribute" || name == "prefix-list" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "send-label" || name == "slow-peer" || name == "timers" || name == "translate-update" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "id" || name == "peer-group" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "remote-as" || name == "route-reflector-client" || name == "shutdown" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "version" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::AdvertiseMap()
    :
    name(this, {"word"})
{

    yang_name = "advertise-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::~AdvertiseMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::Name()
    :
    word{YType::str, "word"},
    exist_map{YType::str, "exist-map"},
    non_exist_map{YType::str, "non-exist-map"}
{

    yang_name = "name"; yang_parent_name = "advertise-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::~Name()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| exist_map.is_set
	|| non_exist_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(exist_map.yfilter)
	|| ydk::is_set(non_exist_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (non_exist_map.is_set || is_set(non_exist_map.yfilter)) leaf_name_data.push_back(non_exist_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map = value;
        non_exist_map.value_namespace = name_space;
        non_exist_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AdvertiseMap::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "exist-map" || name == "non-exist-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Aigp()
    :
    send(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send>())
{
    send->parent = this;

    yang_name = "aigp"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::~Aigp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::has_data() const
{
    if (is_presence_container) return true;
    return (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::Send()
    :
    med{YType::empty, "med"}
        ,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity>())
{
    cost_community->parent = this;

    yang_name = "send"; yang_parent_name = "aigp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::has_data() const
{
    if (is_presence_container) return true;
    return med.is_set
	|| (cost_community !=  nullptr && cost_community->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(med.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity>();
        }
        return cost_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost_community != nullptr)
    {
        _children["cost-community"] = cost_community;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "med")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CostCommunity()
    :
    cc_range(this, {"range"})
{

    yang_name = "cost-community"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cc_range.len(); index++)
    {
        if(cc_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::has_operation() const
{
    for (std::size_t index=0; index<cc_range.len(); index++)
    {
        if(cc_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc-range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange>();
        ent_->parent = this;
        cc_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cc_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc-range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::CcRange()
    :
    range{YType::uint8, "range"}
        ,
    poi(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>())
{
    poi->parent = this;

    yang_name = "cc-range"; yang_parent_name = "cost-community"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::~CcRange()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (poi !=  nullptr && poi->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (poi !=  nullptr && poi->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poi")
    {
        if(poi == nullptr)
        {
            poi = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>();
        }
        return poi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(poi != nullptr)
    {
        _children["poi"] = poi;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poi" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::Poi()
    :
    igp_cost(nullptr) // presence node
    , pre_bestpath(nullptr) // presence node
{

    yang_name = "poi"; yang_parent_name = "cc-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::~Poi()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_data() const
{
    if (is_presence_container) return true;
    return (igp_cost !=  nullptr && igp_cost->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_operation() const
{
    return is_set(yfilter)
	|| (igp_cost !=  nullptr && igp_cost->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-cost")
    {
        if(igp_cost == nullptr)
        {
            igp_cost = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost>();
        }
        return igp_cost;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp_cost != nullptr)
    {
        _children["igp-cost"] = igp_cost;
    }

    if(pre_bestpath != nullptr)
    {
        _children["pre-bestpath"] = pre_bestpath;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-cost" || name == "pre-bestpath")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::IgpCost()
    :
    transitive{YType::empty, "transitive"}
{

    yang_name = "igp-cost"; yang_parent_name = "poi"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::~IgpCost()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_data() const
{
    if (is_presence_container) return true;
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::PreBestpath()
    :
    transitive{YType::empty, "transitive"}
{

    yang_name = "pre-bestpath"; yang_parent_name = "poi"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::~PreBestpath()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_data() const
{
    if (is_presence_container) return true;
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Announce()
    :
    rpki(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki>())
{
    rpki->parent = this;

    yang_name = "announce"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::~Announce()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::has_data() const
{
    if (is_presence_container) return true;
    return (rpki !=  nullptr && rpki->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::has_operation() const
{
    return is_set(yfilter)
	|| (rpki !=  nullptr && rpki->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki>();
        }
        return rpki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpki != nullptr)
    {
        _children["rpki"] = rpki;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::Rpki()
    :
    state{YType::empty, "state"}
{

    yang_name = "rpki"; yang_parent_name = "announce"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::~Rpki()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Announce::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::AsOverride()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "as-override"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::~AsOverride()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-override";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::AsOverride::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::FallOver()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    bfd(nullptr) // presence node
{

    yang_name = "fall-over"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::has_data() const
{
    if (is_presence_container) return true;
    return route_map_name.is_set
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::Bfd()
    :
    multi_hop{YType::empty, "multi-hop"},
    single_hop{YType::empty, "single-hop"},
    check_control_plane_failure{YType::empty, "check-control-plane-failure"},
    strict_mode{YType::empty, "strict-mode"}
{

    yang_name = "bfd"; yang_parent_name = "fall-over"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return multi_hop.is_set
	|| single_hop.is_set
	|| check_control_plane_failure.is_set
	|| strict_mode.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_hop.yfilter)
	|| ydk::is_set(single_hop.yfilter)
	|| ydk::is_set(check_control_plane_failure.yfilter)
	|| ydk::is_set(strict_mode.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_hop.is_set || is_set(multi_hop.yfilter)) leaf_name_data.push_back(multi_hop.get_name_leafdata());
    if (single_hop.is_set || is_set(single_hop.yfilter)) leaf_name_data.push_back(single_hop.get_name_leafdata());
    if (check_control_plane_failure.is_set || is_set(check_control_plane_failure.yfilter)) leaf_name_data.push_back(check_control_plane_failure.get_name_leafdata());
    if (strict_mode.is_set || is_set(strict_mode.yfilter)) leaf_name_data.push_back(strict_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-hop")
    {
        multi_hop = value;
        multi_hop.value_namespace = name_space;
        multi_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-hop")
    {
        single_hop = value;
        single_hop.value_namespace = name_space;
        single_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure = value;
        check_control_plane_failure.value_namespace = name_space;
        check_control_plane_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-mode")
    {
        strict_mode = value;
        strict_mode.value_namespace = name_space;
        strict_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-hop")
    {
        multi_hop.yfilter = yfilter;
    }
    if(value_path == "single-hop")
    {
        single_hop.yfilter = yfilter;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure.yfilter = yfilter;
    }
    if(value_path == "strict-mode")
    {
        strict_mode.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-hop" || name == "single-hop" || name == "check-control-plane-failure" || name == "strict-mode")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
    , sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        _children["sso"] = sso;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "graceful-restart"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| no_prepend.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "no-prepend" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard>())
    , treat_as_withdraw(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;
    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        _children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attibute_type != nullptr)
    {
        _children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attibute_type != nullptr)
    {
        _children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::SendLabel()
    :
    send_label_explicit{YType::enumeration, "send-label-explicit"}
{

    yang_name = "send-label"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::~SendLabel()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::has_data() const
{
    if (is_presence_container) return true;
    return send_label_explicit.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_label_explicit.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_label_explicit.is_set || is_set(send_label_explicit.yfilter)) leaf_name_data.push_back(send_label_explicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit = value;
        send_label_explicit.value_namespace = name_space;
        send_label_explicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-label-explicit")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint16, "keepalive-interval"},
    holdtime{YType::uint16, "holdtime"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| holdtime.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "holdtime" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::TranslateUpdate()
    :
    ipv4(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "translate-update"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::~TranslateUpdate()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Ipv4()
    :
    multicast(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "translate-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::Multicast()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::~Multicast()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TranslateUpdate::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
        ,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::has_data() const
{
    if (is_presence_container) return true;
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(multi_session.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.yfilter)) leaf_name_data.push_back(multi_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_mtu_discovery != nullptr)
    {
        _children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
        multi_session.value_namespace = name_space;
        multi_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "multi-session")
    {
        multi_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "connection-mode" || name == "multi-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return hops.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::UpdateSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    remote_as{YType::str, "remote-as"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
        ,
    advertise_map(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap>())
    , aigp(nullptr) // presence node
    , allowas_in(nullptr) // presence node
    , announce(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce>())
    , as_override(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability>())
    , default_originate(nullptr) // presence node
    , ebgp_multihop(nullptr) // presence node
    , fall_over(nullptr) // presence node
    , filter_list(this, {"inout"})
    , ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode>())
    , inherit(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit>())
    , local_as(nullptr) // presence node
    , log_neighbor_changes(nullptr) // presence node
    , maximum_prefix(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , password(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password>())
    , path_attribute(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute>())
    , peer_group(nullptr) // presence node
    , prefix_list(this, {"inout"})
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , send_label(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer>())
    , timers(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers>())
    , translate_update(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate>())
    , transport(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Transport>())
    , ttl_security(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TtlSecurity>())
    , update_source(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::UpdateSource>())
{
    advertise_map->parent = this;
    announce->parent = this;
    capability->parent = this;
    ha_mode->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    password->parent = this;
    path_attribute->parent = this;
    slow_peer->parent = this;
    timers->parent = this;
    translate_update->parent = this;
    transport->parent = this;
    ttl_security->parent = this;
    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| remote_as.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (advertise_map !=  nullptr && advertise_map->has_data())
	|| (aigp !=  nullptr && aigp->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (announce !=  nullptr && announce->has_data())
	|| (as_override !=  nullptr && as_override->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (advertise_map !=  nullptr && advertise_map->has_operation())
	|| (aigp !=  nullptr && aigp->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (announce !=  nullptr && announce->has_operation())
	|| (as_override !=  nullptr && as_override->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise_map != nullptr)
    {
        _children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        _children["aigp"] = aigp;
    }

    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(announce != nullptr)
    {
        _children["announce"] = announce;
    }

    if(as_override != nullptr)
    {
        _children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        _children["fall-over"] = fall_over;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ha_mode != nullptr)
    {
        _children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        _children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        _children["path-attribute"] = path_attribute;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        _children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        _children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        _children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        _children["update-source"] = update_source;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-map" || name == "aigp" || name == "allowas-in" || name == "announce" || name == "as-override" || name == "capability" || name == "default-originate" || name == "ebgp-multihop" || name == "fall-over" || name == "filter-list" || name == "ha-mode" || name == "inherit" || name == "local-as" || name == "log-neighbor-changes" || name == "maximum-prefix" || name == "next-hop-self" || name == "password" || name == "path-attribute" || name == "peer-group" || name == "prefix-list" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "send-label" || name == "slow-peer" || name == "timers" || name == "translate-update" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "id" || name == "remote-as" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "shutdown" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "version" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::AdvertiseMap()
    :
    name(this, {"word"})
{

    yang_name = "advertise-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::~AdvertiseMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::Name()
    :
    word{YType::str, "word"},
    exist_map{YType::str, "exist-map"},
    non_exist_map{YType::str, "non-exist-map"}
{

    yang_name = "name"; yang_parent_name = "advertise-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::~Name()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| exist_map.is_set
	|| non_exist_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(exist_map.yfilter)
	|| ydk::is_set(non_exist_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (non_exist_map.is_set || is_set(non_exist_map.yfilter)) leaf_name_data.push_back(non_exist_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map = value;
        non_exist_map.value_namespace = name_space;
        non_exist_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AdvertiseMap::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "exist-map" || name == "non-exist-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Aigp()
    :
    send(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send>())
{
    send->parent = this;

    yang_name = "aigp"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::~Aigp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::has_data() const
{
    if (is_presence_container) return true;
    return (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::Send()
    :
    med{YType::empty, "med"}
        ,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity>())
{
    cost_community->parent = this;

    yang_name = "send"; yang_parent_name = "aigp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::has_data() const
{
    if (is_presence_container) return true;
    return med.is_set
	|| (cost_community !=  nullptr && cost_community->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(med.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity>();
        }
        return cost_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost_community != nullptr)
    {
        _children["cost-community"] = cost_community;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "med")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CostCommunity()
    :
    cc_range(this, {"range"})
{

    yang_name = "cost-community"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cc_range.len(); index++)
    {
        if(cc_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::has_operation() const
{
    for (std::size_t index=0; index<cc_range.len(); index++)
    {
        if(cc_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc-range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange>();
        ent_->parent = this;
        cc_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cc_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc-range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::CcRange()
    :
    range{YType::uint8, "range"}
        ,
    poi(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>())
{
    poi->parent = this;

    yang_name = "cc-range"; yang_parent_name = "cost-community"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::~CcRange()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (poi !=  nullptr && poi->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (poi !=  nullptr && poi->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poi")
    {
        if(poi == nullptr)
        {
            poi = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>();
        }
        return poi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(poi != nullptr)
    {
        _children["poi"] = poi;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poi" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::Poi()
    :
    igp_cost(nullptr) // presence node
    , pre_bestpath(nullptr) // presence node
{

    yang_name = "poi"; yang_parent_name = "cc-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::~Poi()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_data() const
{
    if (is_presence_container) return true;
    return (igp_cost !=  nullptr && igp_cost->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_operation() const
{
    return is_set(yfilter)
	|| (igp_cost !=  nullptr && igp_cost->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-cost")
    {
        if(igp_cost == nullptr)
        {
            igp_cost = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost>();
        }
        return igp_cost;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp_cost != nullptr)
    {
        _children["igp-cost"] = igp_cost;
    }

    if(pre_bestpath != nullptr)
    {
        _children["pre-bestpath"] = pre_bestpath;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-cost" || name == "pre-bestpath")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::IgpCost()
    :
    transitive{YType::empty, "transitive"}
{

    yang_name = "igp-cost"; yang_parent_name = "poi"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::~IgpCost()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_data() const
{
    if (is_presence_container) return true;
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::PreBestpath()
    :
    transitive{YType::empty, "transitive"}
{

    yang_name = "pre-bestpath"; yang_parent_name = "poi"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::~PreBestpath()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_data() const
{
    if (is_presence_container) return true;
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Announce()
    :
    rpki(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki>())
{
    rpki->parent = this;

    yang_name = "announce"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::~Announce()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::has_data() const
{
    if (is_presence_container) return true;
    return (rpki !=  nullptr && rpki->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::has_operation() const
{
    return is_set(yfilter)
	|| (rpki !=  nullptr && rpki->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki>();
        }
        return rpki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpki != nullptr)
    {
        _children["rpki"] = rpki;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::Rpki()
    :
    state{YType::empty, "state"}
{

    yang_name = "rpki"; yang_parent_name = "announce"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::~Rpki()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Announce::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::AsOverride()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "as-override"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::~AsOverride()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-override";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::AsOverride::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::FallOver()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    bfd(nullptr) // presence node
{

    yang_name = "fall-over"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::has_data() const
{
    if (is_presence_container) return true;
    return route_map_name.is_set
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::Bfd()
    :
    multi_hop{YType::empty, "multi-hop"},
    single_hop{YType::empty, "single-hop"},
    check_control_plane_failure{YType::empty, "check-control-plane-failure"},
    strict_mode{YType::empty, "strict-mode"}
{

    yang_name = "bfd"; yang_parent_name = "fall-over"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return multi_hop.is_set
	|| single_hop.is_set
	|| check_control_plane_failure.is_set
	|| strict_mode.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_hop.yfilter)
	|| ydk::is_set(single_hop.yfilter)
	|| ydk::is_set(check_control_plane_failure.yfilter)
	|| ydk::is_set(strict_mode.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_hop.is_set || is_set(multi_hop.yfilter)) leaf_name_data.push_back(multi_hop.get_name_leafdata());
    if (single_hop.is_set || is_set(single_hop.yfilter)) leaf_name_data.push_back(single_hop.get_name_leafdata());
    if (check_control_plane_failure.is_set || is_set(check_control_plane_failure.yfilter)) leaf_name_data.push_back(check_control_plane_failure.get_name_leafdata());
    if (strict_mode.is_set || is_set(strict_mode.yfilter)) leaf_name_data.push_back(strict_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-hop")
    {
        multi_hop = value;
        multi_hop.value_namespace = name_space;
        multi_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-hop")
    {
        single_hop = value;
        single_hop.value_namespace = name_space;
        single_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure = value;
        check_control_plane_failure.value_namespace = name_space;
        check_control_plane_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-mode")
    {
        strict_mode = value;
        strict_mode.value_namespace = name_space;
        strict_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-hop")
    {
        multi_hop.yfilter = yfilter;
    }
    if(value_path == "single-hop")
    {
        single_hop.yfilter = yfilter;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure.yfilter = yfilter;
    }
    if(value_path == "strict-mode")
    {
        strict_mode.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-hop" || name == "single-hop" || name == "check-control-plane-failure" || name == "strict-mode")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
    , sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        _children["sso"] = sso;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "graceful-restart"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| no_prepend.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "no-prepend" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard>())
    , treat_as_withdraw(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;
    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        _children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attibute_type != nullptr)
    {
        _children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attibute_type != nullptr)
    {
        _children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{

    yang_name = "peer-group"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::SendLabel()
    :
    send_label_explicit{YType::enumeration, "send-label-explicit"}
{

    yang_name = "send-label"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::~SendLabel()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::has_data() const
{
    if (is_presence_container) return true;
    return send_label_explicit.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_label_explicit.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_label_explicit.is_set || is_set(send_label_explicit.yfilter)) leaf_name_data.push_back(send_label_explicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit = value;
        send_label_explicit.value_namespace = name_space;
        send_label_explicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-label-explicit")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint16, "keepalive-interval"},
    holdtime{YType::uint16, "holdtime"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| holdtime.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "holdtime" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::TranslateUpdate()
    :
    ipv4(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "translate-update"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::~TranslateUpdate()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Ipv4()
    :
    multicast(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "translate-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::Multicast()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::~Multicast()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::TranslateUpdate::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer::DisableTimer::Y_0 {0, "0"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId::Vrf_::auto_assign {0, "auto-assign"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::SendLabel::SendLabelExplicit::explicit_null {0, "explicit-null"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::ConnectionMode::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup::Neighbor::Transport::ConnectionMode::passive {1, "passive"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor::SendLabel::SendLabelExplicit::explicit_null {0, "explicit-null"};


}
}

