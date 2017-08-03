
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IGMP_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IGMP_STD_MIB {

IgmpStdMib::IgmpStdMib()
    :
    igmpcachetable(std::make_shared<IgmpStdMib::Igmpcachetable>())
	,igmpinterfacetable(std::make_shared<IgmpStdMib::Igmpinterfacetable>())
{
    igmpcachetable->parent = this;

    igmpinterfacetable->parent = this;

    yang_name = "IGMP-STD-MIB"; yang_parent_name = "IGMP-STD-MIB";
}

IgmpStdMib::~IgmpStdMib()
{
}

bool IgmpStdMib::has_data() const
{
    return (igmpcachetable !=  nullptr && igmpcachetable->has_data())
	|| (igmpinterfacetable !=  nullptr && igmpinterfacetable->has_data());
}

bool IgmpStdMib::has_operation() const
{
    return is_set(yfilter)
	|| (igmpcachetable !=  nullptr && igmpcachetable->has_operation())
	|| (igmpinterfacetable !=  nullptr && igmpinterfacetable->has_operation());
}

std::string IgmpStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IGMP-STD-MIB:IGMP-STD-MIB";

    return path_buffer.str();

}

const EntityPath IgmpStdMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IgmpStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmpCacheTable")
    {
        if(igmpcachetable == nullptr)
        {
            igmpcachetable = std::make_shared<IgmpStdMib::Igmpcachetable>();
        }
        return igmpcachetable;
    }

    if(child_yang_name == "igmpInterfaceTable")
    {
        if(igmpinterfacetable == nullptr)
        {
            igmpinterfacetable = std::make_shared<IgmpStdMib::Igmpinterfacetable>();
        }
        return igmpinterfacetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IgmpStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmpcachetable != nullptr)
    {
        children["igmpCacheTable"] = igmpcachetable;
    }

    if(igmpinterfacetable != nullptr)
    {
        children["igmpInterfaceTable"] = igmpinterfacetable;
    }

    return children;
}

void IgmpStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IgmpStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IgmpStdMib::clone_ptr() const
{
    return std::make_shared<IgmpStdMib>();
}

std::string IgmpStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IgmpStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IgmpStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IgmpStdMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IgmpStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmpCacheTable" || name == "igmpInterfaceTable")
        return true;
    return false;
}

IgmpStdMib::Igmpinterfacetable::Igmpinterfacetable()
{
    yang_name = "igmpInterfaceTable"; yang_parent_name = "IGMP-STD-MIB";
}

IgmpStdMib::Igmpinterfacetable::~Igmpinterfacetable()
{
}

