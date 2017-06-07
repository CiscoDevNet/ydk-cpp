
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_88.hpp"
#include "Cisco_IOS_XE_native_89.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
	,backup(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best>())
	,best_external(nullptr) // presence node
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Select' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(operation)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(group_best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_entity_path(Entity* ancestor) const
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

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.operation)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "group-best")
    {
        group_best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_entity_path(Entity* ancestor) const
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

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{
    yang_name = "backup"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    return best_external.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(best_external.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-external")
    {
        best_external = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Best()
{
    yang_name = "best"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(all.operation)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_entity_path(Entity* ancestor) const
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

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "range";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{
    yang_name = "best-external"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    return backup.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Bestpath()
    :
    compare_routerid{YType::empty, "compare-routerid"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity>())
	,igp_metric(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric>())
	,med(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;

    igp_metric->parent = this;

    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::has_data() const
{
    return compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::has_operation() const
{
    return is_set(operation)
	|| is_set(compare_routerid.operation)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compare_routerid.is_set || is_set(compare_routerid.operation)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        children["med"] = med;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "cost-community"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "igp-metric"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Med()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
    	,
    confed(nullptr) // presence node
{
    yang_name = "med"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::has_data() const
{
    return missing_at_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(operation)
	|| is_set(missing_at_worst.operation)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Med' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.operation)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confed != nullptr)
    {
        children["confed"] = confed;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
{
    yang_name = "confed"; yang_parent_name = "med";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::has_data() const
{
    return missing_at_worst.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(operation)
	|| is_set(missing_at_worst.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.operation)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::empty, "reflection"}
{
    yang_name = "client-to-client"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::has_data() const
{
    return reflection.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::has_operation() const
{
    return is_set(operation)
	|| is_set(reflection.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToClient' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.operation)) leaf_name_data.push_back(reflection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reflection")
    {
        reflection = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
    	,
    peers(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::has_data() const
{
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confederation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{
    yang_name = "peers"; yang_parent_name = "confederation";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::has_data() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(peers_as.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
	,error_message(nullptr) // presence node
{
    yang_name = "consistency-checker"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::has_data() const
{
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(operation)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConsistencyChecker' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        children["error-message"] = error_message;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "auto-repair"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoRepair' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "error-message"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorMessage' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
    	,
    dampen(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::has_data() const
{
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"}
{
    yang_name = "dampen"; yang_parent_name = "dampening";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::has_data() const
{
    return half_life_time.is_set
	|| max_suppress_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(operation)
	|| is_set(half_life_time.operation)
	|| is_set(max_suppress_time.operation)
	|| is_set(reuse_time.operation)
	|| is_set(suppress_time.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampen' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.operation)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.operation)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.operation)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::Default_()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::empty, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{
    yang_name = "default"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::~Default_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::has_data() const
{
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_unicast.operation)
	|| is_set(ipv6_nexthop.operation)
	|| is_set(local_preference.operation)
	|| is_set(route_target.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.operation)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.operation)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::has_data() const
{
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation)
	|| is_set(restart_time.operation)
	|| is_set(stalepath_time.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.operation)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::has_operation() const
{
    return is_set(operation)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(operation)
	|| is_set(prefer.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefer")
    {
        prefer = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    copy_attributes{YType::empty, "copy-attributes"},
    exist_map{YType::str, "exist-map"}
{
    yang_name = "inject-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::has_data() const
{
    return name.is_set
	|| copy_attributes.is_set
	|| exist_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(copy_attributes.operation)
	|| is_set(exist_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InjectMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.operation)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.operation)) leaf_name_data.push_back(exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{
    yang_name = "route-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::has_data() const
{
    return priority.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::has_operation() const
{
    return is_set(operation)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::has_data() const
{
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(permanent.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permanent")
    {
        permanent = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::has_data() const
{
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split != nullptr)
    {
        children["split"] = split;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{
    yang_name = "split"; yang_parent_name = "update-group";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::has_data() const
{
    return as_override.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(operation)
	|| is_set(as_override.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Split' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-override")
    {
        as_override = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
    	,
    trigger(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::has_data() const
{
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{
    yang_name = "trigger"; yang_parent_name = "nexthop";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::has_data() const
{
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| is_set(enable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::empty, "deterministic"}
{
    yang_name = "regexp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::has_data() const
{
    return deterministic.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::has_operation() const
{
    return is_set(operation)
	|| is_set(deterministic.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Regexp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.operation)) leaf_name_data.push_back(deterministic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{
    yang_name = "transport"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::has_data() const
{
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu_discovery.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{
    yang_name = "default-information"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(originate.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.operation)) leaf_name_data.push_back(originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "originate")
    {
        originate = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_>())
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::~Distance()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::has_data() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adm-distance")
    {
        for(auto const & c : adm_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance>();
        c->parent = this;
        adm_distance.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adm_distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{
    yang_name = "bgp"; yang_parent_name = "distance";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::has_data() const
{
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::has_operation() const
{
    return is_set(operation)
	|| is_set(extern_as.operation)
	|| is_set(internal_as.operation)
	|| is_set(local.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.operation)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.operation)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{
    yang_name = "adm-distance"; yang_parent_name = "distance";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::has_data() const
{
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(srcip.operation)
	|| is_set(wildbits.operation)
	|| is_set(acl.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance" <<"[distance='" <<distance <<"']" <<"[srcip='" <<srcip <<"']" <<"[wildbits='" <<wildbits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdmDistance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.operation)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.operation)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance::AdmDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "srcip")
    {
        srcip = value;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::DistributeList()
    :
    id{YType::str, "id"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "distribute-list"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::has_data() const
{
    return id.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::In()
    :
    interface{YType::str, "interface"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::~In()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::Out()
    :
    interface{YType::str, "interface"}
{
    yang_name = "out"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::~Out()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaximumPaths()
    :
    eibgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp>())
	,external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter>())
	,ibgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath>())
{
    eibgp->parent = this;

    external_rtfilter->parent = this;

    ibgp->parent = this;

    max_path->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::has_data() const
{
    return (eibgp !=  nullptr && eibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::has_operation() const
{
    return is_set(operation)
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eibgp != nullptr)
    {
        children["eibgp"] = eibgp;
    }

    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::Eibgp()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    yang_name = "eibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::~Eibgp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "eibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "eibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Eibgp::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::Ibgp()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath>())
	,unequal_cost(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    unequal_cost->parent = this;

    yang_name = "ibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data())
	|| (unequal_cost !=  nullptr && unequal_cost->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation())
	|| (unequal_cost !=  nullptr && unequal_cost->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath>();
        }
        return max_path;
    }

    if(child_yang_name == "unequal-cost")
    {
        if(unequal_cost == nullptr)
        {
            unequal_cost = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost>();
        }
        return unequal_cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    if(unequal_cost != nullptr)
    {
        children["unequal-cost"] = unequal_cost;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::UnequalCost()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    yang_name = "unequal-cost"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::~UnequalCost()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unequal-cost";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnequalCost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "unequal-cost";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "unequal-cost";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths::Ibgp::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_self{YType::empty, "next-hop-self"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    remote_as{YType::uint16, "remote-as"},
    remove_private_as{YType::empty, "remove-private-as"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths>())
	,advertise(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise>())
	,advertise_map(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap>())
	,aigp(nullptr) // presence node
	,allowas_in(nullptr) // presence node
	,announce(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce>())
	,as_override(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability>())
	,default_originate(nullptr) // presence node
	,ebgp_multihop(nullptr) // presence node
	,fall_over(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver>())
	,ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode>())
	,inherit(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit>())
	,local_as(nullptr) // presence node
	,log_neighbor_changes(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix>())
	,password(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password>())
	,path_attribute(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute>())
	,peer_group(nullptr) // presence node
	,send_community(nullptr) // presence node
	,send_label(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel>())
	,slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer>())
	,timers(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers>())
	,translate_update(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate>())
	,transport(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport>())
	,ttl_security(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity>())
	,update_source(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource>())
{
    additional_paths->parent = this;

    advertise->parent = this;

    advertise_map->parent = this;

    announce->parent = this;

    capability->parent = this;

    fall_over->parent = this;

    ha_mode->parent = this;

    inherit->parent = this;

    maximum_prefix->parent = this;

    password->parent = this;

    path_attribute->parent = this;

    send_label->parent = this;

    slow_peer->parent = this;

    timers->parent = this;

    translate_update->parent = this;

    transport->parent = this;

    ttl_security->parent = this;

    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| remote_as.is_set
	|| remove_private_as.is_set
	|| route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
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
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(activate.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(allow_policy.operation)
	|| is_set(cluster_id.operation)
	|| is_set(description.operation)
	|| is_set(disable_connected_check.operation)
	|| is_set(dmzlink_bw.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(remote_as.operation)
	|| is_set(remove_private_as.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(route_reflector_cluster_id.operation)
	|| is_set(shutdown.operation)
	|| is_set(soft_reconfiguration.operation)
	|| is_set(unsuppress_map.operation)
	|| is_set(version.operation)
	|| is_set(weight.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
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
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.operation)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.operation)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.operation)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.operation)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.operation)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.operation)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.operation)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(advertise_map != nullptr)
    {
        children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        children["aigp"] = aigp;
    }

    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(as_override != nullptr)
    {
        children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{
    yang_name = "peer-group"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::has_data() const
{
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_group_name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.operation)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PeerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::has_data() const
{
    return as_no.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_no.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.operation)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-no")
    {
        as_no = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::AdditionalPaths()
    :
    disable{YType::empty, "disable"},
    receive{YType::empty, "receive"}
    	,
    send(nullptr) // presence node
{
    yang_name = "additional-paths"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::has_data() const
{
    return disable.is_set
	|| receive.is_set
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(receive.operation)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdditionalPaths::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::Advertise()
    :
    best_external{YType::empty, "best-external"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths>())
	,diverse_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath>())
{
    additional_paths->parent = this;

    diverse_path->parent = this;

    yang_name = "advertise"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::has_data() const
{
    return best_external.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (diverse_path !=  nullptr && diverse_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(best_external.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (diverse_path !=  nullptr && diverse_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "diverse-path")
    {
        if(diverse_path == nullptr)
        {
            diverse_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath>();
        }
        return diverse_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(diverse_path != nullptr)
    {
        children["diverse-path"] = diverse_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-external")
    {
        best_external = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::AdditionalPaths()
    :
    all(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "advertise";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::has_operation() const
{
    return is_set(operation)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(group_best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_entity_path(Entity* ancestor) const
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

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.operation)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "group-best")
    {
        group_best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_entity_path(Entity* ancestor) const
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

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::Best()
{
    yang_name = "best"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(all.operation)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_entity_path(Entity* ancestor) const
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

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "best-range";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::AdditionalPaths::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::DiversePath()
    :
    mpath{YType::empty, "mpath"}
    	,
    backup(nullptr) // presence node
{
    yang_name = "diverse-path"; yang_parent_name = "advertise";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::~DiversePath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::has_data() const
{
    return mpath.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(mpath.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.operation)) leaf_name_data.push_back(mpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpath")
    {
        mpath = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::Backup()
    :
    mpath{YType::empty, "mpath"}
{
    yang_name = "backup"; yang_parent_name = "diverse-path";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::~Backup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::has_data() const
{
    return mpath.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(mpath.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.operation)) leaf_name_data.push_back(mpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Advertise::DiversePath::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpath")
    {
        mpath = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::AdvertiseMap()
{
    yang_name = "advertise-map"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::~AdvertiseMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::Name()
    :
    word{YType::str, "word"},
    exist_map{YType::str, "exist-map"},
    non_exist_map{YType::str, "non-exist-map"}
{
    yang_name = "name"; yang_parent_name = "advertise-map";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::~Name()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::has_data() const
{
    return word.is_set
	|| exist_map.is_set
	|| non_exist_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(exist_map.operation)
	|| is_set(non_exist_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.operation)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (non_exist_map.is_set || is_set(non_exist_map.operation)) leaf_name_data.push_back(non_exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AdvertiseMap::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Aigp()
    :
    send(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send>())
{
    send->parent = this;

    yang_name = "aigp"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::~Aigp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::has_operation() const
{
    return is_set(operation)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aigp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::Send()
    :
    med{YType::empty, "med"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity>())
{
    cost_community->parent = this;

    yang_name = "send"; yang_parent_name = "aigp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::has_data() const
{
    return med.is_set
	|| (cost_community !=  nullptr && cost_community->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(med.operation)
	|| (cost_community !=  nullptr && cost_community->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med.is_set || is_set(med.operation)) leaf_name_data.push_back(med.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity>();
        }
        return cost_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "med")
    {
        med = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CostCommunity()
{
    yang_name = "cost-community"; yang_parent_name = "send";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::has_data() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::has_operation() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc-range")
    {
        for(auto const & c : cc_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange>();
        c->parent = this;
        cc_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cc_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::CcRange()
    :
    range{YType::uint8, "range"}
    	,
    poi(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>())
{
    poi->parent = this;

    yang_name = "cc-range"; yang_parent_name = "cost-community";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::~CcRange()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::has_data() const
{
    return range.is_set
	|| (poi !=  nullptr && poi->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (poi !=  nullptr && poi->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CcRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poi")
    {
        if(poi == nullptr)
        {
            poi = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>();
        }
        return poi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(poi != nullptr)
    {
        children["poi"] = poi;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::Poi()
    :
    igp_cost(nullptr) // presence node
	,pre_bestpath(nullptr) // presence node
{
    yang_name = "poi"; yang_parent_name = "cc-range";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::~Poi()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_data() const
{
    return (igp_cost !=  nullptr && igp_cost->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_operation() const
{
    return is_set(operation)
	|| (igp_cost !=  nullptr && igp_cost->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poi";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Poi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-cost")
    {
        if(igp_cost == nullptr)
        {
            igp_cost = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost>();
        }
        return igp_cost;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_cost != nullptr)
    {
        children["igp-cost"] = igp_cost;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::IgpCost()
    :
    transitive{YType::empty, "transitive"}
{
    yang_name = "igp-cost"; yang_parent_name = "poi";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::~IgpCost()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_operation() const
{
    return is_set(operation)
	|| is_set(transitive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-cost";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpCost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::PreBestpath()
    :
    transitive{YType::empty, "transitive"}
{
    yang_name = "pre-bestpath"; yang_parent_name = "poi";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::~PreBestpath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_operation() const
{
    return is_set(operation)
	|| is_set(transitive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreBestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Announce()
    :
    rpki(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki>())
{
    rpki->parent = this;

    yang_name = "announce"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::~Announce()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::has_data() const
{
    return (rpki !=  nullptr && rpki->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::has_operation() const
{
    return is_set(operation)
	|| (rpki !=  nullptr && rpki->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Announce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki>();
        }
        return rpki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::Rpki()
    :
    state{YType::empty, "state"}
{
    yang_name = "rpki"; yang_parent_name = "announce";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::~Rpki()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::has_data() const
{
    return state.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::get_entity_path(Entity* ancestor) const
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

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Announce::Rpki::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{
    yang_name = "allowas-in"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::has_data() const
{
    return as_number.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllowasIn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AllowasIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::AsOverride()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "as-override"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::~AsOverride()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-override";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsOverride' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::AsOverride::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::has_data() const
{
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::has_operation() const
{
    return is_set(operation)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(orf != nullptr)
    {
        children["orf"] = orf;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{
    yang_name = "orf"; yang_parent_name = "capability";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::has_data() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Orf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "default-originate"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::DistributeList()
    :
    inout{YType::enumeration, "inout"},
    accesslist{YType::str, "accesslist"}
{
    yang_name = "distribute-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::has_data() const
{
    return inout.is_set
	|| accesslist.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(accesslist.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.operation)) leaf_name_data.push_back(accesslist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::has_data() const
{
    return max_hop.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.operation)) leaf_name_data.push_back(max_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::FallOver()
    :
    bfd(nullptr) // presence node
{
    yang_name = "fall-over"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::has_operation() const
{
    return is_set(operation)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FallOver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::Bfd()
{
    yang_name = "bfd"; yang_parent_name = "fall-over";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::has_data() const
{
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{
    yang_name = "filter-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::has_data() const
{
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(as_path_list.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.operation)) leaf_name_data.push_back(as_path_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{
    yang_name = "inherit"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::has_data() const
{
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_policy.operation)
	|| is_set(peer_session.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inherit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.operation)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.operation)) leaf_name_data.push_back(peer_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Inherit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogNeighborChanges' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    restart{YType::uint16, "restart"},
    threshold{YType::uint8, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::has_data() const
{
    return max_prefix_no.is_set
	|| restart.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(max_prefix_no.operation)
	|| is_set(restart.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.operation)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
    }
    if(value_path == "restart")
    {
        restart = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{
    yang_name = "password"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(enctype.operation)
	|| is_set(text.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.operation)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enctype")
    {
        enctype = value;
    }
    if(value_path == "text")
    {
        text = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{
    yang_name = "prefix-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::has_data() const
{
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(prefix_list_name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard>())
	,treat_as_withdraw(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;

    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::has_data() const
{
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::has_operation() const
{
    return is_set(operation)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathAttribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discard != nullptr)
    {
        children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type>())
	,range(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;

    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(operation)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::Attibute_Type()
    :
    in{YType::empty, "in"},
    type{YType::uint8, "type"}
{
    yang_name = "attibute_type"; yang_parent_name = "discard";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::~Attibute_Type()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::has_data() const
{
    return in.is_set
	|| type.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(type.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attibute_Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Attibute_Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::Range()
    :
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"},
    start_value{YType::uint8, "start_value"}
{
    yang_name = "range"; yang_parent_name = "discard";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    return end_value.is_set
	|| in.is_set
	|| start_value.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(end_value.operation)
	|| is_set(in.operation)
	|| is_set(start_value.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::get_entity_path(Entity* ancestor) const
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

    if (end_value.is_set || is_set(end_value.operation)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (start_value.is_set || is_set(start_value.operation)) leaf_name_data.push_back(start_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end_value")
    {
        end_value = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "start_value")
    {
        start_value = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type>())
	,range(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;

    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(operation)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TreatAsWithdraw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::Attibute_Type()
    :
    in{YType::empty, "in"},
    type{YType::uint8, "type"}
{
    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::~Attibute_Type()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_data() const
{
    return in.is_set
	|| type.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(type.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attibute_Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"},
    start_value{YType::uint8, "start_value"}
{
    yang_name = "range"; yang_parent_name = "treat-as-withdraw";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    return end_value.is_set
	|| in.is_set
	|| start_value.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(end_value.operation)
	|| is_set(in.operation)
	|| is_set(start_value.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_entity_path(Entity* ancestor) const
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

    if (end_value.is_set || is_set(end_value.operation)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (start_value.is_set || is_set(start_value.operation)) leaf_name_data.push_back(start_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end_value")
    {
        end_value = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "start_value")
    {
        start_value = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{
    yang_name = "route-map"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::has_data() const
{
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(route_map_name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.operation)) leaf_name_data.push_back(route_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{
    yang_name = "send-community"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::has_data() const
{
    return send_community_where.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(send_community_where.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.operation)) leaf_name_data.push_back(send_community_where.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::SendLabel()
    :
    send_label_explicit{YType::enumeration, "send-label-explicit"}
{
    yang_name = "send-label"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::~SendLabel()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::has_data() const
{
    return send_label_explicit.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(send_label_explicit.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-label";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendLabel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_label_explicit.is_set || is_set(send_label_explicit.operation)) leaf_name_data.push_back(send_label_explicit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::has_operation() const
{
    return is_set(operation)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::has_data() const
{
    return threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(permanent.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permanent")
    {
        permanent = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::Timers()
    :
    holdtime{YType::uint16, "holdtime"},
    keepalive_interval{YType::uint16, "keepalive-interval"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{
    yang_name = "timers"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::has_data() const
{
    return holdtime.is_set
	|| keepalive_interval.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(holdtime.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(minimum_neighbor_hold.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.operation)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::TranslateUpdate()
    :
    ipv4(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_>())
{
    ipv4->parent = this;

    yang_name = "translate-update"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::~TranslateUpdate()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate-update";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TranslateUpdate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Ipv4_()
    :
    multicast(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "translate-update";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::~Ipv4_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::has_data() const
{
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::has_operation() const
{
    return is_set(operation)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::Multicast()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "multicast"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::~Multicast()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::has_data() const
{
    return unicast.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TranslateUpdate::Ipv4_::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
    	,
    path_mtu_discovery(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::has_data() const
{
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_mode.operation)
	|| is_set(multi_session.operation)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.operation)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.operation)) leaf_name_data.push_back(multi_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "path-mtu-discovery"; yang_parent_name = "transport";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathMtuDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(hops.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hops")
    {
        hops = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::UpdateSource()
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
    atm_acrsubinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::has_data() const
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

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::has_operation() const
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

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateSource' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::get_children() const
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

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::set_value(const std::string & value_path, std::string value)
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

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::UpdateSource::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
	,sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::has_data() const
{
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::has_operation() const
{
    return is_set(operation)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "graceful-restart"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::HaMode::Sso::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::Network()
    :
    number{YType::str, "number"},
    backdoor{YType::empty, "backdoor"},
    mask{YType::str, "mask"},
    route_map{YType::str, "route-map"}
{
    yang_name = "network"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::~Network()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::has_data() const
{
    return number.is_set
	|| backdoor.is_set
	|| mask.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(backdoor.operation)
	|| is_set(mask.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.operation)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Redistribute()
    :
    application(nullptr) // presence node
	,bgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_>())
	,connected(nullptr) // presence node
	,dvmrp(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp>())
	,isis(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis>())
	,iso_igrp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp>())
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    iso_igrp->parent = this;

    yang_name = "redistribute"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::~Redistribute()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::has_data() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (dvmrp !=  nullptr && dvmrp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (dvmrp !=  nullptr && dvmrp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "dvmrp")
    {
        if(dvmrp == nullptr)
        {
            dvmrp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp>();
        }
        return dvmrp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(dvmrp != nullptr)
    {
        children["dvmrp"] = dvmrp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Application()
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::~Application()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::Name()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "name"; yang_parent_name = "application";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::~Name()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::has_data() const
{
    return name.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Application::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::Bgp_()
    :
    as_no{YType::str, "as-no"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::has_data() const
{
    return as_no.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::has_operation() const
{
    return is_set(operation)
	|| is_set(as_no.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.operation)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-no")
    {
        as_no = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::Connected()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::Dvmrp()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "dvmrp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::~Dvmrp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvmrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dvmrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Dvmrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::Eigrp()
    :
    as_no{YType::uint16, "as-no"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::has_data() const
{
    return as_no.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_no.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.operation)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-no")
    {
        as_no = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Isis()
    :
    default_(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_>())
{
    default_->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"},
    routes{YType::enumeration, "routes"}
{
    yang_name = "isis-area"; yang_parent_name = "isis";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| clns.is_set
	|| ip.is_set
	|| metric.is_set
	|| route_map.is_set
	|| routes.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(clns.operation)
	|| is_set(ip.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation)
	|| is_set(routes.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (clns.is_set || is_set(clns.operation)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (routes.is_set || is_set(routes.operation)) leaf_name_data.push_back(routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "clns")
    {
        clns = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "routes")
    {
        routes = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::Default_()
    :
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"},
    routes{YType::enumeration, "routes"}
{
    yang_name = "default"; yang_parent_name = "isis";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::~Default_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::has_data() const
{
    return clns.is_set
	|| ip.is_set
	|| metric.is_set
	|| route_map.is_set
	|| routes.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(clns.operation)
	|| is_set(ip.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation)
	|| is_set(routes.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns.is_set || is_set(clns.operation)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (routes.is_set || is_set(routes.operation)) leaf_name_data.push_back(routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clns")
    {
        clns = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "routes")
    {
        routes = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrp()
    :
    default_(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_>())
{
    default_->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_igrp_area.size(); index++)
    {
        if(iso_igrp_area[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_igrp_area.size(); index++)
    {
        if(iso_igrp_area[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "iso-igrp-area")
    {
        for(auto const & c : iso_igrp_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea>();
        c->parent = this;
        iso_igrp_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : iso_igrp_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::IsoIgrpArea()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "iso-igrp-area"; yang_parent_name = "iso-igrp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::~IsoIgrpArea()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::has_data() const
{
    return name.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrpArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::IsoIgrpArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::Default_()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "default"; yang_parent_name = "iso-igrp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::~Default_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::IsoIgrp::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::Mobile()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::Odr()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    non_vrf(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf>())
{
    non_vrf->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return id.is_set
	|| (non_vrf !=  nullptr && non_vrf->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| (non_vrf !=  nullptr && non_vrf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-vrf")
    {
        if(non_vrf == nullptr)
        {
            non_vrf = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf>();
        }
        return non_vrf;
    }

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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_vrf != nullptr)
    {
        children["non-vrf"] = non_vrf;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::RouteTargetEnum::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SoftReconfigurationEnum::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::PrefixListEnum::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::PrefixListEnum::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Capability::Orf::PrefixListEnum::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::DistributeList::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::FilterList::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::PrefixList::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::RouteMap::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::SendCommunityWhereEnum::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::SendCommunityWhereEnum::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendCommunity::SendCommunityWhereEnum::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::SendLabel::SendLabelExplicitEnum::explicit_null {0, "explicit-null"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::ConnectionModeEnum::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor::Transport::ConnectionModeEnum::passive {1, "passive"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::RoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::RoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::IsisArea::RoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::RoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::RoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Isis::Default_::RoutesEnum::level_1_2 {2, "level-1-2"};


}
}

