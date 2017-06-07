
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IGMP_STD_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void IgmpStdMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation);
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

void IgmpStdMib::Igmpinterfacetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(igmpinterfaceifindex.operation)
	|| is_set(igmpinterfacegroups.operation)
	|| is_set(igmpinterfacejoins.operation)
	|| is_set(igmpinterfacelastmembqueryintvl.operation)
	|| is_set(igmpinterfaceproxyifindex.operation)
	|| is_set(igmpinterfacequerier.operation)
	|| is_set(igmpinterfacequerierexpirytime.operation)
	|| is_set(igmpinterfacequerieruptime.operation)
	|| is_set(igmpinterfacequeryinterval.operation)
	|| is_set(igmpinterfacequerymaxresponsetime.operation)
	|| is_set(igmpinterfacerobustness.operation)
	|| is_set(igmpinterfacestatus.operation)
	|| is_set(igmpinterfaceversion.operation)
	|| is_set(igmpinterfaceversion1queriertimer.operation)
	|| is_set(igmpinterfacewrongversionqueries.operation);
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

    if (igmpinterfaceifindex.is_set || is_set(igmpinterfaceifindex.operation)) leaf_name_data.push_back(igmpinterfaceifindex.get_name_leafdata());
    if (igmpinterfacegroups.is_set || is_set(igmpinterfacegroups.operation)) leaf_name_data.push_back(igmpinterfacegroups.get_name_leafdata());
    if (igmpinterfacejoins.is_set || is_set(igmpinterfacejoins.operation)) leaf_name_data.push_back(igmpinterfacejoins.get_name_leafdata());
    if (igmpinterfacelastmembqueryintvl.is_set || is_set(igmpinterfacelastmembqueryintvl.operation)) leaf_name_data.push_back(igmpinterfacelastmembqueryintvl.get_name_leafdata());
    if (igmpinterfaceproxyifindex.is_set || is_set(igmpinterfaceproxyifindex.operation)) leaf_name_data.push_back(igmpinterfaceproxyifindex.get_name_leafdata());
    if (igmpinterfacequerier.is_set || is_set(igmpinterfacequerier.operation)) leaf_name_data.push_back(igmpinterfacequerier.get_name_leafdata());
    if (igmpinterfacequerierexpirytime.is_set || is_set(igmpinterfacequerierexpirytime.operation)) leaf_name_data.push_back(igmpinterfacequerierexpirytime.get_name_leafdata());
    if (igmpinterfacequerieruptime.is_set || is_set(igmpinterfacequerieruptime.operation)) leaf_name_data.push_back(igmpinterfacequerieruptime.get_name_leafdata());
    if (igmpinterfacequeryinterval.is_set || is_set(igmpinterfacequeryinterval.operation)) leaf_name_data.push_back(igmpinterfacequeryinterval.get_name_leafdata());
    if (igmpinterfacequerymaxresponsetime.is_set || is_set(igmpinterfacequerymaxresponsetime.operation)) leaf_name_data.push_back(igmpinterfacequerymaxresponsetime.get_name_leafdata());
    if (igmpinterfacerobustness.is_set || is_set(igmpinterfacerobustness.operation)) leaf_name_data.push_back(igmpinterfacerobustness.get_name_leafdata());
    if (igmpinterfacestatus.is_set || is_set(igmpinterfacestatus.operation)) leaf_name_data.push_back(igmpinterfacestatus.get_name_leafdata());
    if (igmpinterfaceversion.is_set || is_set(igmpinterfaceversion.operation)) leaf_name_data.push_back(igmpinterfaceversion.get_name_leafdata());
    if (igmpinterfaceversion1queriertimer.is_set || is_set(igmpinterfaceversion1queriertimer.operation)) leaf_name_data.push_back(igmpinterfaceversion1queriertimer.get_name_leafdata());
    if (igmpinterfacewrongversionqueries.is_set || is_set(igmpinterfacewrongversionqueries.operation)) leaf_name_data.push_back(igmpinterfacewrongversionqueries.get_name_leafdata());


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

void IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igmpInterfaceIfIndex")
    {
        igmpinterfaceifindex = value;
    }
    if(value_path == "igmpInterfaceGroups")
    {
        igmpinterfacegroups = value;
    }
    if(value_path == "igmpInterfaceJoins")
    {
        igmpinterfacejoins = value;
    }
    if(value_path == "igmpInterfaceLastMembQueryIntvl")
    {
        igmpinterfacelastmembqueryintvl = value;
    }
    if(value_path == "igmpInterfaceProxyIfIndex")
    {
        igmpinterfaceproxyifindex = value;
    }
    if(value_path == "igmpInterfaceQuerier")
    {
        igmpinterfacequerier = value;
    }
    if(value_path == "igmpInterfaceQuerierExpiryTime")
    {
        igmpinterfacequerierexpirytime = value;
    }
    if(value_path == "igmpInterfaceQuerierUpTime")
    {
        igmpinterfacequerieruptime = value;
    }
    if(value_path == "igmpInterfaceQueryInterval")
    {
        igmpinterfacequeryinterval = value;
    }
    if(value_path == "igmpInterfaceQueryMaxResponseTime")
    {
        igmpinterfacequerymaxresponsetime = value;
    }
    if(value_path == "igmpInterfaceRobustness")
    {
        igmpinterfacerobustness = value;
    }
    if(value_path == "igmpInterfaceStatus")
    {
        igmpinterfacestatus = value;
    }
    if(value_path == "igmpInterfaceVersion")
    {
        igmpinterfaceversion = value;
    }
    if(value_path == "igmpInterfaceVersion1QuerierTimer")
    {
        igmpinterfaceversion1queriertimer = value;
    }
    if(value_path == "igmpInterfaceWrongVersionQueries")
    {
        igmpinterfacewrongversionqueries = value;
    }
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
    return is_set(operation);
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

void IgmpStdMib::Igmpcachetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(igmpcacheaddress.operation)
	|| is_set(igmpcacheifindex.operation)
	|| is_set(igmpcacheexpirytime.operation)
	|| is_set(igmpcachelastreporter.operation)
	|| is_set(igmpcacheself.operation)
	|| is_set(igmpcachestatus.operation)
	|| is_set(igmpcacheuptime.operation)
	|| is_set(igmpcacheversion1hosttimer.operation);
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

    if (igmpcacheaddress.is_set || is_set(igmpcacheaddress.operation)) leaf_name_data.push_back(igmpcacheaddress.get_name_leafdata());
    if (igmpcacheifindex.is_set || is_set(igmpcacheifindex.operation)) leaf_name_data.push_back(igmpcacheifindex.get_name_leafdata());
    if (igmpcacheexpirytime.is_set || is_set(igmpcacheexpirytime.operation)) leaf_name_data.push_back(igmpcacheexpirytime.get_name_leafdata());
    if (igmpcachelastreporter.is_set || is_set(igmpcachelastreporter.operation)) leaf_name_data.push_back(igmpcachelastreporter.get_name_leafdata());
    if (igmpcacheself.is_set || is_set(igmpcacheself.operation)) leaf_name_data.push_back(igmpcacheself.get_name_leafdata());
    if (igmpcachestatus.is_set || is_set(igmpcachestatus.operation)) leaf_name_data.push_back(igmpcachestatus.get_name_leafdata());
    if (igmpcacheuptime.is_set || is_set(igmpcacheuptime.operation)) leaf_name_data.push_back(igmpcacheuptime.get_name_leafdata());
    if (igmpcacheversion1hosttimer.is_set || is_set(igmpcacheversion1hosttimer.operation)) leaf_name_data.push_back(igmpcacheversion1hosttimer.get_name_leafdata());


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

void IgmpStdMib::Igmpcachetable::Igmpcacheentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igmpCacheAddress")
    {
        igmpcacheaddress = value;
    }
    if(value_path == "igmpCacheIfIndex")
    {
        igmpcacheifindex = value;
    }
    if(value_path == "igmpCacheExpiryTime")
    {
        igmpcacheexpirytime = value;
    }
    if(value_path == "igmpCacheLastReporter")
    {
        igmpcachelastreporter = value;
    }
    if(value_path == "igmpCacheSelf")
    {
        igmpcacheself = value;
    }
    if(value_path == "igmpCacheStatus")
    {
        igmpcachestatus = value;
    }
    if(value_path == "igmpCacheUpTime")
    {
        igmpcacheuptime = value;
    }
    if(value_path == "igmpCacheVersion1HostTimer")
    {
        igmpcacheversion1hosttimer = value;
    }
}


}
}