bool IgmpStdMib::Igmpinterfacetable::has_data() const
{
    for (std::size_t index=0; index<igmpinterfaceentry.size(); index++)
    {
        if(igmpinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool IgmpStdMib::Igmpinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<igmpinterfaceentry.size(); index++)
    {
        if(igmpinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IgmpStdMib::Igmpinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpInterfaceTable";

    return path_buffer.str();

}

const EntityPath IgmpStdMib::Igmpinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IGMP-STD-MIB:IGMP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IgmpStdMib::Igmpinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmpInterfaceEntry")
    {
        for(auto const & c : igmpinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry>();
        c->parent = this;
        igmpinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IgmpStdMib::Igmpinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igmpinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IgmpStdMib::Igmpinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IgmpStdMib::Igmpinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IgmpStdMib::Igmpinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmpInterfaceEntry")
        return true;
    return false;
}

IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::Igmpinterfaceentry()
    :
    igmpinterfaceifindex{YType::int32, "igmpInterfaceIfIndex"},
    igmpinterfacegroups{YType::uint32, "igmpInterfaceGroups"},
    igmpinterfacejoins{YType::uint32, "igmpInterfaceJoins"},
    igmpinterfacelastmembqueryintvl{YType::uint32, "igmpInterfaceLastMembQueryIntvl"},
    igmpinterfaceproxyifindex{YType::int32, "igmpInterfaceProxyIfIndex"},
    igmpinterfacequerier{YType::str, "igmpInterfaceQuerier"},
    igmpinterfacequerierexpirytime{YType::uint32, "igmpInterfaceQuerierExpiryTime"},
    igmpinterfacequerieruptime{YType::uint32, "igmpInterfaceQuerierUpTime"},
    igmpinterfacequeryinterval{YType::uint32, "igmpInterfaceQueryInterval"},
    igmpinterfacequerymaxresponsetime{YType::uint32, "igmpInterfaceQueryMaxResponseTime"},
    igmpinterfacerobustness{YType::uint32, "igmpInterfaceRobustness"},
    igmpinterfacestatus{YType::enumeration, "igmpInterfaceStatus"},
    igmpinterfaceversion{YType::uint32, "igmpInterfaceVersion"},
    igmpinterfaceversion1queriertimer{YType::uint32, "igmpInterfaceVersion1QuerierTimer"},
    igmpinterfacewrongversionqueries{YType::uint32, "igmpInterfaceWrongVersionQueries"}
{
    yang_name = "igmpInterfaceEntry"; yang_parent_name = "igmpInterfaceTable";
}

IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::~Igmpinterfaceentry()
{
}

bool IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::has_data() const
{
    return igmpinterfaceifindex.is_set
	|| igmpinterfacegroups.is_set
	|| igmpinterfacejoins.is_set
	|| igmpinterfacelastmembqueryintvl.is_set
	|| igmpinterfaceproxyifindex.is_set
	|| igmpinterfacequerier.is_set
	|| igmpinterfacequerierexpirytime.is_set
	|| igmpinterfacequerieruptime.is_set
	|| igmpinterfacequeryinterval.is_set
	|| igmpinterfacequerymaxresponsetime.is_set
	|| igmpinterfacerobustness.is_set
	|| igmpinterfacestatus.is_set
	|| igmpinterfaceversion.is_set
	|| igmpinterfaceversion1queriertimer.is_set
	|| igmpinterfacewrongversionqueries.is_set;
}

bool IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igmpinterfaceifindex.yfilter)
	|| ydk::is_set(igmpinterfacegroups.yfilter)
	|| ydk::is_set(igmpinterfacejoins.yfilter)
	|| ydk::is_set(igmpinterfacelastmembqueryintvl.yfilter)
	|| ydk::is_set(igmpinterfaceproxyifindex.yfilter)
	|| ydk::is_set(igmpinterfacequerier.yfilter)
	|| ydk::is_set(igmpinterfacequerierexpirytime.yfilter)
	|| ydk::is_set(igmpinterfacequerieruptime.yfilter)
	|| ydk::is_set(igmpinterfacequeryinterval.yfilter)
	|| ydk::is_set(igmpinterfacequerymaxresponsetime.yfilter)
	|| ydk::is_set(igmpinterfacerobustness.yfilter)
	|| ydk::is_set(igmpinterfacestatus.yfilter)
	|| ydk::is_set(igmpinterfaceversion.yfilter)
	|| ydk::is_set(igmpinterfaceversion1queriertimer.yfilter)
	|| ydk::is_set(igmpinterfacewrongversionqueries.yfilter);
}

std::string IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpInterfaceEntry" <<"[igmpInterfaceIfIndex='" <<igmpinterfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IGMP-STD-MIB:IGMP-STD-MIB/igmpInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igmpinterfaceifindex.is_set || is_set(igmpinterfaceifindex.yfilter)) leaf_name_data.push_back(igmpinterfaceifindex.get_name_leafdata());
    if (igmpinterfacegroups.is_set || is_set(igmpinterfacegroups.yfilter)) leaf_name_data.push_back(igmpinterfacegroups.get_name_leafdata());
    if (igmpinterfacejoins.is_set || is_set(igmpinterfacejoins.yfilter)) leaf_name_data.push_back(igmpinterfacejoins.get_name_leafdata());
    if (igmpinterfacelastmembqueryintvl.is_set || is_set(igmpinterfacelastmembqueryintvl.yfilter)) leaf_name_data.push_back(igmpinterfacelastmembqueryintvl.get_name_leafdata());
    if (igmpinterfaceproxyifindex.is_set || is_set(igmpinterfaceproxyifindex.yfilter)) leaf_name_data.push_back(igmpinterfaceproxyifindex.get_name_leafdata());
    if (igmpinterfacequerier.is_set || is_set(igmpinterfacequerier.yfilter)) leaf_name_data.push_back(igmpinterfacequerier.get_name_leafdata());
    if (igmpinterfacequerierexpirytime.is_set || is_set(igmpinterfacequerierexpirytime.yfilter)) leaf_name_data.push_back(igmpinterfacequerierexpirytime.get_name_leafdata());
    if (igmpinterfacequerieruptime.is_set || is_set(igmpinterfacequerieruptime.yfilter)) leaf_name_data.push_back(igmpinterfacequerieruptime.get_name_leafdata());
    if (igmpinterfacequeryinterval.is_set || is_set(igmpinterfacequeryinterval.yfilter)) leaf_name_data.push_back(igmpinterfacequeryinterval.get_name_leafdata());
    if (igmpinterfacequerymaxresponsetime.is_set || is_set(igmpinterfacequerymaxresponsetime.yfilter)) leaf_name_data.push_back(igmpinterfacequerymaxresponsetime.get_name_leafdata());
    if (igmpinterfacerobustness.is_set || is_set(igmpinterfacerobustness.yfilter)) leaf_name_data.push_back(igmpinterfacerobustness.get_name_leafdata());
    if (igmpinterfacestatus.is_set || is_set(igmpinterfacestatus.yfilter)) leaf_name_data.push_back(igmpinterfacestatus.get_name_leafdata());
    if (igmpinterfaceversion.is_set || is_set(igmpinterfaceversion.yfilter)) leaf_name_data.push_back(igmpinterfaceversion.get_name_leafdata());
    if (igmpinterfaceversion1queriertimer.is_set || is_set(igmpinterfaceversion1queriertimer.yfilter)) leaf_name_data.push_back(igmpinterfaceversion1queriertimer.get_name_leafdata());
    if (igmpinterfacewrongversionqueries.is_set || is_set(igmpinterfacewrongversionqueries.yfilter)) leaf_name_data.push_back(igmpinterfacewrongversionqueries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igmpInterfaceIfIndex")
    {
        igmpinterfaceifindex = value;
        igmpinterfaceifindex.value_namespace = name_space;
        igmpinterfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceGroups")
    {
        igmpinterfacegroups = value;
        igmpinterfacegroups.value_namespace = name_space;
        igmpinterfacegroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceJoins")
    {
        igmpinterfacejoins = value;
        igmpinterfacejoins.value_namespace = name_space;
        igmpinterfacejoins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceLastMembQueryIntvl")
    {
        igmpinterfacelastmembqueryintvl = value;
        igmpinterfacelastmembqueryintvl.value_namespace = name_space;
        igmpinterfacelastmembqueryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceProxyIfIndex")
    {
        igmpinterfaceproxyifindex = value;
        igmpinterfaceproxyifindex.value_namespace = name_space;
        igmpinterfaceproxyifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceQuerier")
    {
        igmpinterfacequerier = value;
        igmpinterfacequerier.value_namespace = name_space;
        igmpinterfacequerier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceQuerierExpiryTime")
    {
        igmpinterfacequerierexpirytime = value;
        igmpinterfacequerierexpirytime.value_namespace = name_space;
        igmpinterfacequerierexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceQuerierUpTime")
    {
        igmpinterfacequerieruptime = value;
        igmpinterfacequerieruptime.value_namespace = name_space;
        igmpinterfacequerieruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceQueryInterval")
    {
        igmpinterfacequeryinterval = value;
        igmpinterfacequeryinterval.value_namespace = name_space;
        igmpinterfacequeryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceQueryMaxResponseTime")
    {
        igmpinterfacequerymaxresponsetime = value;
        igmpinterfacequerymaxresponsetime.value_namespace = name_space;
        igmpinterfacequerymaxresponsetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceRobustness")
    {
        igmpinterfacerobustness = value;
        igmpinterfacerobustness.value_namespace = name_space;
        igmpinterfacerobustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceStatus")
    {
        igmpinterfacestatus = value;
        igmpinterfacestatus.value_namespace = name_space;
        igmpinterfacestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceVersion")
    {
        igmpinterfaceversion = value;
        igmpinterfaceversion.value_namespace = name_space;
        igmpinterfaceversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceVersion1QuerierTimer")
    {
        igmpinterfaceversion1queriertimer = value;
        igmpinterfaceversion1queriertimer.value_namespace = name_space;
        igmpinterfaceversion1queriertimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpInterfaceWrongVersionQueries")
    {
        igmpinterfacewrongversionqueries = value;
        igmpinterfacewrongversionqueries.value_namespace = name_space;
        igmpinterfacewrongversionqueries.value_namespace_prefix = name_space_prefix;
    }
}

void IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igmpInterfaceIfIndex")
    {
        igmpinterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceGroups")
    {
        igmpinterfacegroups.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceJoins")
    {
        igmpinterfacejoins.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceLastMembQueryIntvl")
    {
        igmpinterfacelastmembqueryintvl.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceProxyIfIndex")
    {
        igmpinterfaceproxyifindex.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceQuerier")
    {
        igmpinterfacequerier.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceQuerierExpiryTime")
    {
        igmpinterfacequerierexpirytime.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceQuerierUpTime")
    {
        igmpinterfacequerieruptime.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceQueryInterval")
    {
        igmpinterfacequeryinterval.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceQueryMaxResponseTime")
    {
        igmpinterfacequerymaxresponsetime.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceRobustness")
    {
        igmpinterfacerobustness.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceStatus")
    {
        igmpinterfacestatus.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceVersion")
    {
        igmpinterfaceversion.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceVersion1QuerierTimer")
    {
        igmpinterfaceversion1queriertimer.yfilter = yfilter;
    }
    if(value_path == "igmpInterfaceWrongVersionQueries")
    {
        igmpinterfacewrongversionqueries.yfilter = yfilter;
    }
}

bool IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmpInterfaceIfIndex" || name == "igmpInterfaceGroups" || name == "igmpInterfaceJoins" || name == "igmpInterfaceLastMembQueryIntvl" || name == "igmpInterfaceProxyIfIndex" || name == "igmpInterfaceQuerier" || name == "igmpInterfaceQuerierExpiryTime" || name == "igmpInterfaceQuerierUpTime" || name == "igmpInterfaceQueryInterval" || name == "igmpInterfaceQueryMaxResponseTime" || name == "igmpInterfaceRobustness" || name == "igmpInterfaceStatus" || name == "igmpInterfaceVersion" || name == "igmpInterfaceVersion1QuerierTimer" || name == "igmpInterfaceWrongVersionQueries")
        return true;
    return false;
}

IgmpStdMib::Igmpcachetable::Igmpcachetable()
{
    yang_name = "igmpCacheTable"; yang_parent_name = "IGMP-STD-MIB";
}

IgmpStdMib::Igmpcachetable::~Igmpcachetable()
{
}

bool IgmpStdMib::Igmpcachetable::has_data() const
{
    for (std::size_t index=0; index<igmpcacheentry.size(); index++)
    {
        if(igmpcacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool IgmpStdMib::Igmpcachetable::has_operation() const
{
    for (std::size_t index=0; index<igmpcacheentry.size(); index++)
    {
        if(igmpcacheentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IgmpStdMib::Igmpcachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpCacheTable";

    return path_buffer.str();

}

const EntityPath IgmpStdMib::Igmpcachetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IGMP-STD-MIB:IGMP-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IgmpStdMib::Igmpcachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmpCacheEntry")
    {
        for(auto const & c : igmpcacheentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IgmpStdMib::Igmpcachetable::Igmpcacheentry>();
        c->parent = this;
        igmpcacheentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IgmpStdMib::Igmpcachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igmpcacheentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IgmpStdMib::Igmpcachetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IgmpStdMib::Igmpcachetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IgmpStdMib::Igmpcachetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmpCacheEntry")
        return true;
    return false;
}

IgmpStdMib::Igmpcachetable::Igmpcacheentry::Igmpcacheentry()
    :
    igmpcacheaddress{YType::str, "igmpCacheAddress"},
    igmpcacheifindex{YType::int32, "igmpCacheIfIndex"},
    igmpcacheexpirytime{YType::uint32, "igmpCacheExpiryTime"},
    igmpcachelastreporter{YType::str, "igmpCacheLastReporter"},
    igmpcacheself{YType::boolean, "igmpCacheSelf"},
    igmpcachestatus{YType::enumeration, "igmpCacheStatus"},
    igmpcacheuptime{YType::uint32, "igmpCacheUpTime"},
    igmpcacheversion1hosttimer{YType::uint32, "igmpCacheVersion1HostTimer"}
{
    yang_name = "igmpCacheEntry"; yang_parent_name = "igmpCacheTable";
}

IgmpStdMib::Igmpcachetable::Igmpcacheentry::~Igmpcacheentry()
{
}

bool IgmpStdMib::Igmpcachetable::Igmpcacheentry::has_data() const
{
    return igmpcacheaddress.is_set
	|| igmpcacheifindex.is_set
	|| igmpcacheexpirytime.is_set
	|| igmpcachelastreporter.is_set
	|| igmpcacheself.is_set
	|| igmpcachestatus.is_set
	|| igmpcacheuptime.is_set
	|| igmpcacheversion1hosttimer.is_set;
}

bool IgmpStdMib::Igmpcachetable::Igmpcacheentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igmpcacheaddress.yfilter)
	|| ydk::is_set(igmpcacheifindex.yfilter)
	|| ydk::is_set(igmpcacheexpirytime.yfilter)
	|| ydk::is_set(igmpcachelastreporter.yfilter)
	|| ydk::is_set(igmpcacheself.yfilter)
	|| ydk::is_set(igmpcachestatus.yfilter)
	|| ydk::is_set(igmpcacheuptime.yfilter)
	|| ydk::is_set(igmpcacheversion1hosttimer.yfilter);
}

std::string IgmpStdMib::Igmpcachetable::Igmpcacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpCacheEntry" <<"[igmpCacheAddress='" <<igmpcacheaddress <<"']" <<"[igmpCacheIfIndex='" <<igmpcacheifindex <<"']";

    return path_buffer.str();

}

const EntityPath IgmpStdMib::Igmpcachetable::Igmpcacheentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IGMP-STD-MIB:IGMP-STD-MIB/igmpCacheTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igmpcacheaddress.is_set || is_set(igmpcacheaddress.yfilter)) leaf_name_data.push_back(igmpcacheaddress.get_name_leafdata());
    if (igmpcacheifindex.is_set || is_set(igmpcacheifindex.yfilter)) leaf_name_data.push_back(igmpcacheifindex.get_name_leafdata());
    if (igmpcacheexpirytime.is_set || is_set(igmpcacheexpirytime.yfilter)) leaf_name_data.push_back(igmpcacheexpirytime.get_name_leafdata());
    if (igmpcachelastreporter.is_set || is_set(igmpcachelastreporter.yfilter)) leaf_name_data.push_back(igmpcachelastreporter.get_name_leafdata());
    if (igmpcacheself.is_set || is_set(igmpcacheself.yfilter)) leaf_name_data.push_back(igmpcacheself.get_name_leafdata());
    if (igmpcachestatus.is_set || is_set(igmpcachestatus.yfilter)) leaf_name_data.push_back(igmpcachestatus.get_name_leafdata());
    if (igmpcacheuptime.is_set || is_set(igmpcacheuptime.yfilter)) leaf_name_data.push_back(igmpcacheuptime.get_name_leafdata());
    if (igmpcacheversion1hosttimer.is_set || is_set(igmpcacheversion1hosttimer.yfilter)) leaf_name_data.push_back(igmpcacheversion1hosttimer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IgmpStdMib::Igmpcachetable::Igmpcacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IgmpStdMib::Igmpcachetable::Igmpcacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IgmpStdMib::Igmpcachetable::Igmpcacheentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igmpCacheAddress")
    {
        igmpcacheaddress = value;
        igmpcacheaddress.value_namespace = name_space;
        igmpcacheaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheIfIndex")
    {
        igmpcacheifindex = value;
        igmpcacheifindex.value_namespace = name_space;
        igmpcacheifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheExpiryTime")
    {
        igmpcacheexpirytime = value;
        igmpcacheexpirytime.value_namespace = name_space;
        igmpcacheexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheLastReporter")
    {
        igmpcachelastreporter = value;
        igmpcachelastreporter.value_namespace = name_space;
        igmpcachelastreporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheSelf")
    {
        igmpcacheself = value;
        igmpcacheself.value_namespace = name_space;
        igmpcacheself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheStatus")
    {
        igmpcachestatus = value;
        igmpcachestatus.value_namespace = name_space;
        igmpcachestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheUpTime")
    {
        igmpcacheuptime = value;
        igmpcacheuptime.value_namespace = name_space;
        igmpcacheuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmpCacheVersion1HostTimer")
    {
        igmpcacheversion1hosttimer = value;
        igmpcacheversion1hosttimer.value_namespace = name_space;
        igmpcacheversion1hosttimer.value_namespace_prefix = name_space_prefix;
    }
}

void IgmpStdMib::Igmpcachetable::Igmpcacheentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igmpCacheAddress")
    {
        igmpcacheaddress.yfilter = yfilter;
    }
    if(value_path == "igmpCacheIfIndex")
    {
        igmpcacheifindex.yfilter = yfilter;
    }
    if(value_path == "igmpCacheExpiryTime")
    {
        igmpcacheexpirytime.yfilter = yfilter;
    }
    if(value_path == "igmpCacheLastReporter")
    {
        igmpcachelastreporter.yfilter = yfilter;
    }
    if(value_path == "igmpCacheSelf")
    {
        igmpcacheself.yfilter = yfilter;
    }
    if(value_path == "igmpCacheStatus")
    {
        igmpcachestatus.yfilter = yfilter;
    }
    if(value_path == "igmpCacheUpTime")
    {
        igmpcacheuptime.yfilter = yfilter;
    }
    if(value_path == "igmpCacheVersion1HostTimer")
    {
        igmpcacheversion1hosttimer.yfilter = yfilter;
    }
}

bool IgmpStdMib::Igmpcachetable::Igmpcacheentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmpCacheAddress" || name == "igmpCacheIfIndex" || name == "igmpCacheExpiryTime" || name == "igmpCacheLastReporter" || name == "igmpCacheSelf" || name == "igmpCacheStatus" || name == "igmpCacheUpTime" || name == "igmpCacheVersion1HostTimer")
        return true;
    return false;
}


}
}

