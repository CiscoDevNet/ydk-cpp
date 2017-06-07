
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_72.hpp"
#include "Cisco_IOS_XE_native_73.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::Best()
{
    yang_name = "best"; yang_parent_name = "advertise-set";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::~Best()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::BestRange()
    :
    best_range{YType::uint8, "best-range"},
    all{YType::empty, "all"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_data() const
{
    return best_range.is_set
	|| all.is_set
	|| group_best.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_operation() const
{
    return is_set(operation)
	|| is_set(best_range.operation)
	|| is_set(all.operation)
	|| is_set(group_best.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[best-range='" <<best_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_range.is_set || is_set(best_range.operation)) leaf_name_data.push_back(best_range.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.operation)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-range")
    {
        best_range = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "group-best")
    {
        group_best = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::BestRange()
{
    yang_name = "best-range"; yang_parent_name = "advertise-set";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_data() const
{
    for (std::size_t index=0; index<adv_path.size(); index++)
    {
        if(adv_path[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_operation() const
{
    for (std::size_t index=0; index<adv_path.size(); index++)
    {
        if(adv_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adv-path")
    {
        for(auto const & c : adv_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath>();
        c->parent = this;
        adv_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adv_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::AdvPath()
    :
    adv_path{YType::uint8, "adv-path"},
    adv_path0{YType::uint8, "adv-path0"}
{
    yang_name = "adv-path"; yang_parent_name = "best-range";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::~AdvPath()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_data() const
{
    return adv_path.is_set
	|| adv_path0.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_path.operation)
	|| is_set(adv_path0.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-path" <<"[adv-path='" <<adv_path <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_path.is_set || is_set(adv_path.operation)) leaf_name_data.push_back(adv_path.get_name_leafdata());
    if (adv_path0.is_set || is_set(adv_path0.operation)) leaf_name_data.push_back(adv_path0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-path")
    {
        adv_path = value;
    }
    if(value_path == "adv-path0")
    {
        adv_path0 = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
{
    yang_name = "group-best"; yang_parent_name = "advertise-set";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(best.operation)
	|| is_set(best_range.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.operation)) leaf_name_data.push_back(best_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "best")
    {
        best = value;
    }
    if(value_path == "best-range")
    {
        best_range = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::AsPath::AsPath()
    :
    access_list{YType::uint16, "access-list"}
{
    yang_name = "as-path"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Clns::Clns()
    :
    name{YType::str, "name"}
{
    yang_name = "clns"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Community::Community()
    :
    name{YType::str, "name"}
{
    yang_name = "community"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Community::~Community()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Extcommunity::Extcommunity()
    :
    name{YType::str, "name"}
{
    yang_name = "extcommunity"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Extcommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Extcommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Interface::Interface()
    :
    interface{YType::str, "interface"}
{
    yang_name = "interface"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_data() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ip::Ip()
    :
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Address>())
	,flowspec(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::NextHop>())
	,redistribution_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource>())
	,route_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource>())
{
    address->parent = this;

    flowspec->parent = this;

    next_hop->parent = this;

    redistribution_source->parent = this;

    route_source->parent = this;

    yang_name = "ip"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (redistribution_source !=  nullptr && redistribution_source->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (redistribution_source !=  nullptr && redistribution_source->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "redistribution-source")
    {
        if(redistribution_source == nullptr)
        {
            redistribution_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource>();
        }
        return redistribution_source;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(redistribution_source != nullptr)
    {
        children["redistribution-source"] = redistribution_source;
    }

    if(route_source != nullptr)
    {
        children["route-source"] = route_source;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::Ip::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "address"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Match::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx>())
	,src_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;

    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_data() const
{
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_operation() const
{
    return is_set(operation)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowspec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_pfx != nullptr)
    {
        children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        children["src-pfx"] = src_pfx;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::DestPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "dest-pfx"; yang_parent_name = "flowspec";
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::~DestPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-pfx";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestPfx' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::SrcPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "src-pfx"; yang_parent_name = "flowspec";
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::~SrcPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-pfx";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcPfx' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::NextHop()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "next-hop"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::RedistributionSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "redistribution-source"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::~RedistributionSource()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-source";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributionSource' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::RouteSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "route-source"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::~RouteSource()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::has_data() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteSource' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Ipv6()
    :
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Address>())
	,flowspec(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop>())
	,route_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource>())
{
    address->parent = this;

    flowspec->parent = this;

    next_hop->parent = this;

    route_source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(route_source != nullptr)
    {
        children["route-source"] = route_source;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx>())
	,src_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;

    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::has_data() const
{
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::has_operation() const
{
    return is_set(operation)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowspec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_pfx != nullptr)
    {
        children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        children["src-pfx"] = src_pfx;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::DestPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "dest-pfx"; yang_parent_name = "flowspec";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::~DestPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-pfx";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestPfx' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::SrcPfx()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "src-pfx"; yang_parent_name = "flowspec";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::~SrcPfx()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-pfx";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcPfx' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::NextHop()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "next-hop"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::RouteSource()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "route-source"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::~RouteSource()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::has_data() const
{
    return access_list.is_set
	|| prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteSource' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Length::Length()
{
    yang_name = "length"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Length::~Length()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Length::has_data() const
{
    for (std::size_t index=0; index<lengths.size(); index++)
    {
        if(lengths[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Length::has_operation() const
{
    for (std::size_t index=0; index<lengths.size(); index++)
    {
        if(lengths[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Length::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Length' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lengths")
    {
        for(auto const & c : lengths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length::Lengths>();
        c->parent = this;
        lengths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lengths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Length::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::Length::Lengths::Lengths()
    :
    min_len{YType::uint32, "min-len"},
    max_len{YType::uint32, "max-len"}
{
    yang_name = "lengths"; yang_parent_name = "length";
}

Native::RouteMap::RouteMapSeq::Match::Length::Lengths::~Lengths()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Length::Lengths::has_data() const
{
    return min_len.is_set
	|| max_len.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Length::Lengths::has_operation() const
{
    return is_set(operation)
	|| is_set(min_len.operation)
	|| is_set(max_len.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lengths" <<"[min-len='" <<min_len <<"']" <<"[max-len='" <<max_len <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lengths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_len.is_set || is_set(min_len.operation)) leaf_name_data.push_back(min_len.get_name_leafdata());
    if (max_len.is_set || is_set(max_len.operation)) leaf_name_data.push_back(max_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Length::Lengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Length::Lengths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-len")
    {
        min_len = value;
    }
    if(value_path == "max-len")
    {
        max_len = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::LocalPreference::LocalPreference()
    :
    values{YType::str, "values"}
{
    yang_name = "local-preference"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::LocalPreference::~LocalPreference()
{
}

bool Native::RouteMap::RouteMapSeq::Match::LocalPreference::has_data() const
{
    for (auto const & leaf : values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::LocalPreference::has_operation() const
{
    for (auto const & leaf : values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(values.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-preference";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalPreference' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto values_name_datas = values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), values_name_datas.begin(), values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::LocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "values")
    {
        values.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::MdtGroup::MdtGroup()
    :
    name{YType::str, "name"}
{
    yang_name = "mdt-group"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::MdtGroup::~MdtGroup()
{
}

bool Native::RouteMap::RouteMapSeq::Match::MdtGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::MdtGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MdtGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::MdtGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Metric::Metric()
    :
    external{YType::str, "external"},
    metric_value{YType::str, "metric-value"}
{
    yang_name = "metric"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Metric::~Metric()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Metric::has_data() const
{
    return external.is_set
	|| metric_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(metric_value.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::PolicyList::PolicyList()
    :
    policy_map_names{YType::str, "policy-map-names"}
{
    yang_name = "policy-list"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::PolicyList::~PolicyList()
{
}

bool Native::RouteMap::RouteMapSeq::Match::PolicyList::has_data() const
{
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::PolicyList::has_operation() const
{
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(policy_map_names.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-list";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::PolicyList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_map_names_name_datas = policy_map_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_map_names_name_datas.begin(), policy_map_names_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::PolicyList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::RouteType::RouteType()
    :
    internal{YType::empty, "internal"},
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    local{YType::empty, "local"}
    	,
    external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "route-type"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::RouteType::~RouteType()
{
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::has_data() const
{
    return internal.is_set
	|| level_1.is_set
	|| level_2.is_set
	|| local.is_set
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::has_operation() const
{
    return is_set(operation)
	|| is_set(internal.operation)
	|| is_set(level_1.operation)
	|| is_set(level_2.operation)
	|| is_set(local.operation)
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::RouteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-type";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::RouteType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::RouteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::RouteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::RouteType::External::External()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{
    yang_name = "external"; yang_parent_name = "route-type";
}

Native::RouteMap::RouteMapSeq::Match::RouteType::External::~External()
{
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::External::has_data() const
{
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::External::has_operation() const
{
    return is_set(operation)
	|| is_set(type_1.operation)
	|| is_set(type_2.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.operation)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.operation)) leaf_name_data.push_back(type_2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type-1")
    {
        type_1 = value;
    }
    if(value_path == "type-2")
    {
        type_2 = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::NssaExternal()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{
    yang_name = "nssa-external"; yang_parent_name = "route-type";
}

Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::~NssaExternal()
{
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::has_data() const
{
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(type_1.operation)
	|| is_set(type_2.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.operation)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.operation)) leaf_name_data.push_back(type_2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type-1")
    {
        type_1 = value;
    }
    if(value_path == "type-2")
    {
        type_2 = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Rpki::Rpki()
    :
    invalid{YType::empty, "invalid"},
    not_found{YType::empty, "not-found"},
    valid{YType::empty, "valid"}
{
    yang_name = "rpki"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Rpki::~Rpki()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Rpki::has_data() const
{
    return invalid.is_set
	|| not_found.is_set
	|| valid.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Rpki::has_operation() const
{
    return is_set(operation)
	|| is_set(invalid.operation)
	|| is_set(not_found.operation)
	|| is_set(valid.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Rpki::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpki' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid.is_set || is_set(invalid.operation)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (not_found.is_set || is_set(not_found.operation)) leaf_name_data.push_back(not_found.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Rpki::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "invalid")
    {
        invalid = value;
    }
    if(value_path == "not-found")
    {
        not_found = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::SourceProtocol::SourceProtocol()
    :
    bgp{YType::str, "bgp"},
    connected{YType::empty, "connected"},
    eigrp{YType::str, "eigrp"},
    isis{YType::empty, "isis"},
    lisp{YType::empty, "lisp"},
    mobile{YType::empty, "mobile"},
    ospf{YType::str, "ospf"},
    ospfv3{YType::str, "ospfv3"},
    rip{YType::empty, "rip"},
    static_{YType::empty, "static"}
{
    yang_name = "source-protocol"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::SourceProtocol::~SourceProtocol()
{
}

bool Native::RouteMap::RouteMapSeq::Match::SourceProtocol::has_data() const
{
    for (auto const & leaf : bgp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : eigrp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ospf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ospfv3.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return connected.is_set
	|| isis.is_set
	|| lisp.is_set
	|| mobile.is_set
	|| rip.is_set
	|| static_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::SourceProtocol::has_operation() const
{
    for (auto const & leaf : bgp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : eigrp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ospf.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ospfv3.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bgp.operation)
	|| is_set(connected.operation)
	|| is_set(eigrp.operation)
	|| is_set(isis.operation)
	|| is_set(lisp.operation)
	|| is_set(mobile.operation)
	|| is_set(ospf.operation)
	|| is_set(ospfv3.operation)
	|| is_set(rip.operation)
	|| is_set(static_.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-protocol";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceProtocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (isis.is_set || is_set(isis.operation)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (mobile.is_set || is_set(mobile.operation)) leaf_name_data.push_back(mobile.get_name_leafdata());
    if (rip.is_set || is_set(rip.operation)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());

    auto bgp_name_datas = bgp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bgp_name_datas.begin(), bgp_name_datas.end());
    auto eigrp_name_datas = eigrp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), eigrp_name_datas.begin(), eigrp_name_datas.end());
    auto ospf_name_datas = ospf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ospf_name_datas.begin(), ospf_name_datas.end());
    auto ospfv3_name_datas = ospfv3.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ospfv3_name_datas.begin(), ospfv3_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::SourceProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp")
    {
        bgp.append(value);
    }
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "eigrp")
    {
        eigrp.append(value);
    }
    if(value_path == "isis")
    {
        isis = value;
    }
    if(value_path == "lisp")
    {
        lisp = value;
    }
    if(value_path == "mobile")
    {
        mobile = value;
    }
    if(value_path == "ospf")
    {
        ospf.append(value);
    }
    if(value_path == "ospfv3")
    {
        ospfv3.append(value);
    }
    if(value_path == "rip")
    {
        rip = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Tag::Tag()
    :
    ipv4_address{YType::str, "ipv4-address"},
    tag_value{YType::uint32, "tag_value"}
    	,
    list(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag::List>())
{
    list->parent = this;

    yang_name = "tag"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::has_data() const
{
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (list !=  nullptr && list->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::has_operation() const
{
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(tag_value.operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_address_name_datas = ipv4_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_address_name_datas.begin(), ipv4_address_name_datas.end());
    auto tag_value_name_datas = tag_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_value_name_datas.begin(), tag_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Tag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.append(value);
    }
    if(value_path == "tag_value")
    {
        tag_value.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Match::Tag::List::List()
    :
    tag_names{YType::str, "tag-names"}
{
    yang_name = "list"; yang_parent_name = "tag";
}

Native::RouteMap::RouteMapSeq::Match::Tag::List::~List()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::List::has_data() const
{
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::List::has_operation() const
{
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(tag_names.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::Tag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::Tag::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag_names_name_datas = tag_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_names_name_datas.begin(), tag_names_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Tag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Tag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Tag::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag-names")
    {
        tag_names.append(value);
    }
}

Native::RouteTag::RouteTag()
    :
    list(std::make_shared<Native::RouteTag::List>())
	,notation(std::make_shared<Native::RouteTag::Notation>())
{
    list->parent = this;

    notation->parent = this;

    yang_name = "route-tag"; yang_parent_name = "native";
}

Native::RouteTag::~RouteTag()
{
}

bool Native::RouteTag::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (notation !=  nullptr && notation->has_data());
}

bool Native::RouteTag::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (notation !=  nullptr && notation->has_operation());
}

std::string Native::RouteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tag";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteTag::List>();
        }
        return list;
    }

    if(child_yang_name == "notation")
    {
        if(notation == nullptr)
        {
            notation = std::make_shared<Native::RouteTag::Notation>();
        }
        return notation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(notation != nullptr)
    {
        children["notation"] = notation;
    }

    return children;
}

void Native::RouteTag::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteTag::List::List()
{
    yang_name = "list"; yang_parent_name = "route-tag";
}

Native::RouteTag::List::~List()
{
}

bool Native::RouteTag::List::has_data() const
{
    for (std::size_t index=0; index<rt_name.size(); index++)
    {
        if(rt_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::has_operation() const
{
    for (std::size_t index=0; index<rt_name.size(); index++)
    {
        if(rt_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteTag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:list";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/route-tag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-name")
    {
        for(auto const & c : rt_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteTag::List::RtName>();
        c->parent = this;
        rt_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteTag::List::RtName::RtName()
    :
    rt_name{YType::str, "rt-name"}
    	,
    deny(std::make_shared<Native::RouteTag::List::RtName::Deny>())
	,permit(std::make_shared<Native::RouteTag::List::RtName::Permit>())
	,seq(std::make_shared<Native::RouteTag::List::RtName::Seq>())
{
    deny->parent = this;

    permit->parent = this;

    seq->parent = this;

    yang_name = "rt-name"; yang_parent_name = "list";
}

Native::RouteTag::List::RtName::~RtName()
{
}

bool Native::RouteTag::List::RtName::has_data() const
{
    return rt_name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data())
	|| (seq !=  nullptr && seq->has_data());
}

bool Native::RouteTag::List::RtName::has_operation() const
{
    return is_set(operation)
	|| is_set(rt_name.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation())
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::RouteTag::List::RtName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-name" <<"[rt-name='" <<rt_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/route-tag/Cisco-IOS-XE-eigrp:list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_name.is_set || is_set(rt_name.operation)) leaf_name_data.push_back(rt_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::RouteTag::List::RtName::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::RouteTag::List::RtName::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::RouteTag::List::RtName::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::RouteTag::List::RtName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt-name")
    {
        rt_name = value;
    }
}

Native::RouteTag::List::RtName::Deny::Deny()
{
    yang_name = "deny"; yang_parent_name = "rt-name";
}

Native::RouteTag::List::RtName::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Deny::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Deny::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteTag::List::RtName::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteTag::List::RtName::Deny::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteTag::List::RtName::Deny::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{
    yang_name = "ipv4"; yang_parent_name = "deny";
}

Native::RouteTag::List::RtName::Deny::Ipv4::~Ipv4()
{
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mask.operation);
}

std::string Native::RouteTag::List::RtName::Deny::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Deny::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Deny::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Deny::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Deny::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::RouteTag::List::RtName::Permit::Permit()
{
    yang_name = "permit"; yang_parent_name = "rt-name";
}

Native::RouteTag::List::RtName::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Permit::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Permit::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteTag::List::RtName::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteTag::List::RtName::Permit::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteTag::List::RtName::Permit::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{
    yang_name = "ipv4"; yang_parent_name = "permit";
}

Native::RouteTag::List::RtName::Permit::Ipv4::~Ipv4()
{
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mask.operation);
}

std::string Native::RouteTag::List::RtName::Permit::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Permit::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Permit::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Permit::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Permit::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::RouteTag::List::RtName::Seq::Seq()
{
    yang_name = "seq"; yang_parent_name = "rt-name";
}

Native::RouteTag::List::RtName::Seq::~Seq()
{
}

bool Native::RouteTag::List::RtName::Seq::has_data() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Seq::has_operation() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteTag::List::RtName::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Seq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Seq' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        for(auto const & c : seq_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum>();
        c->parent = this;
        seq_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : seq_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Seq::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteTag::List::RtName::Seq::SeqNum::SeqNum()
    :
    seq_num{YType::uint32, "seq-num"}
    	,
    deny(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Deny>())
	,permit(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "seq-num"; yang_parent_name = "seq";
}

Native::RouteTag::List::RtName::Seq::SeqNum::~SeqNum()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_data() const
{
    return seq_num.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_operation() const
{
    return is_set(operation)
	|| is_set(seq_num.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num" <<"[seq-num='" <<seq_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Seq::SeqNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SeqNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
}

Native::RouteTag::List::RtName::Seq::SeqNum::Deny::Deny()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{
    yang_name = "deny"; yang_parent_name = "seq-num";
}

Native::RouteTag::List::RtName::Seq::SeqNum::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mask.operation);
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::RouteTag::List::RtName::Seq::SeqNum::Permit::Permit()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{
    yang_name = "permit"; yang_parent_name = "seq-num";
}

Native::RouteTag::List::RtName::Seq::SeqNum::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mask.operation);
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::RouteTag::Notation::Notation()
    :
    dotted_decimal{YType::empty, "dotted-decimal"}
{
    yang_name = "notation"; yang_parent_name = "route-tag";
}

Native::RouteTag::Notation::~Notation()
{
}

bool Native::RouteTag::Notation::has_data() const
{
    return dotted_decimal.is_set;
}

bool Native::RouteTag::Notation::has_operation() const
{
    return is_set(operation)
	|| is_set(dotted_decimal.operation);
}

std::string Native::RouteTag::Notation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:notation";

    return path_buffer.str();

}

const EntityPath Native::RouteTag::Notation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/route-tag/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dotted_decimal.is_set || is_set(dotted_decimal.operation)) leaf_name_data.push_back(dotted_decimal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteTag::Notation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::Notation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::Notation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dotted-decimal")
    {
        dotted_decimal = value;
    }
}

Native::Banner::Banner()
    :
    exec(std::make_shared<Native::Banner::Exec>())
	,login(std::make_shared<Native::Banner::Login>())
	,motd(std::make_shared<Native::Banner::Motd>())
	,prompt_timeout(std::make_shared<Native::Banner::PromptTimeout>())
{
    exec->parent = this;

    login->parent = this;

    motd->parent = this;

    prompt_timeout->parent = this;

    yang_name = "banner"; yang_parent_name = "native";
}

Native::Banner::~Banner()
{
}

bool Native::Banner::has_data() const
{
    return (exec !=  nullptr && exec->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (motd !=  nullptr && motd->has_data())
	|| (prompt_timeout !=  nullptr && prompt_timeout->has_data());
}

bool Native::Banner::has_operation() const
{
    return is_set(operation)
	|| (exec !=  nullptr && exec->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (motd !=  nullptr && motd->has_operation())
	|| (prompt_timeout !=  nullptr && prompt_timeout->has_operation());
}

std::string Native::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner";

    return path_buffer.str();

}

const EntityPath Native::Banner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Banner::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Banner::Login>();
        }
        return login;
    }

    if(child_yang_name == "motd")
    {
        if(motd == nullptr)
        {
            motd = std::make_shared<Native::Banner::Motd>();
        }
        return motd;
    }

    if(child_yang_name == "prompt-timeout")
    {
        if(prompt_timeout == nullptr)
        {
            prompt_timeout = std::make_shared<Native::Banner::PromptTimeout>();
        }
        return prompt_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Banner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(motd != nullptr)
    {
        children["motd"] = motd;
    }

    if(prompt_timeout != nullptr)
    {
        children["prompt-timeout"] = prompt_timeout;
    }

    return children;
}

void Native::Banner::set_value(const std::string & value_path, std::string value)
{
}

Native::Banner::Exec::Exec()
    :
    end_marker{YType::str, "end-marker"},
    message{YType::str, "message"},
    start_marker{YType::str, "start-marker"}
{
    yang_name = "exec"; yang_parent_name = "banner";
}

Native::Banner::Exec::~Exec()
{
}

bool Native::Banner::Exec::has_data() const
{
    return end_marker.is_set
	|| message.is_set
	|| start_marker.is_set;
}

bool Native::Banner::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(end_marker.operation)
	|| is_set(message.operation)
	|| is_set(start_marker.operation);
}

std::string Native::Banner::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Banner::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_marker.is_set || is_set(end_marker.operation)) leaf_name_data.push_back(end_marker.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (start_marker.is_set || is_set(start_marker.operation)) leaf_name_data.push_back(start_marker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Banner::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Banner::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Banner::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-marker")
    {
        end_marker = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "start-marker")
    {
        start_marker = value;
    }
}

Native::Banner::Login::Login()
    :
    end_marker{YType::str, "end-marker"},
    message{YType::str, "message"},
    start_marker{YType::str, "start-marker"}
{
    yang_name = "login"; yang_parent_name = "banner";
}

Native::Banner::Login::~Login()
{
}

bool Native::Banner::Login::has_data() const
{
    return end_marker.is_set
	|| message.is_set
	|| start_marker.is_set;
}

bool Native::Banner::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(end_marker.operation)
	|| is_set(message.operation)
	|| is_set(start_marker.operation);
}

std::string Native::Banner::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";

    return path_buffer.str();

}

const EntityPath Native::Banner::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_marker.is_set || is_set(end_marker.operation)) leaf_name_data.push_back(end_marker.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (start_marker.is_set || is_set(start_marker.operation)) leaf_name_data.push_back(start_marker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Banner::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Banner::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Banner::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-marker")
    {
        end_marker = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "start-marker")
    {
        start_marker = value;
    }
}

Native::Banner::PromptTimeout::PromptTimeout()
    :
    end_marker{YType::str, "end-marker"},
    message{YType::str, "message"},
    start_marker{YType::str, "start-marker"}
{
    yang_name = "prompt-timeout"; yang_parent_name = "banner";
}

Native::Banner::PromptTimeout::~PromptTimeout()
{
}

bool Native::Banner::PromptTimeout::has_data() const
{
    return end_marker.is_set
	|| message.is_set
	|| start_marker.is_set;
}

bool Native::Banner::PromptTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(end_marker.operation)
	|| is_set(message.operation)
	|| is_set(start_marker.operation);
}

std::string Native::Banner::PromptTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt-timeout";

    return path_buffer.str();

}

const EntityPath Native::Banner::PromptTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_marker.is_set || is_set(end_marker.operation)) leaf_name_data.push_back(end_marker.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (start_marker.is_set || is_set(start_marker.operation)) leaf_name_data.push_back(start_marker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Banner::PromptTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Banner::PromptTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Banner::PromptTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-marker")
    {
        end_marker = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "start-marker")
    {
        start_marker = value;
    }
}

Native::Banner::Motd::Motd()
    :
    end_marker{YType::str, "end-marker"},
    message{YType::str, "message"},
    start_marker{YType::str, "start-marker"}
{
    yang_name = "motd"; yang_parent_name = "banner";
}

Native::Banner::Motd::~Motd()
{
}

bool Native::Banner::Motd::has_data() const
{
    return end_marker.is_set
	|| message.is_set
	|| start_marker.is_set;
}

bool Native::Banner::Motd::has_operation() const
{
    return is_set(operation)
	|| is_set(end_marker.operation)
	|| is_set(message.operation)
	|| is_set(start_marker.operation);
}

std::string Native::Banner::Motd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "motd";

    return path_buffer.str();

}

const EntityPath Native::Banner::Motd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_marker.is_set || is_set(end_marker.operation)) leaf_name_data.push_back(end_marker.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (start_marker.is_set || is_set(start_marker.operation)) leaf_name_data.push_back(start_marker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Banner::Motd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Banner::Motd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Banner::Motd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-marker")
    {
        end_marker = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "start-marker")
    {
        start_marker = value;
    }
}

Native::TableMap::TableMap()
    :
    name{YType::str, "name"},
    default_{YType::str, "Cisco-IOS-XE-qos:default"}
{
    yang_name = "table-map"; yang_parent_name = "native";
}

Native::TableMap::~TableMap()
{
}

bool Native::TableMap::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return name.is_set
	|| default_.is_set;
}

bool Native::TableMap::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(default_.operation);
}

std::string Native::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::TableMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TableMap::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::TableMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::TableMap::Map::Map()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"}
{
    yang_name = "map"; yang_parent_name = "table-map";
}

Native::TableMap::Map::~Map()
{
}

bool Native::TableMap::Map::has_data() const
{
    return from.is_set
	|| to.is_set;
}

bool Native::TableMap::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(from.operation)
	|| is_set(to.operation);
}

std::string Native::TableMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:map" <<"[from='" <<from <<"']" <<"[to='" <<to <<"']";

    return path_buffer.str();

}

const EntityPath Native::TableMap::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.operation)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.operation)) leaf_name_data.push_back(to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TableMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TableMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TableMap::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from")
    {
        from = value;
    }
    if(value_path == "to")
    {
        to = value;
    }
}

Native::Sdm::Sdm()
    :
    prefer(nullptr) // presence node
{
    yang_name = "sdm"; yang_parent_name = "native";
}

Native::Sdm::~Sdm()
{
}

bool Native::Sdm::has_data() const
{
    return (prefer !=  nullptr && prefer->has_data());
}

bool Native::Sdm::has_operation() const
{
    return is_set(operation)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string Native::Sdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdm";

    return path_buffer.str();

}

const EntityPath Native::Sdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefer")
    {
        if(prefer == nullptr)
        {
            prefer = std::make_shared<Native::Sdm::Prefer>();
        }
        return prefer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefer != nullptr)
    {
        children["prefer"] = prefer;
    }

    return children;
}

void Native::Sdm::set_value(const std::string & value_path, std::string value)
{
}

Native::Sdm::Prefer::Prefer()
    :
    default_{YType::empty, "default"},
    qos{YType::empty, "qos"}
{
    yang_name = "prefer"; yang_parent_name = "sdm";
}

Native::Sdm::Prefer::~Prefer()
{
}

bool Native::Sdm::Prefer::has_data() const
{
    return default_.is_set
	|| qos.is_set;
}

bool Native::Sdm::Prefer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(qos.operation);
}

std::string Native::Sdm::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:prefer";

    return path_buffer.str();

}

const EntityPath Native::Sdm::Prefer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/sdm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (qos.is_set || is_set(qos.operation)) leaf_name_data.push_back(qos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Sdm::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sdm::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sdm::Prefer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "qos")
    {
        qos = value;
    }
}

Native::Mls::Mls()
{
    yang_name = "mls"; yang_parent_name = "native";
}

Native::Mls::~Mls()
{
}

bool Native::Mls::has_data() const
{
    return false;
}

bool Native::Mls::has_operation() const
{
    return is_set(operation);
}

std::string Native::Mls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mls";

    return path_buffer.str();

}

const EntityPath Native::Mls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mls::set_value(const std::string & value_path, std::string value)
{
}

Native::ObjectGroup::ObjectGroup()
{
    yang_name = "object-group"; yang_parent_name = "native";
}

Native::ObjectGroup::~ObjectGroup()
{
}

bool Native::ObjectGroup::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-group";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "security")
    {
        for(auto const & c : security)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : security)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::ObjectGroup::Network::Network()
    :
    name{YType::str, "name"}
    	,
    obj_mode_config_network_group(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup>())
{
    obj_mode_config_network_group->parent = this;

    yang_name = "network"; yang_parent_name = "object-group";
}

Native::ObjectGroup::Network::~Network()
{
}

bool Native::ObjectGroup::Network::has_data() const
{
    return name.is_set
	|| (obj_mode_config_network_group !=  nullptr && obj_mode_config_network_group->has_data());
}

bool Native::ObjectGroup::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (obj_mode_config_network_group !=  nullptr && obj_mode_config_network_group->has_operation());
}

std::string Native::ObjectGroup::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:network" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-Mode-config-network-group")
    {
        if(obj_mode_config_network_group == nullptr)
        {
            obj_mode_config_network_group = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup>();
        }
        return obj_mode_config_network_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(obj_mode_config_network_group != nullptr)
    {
        children["obj-Mode-config-network-group"] = obj_mode_config_network_group;
    }

    return children;
}

void Native::ObjectGroup::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::ObjModeConfigNetworkGroup()
    :
    description{YType::str, "description"},
    group_object{YType::str, "group-object"},
    host{YType::str, "host"}
    	,
    range(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>())
{
    range->parent = this;

    yang_name = "obj-Mode-config-network-group"; yang_parent_name = "network";
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::~ObjModeConfigNetworkGroup()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_data() const
{
    for (std::size_t index=0; index<network_address.size(); index++)
    {
        if(network_address[index]->has_data())
            return true;
    }
    return description.is_set
	|| group_object.is_set
	|| host.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_operation() const
{
    for (std::size_t index=0; index<network_address.size(); index++)
    {
        if(network_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(group_object.operation)
	|| is_set(host.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-Mode-config-network-group";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ObjModeConfigNetworkGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.operation)) leaf_name_data.push_back(group_object.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network_address")
    {
        for(auto const & c : network_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address>();
        c->parent = this;
        network_address.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group-object")
    {
        group_object = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::Network_Address()
    :
    ipv4_addr{YType::str, "ipv4_addr"},
    ipv4_mask{YType::str, "ipv4_mask"}
{
    yang_name = "network_address"; yang_parent_name = "obj-Mode-config-network-group";
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::~Network_Address()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::has_data() const
{
    return ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network_address" <<"[ipv4_addr='" <<ipv4_addr <<"']" <<"[ipv4_mask='" <<ipv4_mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network_Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv4_mask")
    {
        ipv4_mask = value;
    }
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::Range()
    :
    ip_addr_max{YType::str, "ip-addr-max"},
    ip_addr_min{YType::str, "ip-addr-min"}
{
    yang_name = "range"; yang_parent_name = "obj-Mode-config-network-group";
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::~Range()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_data() const
{
    return ip_addr_max.is_set
	|| ip_addr_min.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr_max.operation)
	|| is_set(ip_addr_min.operation);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr_max.is_set || is_set(ip_addr_max.operation)) leaf_name_data.push_back(ip_addr_max.get_name_leafdata());
    if (ip_addr_min.is_set || is_set(ip_addr_min.operation)) leaf_name_data.push_back(ip_addr_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr-max")
    {
        ip_addr_max = value;
    }
    if(value_path == "ip-addr-min")
    {
        ip_addr_min = value;
    }
}

Native::ObjectGroup::Security::Security()
    :
    name{YType::str, "name"}
    	,
    security_group(std::make_shared<Native::ObjectGroup::Security::SecurityGroup>())
{
    security_group->parent = this;

    yang_name = "security"; yang_parent_name = "object-group";
}

Native::ObjectGroup::Security::~Security()
{
}

bool Native::ObjectGroup::Security::has_data() const
{
    return name.is_set
	|| (security_group !=  nullptr && security_group->has_data());
}

bool Native::ObjectGroup::Security::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (security_group !=  nullptr && security_group->has_operation());
}

std::string Native::ObjectGroup::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:security" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::ObjectGroup::Security::SecurityGroup>();
        }
        return security_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    return children;
}

void Native::ObjectGroup::Security::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup()
    :
    description{YType::str, "description"},
    group_object{YType::str, "group-object"}
    	,
    security_group(std::make_shared<Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_>())
{
    security_group->parent = this;

    yang_name = "security-group"; yang_parent_name = "security";
}

Native::ObjectGroup::Security::SecurityGroup::~SecurityGroup()
{
}

bool Native::ObjectGroup::Security::SecurityGroup::has_data() const
{
    return description.is_set
	|| group_object.is_set
	|| (security_group !=  nullptr && security_group->has_data());
}

bool Native::ObjectGroup::Security::SecurityGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(group_object.operation)
	|| (security_group !=  nullptr && security_group->has_operation());
}

std::string Native::ObjectGroup::Security::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Security::SecurityGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.operation)) leaf_name_data.push_back(group_object.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_>();
        }
        return security_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    return children;
}

void Native::ObjectGroup::Security::SecurityGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group-object")
    {
        group_object = value;
    }
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::SecurityGroup_()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "security-group"; yang_parent_name = "security-group";
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::~SecurityGroup_()
{
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_data() const
{
    return tag.is_set;
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroup_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::ObjectGroup::Service::Service()
    :
    name{YType::str, "name"},
    ahp{YType::empty, "ahp"},
    description{YType::str, "description"},
    eigrp{YType::empty, "eigrp"},
    esp{YType::empty, "esp"},
    gre{YType::empty, "gre"},
    group_object{YType::str, "group-object"},
    igmp{YType::empty, "igmp"},
    ip{YType::empty, "ip"},
    ipinip{YType::empty, "ipinip"},
    nos{YType::empty, "nos"},
    ospf{YType::empty, "ospf"},
    pcp{YType::empty, "pcp"},
    pim{YType::empty, "pim"},
    protocal_number{YType::uint8, "protocal-number"}
    	,
    icmp(nullptr) // presence node
	,tcp(nullptr) // presence node
	,tcp_udp(nullptr) // presence node
	,udp(nullptr) // presence node
{
    yang_name = "service"; yang_parent_name = "object-group";
}

Native::ObjectGroup::Service::~Service()
{
}

bool Native::ObjectGroup::Service::has_data() const
{
    return name.is_set
	|| ahp.is_set
	|| description.is_set
	|| eigrp.is_set
	|| esp.is_set
	|| gre.is_set
	|| group_object.is_set
	|| igmp.is_set
	|| ip.is_set
	|| ipinip.is_set
	|| nos.is_set
	|| ospf.is_set
	|| pcp.is_set
	|| pim.is_set
	|| protocal_number.is_set
	|| (icmp !=  nullptr && icmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (tcp_udp !=  nullptr && tcp_udp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::ObjectGroup::Service::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(ahp.operation)
	|| is_set(description.operation)
	|| is_set(eigrp.operation)
	|| is_set(esp.operation)
	|| is_set(gre.operation)
	|| is_set(group_object.operation)
	|| is_set(igmp.operation)
	|| is_set(ip.operation)
	|| is_set(ipinip.operation)
	|| is_set(nos.operation)
	|| is_set(ospf.operation)
	|| is_set(pcp.operation)
	|| is_set(pim.operation)
	|| is_set(protocal_number.operation)
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (tcp_udp !=  nullptr && tcp_udp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ObjectGroup::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:service" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ahp.is_set || is_set(ahp.operation)) leaf_name_data.push_back(ahp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (esp.is_set || is_set(esp.operation)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (gre.is_set || is_set(gre.operation)) leaf_name_data.push_back(gre.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.operation)) leaf_name_data.push_back(group_object.get_name_leafdata());
    if (igmp.is_set || is_set(igmp.operation)) leaf_name_data.push_back(igmp.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipinip.is_set || is_set(ipinip.operation)) leaf_name_data.push_back(ipinip.get_name_leafdata());
    if (nos.is_set || is_set(nos.operation)) leaf_name_data.push_back(nos.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (pcp.is_set || is_set(pcp.operation)) leaf_name_data.push_back(pcp.get_name_leafdata());
    if (pim.is_set || is_set(pim.operation)) leaf_name_data.push_back(pim.get_name_leafdata());
    if (protocal_number.is_set || is_set(protocal_number.operation)) leaf_name_data.push_back(protocal_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ObjectGroup::Service::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ObjectGroup::Service::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "tcp-udp")
    {
        if(tcp_udp == nullptr)
        {
            tcp_udp = std::make_shared<Native::ObjectGroup::Service::TcpUdp>();
        }
        return tcp_udp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ObjectGroup::Service::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(tcp_udp != nullptr)
    {
        children["tcp-udp"] = tcp_udp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::ObjectGroup::Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "ahp")
    {
        ahp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "esp")
    {
        esp = value;
    }
    if(value_path == "gre")
    {
        gre = value;
    }
    if(value_path == "group-object")
    {
        group_object = value;
    }
    if(value_path == "igmp")
    {
        igmp = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "ipinip")
    {
        ipinip = value;
    }
    if(value_path == "nos")
    {
        nos = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
    if(value_path == "pcp")
    {
        pcp = value;
    }
    if(value_path == "pim")
    {
        pim = value;
    }
    if(value_path == "protocal-number")
    {
        protocal_number = value;
    }
}

Native::ObjectGroup::Service::Icmp::Icmp()
    :
    alternate_address{YType::empty, "alternate-address"},
    conversion_error{YType::empty, "conversion-error"},
    echo{YType::empty, "echo"},
    echo_reply{YType::empty, "echo-reply"},
    information_reply{YType::empty, "information-reply"},
    information_request{YType::empty, "information-request"},
    mask_reply{YType::empty, "mask-reply"},
    mask_request{YType::empty, "mask-request"},
    mobile_redirect{YType::empty, "mobile-redirect"},
    parameter_problem{YType::empty, "parameter-problem"},
    port_number{YType::uint8, "port-number"},
    redirect{YType::empty, "redirect"},
    router_advertisement{YType::empty, "router-advertisement"},
    router_solicitation{YType::empty, "router-solicitation"},
    source_quench{YType::empty, "source-quench"},
    time_exceeded{YType::empty, "time-exceeded"},
    timestamp_reply{YType::empty, "timestamp-reply"},
    timestamp_request{YType::empty, "timestamp-request"},
    traceroute{YType::empty, "traceroute"},
    unreachable{YType::empty, "unreachable"}
{
    yang_name = "icmp"; yang_parent_name = "service";
}

Native::ObjectGroup::Service::Icmp::~Icmp()
{
}

bool Native::ObjectGroup::Service::Icmp::has_data() const
{
    return alternate_address.is_set
	|| conversion_error.is_set
	|| echo.is_set
	|| echo_reply.is_set
	|| information_reply.is_set
	|| information_request.is_set
	|| mask_reply.is_set
	|| mask_request.is_set
	|| mobile_redirect.is_set
	|| parameter_problem.is_set
	|| port_number.is_set
	|| redirect.is_set
	|| router_advertisement.is_set
	|| router_solicitation.is_set
	|| source_quench.is_set
	|| time_exceeded.is_set
	|| timestamp_reply.is_set
	|| timestamp_request.is_set
	|| traceroute.is_set
	|| unreachable.is_set;
}

bool Native::ObjectGroup::Service::Icmp::has_operation() const
{
    return is_set(operation)
	|| is_set(alternate_address.operation)
	|| is_set(conversion_error.operation)
	|| is_set(echo.operation)
	|| is_set(echo_reply.operation)
	|| is_set(information_reply.operation)
	|| is_set(information_request.operation)
	|| is_set(mask_reply.operation)
	|| is_set(mask_request.operation)
	|| is_set(mobile_redirect.operation)
	|| is_set(parameter_problem.operation)
	|| is_set(port_number.operation)
	|| is_set(redirect.operation)
	|| is_set(router_advertisement.operation)
	|| is_set(router_solicitation.operation)
	|| is_set(source_quench.operation)
	|| is_set(time_exceeded.operation)
	|| is_set(timestamp_reply.operation)
	|| is_set(timestamp_request.operation)
	|| is_set(traceroute.operation)
	|| is_set(unreachable.operation);
}

std::string Native::ObjectGroup::Service::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alternate_address.is_set || is_set(alternate_address.operation)) leaf_name_data.push_back(alternate_address.get_name_leafdata());
    if (conversion_error.is_set || is_set(conversion_error.operation)) leaf_name_data.push_back(conversion_error.get_name_leafdata());
    if (echo.is_set || is_set(echo.operation)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (echo_reply.is_set || is_set(echo_reply.operation)) leaf_name_data.push_back(echo_reply.get_name_leafdata());
    if (information_reply.is_set || is_set(information_reply.operation)) leaf_name_data.push_back(information_reply.get_name_leafdata());
    if (information_request.is_set || is_set(information_request.operation)) leaf_name_data.push_back(information_request.get_name_leafdata());
    if (mask_reply.is_set || is_set(mask_reply.operation)) leaf_name_data.push_back(mask_reply.get_name_leafdata());
    if (mask_request.is_set || is_set(mask_request.operation)) leaf_name_data.push_back(mask_request.get_name_leafdata());
    if (mobile_redirect.is_set || is_set(mobile_redirect.operation)) leaf_name_data.push_back(mobile_redirect.get_name_leafdata());
    if (parameter_problem.is_set || is_set(parameter_problem.operation)) leaf_name_data.push_back(parameter_problem.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.operation)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (router_advertisement.is_set || is_set(router_advertisement.operation)) leaf_name_data.push_back(router_advertisement.get_name_leafdata());
    if (router_solicitation.is_set || is_set(router_solicitation.operation)) leaf_name_data.push_back(router_solicitation.get_name_leafdata());
    if (source_quench.is_set || is_set(source_quench.operation)) leaf_name_data.push_back(source_quench.get_name_leafdata());
    if (time_exceeded.is_set || is_set(time_exceeded.operation)) leaf_name_data.push_back(time_exceeded.get_name_leafdata());
    if (timestamp_reply.is_set || is_set(timestamp_reply.operation)) leaf_name_data.push_back(timestamp_reply.get_name_leafdata());
    if (timestamp_request.is_set || is_set(timestamp_request.operation)) leaf_name_data.push_back(timestamp_request.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.operation)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.operation)) leaf_name_data.push_back(unreachable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::Icmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alternate-address")
    {
        alternate_address = value;
    }
    if(value_path == "conversion-error")
    {
        conversion_error = value;
    }
    if(value_path == "echo")
    {
        echo = value;
    }
    if(value_path == "echo-reply")
    {
        echo_reply = value;
    }
    if(value_path == "information-reply")
    {
        information_reply = value;
    }
    if(value_path == "information-request")
    {
        information_request = value;
    }
    if(value_path == "mask-reply")
    {
        mask_reply = value;
    }
    if(value_path == "mask-request")
    {
        mask_request = value;
    }
    if(value_path == "mobile-redirect")
    {
        mobile_redirect = value;
    }
    if(value_path == "parameter-problem")
    {
        parameter_problem = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "redirect")
    {
        redirect = value;
    }
    if(value_path == "router-advertisement")
    {
        router_advertisement = value;
    }
    if(value_path == "router-solicitation")
    {
        router_solicitation = value;
    }
    if(value_path == "source-quench")
    {
        source_quench = value;
    }
    if(value_path == "time-exceeded")
    {
        time_exceeded = value;
    }
    if(value_path == "timestamp-reply")
    {
        timestamp_reply = value;
    }
    if(value_path == "timestamp-request")
    {
        timestamp_request = value;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
    }
}

Native::ObjectGroup::Service::Tcp::Tcp()
{
    yang_name = "tcp"; yang_parent_name = "service";
}

Native::ObjectGroup::Service::Tcp::~Tcp()
{
}

bool Native::ObjectGroup::Service::Tcp::has_data() const
{
    for (std::size_t index=0; index<tcp_port_list.size(); index++)
    {
        if(tcp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::Tcp::has_operation() const
{
    for (std::size_t index=0; index<tcp_port_list.size(); index++)
    {
        if(tcp_port_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::ObjectGroup::Service::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-port-list")
    {
        for(auto const & c : tcp_port_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service::Tcp::TcpPortList>();
        c->parent = this;
        tcp_port_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tcp_port_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::Service::Tcp::set_value(const std::string & value_path, std::string value)
{
}

Native::ObjectGroup::Service::Tcp::TcpPortList::TcpPortList()
    :
    tcp_port{YType::str, "tcp-port"},
    max_tcp_port{YType::str, "max-tcp-port"},
    operator_{YType::enumeration, "operator"}
{
    yang_name = "tcp-port-list"; yang_parent_name = "tcp";
}

Native::ObjectGroup::Service::Tcp::TcpPortList::~TcpPortList()
{
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_data() const
{
    return tcp_port.is_set
	|| max_tcp_port.is_set
	|| operator_.is_set;
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp_port.operation)
	|| is_set(max_tcp_port.operation)
	|| is_set(operator_.operation);
}

std::string Native::ObjectGroup::Service::Tcp::TcpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-port-list" <<"[tcp-port='" <<tcp_port <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::Tcp::TcpPortList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpPortList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_port.is_set || is_set(tcp_port.operation)) leaf_name_data.push_back(tcp_port.get_name_leafdata());
    if (max_tcp_port.is_set || is_set(max_tcp_port.operation)) leaf_name_data.push_back(max_tcp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Tcp::TcpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Tcp::TcpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::Tcp::TcpPortList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp-port")
    {
        tcp_port = value;
    }
    if(value_path == "max-tcp-port")
    {
        max_tcp_port = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
}

Native::ObjectGroup::Service::TcpUdp::TcpUdp()
{
    yang_name = "tcp-udp"; yang_parent_name = "service";
}

Native::ObjectGroup::Service::TcpUdp::~TcpUdp()
{
}

bool Native::ObjectGroup::Service::TcpUdp::has_data() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::TcpUdp::has_operation() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::ObjectGroup::Service::TcpUdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-udp";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::TcpUdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpUdp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::TcpUdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-port-list")
    {
        for(auto const & c : udp_port_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service::TcpUdp::UdpPortList>();
        c->parent = this;
        udp_port_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::TcpUdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udp_port_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::Service::TcpUdp::set_value(const std::string & value_path, std::string value)
{
}

Native::ObjectGroup::Service::TcpUdp::UdpPortList::UdpPortList()
    :
    udp_port{YType::str, "udp-port"},
    max_udp_port{YType::str, "max-udp-port"},
    operator_{YType::enumeration, "operator"}
{
    yang_name = "udp-port-list"; yang_parent_name = "tcp-udp";
}

Native::ObjectGroup::Service::TcpUdp::UdpPortList::~UdpPortList()
{
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_data() const
{
    return udp_port.is_set
	|| max_udp_port.is_set
	|| operator_.is_set;
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_operation() const
{
    return is_set(operation)
	|| is_set(udp_port.operation)
	|| is_set(max_udp_port.operation)
	|| is_set(operator_.operation);
}

std::string Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-port-list" <<"[udp-port='" <<udp_port <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpPortList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (max_udp_port.is_set || is_set(max_udp_port.operation)) leaf_name_data.push_back(max_udp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::TcpUdp::UdpPortList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
}

Native::ObjectGroup::Service::Udp::Udp()
{
    yang_name = "udp"; yang_parent_name = "service";
}

Native::ObjectGroup::Service::Udp::~Udp()
{
}

bool Native::ObjectGroup::Service::Udp::has_data() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::Udp::has_operation() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::ObjectGroup::Service::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-port-list")
    {
        for(auto const & c : udp_port_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service::Udp::UdpPortList>();
        c->parent = this;
        udp_port_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udp_port_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::Service::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::ObjectGroup::Service::Udp::UdpPortList::UdpPortList()
    :
    udp_port{YType::str, "udp-port"},
    max_udp_port{YType::str, "max-udp-port"},
    operator_{YType::enumeration, "operator"}
{
    yang_name = "udp-port-list"; yang_parent_name = "udp";
}

Native::ObjectGroup::Service::Udp::UdpPortList::~UdpPortList()
{
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_data() const
{
    return udp_port.is_set
	|| max_udp_port.is_set
	|| operator_.is_set;
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_operation() const
{
    return is_set(operation)
	|| is_set(udp_port.operation)
	|| is_set(max_udp_port.operation)
	|| is_set(operator_.operation);
}

std::string Native::ObjectGroup::Service::Udp::UdpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-port-list" <<"[udp-port='" <<udp_port <<"']";

    return path_buffer.str();

}

const EntityPath Native::ObjectGroup::Service::Udp::UdpPortList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpPortList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (max_udp_port.is_set || is_set(max_udp_port.operation)) leaf_name_data.push_back(max_udp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Udp::UdpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Udp::UdpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::Udp::UdpPortList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
}

Native::PseudowireClass::PseudowireClass()
    :
    name{YType::str, "name"},
    control_word{YType::empty, "Cisco-IOS-XE-l2vpn:control-word"},
    encapsulation{YType::enumeration, "Cisco-IOS-XE-l2vpn:encapsulation"},
    interworking{YType::enumeration, "Cisco-IOS-XE-l2vpn:interworking"},
    sequencing{YType::enumeration, "Cisco-IOS-XE-l2vpn:sequencing"}
    	,
    ip(std::make_shared<Native::PseudowireClass::Ip>())
	,load_balance(std::make_shared<Native::PseudowireClass::LoadBalance>())
	,monitor(std::make_shared<Native::PseudowireClass::Monitor>())
	,preferred_path(std::make_shared<Native::PseudowireClass::PreferredPath>())
	,protocol_l2tpv2(std::make_shared<Native::PseudowireClass::ProtocolL2Tpv2>())
	,protocol_l2tpv3(std::make_shared<Native::PseudowireClass::ProtocolL2Tpv3>())
	,protocol_mpls(std::make_shared<Native::PseudowireClass::ProtocolMpls>())
	,status(nullptr) // presence node
	,switching(std::make_shared<Native::PseudowireClass::Switching>())
{
    ip->parent = this;

    load_balance->parent = this;

    monitor->parent = this;

    preferred_path->parent = this;

    protocol_l2tpv2->parent = this;

    protocol_l2tpv3->parent = this;

    protocol_mpls->parent = this;

    switching->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "native";
}

Native::PseudowireClass::~PseudowireClass()
{
}

bool Native::PseudowireClass::has_data() const
{
    return name.is_set
	|| control_word.is_set
	|| encapsulation.is_set
	|| interworking.is_set
	|| sequencing.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_data())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_data())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (switching !=  nullptr && switching->has_data());
}

bool Native::PseudowireClass::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(control_word.operation)
	|| is_set(encapsulation.operation)
	|| is_set(interworking.operation)
	|| is_set(sequencing.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_operation())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_operation())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (switching !=  nullptr && switching->has_operation());
}

std::string Native::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PseudowireClass::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PseudowireClass::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::PseudowireClass::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<Native::PseudowireClass::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "protocol-l2tpv2")
    {
        if(protocol_l2tpv2 == nullptr)
        {
            protocol_l2tpv2 = std::make_shared<Native::PseudowireClass::ProtocolL2Tpv2>();
        }
        return protocol_l2tpv2;
    }

    if(child_yang_name == "protocol-l2tpv3")
    {
        if(protocol_l2tpv3 == nullptr)
        {
            protocol_l2tpv3 = std::make_shared<Native::PseudowireClass::ProtocolL2Tpv3>();
        }
        return protocol_l2tpv3;
    }

    if(child_yang_name == "protocol-mpls")
    {
        if(protocol_mpls == nullptr)
        {
            protocol_mpls = std::make_shared<Native::PseudowireClass::ProtocolMpls>();
        }
        return protocol_mpls;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::PseudowireClass::Status>();
        }
        return status;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<Native::PseudowireClass::Switching>();
        }
        return switching;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(protocol_l2tpv2 != nullptr)
    {
        children["protocol-l2tpv2"] = protocol_l2tpv2;
    }

    if(protocol_l2tpv3 != nullptr)
    {
        children["protocol-l2tpv3"] = protocol_l2tpv3;
    }

    if(protocol_mpls != nullptr)
    {
        children["protocol-mpls"] = protocol_mpls;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    return children;
}

void Native::PseudowireClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "control-word")
    {
        control_word = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
}

Native::PseudowireClass::Ip::Ip()
    :
    protocol{YType::enumeration, "protocol"},
    ttl{YType::uint8, "ttl"}
    	,
    dfbit(std::make_shared<Native::PseudowireClass::Ip::Dfbit>())
	,local(std::make_shared<Native::PseudowireClass::Ip::Local>())
	,pmtu(nullptr) // presence node
	,tos(std::make_shared<Native::PseudowireClass::Ip::Tos>())
{
    dfbit->parent = this;

    local->parent = this;

    tos->parent = this;

    yang_name = "ip"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::Ip::~Ip()
{
}

bool Native::PseudowireClass::Ip::has_data() const
{
    return protocol.is_set
	|| ttl.is_set
	|| (dfbit !=  nullptr && dfbit->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (pmtu !=  nullptr && pmtu->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::PseudowireClass::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation)
	|| is_set(ttl.operation)
	|| (dfbit !=  nullptr && dfbit->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (pmtu !=  nullptr && pmtu->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::PseudowireClass::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:ip";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dfbit")
    {
        if(dfbit == nullptr)
        {
            dfbit = std::make_shared<Native::PseudowireClass::Ip::Dfbit>();
        }
        return dfbit;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::PseudowireClass::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "pmtu")
    {
        if(pmtu == nullptr)
        {
            pmtu = std::make_shared<Native::PseudowireClass::Ip::Pmtu>();
        }
        return pmtu;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::PseudowireClass::Ip::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dfbit != nullptr)
    {
        children["dfbit"] = dfbit;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(pmtu != nullptr)
    {
        children["pmtu"] = pmtu;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Native::PseudowireClass::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::PseudowireClass::Ip::Dfbit::Dfbit()
    :
    set{YType::empty, "set"}
{
    yang_name = "dfbit"; yang_parent_name = "ip";
}

Native::PseudowireClass::Ip::Dfbit::~Dfbit()
{
}

bool Native::PseudowireClass::Ip::Dfbit::has_data() const
{
    return set.is_set;
}

bool Native::PseudowireClass::Ip::Dfbit::has_operation() const
{
    return is_set(operation)
	|| is_set(set.operation);
}

std::string Native::PseudowireClass::Ip::Dfbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dfbit";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Dfbit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dfbit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set.is_set || is_set(set.operation)) leaf_name_data.push_back(set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Dfbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Dfbit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Dfbit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set")
    {
        set = value;
    }
}

Native::PseudowireClass::Ip::Local::Local()
    :
    interface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "ip";
}

Native::PseudowireClass::Ip::Local::~Local()
{
}

bool Native::PseudowireClass::Ip::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::PseudowireClass::Ip::Local::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::PseudowireClass::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::PseudowireClass::Ip::Local::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::Ip::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local";
}

Native::PseudowireClass::Ip::Local::Interface::~Interface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::PseudowireClass::Ip::Local::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::PseudowireClass::Ip::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Local::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::PseudowireClass::Ip::Pmtu::Pmtu()
    :
    max{YType::uint16, "max"}
{
    yang_name = "pmtu"; yang_parent_name = "ip";
}

Native::PseudowireClass::Ip::Pmtu::~Pmtu()
{
}

bool Native::PseudowireClass::Ip::Pmtu::has_data() const
{
    return max.is_set;
}

bool Native::PseudowireClass::Ip::Pmtu::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::PseudowireClass::Ip::Pmtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmtu";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Pmtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmtu' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Pmtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Pmtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Pmtu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::PseudowireClass::Ip::Tos::Tos()
    :
    reflect{YType::empty, "reflect"},
    value_{YType::uint8, "value"}
{
    yang_name = "tos"; yang_parent_name = "ip";
}

Native::PseudowireClass::Ip::Tos::~Tos()
{
}

bool Native::PseudowireClass::Ip::Tos::has_data() const
{
    return reflect.is_set
	|| value_.is_set;
}

bool Native::PseudowireClass::Ip::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(reflect.operation)
	|| is_set(value_.operation);
}

std::string Native::PseudowireClass::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Ip::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflect.is_set || is_set(reflect.operation)) leaf_name_data.push_back(reflect.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Ip::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reflect")
    {
        reflect = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::PseudowireClass::LoadBalance::LoadBalance()
    :
    flow(nullptr) // presence node
{
    yang_name = "load-balance"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::LoadBalance::~LoadBalance()
{
}

bool Native::PseudowireClass::LoadBalance::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::PseudowireClass::LoadBalance::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::PseudowireClass::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:load-balance";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::PseudowireClass::LoadBalance::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::PseudowireClass::LoadBalance::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::LoadBalance::Flow::Flow()
    :
    ethernet{YType::enumeration, "ethernet"}
{
    yang_name = "flow"; yang_parent_name = "load-balance";
}

Native::PseudowireClass::LoadBalance::Flow::~Flow()
{
}

bool Native::PseudowireClass::LoadBalance::Flow::has_data() const
{
    return ethernet.is_set;
}

bool Native::PseudowireClass::LoadBalance::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet.operation);
}

std::string Native::PseudowireClass::LoadBalance::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::LoadBalance::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.operation)) leaf_name_data.push_back(ethernet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::LoadBalance::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::LoadBalance::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::LoadBalance::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
    }
}

Native::PseudowireClass::Monitor::Monitor()
    :
    peer(std::make_shared<Native::PseudowireClass::Monitor::Peer>())
{
    peer->parent = this;

    yang_name = "monitor"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::Monitor::~Monitor()
{
}

bool Native::PseudowireClass::Monitor::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::PseudowireClass::Monitor::has_operation() const
{
    return is_set(operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::PseudowireClass::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:monitor";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::PseudowireClass::Monitor::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::PseudowireClass::Monitor::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::Monitor::Peer::Peer()
    :
    bfd(nullptr) // presence node
{
    yang_name = "peer"; yang_parent_name = "monitor";
}

Native::PseudowireClass::Monitor::Peer::~Peer()
{
}

bool Native::PseudowireClass::Monitor::Peer::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::has_operation() const
{
    return is_set(operation)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::Monitor::Peer::Bfd::Bfd()
    :
    local(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local>())
{
    local->parent = this;

    yang_name = "bfd"; yang_parent_name = "peer";
}

Native::PseudowireClass::Monitor::Peer::Bfd::~Bfd()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Local()
    :
    interface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "bfd";
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::~Local()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local";
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::~Interface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::PseudowireClass::PreferredPath::PreferredPath()
    :
    interface(std::make_shared<Native::PseudowireClass::PreferredPath::Interface>())
	,peer_container(std::make_shared<Native::PseudowireClass::PreferredPath::PeerContainer>())
{
    interface->parent = this;

    peer_container->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::PreferredPath::~PreferredPath()
{
}

bool Native::PseudowireClass::PreferredPath::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data());
}

bool Native::PseudowireClass::PreferredPath::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation());
}

std::string Native::PseudowireClass::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:preferred-path";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::PreferredPath::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::PseudowireClass::PreferredPath::PeerContainer>();
        }
        return peer_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    return children;
}

void Native::PseudowireClass::PreferredPath::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::PreferredPath::Interface::Interface()
    :
    disable_fallback{YType::empty, "disable-fallback"},
    tunnel{YType::uint64, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"}
{
    yang_name = "interface"; yang_parent_name = "preferred-path";
}

Native::PseudowireClass::PreferredPath::Interface::~Interface()
{
}

bool Native::PseudowireClass::PreferredPath::Interface::has_data() const
{
    return disable_fallback.is_set
	|| tunnel.is_set
	|| tunnel_tp.is_set;
}

bool Native::PseudowireClass::PreferredPath::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_fallback.operation)
	|| is_set(tunnel.operation)
	|| is_set(tunnel_tp.operation);
}

std::string Native::PseudowireClass::PreferredPath::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::PreferredPath::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_fallback.is_set || is_set(disable_fallback.operation)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.operation)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::PreferredPath::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::PreferredPath::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::PreferredPath::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
    }
}

Native::PseudowireClass::PreferredPath::PeerContainer::PeerContainer()
    :
    disable_fallback{YType::empty, "disable-fallback"},
    peer{YType::str, "peer"}
{
    yang_name = "peer-container"; yang_parent_name = "preferred-path";
}

Native::PseudowireClass::PreferredPath::PeerContainer::~PeerContainer()
{
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_data() const
{
    return disable_fallback.is_set
	|| peer.is_set;
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_fallback.operation)
	|| is_set(peer.operation);
}

std::string Native::PseudowireClass::PreferredPath::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::PreferredPath::PeerContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_fallback.is_set || is_set(disable_fallback.operation)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());
    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::PreferredPath::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::PreferredPath::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::PreferredPath::PeerContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
    }
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::PseudowireClass::ProtocolMpls::ProtocolMpls()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "protocol-mpls"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::ProtocolMpls::~ProtocolMpls()
{
}

bool Native::PseudowireClass::ProtocolMpls::has_data() const
{
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolMpls::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::PseudowireClass::ProtocolMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-mpls";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::ProtocolMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolMpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::ProtocolMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::ProtocolMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::ProtocolMpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::PseudowireClass::ProtocolL2Tpv2::ProtocolL2Tpv2()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "protocol-l2tpv2"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::ProtocolL2Tpv2::~ProtocolL2Tpv2()
{
}

bool Native::PseudowireClass::ProtocolL2Tpv2::has_data() const
{
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolL2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::PseudowireClass::ProtocolL2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-l2tpv2";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::ProtocolL2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolL2Tpv2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::ProtocolL2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::ProtocolL2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::ProtocolL2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::PseudowireClass::ProtocolL2Tpv3::ProtocolL2Tpv3()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "protocol-l2tpv3"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::ProtocolL2Tpv3::~ProtocolL2Tpv3()
{
}

bool Native::PseudowireClass::ProtocolL2Tpv3::has_data() const
{
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolL2Tpv3::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::PseudowireClass::ProtocolL2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-l2tpv3";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::ProtocolL2Tpv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolL2Tpv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::ProtocolL2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::ProtocolL2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::ProtocolL2Tpv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::PseudowireClass::Status::Status()
    :
    decoupled{YType::empty, "decoupled"}
    	,
    admin_down(std::make_shared<Native::PseudowireClass::Status::AdminDown>())
	,control_plane(std::make_shared<Native::PseudowireClass::Status::ControlPlane>())
	,peer(std::make_shared<Native::PseudowireClass::Status::Peer>())
	,redundancy(std::make_shared<Native::PseudowireClass::Status::Redundancy>())
{
    admin_down->parent = this;

    control_plane->parent = this;

    peer->parent = this;

    redundancy->parent = this;

    yang_name = "status"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::Status::~Status()
{
}

bool Native::PseudowireClass::Status::has_data() const
{
    return decoupled.is_set
	|| (admin_down !=  nullptr && admin_down->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::PseudowireClass::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(decoupled.operation)
	|| (admin_down !=  nullptr && admin_down->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::PseudowireClass::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:status";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decoupled.is_set || is_set(decoupled.operation)) leaf_name_data.push_back(decoupled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-down")
    {
        if(admin_down == nullptr)
        {
            admin_down = std::make_shared<Native::PseudowireClass::Status::AdminDown>();
        }
        return admin_down;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::PseudowireClass::Status::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::PseudowireClass::Status::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::PseudowireClass::Status::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_down != nullptr)
    {
        children["admin-down"] = admin_down;
    }

    if(control_plane != nullptr)
    {
        children["control-plane"] = control_plane;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::PseudowireClass::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decoupled")
    {
        decoupled = value;
    }
}

Native::PseudowireClass::Status::AdminDown::AdminDown()
    :
    disconnect{YType::empty, "disconnect"}
{
    yang_name = "admin-down"; yang_parent_name = "status";
}

Native::PseudowireClass::Status::AdminDown::~AdminDown()
{
}

bool Native::PseudowireClass::Status::AdminDown::has_data() const
{
    return disconnect.is_set;
}

bool Native::PseudowireClass::Status::AdminDown::has_operation() const
{
    return is_set(operation)
	|| is_set(disconnect.operation);
}

std::string Native::PseudowireClass::Status::AdminDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-down";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Status::AdminDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminDown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnect.is_set || is_set(disconnect.operation)) leaf_name_data.push_back(disconnect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::AdminDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::AdminDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::AdminDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disconnect")
    {
        disconnect = value;
    }
}

Native::PseudowireClass::Status::ControlPlane::ControlPlane()
    :
    route_watch{YType::empty, "route-watch"}
{
    yang_name = "control-plane"; yang_parent_name = "status";
}

Native::PseudowireClass::Status::ControlPlane::~ControlPlane()
{
}

bool Native::PseudowireClass::Status::ControlPlane::has_data() const
{
    return route_watch.is_set;
}

bool Native::PseudowireClass::Status::ControlPlane::has_operation() const
{
    return is_set(operation)
	|| is_set(route_watch.operation);
}

std::string Native::PseudowireClass::Status::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Status::ControlPlane::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ControlPlane' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_watch.is_set || is_set(route_watch.operation)) leaf_name_data.push_back(route_watch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::ControlPlane::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-watch")
    {
        route_watch = value;
    }
}

Native::PseudowireClass::Status::Peer::Peer()
    :
    topology(std::make_shared<Native::PseudowireClass::Status::Peer::Topology>())
{
    topology->parent = this;

    yang_name = "peer"; yang_parent_name = "status";
}

Native::PseudowireClass::Status::Peer::~Peer()
{
}

bool Native::PseudowireClass::Status::Peer::has_data() const
{
    return (topology !=  nullptr && topology->has_data());
}

bool Native::PseudowireClass::Status::Peer::has_operation() const
{
    return is_set(operation)
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::PseudowireClass::Status::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Status::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::PseudowireClass::Status::Peer::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    return children;
}

void Native::PseudowireClass::Status::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::PseudowireClass::Status::Peer::Topology::Topology()
    :
    dual_homed{YType::empty, "dual-homed"}
{
    yang_name = "topology"; yang_parent_name = "peer";
}

Native::PseudowireClass::Status::Peer::Topology::~Topology()
{
}

bool Native::PseudowireClass::Status::Peer::Topology::has_data() const
{
    return dual_homed.is_set;
}

bool Native::PseudowireClass::Status::Peer::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_homed.operation);
}

std::string Native::PseudowireClass::Status::Peer::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Status::Peer::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_homed.is_set || is_set(dual_homed.operation)) leaf_name_data.push_back(dual_homed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::Peer::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::Peer::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::Peer::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-homed")
    {
        dual_homed = value;
    }
}

Native::PseudowireClass::Status::Redundancy::Redundancy()
    :
    master{YType::empty, "master"}
{
    yang_name = "redundancy"; yang_parent_name = "status";
}

Native::PseudowireClass::Status::Redundancy::~Redundancy()
{
}

bool Native::PseudowireClass::Status::Redundancy::has_data() const
{
    return master.is_set;
}

bool Native::PseudowireClass::Status::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(master.operation);
}

std::string Native::PseudowireClass::Status::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Status::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.operation)) leaf_name_data.push_back(master.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Status::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Status::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Status::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "master")
    {
        master = value;
    }
}

Native::PseudowireClass::Switching::Switching()
    :
    tlv{YType::empty, "tlv"}
{
    yang_name = "switching"; yang_parent_name = "pseudowire-class";
}

Native::PseudowireClass::Switching::~Switching()
{
}

bool Native::PseudowireClass::Switching::has_data() const
{
    return tlv.is_set;
}

bool Native::PseudowireClass::Switching::has_operation() const
{
    return is_set(operation)
	|| is_set(tlv.operation);
}

std::string Native::PseudowireClass::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:switching";

    return path_buffer.str();

}

const EntityPath Native::PseudowireClass::Switching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switching' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv.is_set || is_set(tlv.operation)) leaf_name_data.push_back(tlv.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PseudowireClass::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PseudowireClass::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PseudowireClass::Switching::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tlv")
    {
        tlv = value;
    }
}

Native::ControlPlane::ControlPlane()
    :
    service_policy(std::make_shared<Native::ControlPlane::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "control-plane"; yang_parent_name = "native";
}

Native::ControlPlane::~ControlPlane()
{
}

bool Native::ControlPlane::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ControlPlane::has_operation() const
{
    return is_set(operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";

    return path_buffer.str();

}

const EntityPath Native::ControlPlane::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ControlPlane::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::ControlPlane::set_value(const std::string & value_path, std::string value)
{
}

Native::ControlPlane::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "control-plane";
}

Native::ControlPlane::ServicePolicy::~ServicePolicy()
{
}

bool Native::ControlPlane::ServicePolicy::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::ControlPlane::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::ControlPlane::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";

    return path_buffer.str();

}

const EntityPath Native::ControlPlane::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/control-plane/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ControlPlane::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlane::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ControlPlane::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Clock::Clock()
    :
    calendar_valid(nullptr) // presence node
	,summer_time(std::make_shared<Native::Clock::SummerTime>())
	,timezone(std::make_shared<Native::Clock::Timezone>())
{
    summer_time->parent = this;

    timezone->parent = this;

    yang_name = "clock"; yang_parent_name = "native";
}

Native::Clock::~Clock()
{
}

bool Native::Clock::has_data() const
{
    return (calendar_valid !=  nullptr && calendar_valid->has_data())
	|| (summer_time !=  nullptr && summer_time->has_data())
	|| (timezone !=  nullptr && timezone->has_data());
}

bool Native::Clock::has_operation() const
{
    return is_set(operation)
	|| (calendar_valid !=  nullptr && calendar_valid->has_operation())
	|| (summer_time !=  nullptr && summer_time->has_operation())
	|| (timezone !=  nullptr && timezone->has_operation());
}

std::string Native::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

const EntityPath Native::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "calendar-valid")
    {
        if(calendar_valid == nullptr)
        {
            calendar_valid = std::make_shared<Native::Clock::CalendarValid>();
        }
        return calendar_valid;
    }

    if(child_yang_name == "summer-time")
    {
        if(summer_time == nullptr)
        {
            summer_time = std::make_shared<Native::Clock::SummerTime>();
        }
        return summer_time;
    }

    if(child_yang_name == "timezone")
    {
        if(timezone == nullptr)
        {
            timezone = std::make_shared<Native::Clock::Timezone>();
        }
        return timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(calendar_valid != nullptr)
    {
        children["calendar-valid"] = calendar_valid;
    }

    if(summer_time != nullptr)
    {
        children["summer-time"] = summer_time;
    }

    if(timezone != nullptr)
    {
        children["timezone"] = timezone;
    }

    return children;
}

void Native::Clock::set_value(const std::string & value_path, std::string value)
{
}

Native::Clock::CalendarValid::CalendarValid()
{
    yang_name = "calendar-valid"; yang_parent_name = "clock";
}

Native::Clock::CalendarValid::~CalendarValid()
{
}

bool Native::Clock::CalendarValid::has_data() const
{
    return false;
}

bool Native::Clock::CalendarValid::has_operation() const
{
    return is_set(operation);
}

std::string Native::Clock::CalendarValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calendar-valid";

    return path_buffer.str();

}

const EntityPath Native::Clock::CalendarValid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Clock::CalendarValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock::CalendarValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Clock::CalendarValid::set_value(const std::string & value_path, std::string value)
{
}

Native::Clock::SummerTime::SummerTime()
    :
    date{YType::empty, "date"},
    date_end_day{YType::uint8, "date-end-day"},
    date_end_month{YType::enumeration, "date-end-month"},
    date_end_time{YType::str, "date-end-time"},
    date_end_year{YType::uint32, "date-end-year"},
    offset{YType::uint16, "offset"},
    recurring{YType::empty, "recurring"},
    recurring_end{YType::str, "recurring-end"},
    recurring_end_day{YType::enumeration, "recurring-end-day"},
    recurring_end_month{YType::enumeration, "recurring-end-month"},
    recurring_end_time{YType::str, "recurring-end-time"},
    recurring_offset{YType::uint16, "recurring-offset"},
    recurring_start{YType::str, "recurring-start"},
    recurring_start_day{YType::enumeration, "recurring-start-day"},
    recurring_start_month{YType::enumeration, "recurring-start-month"},
    recurring_start_time{YType::str, "recurring-start-time"},
    start_day{YType::uint8, "start-day"},
    start_month{YType::enumeration, "start-month"},
    start_time{YType::str, "start-time"},
    start_year{YType::uint32, "start-year"},
    zone{YType::str, "zone"}
{
    yang_name = "summer-time"; yang_parent_name = "clock";
}

Native::Clock::SummerTime::~SummerTime()
{
}

bool Native::Clock::SummerTime::has_data() const
{
    return date.is_set
	|| date_end_day.is_set
	|| date_end_month.is_set
	|| date_end_time.is_set
	|| date_end_year.is_set
	|| offset.is_set
	|| recurring.is_set
	|| recurring_end.is_set
	|| recurring_end_day.is_set
	|| recurring_end_month.is_set
	|| recurring_end_time.is_set
	|| recurring_offset.is_set
	|| recurring_start.is_set
	|| recurring_start_day.is_set
	|| recurring_start_month.is_set
	|| recurring_start_time.is_set
	|| start_day.is_set
	|| start_month.is_set
	|| start_time.is_set
	|| start_year.is_set
	|| zone.is_set;
}

bool Native::Clock::SummerTime::has_operation() const
{
    return is_set(operation)
	|| is_set(date.operation)
	|| is_set(date_end_day.operation)
	|| is_set(date_end_month.operation)
	|| is_set(date_end_time.operation)
	|| is_set(date_end_year.operation)
	|| is_set(offset.operation)
	|| is_set(recurring.operation)
	|| is_set(recurring_end.operation)
	|| is_set(recurring_end_day.operation)
	|| is_set(recurring_end_month.operation)
	|| is_set(recurring_end_time.operation)
	|| is_set(recurring_offset.operation)
	|| is_set(recurring_start.operation)
	|| is_set(recurring_start_day.operation)
	|| is_set(recurring_start_month.operation)
	|| is_set(recurring_start_time.operation)
	|| is_set(start_day.operation)
	|| is_set(start_month.operation)
	|| is_set(start_time.operation)
	|| is_set(start_year.operation)
	|| is_set(zone.operation);
}

std::string Native::Clock::SummerTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summer-time";

    return path_buffer.str();

}

const EntityPath Native::Clock::SummerTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.operation)) leaf_name_data.push_back(date.get_name_leafdata());
    if (date_end_day.is_set || is_set(date_end_day.operation)) leaf_name_data.push_back(date_end_day.get_name_leafdata());
    if (date_end_month.is_set || is_set(date_end_month.operation)) leaf_name_data.push_back(date_end_month.get_name_leafdata());
    if (date_end_time.is_set || is_set(date_end_time.operation)) leaf_name_data.push_back(date_end_time.get_name_leafdata());
    if (date_end_year.is_set || is_set(date_end_year.operation)) leaf_name_data.push_back(date_end_year.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.operation)) leaf_name_data.push_back(recurring.get_name_leafdata());
    if (recurring_end.is_set || is_set(recurring_end.operation)) leaf_name_data.push_back(recurring_end.get_name_leafdata());
    if (recurring_end_day.is_set || is_set(recurring_end_day.operation)) leaf_name_data.push_back(recurring_end_day.get_name_leafdata());
    if (recurring_end_month.is_set || is_set(recurring_end_month.operation)) leaf_name_data.push_back(recurring_end_month.get_name_leafdata());
    if (recurring_end_time.is_set || is_set(recurring_end_time.operation)) leaf_name_data.push_back(recurring_end_time.get_name_leafdata());
    if (recurring_offset.is_set || is_set(recurring_offset.operation)) leaf_name_data.push_back(recurring_offset.get_name_leafdata());
    if (recurring_start.is_set || is_set(recurring_start.operation)) leaf_name_data.push_back(recurring_start.get_name_leafdata());
    if (recurring_start_day.is_set || is_set(recurring_start_day.operation)) leaf_name_data.push_back(recurring_start_day.get_name_leafdata());
    if (recurring_start_month.is_set || is_set(recurring_start_month.operation)) leaf_name_data.push_back(recurring_start_month.get_name_leafdata());
    if (recurring_start_time.is_set || is_set(recurring_start_time.operation)) leaf_name_data.push_back(recurring_start_time.get_name_leafdata());
    if (start_day.is_set || is_set(start_day.operation)) leaf_name_data.push_back(start_day.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.operation)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.operation)) leaf_name_data.push_back(start_year.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Clock::SummerTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock::SummerTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Clock::SummerTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "date")
    {
        date = value;
    }
    if(value_path == "date-end-day")
    {
        date_end_day = value;
    }
    if(value_path == "date-end-month")
    {
        date_end_month = value;
    }
    if(value_path == "date-end-time")
    {
        date_end_time = value;
    }
    if(value_path == "date-end-year")
    {
        date_end_year = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "recurring")
    {
        recurring = value;
    }
    if(value_path == "recurring-end")
    {
        recurring_end = value;
    }
    if(value_path == "recurring-end-day")
    {
        recurring_end_day = value;
    }
    if(value_path == "recurring-end-month")
    {
        recurring_end_month = value;
    }
    if(value_path == "recurring-end-time")
    {
        recurring_end_time = value;
    }
    if(value_path == "recurring-offset")
    {
        recurring_offset = value;
    }
    if(value_path == "recurring-start")
    {
        recurring_start = value;
    }
    if(value_path == "recurring-start-day")
    {
        recurring_start_day = value;
    }
    if(value_path == "recurring-start-month")
    {
        recurring_start_month = value;
    }
    if(value_path == "recurring-start-time")
    {
        recurring_start_time = value;
    }
    if(value_path == "start-day")
    {
        start_day = value;
    }
    if(value_path == "start-month")
    {
        start_month = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "start-year")
    {
        start_year = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

Native::Clock::Timezone::Timezone()
    :
    hours{YType::int8, "hours"},
    minutes{YType::int8, "minutes"},
    offset{YType::enumeration, "offset"},
    zone{YType::str, "zone"}
{
    yang_name = "timezone"; yang_parent_name = "clock";
}

Native::Clock::Timezone::~Timezone()
{
}

bool Native::Clock::Timezone::has_data() const
{
    return hours.is_set
	|| minutes.is_set
	|| offset.is_set
	|| zone.is_set;
}

bool Native::Clock::Timezone::has_operation() const
{
    return is_set(operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(offset.operation)
	|| is_set(zone.operation);
}

std::string Native::Clock::Timezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timezone";

    return path_buffer.str();

}

const EntityPath Native::Clock::Timezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Clock::Timezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock::Timezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Clock::Timezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

Native::Logging::Logging()
    :
    alarm{YType::str, "alarm"},
    buginf{YType::empty, "buginf"},
    facility{YType::enumeration, "facility"},
    hostip{YType::str, "hostip"},
    snmp_authfail{YType::empty, "snmp-authfail"},
    userinfo{YType::empty, "userinfo"}
    	,
    buffered(nullptr) // presence node
	,console(nullptr) // presence node
	,console_conf(std::make_shared<Native::Logging::ConsoleConf>())
	,esm(std::make_shared<Native::Logging::Esm>())
	,event(std::make_shared<Native::Logging::Event>())
	,file(std::make_shared<Native::Logging::File>())
	,history(std::make_shared<Native::Logging::History>())
	,host(std::make_shared<Native::Logging::Host>())
	,monitor(nullptr) // presence node
	,monitor_conf(std::make_shared<Native::Logging::MonitorConf>())
	,persistent(nullptr) // presence node
	,rate_limit(nullptr) // presence node
	,rate_limit_conf(std::make_shared<Native::Logging::RateLimitConf>())
	,snmp_trap(std::make_shared<Native::Logging::SnmpTrap>())
	,source_interface(std::make_shared<Native::Logging::SourceInterface>())
	,trap(nullptr) // presence node
{
    console_conf->parent = this;

    esm->parent = this;

    event->parent = this;

    file->parent = this;

    history->parent = this;

    host->parent = this;

    monitor_conf->parent = this;

    rate_limit_conf->parent = this;

    snmp_trap->parent = this;

    source_interface->parent = this;

    yang_name = "logging"; yang_parent_name = "native";
}

Native::Logging::~Logging()
{
}

bool Native::Logging::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return alarm.is_set
	|| buginf.is_set
	|| facility.is_set
	|| hostip.is_set
	|| snmp_authfail.is_set
	|| userinfo.is_set
	|| (buffered !=  nullptr && buffered->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (console_conf !=  nullptr && console_conf->has_data())
	|| (esm !=  nullptr && esm->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (file !=  nullptr && file->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (monitor_conf !=  nullptr && monitor_conf->has_data())
	|| (persistent !=  nullptr && persistent->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (rate_limit_conf !=  nullptr && rate_limit_conf->has_data())
	|| (snmp_trap !=  nullptr && snmp_trap->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Logging::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm.operation)
	|| is_set(buginf.operation)
	|| is_set(facility.operation)
	|| is_set(hostip.operation)
	|| is_set(snmp_authfail.operation)
	|| is_set(userinfo.operation)
	|| (buffered !=  nullptr && buffered->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (console_conf !=  nullptr && console_conf->has_operation())
	|| (esm !=  nullptr && esm->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (file !=  nullptr && file->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (monitor_conf !=  nullptr && monitor_conf->has_operation())
	|| (persistent !=  nullptr && persistent->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (rate_limit_conf !=  nullptr && rate_limit_conf->has_operation())
	|| (snmp_trap !=  nullptr && snmp_trap->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.operation)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (buginf.is_set || is_set(buginf.operation)) leaf_name_data.push_back(buginf.get_name_leafdata());
    if (facility.is_set || is_set(facility.operation)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (hostip.is_set || is_set(hostip.operation)) leaf_name_data.push_back(hostip.get_name_leafdata());
    if (snmp_authfail.is_set || is_set(snmp_authfail.operation)) leaf_name_data.push_back(snmp_authfail.get_name_leafdata());
    if (userinfo.is_set || is_set(userinfo.operation)) leaf_name_data.push_back(userinfo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffered")
    {
        if(buffered == nullptr)
        {
            buffered = std::make_shared<Native::Logging::Buffered>();
        }
        return buffered;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Logging::Console>();
        }
        return console;
    }

    if(child_yang_name == "console-conf")
    {
        if(console_conf == nullptr)
        {
            console_conf = std::make_shared<Native::Logging::ConsoleConf>();
        }
        return console_conf;
    }

    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    if(child_yang_name == "esm")
    {
        if(esm == nullptr)
        {
            esm = std::make_shared<Native::Logging::Esm>();
        }
        return esm;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Logging::Event>();
        }
        return event;
    }

    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Logging::File>();
        }
        return file;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Logging::History>();
        }
        return history;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Logging::Host>();
        }
        return host;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Logging::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "monitor-conf")
    {
        if(monitor_conf == nullptr)
        {
            monitor_conf = std::make_shared<Native::Logging::MonitorConf>();
        }
        return monitor_conf;
    }

    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::Logging::Persistent>();
        }
        return persistent;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Logging::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "rate-limit-conf")
    {
        if(rate_limit_conf == nullptr)
        {
            rate_limit_conf = std::make_shared<Native::Logging::RateLimitConf>();
        }
        return rate_limit_conf;
    }

    if(child_yang_name == "snmp-trap")
    {
        if(snmp_trap == nullptr)
        {
            snmp_trap = std::make_shared<Native::Logging::SnmpTrap>();
        }
        return snmp_trap;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Logging::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Logging::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffered != nullptr)
    {
        children["buffered"] = buffered;
    }

    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(console_conf != nullptr)
    {
        children["console-conf"] = console_conf;
    }

    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    if(esm != nullptr)
    {
        children["esm"] = esm;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(monitor_conf != nullptr)
    {
        children["monitor-conf"] = monitor_conf;
    }

    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(rate_limit_conf != nullptr)
    {
        children["rate-limit-conf"] = rate_limit_conf;
    }

    if(snmp_trap != nullptr)
    {
        children["snmp-trap"] = snmp_trap;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    return children;
}

void Native::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm")
    {
        alarm = value;
    }
    if(value_path == "buginf")
    {
        buginf = value;
    }
    if(value_path == "facility")
    {
        facility = value;
    }
    if(value_path == "hostip")
    {
        hostip = value;
    }
    if(value_path == "snmp-authfail")
    {
        snmp_authfail = value;
    }
    if(value_path == "userinfo")
    {
        userinfo = value;
    }
}

Native::Logging::Discriminator::Discriminator()
    :
    name{YType::str, "name"}
    	,
    msg_body(std::make_shared<Native::Logging::Discriminator::MsgBody>())
{
    msg_body->parent = this;

    yang_name = "discriminator"; yang_parent_name = "logging";
}

Native::Logging::Discriminator::~Discriminator()
{
}

bool Native::Logging::Discriminator::has_data() const
{
    return name.is_set
	|| (msg_body !=  nullptr && msg_body->has_data());
}

bool Native::Logging::Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (msg_body !=  nullptr && msg_body->has_operation());
}

std::string Native::Logging::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msg-body")
    {
        if(msg_body == nullptr)
        {
            msg_body = std::make_shared<Native::Logging::Discriminator::MsgBody>();
        }
        return msg_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msg_body != nullptr)
    {
        children["msg-body"] = msg_body;
    }

    return children;
}

void Native::Logging::Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Logging::Discriminator::MsgBody::MsgBody()
    :
    includes{YType::str, "includes"}
{
    yang_name = "msg-body"; yang_parent_name = "discriminator";
}

Native::Logging::Discriminator::MsgBody::~MsgBody()
{
}

bool Native::Logging::Discriminator::MsgBody::has_data() const
{
    return includes.is_set;
}

bool Native::Logging::Discriminator::MsgBody::has_operation() const
{
    return is_set(operation)
	|| is_set(includes.operation);
}

std::string Native::Logging::Discriminator::MsgBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-body";

    return path_buffer.str();

}

const EntityPath Native::Logging::Discriminator::MsgBody::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgBody' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (includes.is_set || is_set(includes.operation)) leaf_name_data.push_back(includes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Discriminator::MsgBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Discriminator::MsgBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Discriminator::MsgBody::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "includes")
    {
        includes = value;
    }
}

Native::Logging::Persistent::Persistent()
    :
    file(std::make_shared<Native::Logging::Persistent::File>())
{
    file->parent = this;

    yang_name = "persistent"; yang_parent_name = "logging";
}

Native::Logging::Persistent::~Persistent()
{
}

bool Native::Logging::Persistent::has_data() const
{
    return (file !=  nullptr && file->has_data());
}

bool Native::Logging::Persistent::has_operation() const
{
    return is_set(operation)
	|| (file !=  nullptr && file->has_operation());
}

std::string Native::Logging::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";

    return path_buffer.str();

}

const EntityPath Native::Logging::Persistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Logging::Persistent::File>();
        }
        return file;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    return children;
}

void Native::Logging::Persistent::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::Persistent::File::File()
    :
    protected_{YType::empty, "protected"},
    size{YType::str, "size"},
    threshold{YType::str, "threshold"},
    url{YType::str, "url"}
{
    yang_name = "file"; yang_parent_name = "persistent";
}

Native::Logging::Persistent::File::~File()
{
}

bool Native::Logging::Persistent::File::has_data() const
{
    return protected_.is_set
	|| size.is_set
	|| threshold.is_set
	|| url.is_set;
}

bool Native::Logging::Persistent::File::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_.operation)
	|| is_set(size.operation)
	|| is_set(threshold.operation)
	|| is_set(url.operation);
}

std::string Native::Logging::Persistent::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Native::Logging::Persistent::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/persistent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Persistent::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Persistent::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Persistent::File::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected")
    {
        protected_ = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

Native::Logging::MonitorConf::MonitorConf()
    :
    monitor{YType::boolean, "monitor"}
{
    yang_name = "monitor-conf"; yang_parent_name = "logging";
}

Native::Logging::MonitorConf::~MonitorConf()
{
}

bool Native::Logging::MonitorConf::has_data() const
{
    return monitor.is_set;
}

bool Native::Logging::MonitorConf::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor.operation);
}

std::string Native::Logging::MonitorConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-conf";

    return path_buffer.str();

}

const EntityPath Native::Logging::MonitorConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::MonitorConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::MonitorConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::MonitorConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

Native::Logging::Monitor::Monitor()
    :
    severity{YType::str, "severity"}
{
    yang_name = "monitor"; yang_parent_name = "logging";
}

Native::Logging::Monitor::~Monitor()
{
}

bool Native::Logging::Monitor::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return severity.is_set;
}

bool Native::Logging::Monitor::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(severity.operation);
}

std::string Native::Logging::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Logging::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Monitor::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Logging::Monitor::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{
    yang_name = "discriminator"; yang_parent_name = "monitor";
}

Native::Logging::Monitor::Discriminator::~Discriminator()
{
}

bool Native::Logging::Monitor::Discriminator::has_data() const
{
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Monitor::Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(severity.operation);
}

std::string Native::Logging::Monitor::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::Monitor::Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Monitor::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Monitor::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Monitor::Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Logging::Buffered::Buffered()
    :
    severity{YType::str, "severity"},
    size{YType::uint32, "size"},
    xxml{YType::uint32, "xxml"}
{
    yang_name = "buffered"; yang_parent_name = "logging";
}

Native::Logging::Buffered::~Buffered()
{
}

bool Native::Logging::Buffered::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return severity.is_set
	|| size.is_set
	|| xxml.is_set;
}

bool Native::Logging::Buffered::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(severity.operation)
	|| is_set(size.operation)
	|| is_set(xxml.operation);
}

std::string Native::Logging::Buffered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered";

    return path_buffer.str();

}

const EntityPath Native::Logging::Buffered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (xxml.is_set || is_set(xxml.operation)) leaf_name_data.push_back(xxml.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Buffered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Buffered::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Buffered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Buffered::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "xxml")
    {
        xxml = value;
    }
}

Native::Logging::Buffered::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{
    yang_name = "discriminator"; yang_parent_name = "buffered";
}

Native::Logging::Buffered::Discriminator::~Discriminator()
{
}

bool Native::Logging::Buffered::Discriminator::has_data() const
{
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Buffered::Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(severity.operation);
}

std::string Native::Logging::Buffered::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::Buffered::Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/buffered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Buffered::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Buffered::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Buffered::Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Logging::ConsoleConf::ConsoleConf()
    :
    console{YType::boolean, "console"}
{
    yang_name = "console-conf"; yang_parent_name = "logging";
}

Native::Logging::ConsoleConf::~ConsoleConf()
{
}

bool Native::Logging::ConsoleConf::has_data() const
{
    return console.is_set;
}

bool Native::Logging::ConsoleConf::has_operation() const
{
    return is_set(operation)
	|| is_set(console.operation);
}

std::string Native::Logging::ConsoleConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-conf";

    return path_buffer.str();

}

const EntityPath Native::Logging::ConsoleConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (console.is_set || is_set(console.operation)) leaf_name_data.push_back(console.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::ConsoleConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::ConsoleConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::ConsoleConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "console")
    {
        console = value;
    }
}

Native::Logging::Console::Console()
    :
    filtered{YType::empty, "filtered"},
    guaranteed{YType::empty, "guaranteed"},
    severity{YType::str, "severity"},
    xxml{YType::str, "xxml"}
{
    yang_name = "console"; yang_parent_name = "logging";
}

Native::Logging::Console::~Console()
{
}

bool Native::Logging::Console::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return filtered.is_set
	|| guaranteed.is_set
	|| severity.is_set
	|| xxml.is_set;
}

bool Native::Logging::Console::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(filtered.operation)
	|| is_set(guaranteed.operation)
	|| is_set(severity.operation)
	|| is_set(xxml.operation);
}

std::string Native::Logging::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";

    return path_buffer.str();

}

const EntityPath Native::Logging::Console::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filtered.is_set || is_set(filtered.operation)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (guaranteed.is_set || is_set(guaranteed.operation)) leaf_name_data.push_back(guaranteed.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (xxml.is_set || is_set(xxml.operation)) leaf_name_data.push_back(xxml.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Console::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Console::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filtered")
    {
        filtered = value;
    }
    if(value_path == "guaranteed")
    {
        guaranteed = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "xxml")
    {
        xxml = value;
    }
}

Native::Logging::Console::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{
    yang_name = "discriminator"; yang_parent_name = "console";
}

Native::Logging::Console::Discriminator::~Discriminator()
{
}

bool Native::Logging::Console::Discriminator::has_data() const
{
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Console::Discriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(severity.operation);
}

std::string Native::Logging::Console::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::Console::Discriminator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/console/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Console::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Console::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Console::Discriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Logging::Event::Event()
    :
    link_status(std::make_shared<Native::Logging::Event::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "event"; yang_parent_name = "logging";
}

Native::Logging::Event::~Event()
{
}

bool Native::Logging::Event::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Logging::Event::has_operation() const
{
    return is_set(operation)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Logging::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Logging::Event::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Logging::Event::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::Event::LinkStatus::LinkStatus()
    :
    boot{YType::empty, "boot"},
    default_{YType::empty, "default"},
    global{YType::empty, "global"}
{
    yang_name = "link-status"; yang_parent_name = "event";
}

Native::Logging::Event::LinkStatus::~LinkStatus()
{
}

bool Native::Logging::Event::LinkStatus::has_data() const
{
    return boot.is_set
	|| default_.is_set
	|| global.is_set;
}

bool Native::Logging::Event::LinkStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(boot.operation)
	|| is_set(default_.operation)
	|| is_set(global.operation);
}

std::string Native::Logging::Event::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";

    return path_buffer.str();

}

const EntityPath Native::Logging::Event::LinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/event/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot.is_set || is_set(boot.operation)) leaf_name_data.push_back(boot.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Event::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Event::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Event::LinkStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot")
    {
        boot = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
}

Native::Logging::Esm::Esm()
    :
    config{YType::empty, "config"}
{
    yang_name = "esm"; yang_parent_name = "logging";
}

Native::Logging::Esm::~Esm()
{
}

bool Native::Logging::Esm::has_data() const
{
    return config.is_set;
}

bool Native::Logging::Esm::has_operation() const
{
    return is_set(operation)
	|| is_set(config.operation);
}

std::string Native::Logging::Esm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esm";

    return path_buffer.str();

}

const EntityPath Native::Logging::Esm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Esm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Esm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Esm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config")
    {
        config = value;
    }
}

Native::Logging::History::History()
    :
    severity_level{YType::str, "severity-level"},
    size{YType::uint16, "size"}
{
    yang_name = "history"; yang_parent_name = "logging";
}

Native::Logging::History::~History()
{
}

bool Native::Logging::History::has_data() const
{
    return severity_level.is_set
	|| size.is_set;
}

bool Native::Logging::History::has_operation() const
{
    return is_set(operation)
	|| is_set(severity_level.operation)
	|| is_set(size.operation);
}

std::string Native::Logging::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Logging::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity_level.is_set || is_set(severity_level.operation)) leaf_name_data.push_back(severity_level.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity-level")
    {
        severity_level = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Logging::Host::Host()
    :
    ipv6(std::make_shared<Native::Logging::Host::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "host"; yang_parent_name = "logging";
}

Native::Logging::Host::~Host()
{
}

bool Native::Logging::Host::has_data() const
{
    for (std::size_t index=0; index<ipv4_host_list.size(); index++)
    {
        if(ipv4_host_list[index]->has_data())
            return true;
    }
    return (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Logging::Host::has_operation() const
{
    for (std::size_t index=0; index<ipv4_host_list.size(); index++)
    {
        if(ipv4_host_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Logging::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Logging::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-host-list")
    {
        for(auto const & c : ipv4_host_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv4HostList>();
        c->parent = this;
        ipv4_host_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Logging::Host::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_host_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Logging::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::Host::Ipv4HostList::Ipv4HostList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    discriminator{YType::str, "discriminator"},
    vrf{YType::str, "vrf"}
{
    yang_name = "ipv4-host-list"; yang_parent_name = "host";
}

Native::Logging::Host::Ipv4HostList::~Ipv4HostList()
{
}

bool Native::Logging::Host::Ipv4HostList::has_data() const
{
    return ipv4_host.is_set
	|| discriminator.is_set
	|| vrf.is_set;
}

bool Native::Logging::Host::Ipv4HostList::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_host.operation)
	|| is_set(discriminator.operation)
	|| is_set(vrf.operation);
}

std::string Native::Logging::Host::Ipv4HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-list" <<"[ipv4-host='" <<ipv4_host <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::Host::Ipv4HostList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.operation)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.operation)) leaf_name_data.push_back(discriminator.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv4HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv4HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv4HostList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Logging::Host::Ipv6::Ipv6()
{
    yang_name = "ipv6"; yang_parent_name = "host";
}

Native::Logging::Host::Ipv6::~Ipv6()
{
}

bool Native::Logging::Host::Ipv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_host_list.size(); index++)
    {
        if(ipv6_host_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_host_list.size(); index++)
    {
        if(ipv6_host_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Logging::Host::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Logging::Host::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-host-list")
    {
        for(auto const & c : ipv6_host_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostList>();
        c->parent = this;
        ipv6_host_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_host_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Host::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::Host::Ipv6::Ipv6HostList::Ipv6HostList()
    :
    ipv6_host{YType::str, "ipv6-host"}
{
    yang_name = "ipv6-host-list"; yang_parent_name = "ipv6";
}

Native::Logging::Host::Ipv6::Ipv6HostList::~Ipv6HostList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_data() const
{
    return ipv6_host.is_set;
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_host.operation);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-list" <<"[ipv6-host='" <<ipv6_host <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::Host::Ipv6::Ipv6HostList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.operation)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
    }
}

Native::Logging::RateLimitConf::RateLimitConf()
    :
    rate_limit{YType::boolean, "rate-limit"}
{
    yang_name = "rate-limit-conf"; yang_parent_name = "logging";
}

Native::Logging::RateLimitConf::~RateLimitConf()
{
}

bool Native::Logging::RateLimitConf::has_data() const
{
    return rate_limit.is_set;
}

bool Native::Logging::RateLimitConf::has_operation() const
{
    return is_set(operation)
	|| is_set(rate_limit.operation);
}

std::string Native::Logging::RateLimitConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit-conf";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimitConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimitConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimitConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimitConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

Native::Logging::RateLimit::RateLimit()
    :
    console(std::make_shared<Native::Logging::RateLimit::Console>())
{
    console->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "logging";
}

Native::Logging::RateLimit::~RateLimit()
{
}

bool Native::Logging::RateLimit::has_data() const
{
    return (console !=  nullptr && console->has_data());
}

bool Native::Logging::RateLimit::has_operation() const
{
    return is_set(operation)
	|| (console !=  nullptr && console->has_operation());
}

std::string Native::Logging::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Logging::RateLimit::Console>();
        }
        return console;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console != nullptr)
    {
        children["console"] = console;
    }

    return children;
}

void Native::Logging::RateLimit::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::RateLimit::Console::Console()
    :
    all(std::make_shared<Native::Logging::RateLimit::Console::All>())
{
    all->parent = this;

    yang_name = "console"; yang_parent_name = "rate-limit";
}

Native::Logging::RateLimit::Console::~Console()
{
}

bool Native::Logging::RateLimit::Console::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Logging::RateLimit::Console::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Logging::RateLimit::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::Console::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Logging::RateLimit::Console::All>();
        }
        return all;
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::RateLimit::Console::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::RateLimit::Console::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::RateLimit::Console::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    except(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "console";
}

Native::Logging::RateLimit::Console::Range::~Range()
{
}

bool Native::Logging::RateLimit::Console::Range::has_data() const
{
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Console::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Console::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::Console::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Console::Range::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(except != nullptr)
    {
        children["except"] = except;
    }

    return children;
}

void Native::Logging::RateLimit::Console::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Logging::RateLimit::Console::Range::Except::Except()
    :
    alerts{YType::empty, "alerts"},
    critical{YType::empty, "critical"},
    debugging{YType::empty, "debugging"},
    emergencies{YType::empty, "emergencies"},
    errors{YType::empty, "errors"},
    informational{YType::empty, "informational"},
    notifications{YType::empty, "notifications"},
    range{YType::uint8, "range"},
    warnings{YType::empty, "warnings"}
{
    yang_name = "except"; yang_parent_name = "range";
}

Native::Logging::RateLimit::Console::Range::Except::~Except()
{
}

bool Native::Logging::RateLimit::Console::Range::Except::has_data() const
{
    return alerts.is_set
	|| critical.is_set
	|| debugging.is_set
	|| emergencies.is_set
	|| errors.is_set
	|| informational.is_set
	|| notifications.is_set
	|| range.is_set
	|| warnings.is_set;
}

bool Native::Logging::RateLimit::Console::Range::Except::has_operation() const
{
    return is_set(operation)
	|| is_set(alerts.operation)
	|| is_set(critical.operation)
	|| is_set(debugging.operation)
	|| is_set(emergencies.operation)
	|| is_set(errors.operation)
	|| is_set(informational.operation)
	|| is_set(notifications.operation)
	|| is_set(range.operation)
	|| is_set(warnings.operation);
}

std::string Native::Logging::RateLimit::Console::Range::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::Console::Range::Except::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Except' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alerts.is_set || is_set(alerts.operation)) leaf_name_data.push_back(alerts.get_name_leafdata());
    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (debugging.is_set || is_set(debugging.operation)) leaf_name_data.push_back(debugging.get_name_leafdata());
    if (emergencies.is_set || is_set(emergencies.operation)) leaf_name_data.push_back(emergencies.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (informational.is_set || is_set(informational.operation)) leaf_name_data.push_back(informational.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.operation)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (warnings.is_set || is_set(warnings.operation)) leaf_name_data.push_back(warnings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::Range::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::Range::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimit::Console::Range::Except::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alerts")
    {
        alerts = value;
    }
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "debugging")
    {
        debugging = value;
    }
    if(value_path == "emergencies")
    {
        emergencies = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "informational")
    {
        informational = value;
    }
    if(value_path == "notifications")
    {
        notifications = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "warnings")
    {
        warnings = value;
    }
}

Native::Logging::RateLimit::Console::All::All()
{
    yang_name = "all"; yang_parent_name = "console";
}

Native::Logging::RateLimit::Console::All::~All()
{
}

bool Native::Logging::RateLimit::Console::All::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::RateLimit::Console::All::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Logging::RateLimit::Console::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::Console::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::RateLimit::Console::All::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::RateLimit::Console::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Logging::RateLimit::Console::All::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    except(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "all";
}

Native::Logging::RateLimit::Console::All::Range::~Range()
{
}

bool Native::Logging::RateLimit::Console::All::Range::has_data() const
{
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Console::All::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Console::All::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::Console::All::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::All::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Console::All::Range::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::All::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(except != nullptr)
    {
        children["except"] = except;
    }

    return children;
}

void Native::Logging::RateLimit::Console::All::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Logging::RateLimit::Console::All::Range::Except::Except()
    :
    alerts{YType::empty, "alerts"},
    critical{YType::empty, "critical"},
    debugging{YType::empty, "debugging"},
    emergencies{YType::empty, "emergencies"},
    errors{YType::boolean, "errors"},
    informational{YType::empty, "informational"},
    notifications{YType::empty, "notifications"},
    range{YType::uint8, "range"},
    warnings{YType::empty, "warnings"}
{
    yang_name = "except"; yang_parent_name = "range";
}

Native::Logging::RateLimit::Console::All::Range::Except::~Except()
{
}

bool Native::Logging::RateLimit::Console::All::Range::Except::has_data() const
{
    return alerts.is_set
	|| critical.is_set
	|| debugging.is_set
	|| emergencies.is_set
	|| errors.is_set
	|| informational.is_set
	|| notifications.is_set
	|| range.is_set
	|| warnings.is_set;
}

bool Native::Logging::RateLimit::Console::All::Range::Except::has_operation() const
{
    return is_set(operation)
	|| is_set(alerts.operation)
	|| is_set(critical.operation)
	|| is_set(debugging.operation)
	|| is_set(emergencies.operation)
	|| is_set(errors.operation)
	|| is_set(informational.operation)
	|| is_set(notifications.operation)
	|| is_set(range.operation)
	|| is_set(warnings.operation);
}

std::string Native::Logging::RateLimit::Console::All::Range::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";

    return path_buffer.str();

}

const EntityPath Native::Logging::RateLimit::Console::All::Range::Except::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Except' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alerts.is_set || is_set(alerts.operation)) leaf_name_data.push_back(alerts.get_name_leafdata());
    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (debugging.is_set || is_set(debugging.operation)) leaf_name_data.push_back(debugging.get_name_leafdata());
    if (emergencies.is_set || is_set(emergencies.operation)) leaf_name_data.push_back(emergencies.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (informational.is_set || is_set(informational.operation)) leaf_name_data.push_back(informational.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.operation)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (warnings.is_set || is_set(warnings.operation)) leaf_name_data.push_back(warnings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::All::Range::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::All::Range::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimit::Console::All::Range::Except::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alerts")
    {
        alerts = value;
    }
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "debugging")
    {
        debugging = value;
    }
    if(value_path == "emergencies")
    {
        emergencies = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "informational")
    {
        informational = value;
    }
    if(value_path == "notifications")
    {
        notifications = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "warnings")
    {
        warnings = value;
    }
}

Native::Logging::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"},
    vrf{YType::str, "vrf"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Logging::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Logging::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Logging::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Logging::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "logging";
}

Native::Logging::SourceInterface::~SourceInterface()
{
}

bool Native::Logging::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| vrf.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Logging::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| is_set(vrf.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Logging::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Logging::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Logging::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Logging::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Logging::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Logging::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Logging::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Logging::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Logging::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Logging::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Logging::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Logging::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Logging::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Logging::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Logging::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Logging::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Logging::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Logging::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Logging::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Logging::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Logging::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Logging::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Logging::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Logging::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Logging::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

const Enum::YLeaf Native::TableMap::DefaultEnum::copy {0, "copy"};
const Enum::YLeaf Native::TableMap::DefaultEnum::ignore {1, "ignore"};

const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::OperatorEnum::eq {0, "eq"};
const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::OperatorEnum::gt {1, "gt"};
const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::OperatorEnum::lt {2, "lt"};
const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::OperatorEnum::range {3, "range"};

const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::OperatorEnum::eq {0, "eq"};
const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::OperatorEnum::gt {1, "gt"};
const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::OperatorEnum::lt {2, "lt"};
const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::OperatorEnum::range {3, "range"};

const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::OperatorEnum::eq {0, "eq"};
const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::OperatorEnum::gt {1, "gt"};
const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::OperatorEnum::lt {2, "lt"};
const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::OperatorEnum::range {3, "range"};

const Enum::YLeaf Native::PseudowireClass::EncapsulationEnum::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::PseudowireClass::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};
const Enum::YLeaf Native::PseudowireClass::EncapsulationEnum::mpls {2, "mpls"};
const Enum::YLeaf Native::PseudowireClass::EncapsulationEnum::udp {3, "udp"};

const Enum::YLeaf Native::PseudowireClass::InterworkingEnum::ethernet {0, "ethernet"};
const Enum::YLeaf Native::PseudowireClass::InterworkingEnum::ip {1, "ip"};
const Enum::YLeaf Native::PseudowireClass::InterworkingEnum::vlan {2, "vlan"};

const Enum::YLeaf Native::PseudowireClass::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::PseudowireClass::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::PseudowireClass::SequencingEnum::resync {2, "resync"};
const Enum::YLeaf Native::PseudowireClass::SequencingEnum::transmit {3, "transmit"};

const Enum::YLeaf Native::PseudowireClass::Ip::ProtocolEnum::l2tp {0, "l2tp"};
const Enum::YLeaf Native::PseudowireClass::Ip::ProtocolEnum::uti {1, "uti"};

const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::EthernetEnum::dst_mac {0, "dst-mac"};
const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::EthernetEnum::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::EthernetEnum::src_mac {2, "src-mac"};

const Enum::YLeaf Native::PseudowireClass::ProtocolMpls::ProtocolEnum::ldp {0, "ldp"};
const Enum::YLeaf Native::PseudowireClass::ProtocolMpls::ProtocolEnum::none {1, "none"};

const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv2::ProtocolEnum::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv2::ProtocolEnum::none {1, "none"};

const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv3::ProtocolEnum::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv3::ProtocolEnum::l2tpv3ietf {1, "l2tpv3ietf"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2Tpv3::ProtocolEnum::none {2, "none"};

const Enum::YLeaf Native::Clock::SummerTime::RecurringStartEnum::first {0, "first"};
const Enum::YLeaf Native::Clock::SummerTime::RecurringStartEnum::last {1, "last"};

const Enum::YLeaf Native::Clock::SummerTime::RecurringEndEnum::first {0, "first"};
const Enum::YLeaf Native::Clock::SummerTime::RecurringEndEnum::last {1, "last"};

const Enum::YLeaf Native::Clock::Timezone::OffsetEnum::Y__PLUS__ {0, "+"};
const Enum::YLeaf Native::Clock::Timezone::OffsetEnum::Y_ {1, "-"};

const Enum::YLeaf Native::Logging::AlarmEnum::critical {0, "critical"};
const Enum::YLeaf Native::Logging::AlarmEnum::informational {1, "informational"};
const Enum::YLeaf Native::Logging::AlarmEnum::major {2, "major"};
const Enum::YLeaf Native::Logging::AlarmEnum::minor {3, "minor"};

const Enum::YLeaf Native::Logging::FacilityEnum::auth {0, "auth"};
const Enum::YLeaf Native::Logging::FacilityEnum::cron {1, "cron"};
const Enum::YLeaf Native::Logging::FacilityEnum::daemon {2, "daemon"};
const Enum::YLeaf Native::Logging::FacilityEnum::kern {3, "kern"};
const Enum::YLeaf Native::Logging::FacilityEnum::local0 {4, "local0"};
const Enum::YLeaf Native::Logging::FacilityEnum::local1 {5, "local1"};
const Enum::YLeaf Native::Logging::FacilityEnum::local2 {6, "local2"};
const Enum::YLeaf Native::Logging::FacilityEnum::local3 {7, "local3"};
const Enum::YLeaf Native::Logging::FacilityEnum::local4 {8, "local4"};
const Enum::YLeaf Native::Logging::FacilityEnum::local5 {9, "local5"};
const Enum::YLeaf Native::Logging::FacilityEnum::local6 {10, "local6"};
const Enum::YLeaf Native::Logging::FacilityEnum::local7 {11, "local7"};
const Enum::YLeaf Native::Logging::FacilityEnum::lpr {12, "lpr"};
const Enum::YLeaf Native::Logging::FacilityEnum::mail {13, "mail"};
const Enum::YLeaf Native::Logging::FacilityEnum::news {14, "news"};
const Enum::YLeaf Native::Logging::FacilityEnum::sys10 {15, "sys10"};
const Enum::YLeaf Native::Logging::FacilityEnum::sys11 {16, "sys11"};
const Enum::YLeaf Native::Logging::FacilityEnum::sys12 {17, "sys12"};
const Enum::YLeaf Native::Logging::FacilityEnum::sys13 {18, "sys13"};
const Enum::YLeaf Native::Logging::FacilityEnum::sys14 {19, "sys14"};
const Enum::YLeaf Native::Logging::FacilityEnum::sys9 {20, "sys9"};
const Enum::YLeaf Native::Logging::FacilityEnum::syslog {21, "syslog"};
const Enum::YLeaf Native::Logging::FacilityEnum::user {22, "user"};
const Enum::YLeaf Native::Logging::FacilityEnum::uucp {23, "uucp"};

const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::alerts {0, "alerts"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::critical {1, "critical"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::debugging {2, "debugging"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::emergencies {3, "emergencies"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::errors {4, "errors"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::informational {5, "informational"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::notifications {6, "notifications"};
const Enum::YLeaf Native::Logging::History::SeverityLevelEnum::warnings {7, "warnings"};


}
}

