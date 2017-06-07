
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Ip::Igmp::Snooping::Tcn::Flood::Flood()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>())
{
    query->parent = this;

    yang_name = "flood"; yang_parent_name = "tcn";
}

Native::Ip::Igmp::Snooping::Tcn::Flood::~Flood()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_data() const
{
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_operation() const
{
    return is_set(operation)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Tcn::Flood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::Query()
    :
    count{YType::uint8, "count"}
{
    yang_name = "query"; yang_parent_name = "flood";
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_data() const
{
    return count.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/flood/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Native::Ip::Igmp::Snooping::Tcn::Query::Query()
    :
    solicit{YType::empty, "solicit"}
{
    yang_name = "query"; yang_parent_name = "tcn";
}

Native::Ip::Igmp::Snooping::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_data() const
{
    return solicit.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_operation() const
{
    return is_set(operation)
	|| is_set(solicit.operation);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Tcn::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (solicit.is_set || is_set(solicit.operation)) leaf_name_data.push_back(solicit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "solicit")
    {
        solicit = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Vlan()
{
    yang_name = "vlan"; yang_parent_name = "snooping";
}

Native::Ip::Igmp::Snooping::Vlan::~Vlan()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Igmp::Snooping::Vlan::Range::Range()
    :
    range{YType::uint16, "range"},
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    robustness_variable{YType::uint8, "robustness-variable"}
    	,
    mrouter(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>())
	,querier(nullptr) // presence node
	,static_(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static_>())
{
    mrouter->parent = this;

    static_->parent = this;

    yang_name = "range"; yang_parent_name = "vlan";
}

Native::Ip::Igmp::Snooping::Vlan::Range::~Range()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_data() const
{
    return range.is_set
	|| immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| robustness_variable.is_set
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(immediate_leave.operation)
	|| is_set(last_member_query_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(robustness_variable.operation)
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/Cisco-IOS-XE-switch:vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (immediate_leave.is_set || is_set(immediate_leave.operation)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.operation)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.operation)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Mrouter()
    :
    interface{YType::str, "interface"}
    	,
    learn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>())
{
    learn->parent = this;

    yang_name = "mrouter"; yang_parent_name = "range";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::~Mrouter()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_data() const
{
    return interface.is_set
	|| (learn !=  nullptr && learn->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| (learn !=  nullptr && learn->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mrouter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>();
        }
        return learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(learn != nullptr)
    {
        children["learn"] = learn;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::Learn()
    :
    cgmp{YType::empty, "cgmp"},
    pim_dvmrp{YType::empty, "pim-dvmrp"}
{
    yang_name = "learn"; yang_parent_name = "mrouter";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::~Learn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_data() const
{
    return cgmp.is_set
	|| pim_dvmrp.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_operation() const
{
    return is_set(operation)
	|| is_set(cgmp.operation)
	|| is_set(pim_dvmrp.operation);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Learn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cgmp.is_set || is_set(cgmp.operation)) leaf_name_data.push_back(cgmp.get_name_leafdata());
    if (pim_dvmrp.is_set || is_set(pim_dvmrp.operation)) leaf_name_data.push_back(pim_dvmrp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cgmp")
    {
        cgmp = value;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
    	,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>())
	,timer(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>())
{
    tcn->parent = this;

    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "range";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(max_response_time.operation)
	|| is_set(query_interval.operation)
	|| is_set(version.operation)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Querier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.operation)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_data() const
{
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_operation() const
{
    return is_set(operation)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{
    yang_name = "query"; yang_parent_name = "tcn";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Query' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{
    yang_name = "timer"; yang_parent_name = "querier";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_data() const
{
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(expiry.operation);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiry")
    {
        expiry = value;
    }
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "range";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static_::~Static_()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static_::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static_::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{
    yang_name = "ipv4"; yang_parent_name = "static";
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::~Ipv4()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::has_data() const
{
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(interface.operation);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::get_entity_path(Entity* ancestor) const
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
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Ip::Igmp::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ip::Igmp::SsmMap::Query>())
	,static_(std::make_shared<Native::Ip::Igmp::SsmMap::Static_>())
{
    query->parent = this;

    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "igmp";
}

Native::Ip::Igmp::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::SsmMap::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Igmp::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Ip::Igmp::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{
    yang_name = "query"; yang_parent_name = "ssm-map";
}

Native::Ip::Igmp::SsmMap::Query::~Query()
{
}

bool Native::Ip::Igmp::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ip::Igmp::SsmMap::Query::has_operation() const
{
    return is_set(operation)
	|| is_set(dns.operation);
}

std::string Native::Ip::Igmp::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SsmMap::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.operation)) leaf_name_data.push_back(dns.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::SsmMap::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns")
    {
        dns = value;
    }
}

Native::Ip::Igmp::SsmMap::Static_::Static_()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "static"; yang_parent_name = "ssm-map";
}

Native::Ip::Igmp::SsmMap::Static_::~Static_()
{
}

bool Native::Ip::Igmp::SsmMap::Static_::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Igmp::SsmMap::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(source_ip.operation);
}

std::string Native::Ip::Igmp::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SsmMap::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::SsmMap::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
}

Native::Ip::Igmp::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    ssm_map(std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "vrf"; yang_parent_name = "igmp";
}

Native::Ip::Igmp::Vrf::~Vrf()
{
}

bool Native::Ip::Igmp::Vrf::has_data() const
{
    return name.is_set
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ip::Igmp::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Igmp::Vrf::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "ssm-map"; yang_parent_name = "vrf";
}

Native::Ip::Igmp::Vrf::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return enable.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Vrf::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        for(auto const & c : static_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap::Static_>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Ip::Igmp::Vrf::SsmMap::Static_::Static_()
    :
    srcaddress{YType::str, "srcaddress"},
    aclname{YType::str, "aclname"}
{
    yang_name = "static"; yang_parent_name = "ssm-map";
}

Native::Ip::Igmp::Vrf::SsmMap::Static_::~Static_()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_data() const
{
    return srcaddress.is_set
	|| aclname.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(srcaddress.operation)
	|| is_set(aclname.operation);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[srcaddress='" <<srcaddress <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Vrf::SsmMap::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddress.is_set || is_set(srcaddress.operation)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.operation)) leaf_name_data.push_back(aclname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srcaddress")
    {
        srcaddress = value;
    }
    if(value_path == "aclname")
    {
        aclname = value;
    }
}

Native::Ip::Msdp::Msdp()
    :
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    default_peer(std::make_shared<Native::Ip::Msdp::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Password>())
	,peer(std::make_shared<Native::Ip::Msdp::Peer>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::TtlThreshold>())
{
    default_peer->parent = this;

    description->parent = this;

    filter_sa_request->parent = this;

    keepalive->parent = this;

    mesh_group->parent = this;

    password->parent = this;

    peer->parent = this;

    redistribute->parent = this;

    sa_filter->parent = this;

    sa_limit->parent = this;

    shutdown->parent = this;

    ttl_threshold->parent = this;

    yang_name = "msdp"; yang_parent_name = "ip";
}

Native::Ip::Msdp::~Msdp()
{
}

bool Native::Ip::Msdp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cache_rejected_sa.operation)
	|| is_set(cache_sa_state.operation)
	|| is_set(originator_id.operation)
	|| is_set(rpf.operation)
	|| is_set(timer.operation)
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:msdp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.operation)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.operation)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.operation)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.operation)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Password>();
        }
        return password;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::TtlThreshold>();
        }
        return ttl_threshold;
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
        auto c = std::make_shared<Native::Ip::Msdp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_peer != nullptr)
    {
        children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        children["ttl-threshold"] = ttl_threshold;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Msdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
    }
    if(value_path == "rpf")
    {
        rpf = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
}

Native::Ip::Msdp::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{
    yang_name = "peer"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Peer::has_data() const
{
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(connect_source.operation)
	|| is_set(remote_as.operation);
}

std::string Native::Ip::Msdp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.operation)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
}

Native::Ip::Msdp::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "default-peer"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::DefaultPeer::has_data() const
{
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::DefaultPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(name_addr.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Ip::Msdp::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::DefaultPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::DefaultPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::Ip::Msdp::Description::Description()
    :
    description{YType::str, "description"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "description"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Description::~Description()
{
}

bool Native::Ip::Msdp::Description::has_data() const
{
    return description.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Description::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Description::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Description::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::FilterSaRequest::FilterSaRequest()
    :
    list{YType::str, "list"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "filter-sa-request"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::FilterSaRequest::has_data() const
{
    return list.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::FilterSaRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::FilterSaRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::FilterSaRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Keepalive::Keepalive()
    :
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "keepalive"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Keepalive::has_data() const
{
    return keepalive.is_set
	|| max_wait.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Keepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(keepalive.operation)
	|| is_set(max_wait.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.operation)) leaf_name_data.push_back(max_wait.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::MeshGroup::MeshGroup()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{
    yang_name = "mesh-group"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::MeshGroup::has_data() const
{
    return addr.is_set
	|| name.is_set;
}

bool Native::Ip::Msdp::MeshGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(name.operation);
}

std::string Native::Ip::Msdp::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::MeshGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Msdp::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Password::~Password()
{
}

bool Native::Ip::Msdp::Password::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Password::has_operation() const
{
    return is_set(operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Ip::Msdp::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Msdp::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{
    yang_name = "peer"; yang_parent_name = "password";
}

Native::Ip::Msdp::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Password::Peer::has_data() const
{
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Password::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(encryption.operation)
	|| is_set(password.operation);
}

std::string Native::Ip::Msdp::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Password::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Password::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Ip::Msdp::Redistribute::Redistribute()
    :
    asn{YType::uint16, "asn"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"}
{
    yang_name = "redistribute"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Redistribute::has_data() const
{
    return asn.is_set
	|| list.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Redistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(list.operation)
	|| is_set(route_map.operation);
}

std::string Native::Ip::Msdp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ip::Msdp::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::SaFilter::In>())
	,out(std::make_shared<Native::Ip::Msdp::SaFilter::Out>())
{
    in->parent = this;

    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::SaFilter::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::SaFilter::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::get_children() const
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

void Native::Ip::Msdp::SaFilter::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Msdp::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{
    yang_name = "in"; yang_parent_name = "sa-filter";
}

Native::Ip::Msdp::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::SaFilter::In::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::In::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(list.operation)
	|| is_set(route_map.operation)
	|| is_set(rp_list.operation)
	|| is_set(rp_route_map.operation);
}

std::string Native::Ip::Msdp::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaFilter::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.operation)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.operation)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::SaFilter::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
    }
}

Native::Ip::Msdp::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{
    yang_name = "out"; yang_parent_name = "sa-filter";
}

Native::Ip::Msdp::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::SaFilter::Out::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(list.operation)
	|| is_set(route_map.operation)
	|| is_set(rp_list.operation)
	|| is_set(rp_route_map.operation);
}

std::string Native::Ip::Msdp::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaFilter::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.operation)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.operation)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::SaFilter::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
    }
}

Native::Ip::Msdp::SaLimit::SaLimit()
    :
    limit{YType::uint32, "limit"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "sa-limit"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::SaLimit::has_data() const
{
    return limit.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::SaLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::SaLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{
    yang_name = "shutdown"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Shutdown::has_data() const
{
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{
    yang_name = "ttl-threshold"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::TtlThreshold::has_data() const
{
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::TtlThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(name_addr.operation)
	|| is_set(threshold.operation);
}

std::string Native::Ip::Msdp::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::TtlThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::TtlThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Ip::Msdp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    default_peer(std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Vrf::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Vrf::Password>())
	,peer(std::make_shared<Native::Ip::Msdp::Vrf::Peer>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>())
{
    default_peer->parent = this;

    description->parent = this;

    filter_sa_request->parent = this;

    keepalive->parent = this;

    mesh_group->parent = this;

    password->parent = this;

    peer->parent = this;

    redistribute->parent = this;

    sa_filter->parent = this;

    sa_limit->parent = this;

    shutdown->parent = this;

    ttl_threshold->parent = this;

    yang_name = "vrf"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Vrf::~Vrf()
{
}

bool Native::Ip::Msdp::Vrf::has_data() const
{
    return name.is_set
	|| cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(cache_rejected_sa.operation)
	|| is_set(cache_sa_state.operation)
	|| is_set(originator_id.operation)
	|| is_set(rpf.operation)
	|| is_set(timer.operation)
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.operation)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.operation)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.operation)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.operation)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Vrf::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Vrf::Password>();
        }
        return password;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>();
        }
        return ttl_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_peer != nullptr)
    {
        children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        children["ttl-threshold"] = ttl_threshold;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
    }
    if(value_path == "rpf")
    {
        rpf = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
}

Native::Ip::Msdp::Vrf::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{
    yang_name = "peer"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Peer::has_data() const
{
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Vrf::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(connect_source.operation)
	|| is_set(remote_as.operation);
}

std::string Native::Ip::Msdp::Vrf::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Peer::get_entity_path(Entity* ancestor) const
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

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.operation)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
}

Native::Ip::Msdp::Vrf::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "default-peer"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_data() const
{
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(name_addr.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Ip::Msdp::Vrf::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::DefaultPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::Ip::Msdp::Vrf::Description::Description()
    :
    description{YType::str, "description"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "description"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Description::~Description()
{
}

bool Native::Ip::Msdp::Vrf::Description::has_data() const
{
    return description.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Description::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Vrf::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Description::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Description' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Description::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Vrf::FilterSaRequest::FilterSaRequest()
    :
    list{YType::str, "list"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "filter-sa-request"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_data() const
{
    return list.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Vrf::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::FilterSaRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterSaRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Vrf::Keepalive::Keepalive()
    :
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "keepalive"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_data() const
{
    return keepalive.is_set
	|| max_wait.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(keepalive.operation)
	|| is_set(max_wait.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Vrf::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.operation)) leaf_name_data.push_back(max_wait.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Vrf::MeshGroup::MeshGroup()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{
    yang_name = "mesh-group"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_data() const
{
    return addr.is_set
	|| name.is_set;
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(name.operation);
}

std::string Native::Ip::Msdp::Vrf::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Msdp::Vrf::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Password::~Password()
{
}

bool Native::Ip::Msdp::Vrf::Password::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Vrf::Password::has_operation() const
{
    return is_set(operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Vrf::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Password::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Msdp::Vrf::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{
    yang_name = "peer"; yang_parent_name = "password";
}

Native::Ip::Msdp::Vrf::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_data() const
{
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(encryption.operation)
	|| is_set(password.operation);
}

std::string Native::Ip::Msdp::Vrf::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Password::Peer::get_entity_path(Entity* ancestor) const
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

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Ip::Msdp::Vrf::Redistribute::Redistribute()
    :
    asn{YType::uint16, "asn"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"}
{
    yang_name = "redistribute"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_data() const
{
    return asn.is_set
	|| list.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(list.operation)
	|| is_set(route_map.operation);
}

std::string Native::Ip::Msdp::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Redistribute::get_entity_path(Entity* ancestor) const
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

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ip::Msdp::Vrf::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>())
	,out(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>())
{
    in->parent = this;

    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::Vrf::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::get_children() const
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

void Native::Ip::Msdp::Vrf::SaFilter::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Msdp::Vrf::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{
    yang_name = "in"; yang_parent_name = "sa-filter";
}

Native::Ip::Msdp::Vrf::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(list.operation)
	|| is_set(route_map.operation)
	|| is_set(rp_list.operation)
	|| is_set(rp_route_map.operation);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::SaFilter::In::get_entity_path(Entity* ancestor) const
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

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.operation)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.operation)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
    }
}

Native::Ip::Msdp::Vrf::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{
    yang_name = "out"; yang_parent_name = "sa-filter";
}

Native::Ip::Msdp::Vrf::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(list.operation)
	|| is_set(route_map.operation)
	|| is_set(rp_list.operation)
	|| is_set(rp_route_map.operation);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::SaFilter::Out::get_entity_path(Entity* ancestor) const
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

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.operation)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.operation)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
    }
}

Native::Ip::Msdp::Vrf::SaLimit::SaLimit()
    :
    limit{YType::uint32, "limit"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "sa-limit"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_data() const
{
    return limit.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Vrf::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::SaLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::SaLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Vrf::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{
    yang_name = "shutdown"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_data() const
{
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(name_addr.operation);
}

std::string Native::Ip::Msdp::Vrf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
}

Native::Ip::Msdp::Vrf::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{
    yang_name = "ttl-threshold"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_data() const
{
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(name_addr.operation)
	|| is_set(threshold.operation);
}

std::string Native::Ip::Msdp::Vrf::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::TtlThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.operation)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Ip::McrConf::McrConf()
    :
    multicast_routing{YType::empty, "multicast-routing"}
{
    yang_name = "mcr-conf"; yang_parent_name = "ip";
}

Native::Ip::McrConf::~McrConf()
{
}

bool Native::Ip::McrConf::has_data() const
{
    return multicast_routing.is_set;
}

bool Native::Ip::McrConf::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_routing.operation);
}

std::string Native::Ip::McrConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mcr-conf";

    return path_buffer.str();

}

const EntityPath Native::Ip::McrConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_routing.is_set || is_set(multicast_routing.operation)) leaf_name_data.push_back(multicast_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::McrConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::McrConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::McrConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing = value;
    }
}

Native::Ip::MulticastRouting::MulticastRouting()
    :
    distributed{YType::empty, "distributed"}
{
    yang_name = "multicast-routing"; yang_parent_name = "ip";
}

Native::Ip::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ip::MulticastRouting::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return distributed.is_set;
}

bool Native::Ip::MulticastRouting::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(distributed.operation);
}

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";

    return path_buffer.str();

}

const EntityPath Native::Ip::MulticastRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.operation)) leaf_name_data.push_back(distributed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::MulticastRouting::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::MulticastRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distributed")
    {
        distributed = value;
    }
}

Native::Ip::MulticastRouting::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distributed{YType::empty, "distributed"}
{
    yang_name = "vrf"; yang_parent_name = "multicast-routing";
}

Native::Ip::MulticastRouting::Vrf::~Vrf()
{
}

bool Native::Ip::MulticastRouting::Vrf::has_data() const
{
    return name.is_set
	|| distributed.is_set;
}

bool Native::Ip::MulticastRouting::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(distributed.operation);
}

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::MulticastRouting::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.operation)) leaf_name_data.push_back(distributed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::MulticastRouting::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "distributed")
    {
        distributed = value;
    }
}

Native::Ip::Mroute::Mroute()
    :
    source_address{YType::str, "source-address"},
    subnet_mask{YType::str, "subnet-mask"},
    tunnel{YType::int32, "Tunnel"}
{
    yang_name = "mroute"; yang_parent_name = "ip";
}

Native::Ip::Mroute::~Mroute()
{
}

bool Native::Ip::Mroute::has_data() const
{
    return source_address.is_set
	|| subnet_mask.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Mroute::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(subnet_mask.operation)
	|| is_set(tunnel.operation);
}

std::string Native::Ip::Mroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mroute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Mroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.operation)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Mroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Mroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Mroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
}

Native::Ip::Nat::Nat()
    :
    inside(std::make_shared<Native::Ip::Nat::Inside>())
	,outside(std::make_shared<Native::Ip::Nat::Outside>())
{
    inside->parent = this;

    outside->parent = this;

    yang_name = "nat"; yang_parent_name = "ip";
}

Native::Ip::Nat::~Nat()
{
}

bool Native::Ip::Nat::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (inside !=  nullptr && inside->has_data())
	|| (outside !=  nullptr && outside->has_data());
}

bool Native::Ip::Nat::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (inside !=  nullptr && inside->has_operation())
	|| (outside !=  nullptr && outside->has_operation());
}

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Ip::Nat::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "outside")
    {
        if(outside == nullptr)
        {
            outside = std::make_shared<Native::Ip::Nat::Outside>();
        }
        return outside;
    }

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        children["outside"] = outside;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    accounting{YType::str, "accounting"},
    add_route{YType::empty, "add-route"},
    arp_ping{YType::empty, "arp-ping"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    start_address{YType::str, "start-address"},
    type{YType::enumeration, "type"}
{
    yang_name = "pool"; yang_parent_name = "nat";
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    return id.is_set
	|| accounting.is_set
	|| add_route.is_set
	|| arp_ping.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| start_address.is_set
	|| type.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(accounting.operation)
	|| is_set(add_route.operation)
	|| is_set(arp_ping.operation)
	|| is_set(end_address.operation)
	|| is_set(netmask.operation)
	|| is_set(prefix_length.operation)
	|| is_set(start_address.operation)
	|| is_set(type.operation);
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.operation)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.operation)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.operation)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "accounting")
    {
        accounting = value;
    }
    if(value_path == "add-route")
    {
        add_route = value;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
    }
    if(value_path == "end-address")
    {
        end_address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Ip::Nat::Inside::Inside()
    :
    destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
	,source(std::make_shared<Native::Ip::Nat::Inside::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "inside"; yang_parent_name = "nat";
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Ip::Nat::Inside::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nat::Inside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static_>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside";
}

Native::Ip::Nat::Inside::Source::~Source()
{
}

bool Native::Ip::Nat::Inside::Source::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Inside::Source::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        c->parent = this;
        list.push_back(c);
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
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nat::Inside::Source::List::List()
    :
    id{YType::str, "id"},
    mapping_id{YType::uint32, "mapping-id"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    no_payload{YType::empty, "no-payload"},
    oer{YType::empty, "oer"},
    overload{YType::empty, "overload"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    reversible{YType::empty, "reversible"},
    vrf{YType::str, "vrf"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>())
{
    interface->parent = this;

    yang_name = "list"; yang_parent_name = "source";
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    return id.is_set
	|| mapping_id.is_set
	|| match_in_vrf.is_set
	|| no_payload.is_set
	|| oer.is_set
	|| overload.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| reversible.is_set
	|| vrf.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(mapping_id.operation)
	|| is_set(match_in_vrf.operation)
	|| is_set(no_payload.operation)
	|| is_set(oer.operation)
	|| is_set(overload.operation)
	|| is_set(pool.operation)
	|| is_set(redundancy.operation)
	|| is_set(reversible.operation)
	|| is_set(vrf.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.operation)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.operation)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.operation)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (oer.is_set || is_set(oer.operation)) leaf_name_data.push_back(oer.get_name_leafdata());
    if (overload.is_set || is_set(overload.operation)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.operation)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
    }
    if(value_path == "oer")
    {
        oer = value;
    }
    if(value_path == "overload")
    {
        overload = value;
    }
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
    if(value_path == "reversible")
    {
        reversible = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Nat::Inside::Source::List::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "list";
}

Native::Ip::Nat::Inside::Source::List::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::List::Interface::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::RouteMap()
    :
    route_map_name{YType::str, "route-map-name"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>())
	,oer(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>())
	,overload(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>())
{
    interface->parent = this;

    oer->parent = this;

    overload->parent = this;

    yang_name = "route-map"; yang_parent_name = "source";
}

Native::Ip::Nat::Inside::Source::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_map_name.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(route_map_name.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[route-map-name='" <<route_map_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.operation)) leaf_name_data.push_back(route_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>();
        }
        return overload;
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
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "route-map";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::Oer()
    :
    extended{YType::empty, "extended"},
    overload{YType::empty, "overload"}
{
    yang_name = "oer"; yang_parent_name = "route-map";
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_data() const
{
    return extended.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation)
	|| is_set(overload.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (overload.is_set || is_set(overload.operation)) leaf_name_data.push_back(overload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
    if(value_path == "overload")
    {
        overload = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::Overload()
    :
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{
    yang_name = "overload"; yang_parent_name = "route-map";
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_data() const
{
    return extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation)
	|| is_set(oer.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overload' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.operation)) leaf_name_data.push_back(oer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
    if(value_path == "oer")
    {
        oer = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    oer(nullptr) // presence node
	,overload(nullptr) // presence node
{
    yang_name = "vrf"; yang_parent_name = "route-map";
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::Oer()
    :
    overload{YType::empty, "overload"}
{
    yang_name = "oer"; yang_parent_name = "vrf";
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_data() const
{
    return overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_operation() const
{
    return is_set(operation)
	|| is_set(overload.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.operation)) leaf_name_data.push_back(overload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "overload")
    {
        overload = value;
    }
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::Overload()
    :
    oer{YType::empty, "oer"}
{
    yang_name = "overload"; yang_parent_name = "vrf";
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_data() const
{
    return oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_operation() const
{
    return is_set(operation)
	|| is_set(oer.operation);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overload' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oer.is_set || is_set(oer.operation)) leaf_name_data.push_back(oer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oer")
    {
        oer = value;
    }
}

Native::Ip::Nat::Inside::Source::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "source";
}

Native::Ip::Nat::Inside::Source::Static_::~Static_()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::Static_::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Nat::Inside::Source::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-interface-list")
    {
        for(auto const & c : nat_static_transport_interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList>();
        c->parent = this;
        nat_static_transport_interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nat-static-transport-list")
    {
        for(auto const & c : nat_static_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nat_static_transport_interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nat_static_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::NatStaticTransportList()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    extendable{YType::empty, "extendable"},
    forced{YType::empty, "forced"},
    global_port{YType::uint16, "global-port"},
    local_port{YType::uint16, "local-port"},
    mapping_id{YType::uint32, "mapping-id"},
    mask{YType::str, "mask"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    network{YType::empty, "network"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    overload{YType::empty, "overload"},
    proto{YType::enumeration, "proto"},
    redundancy{YType::str, "redundancy"},
    reversible{YType::empty, "reversible"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
{
    yang_name = "nat-static-transport-list"; yang_parent_name = "static";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_data() const
{
    return local_ip.is_set
	|| global_ip.is_set
	|| extendable.is_set
	|| forced.is_set
	|| global_port.is_set
	|| local_port.is_set
	|| mapping_id.is_set
	|| mask.is_set
	|| match_in_vrf.is_set
	|| network.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| overload.is_set
	|| proto.is_set
	|| redundancy.is_set
	|| reversible.is_set
	|| route_map.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_operation() const
{
    return is_set(operation)
	|| is_set(local_ip.operation)
	|| is_set(global_ip.operation)
	|| is_set(extendable.operation)
	|| is_set(forced.operation)
	|| is_set(global_port.operation)
	|| is_set(local_port.operation)
	|| is_set(mapping_id.operation)
	|| is_set(mask.operation)
	|| is_set(match_in_vrf.operation)
	|| is_set(network.operation)
	|| is_set(no_alias.operation)
	|| is_set(no_payload.operation)
	|| is_set(overload.operation)
	|| is_set(proto.operation)
	|| is_set(redundancy.operation)
	|| is_set(reversible.operation)
	|| is_set(route_map.operation)
	|| is_set(vrf.operation);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[local-ip='" <<local_ip <<"']" <<"[global-ip='" <<global_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.operation)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.operation)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.operation)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (forced.is_set || is_set(forced.operation)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.operation)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.operation)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.operation)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.operation)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.operation)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (overload.is_set || is_set(overload.operation)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.operation)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
    }
    if(value_path == "global-ip")
    {
        global_ip = value;
    }
    if(value_path == "extendable")
    {
        extendable = value;
    }
    if(value_path == "forced")
    {
        forced = value;
    }
    if(value_path == "global-port")
    {
        global_port = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "no-alias")
    {
        no_alias = value;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
    }
    if(value_path == "overload")
    {
        overload = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
    if(value_path == "reversible")
    {
        reversible = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::NatStaticTransportInterfaceList()
    :
    proto{YType::enumeration, "proto"},
    local_ip{YType::str, "local-ip"},
    local_port{YType::uint16, "local-port"},
    global_port{YType::uint16, "global-port"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-transport-interface-list"; yang_parent_name = "static";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::~NatStaticTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_data() const
{
    return proto.is_set
	|| local_ip.is_set
	|| local_port.is_set
	|| global_port.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_operation() const
{
    return is_set(operation)
	|| is_set(proto.operation)
	|| is_set(local_ip.operation)
	|| is_set(local_port.operation)
	|| is_set(global_port.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-interface-list" <<"[proto='" <<proto <<"']" <<"[local-ip='" <<local_ip <<"']" <<"[local-port='" <<local_port <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.operation)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.operation)) leaf_name_data.push_back(global_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proto")
    {
        proto = value;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "global-port")
    {
        global_port = value;
    }
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-transport-interface-list";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Nat::Inside::Destination::Destination()
{
    yang_name = "destination"; yang_parent_name = "inside";
}

Native::Ip::Nat::Inside::Destination::~Destination()
{
}

bool Native::Ip::Nat::Inside::Destination::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Destination::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Nat::Inside::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Destination::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Destination::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nat::Inside::Destination::List::List()
    :
    id{YType::str, "id"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"}
{
    yang_name = "list"; yang_parent_name = "destination";
}

Native::Ip::Nat::Inside::Destination::List::~List()
{
}

bool Native::Ip::Nat::Inside::Destination::List::has_data() const
{
    return id.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| redundancy.is_set;
}

bool Native::Ip::Nat::Inside::Destination::List::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(mapping_id.operation)
	|| is_set(pool.operation)
	|| is_set(redundancy.operation);
}

std::string Native::Ip::Nat::Inside::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Destination::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/destination/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.operation)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Destination::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
    }
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
}

Native::Ip::Nat::Outside::Outside()
{
    yang_name = "outside"; yang_parent_name = "nat";
}

Native::Ip::Nat::Outside::~Outside()
{
}

bool Native::Ip::Nat::Outside::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Outside::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Nat::Outside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outside";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Outside::List>();
        c->parent = this;
        list.push_back(c);
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
        auto c = std::make_shared<Native::Ip::Nat::Outside::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nat::Outside::List::List()
    :
    id{YType::str, "id"},
    add_route{YType::empty, "add-route"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    vrf{YType::str, "vrf"}
{
    yang_name = "list"; yang_parent_name = "outside";
}

Native::Ip::Nat::Outside::List::~List()
{
}

bool Native::Ip::Nat::Outside::List::has_data() const
{
    return id.is_set
	|| add_route.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::List::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(add_route.operation)
	|| is_set(mapping_id.operation)
	|| is_set(pool.operation)
	|| is_set(vrf.operation);
}

std::string Native::Ip::Nat::Outside::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.operation)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.operation)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Outside::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "add-route")
    {
        add_route = value;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
    }
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Nat::Outside::RouteMap::RouteMap()
    :
    id{YType::str, "id"},
    add_route{YType::empty, "add-route"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    vrf{YType::str, "vrf"}
{
    yang_name = "route-map"; yang_parent_name = "outside";
}

Native::Ip::Nat::Outside::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Outside::RouteMap::has_data() const
{
    return id.is_set
	|| add_route.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(add_route.operation)
	|| is_set(mapping_id.operation)
	|| is_set(pool.operation)
	|| is_set(vrf.operation);
}

std::string Native::Ip::Nat::Outside::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.operation)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.operation)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Outside::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "add-route")
    {
        add_route = value;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
    }
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Nbar::Nbar()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
{
    attribute->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip";
}

Native::Ip::Nbar::~Nbar()
{
}

bool Native::Ip::Nbar::has_data() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::has_operation() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "attribute-map")
    {
        for(auto const & c : attribute_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        c->parent = this;
        attribute_map.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute-set")
    {
        for(auto const & c : attribute_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        c->parent = this;
        attribute_set.push_back(c);
        return c;
    }

    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    for (auto const & c : attribute_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : attribute_set)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
	,category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
	,sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;

    category->parent = this;

    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar";
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(operation)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "category")
    {
        if(category == nullptr)
        {
            category = std::make_shared<Native::Ip::Nbar::Attribute::Category>();
        }
        return category;
    }

    if(child_yang_name == "sub-category")
    {
        if(sub_category == nullptr)
        {
            sub_category = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>();
        }
        return sub_category;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(category != nullptr)
    {
        children["category"] = category;
    }

    if(sub_category != nullptr)
    {
        children["sub-category"] = sub_category;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
{
    yang_name = "application-group"; yang_parent_name = "attribute";
}

Native::Ip::Nbar::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::ApplicationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{
    yang_name = "custom"; yang_parent_name = "application-group";
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(help.operation);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.operation)) leaf_name_data.push_back(help.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "help")
    {
        help = value;
    }
}

Native::Ip::Nbar::Attribute::Category::Category()
{
    yang_name = "category"; yang_parent_name = "attribute";
}

Native::Ip::Nbar::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Attribute::Category::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::Category::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Nbar::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::Category::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::Category::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::Category::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nbar::Attribute::Category::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{
    yang_name = "custom"; yang_parent_name = "category";
}

Native::Ip::Nbar::Attribute::Category::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(help.operation);
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::Category::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/category/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.operation)) leaf_name_data.push_back(help.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "help")
    {
        help = value;
    }
}

Native::Ip::Nbar::Attribute::SubCategory::SubCategory()
{
    yang_name = "sub-category"; yang_parent_name = "attribute";
}

Native::Ip::Nbar::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::SubCategory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{
    yang_name = "custom"; yang_parent_name = "sub-category";
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(help.operation);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::SubCategory::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/sub-category/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.operation)) leaf_name_data.push_back(help.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "help")
    {
        help = value;
    }
}

Native::Ip::Nbar::AttributeMap::AttributeMap()
    :
    name{YType::str, "name"}
    	,
    attribute(std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>())
{
    attribute->parent = this;

    yang_name = "attribute-map"; yang_parent_name = "nbar";
}

Native::Ip::Nbar::AttributeMap::~AttributeMap()
{
}

bool Native::Ip::Nbar::AttributeMap::has_data() const
{
    return name.is_set
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::AttributeMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::AttributeMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::AttributeMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Ip::Nbar::AttributeMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Nbar::AttributeMap::Attribute::Attribute()
    :
    application_group{YType::str, "application-group"},
    business_relevance{YType::enumeration, "business-relevance"},
    category{YType::str, "category"},
    encrypted{YType::enumeration, "encrypted"},
    sub_category{YType::str, "sub-category"},
    traffic_class{YType::enumeration, "traffic-class"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "attribute"; yang_parent_name = "attribute-map";
}

Native::Ip::Nbar::AttributeMap::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_data() const
{
    return application_group.is_set
	|| business_relevance.is_set
	|| category.is_set
	|| encrypted.is_set
	|| sub_category.is_set
	|| traffic_class.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(application_group.operation)
	|| is_set(business_relevance.operation)
	|| is_set(category.operation)
	|| is_set(encrypted.operation)
	|| is_set(sub_category.operation)
	|| is_set(traffic_class.operation)
	|| is_set(tunnel.operation);
}

std::string Native::Ip::Nbar::AttributeMap::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::AttributeMap::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_group.is_set || is_set(application_group.operation)) leaf_name_data.push_back(application_group.get_name_leafdata());
    if (business_relevance.is_set || is_set(business_relevance.operation)) leaf_name_data.push_back(business_relevance.get_name_leafdata());
    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.operation)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (sub_category.is_set || is_set(sub_category.operation)) leaf_name_data.push_back(sub_category.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-group")
    {
        application_group = value;
    }
    if(value_path == "business-relevance")
    {
        business_relevance = value;
    }
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
    }
    if(value_path == "sub-category")
    {
        sub_category = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Native::Ip::Nbar::AttributeSet::AttributeSet()
    :
    protocol_name{YType::str, "protocol-name"},
    profile_name{YType::str, "profile-name"}
{
    yang_name = "attribute-set"; yang_parent_name = "nbar";
}

Native::Ip::Nbar::AttributeSet::~AttributeSet()
{
}

bool Native::Ip::Nbar::AttributeSet::has_data() const
{
    return protocol_name.is_set
	|| profile_name.is_set;
}

bool Native::Ip::Nbar::AttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(profile_name.operation);
}

std::string Native::Ip::Nbar::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::AttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::AttributeSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Native::Ip::Nbar::Custom::Custom()
    :
    name{YType::str, "name"}
    	,
    http(std::make_shared<Native::Ip::Nbar::Custom::Http>())
{
    http->parent = this;

    yang_name = "custom"; yang_parent_name = "nbar";
}

Native::Ip::Nbar::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Custom::has_data() const
{
    return name.is_set
	|| (http !=  nullptr && http->has_data());
}

bool Native::Ip::Nbar::Custom::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Ip::Nbar::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Nbar::Custom::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http != nullptr)
    {
        children["http"] = http;
    }

    return children;
}

void Native::Ip::Nbar::Custom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Nbar::Custom::Http::Http()
    :
    cookie{YType::str, "cookie"},
    host{YType::str, "host"},
    id{YType::uint16, "id"},
    method{YType::str, "method"},
    referer{YType::str, "referer"},
    url{YType::str, "url"},
    user_agent{YType::str, "user-agent"},
    version{YType::str, "version"},
    via{YType::str, "via"}
{
    yang_name = "http"; yang_parent_name = "custom";
}

Native::Ip::Nbar::Custom::Http::~Http()
{
}

bool Native::Ip::Nbar::Custom::Http::has_data() const
{
    return cookie.is_set
	|| host.is_set
	|| id.is_set
	|| method.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| version.is_set
	|| via.is_set;
}

bool Native::Ip::Nbar::Custom::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie.operation)
	|| is_set(host.operation)
	|| is_set(id.operation)
	|| is_set(method.operation)
	|| is_set(referer.operation)
	|| is_set(url.operation)
	|| is_set(user_agent.operation)
	|| is_set(version.operation)
	|| is_set(via.operation);
}

std::string Native::Ip::Nbar::Custom::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Custom::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Http' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie.is_set || is_set(cookie.operation)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (method.is_set || is_set(method.operation)) leaf_name_data.push_back(method.get_name_leafdata());
    if (referer.is_set || is_set(referer.operation)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.operation)) leaf_name_data.push_back(user_agent.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (via.is_set || is_set(via.operation)) leaf_name_data.push_back(via.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nbar::Custom::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie")
    {
        cookie = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "method")
    {
        method = value;
    }
    if(value_path == "referer")
    {
        referer = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "via")
    {
        via = value;
    }
}

Native::Ip::Sla::Sla()
    :
    enable(std::make_shared<Native::Ip::Sla::Enable>())
	,group(std::make_shared<Native::Ip::Sla::Group>())
	,logging(std::make_shared<Native::Ip::Sla::Logging>())
	,responder(nullptr) // presence node
	,server(std::make_shared<Native::Ip::Sla::Server>())
{
    enable->parent = this;

    group->parent = this;

    logging->parent = this;

    server->parent = this;

    yang_name = "sla"; yang_parent_name = "ip";
}

Native::Ip::Sla::~Sla()
{
}

bool Native::Ip::Sla::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return (enable !=  nullptr && enable->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Sla::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sla:sla";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Ip::Sla::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Ip::Sla::Group>();
        }
        return group;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Sla::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "reaction-configuration")
    {
        for(auto const & c : reaction_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::ReactionConfiguration>();
        c->parent = this;
        reaction_configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Ip::Sla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "schedule")
    {
        for(auto const & c : schedule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Sla::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    for (auto const & c : entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : reaction_configuration)
    {
        children[c->get_segment_path()] = c;
    }

    if(responder != nullptr)
    {
        children["responder"] = responder;
    }

    for (auto const & c : schedule)
    {
        children[c->get_segment_path()] = c;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Sla::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::Entry::Entry()
    :
    number{YType::uint32, "number"}
    	,
    dhcp(std::make_shared<Native::Ip::Sla::Entry::Dhcp>())
	,http(std::make_shared<Native::Ip::Sla::Entry::Http>())
	,icmp_echo(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>())
	,path_echo(std::make_shared<Native::Ip::Sla::Entry::PathEcho>())
	,path_jitter(std::make_shared<Native::Ip::Sla::Entry::PathJitter>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Entry::UdpEcho>())
	,udp_jitter(std::make_shared<Native::Ip::Sla::Entry::UdpJitter>())
{
    dhcp->parent = this;

    http->parent = this;

    icmp_echo->parent = this;

    path_echo->parent = this;

    path_jitter->parent = this;

    udp_echo->parent = this;

    udp_jitter->parent = this;

    yang_name = "entry"; yang_parent_name = "sla";
}

Native::Ip::Sla::Entry::~Entry()
{
}

bool Native::Ip::Sla::Entry::has_data() const
{
    return number.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (icmp_echo !=  nullptr && icmp_echo->has_data())
	|| (path_echo !=  nullptr && path_echo->has_data())
	|| (path_jitter !=  nullptr && path_jitter->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data())
	|| (udp_jitter !=  nullptr && udp_jitter->has_data());
}

bool Native::Ip::Sla::Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (icmp_echo !=  nullptr && icmp_echo->has_operation())
	|| (path_echo !=  nullptr && path_echo->has_operation())
	|| (path_jitter !=  nullptr && path_jitter->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (udp_jitter !=  nullptr && udp_jitter->has_operation());
}

std::string Native::Ip::Sla::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Sla::Entry::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Sla::Entry::Http>();
        }
        return http;
    }

    if(child_yang_name == "icmp-echo")
    {
        if(icmp_echo == nullptr)
        {
            icmp_echo = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>();
        }
        return icmp_echo;
    }

    if(child_yang_name == "path-echo")
    {
        if(path_echo == nullptr)
        {
            path_echo = std::make_shared<Native::Ip::Sla::Entry::PathEcho>();
        }
        return path_echo;
    }

    if(child_yang_name == "path-jitter")
    {
        if(path_jitter == nullptr)
        {
            path_jitter = std::make_shared<Native::Ip::Sla::Entry::PathJitter>();
        }
        return path_jitter;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Entry::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "udp-jitter")
    {
        if(udp_jitter == nullptr)
        {
            udp_jitter = std::make_shared<Native::Ip::Sla::Entry::UdpJitter>();
        }
        return udp_jitter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(icmp_echo != nullptr)
    {
        children["icmp-echo"] = icmp_echo;
    }

    if(path_echo != nullptr)
    {
        children["path-echo"] = path_echo;
    }

    if(path_jitter != nullptr)
    {
        children["path-jitter"] = path_jitter;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    if(udp_jitter != nullptr)
    {
        children["udp-jitter"] = udp_jitter;
    }

    return children;
}

void Native::Ip::Sla::Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Ip::Sla::Entry::IcmpEcho::IcmpEcho()
    :
    data_pattern{YType::str, "data-pattern"},
    destination{YType::str, "destination"},
    frequency{YType::uint32, "frequency"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    source_interface{YType::str, "source-interface"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint64, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>())
{
    history->parent = this;

    yang_name = "icmp-echo"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::IcmpEcho::~IcmpEcho()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_data() const
{
    return data_pattern.is_set
	|| destination.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| source_interface.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_operation() const
{
    return is_set(operation)
	|| is_set(data_pattern.operation)
	|| is_set(destination.operation)
	|| is_set(frequency.operation)
	|| is_set(owner.operation)
	|| is_set(request_data_size.operation)
	|| is_set(source_interface.operation)
	|| is_set(source_ip.operation)
	|| is_set(tag.operation)
	|| is_set(threshold.operation)
	|| is_set(timeout.operation)
	|| is_set(tos.operation)
	|| is_set(verify_data.operation)
	|| is_set(vrf.operation)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::IcmpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_pattern.is_set || is_set(data_pattern.operation)) leaf_name_data.push_back(data_pattern.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.operation)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.operation)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-pattern")
    {
        data_pattern = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Sla::Entry::IcmpEcho::History::History()
    :
    buckets_kept{YType::uint8, "buckets-kept"},
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    filter{YType::enumeration, "filter"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    lives_kept{YType::uint8, "lives-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "icmp-echo";
}

Native::Ip::Sla::Entry::IcmpEcho::History::~History()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_data() const
{
    return buckets_kept.is_set
	|| distributions_of_statistics_kept.is_set
	|| filter.is_set
	|| hours_of_statistics_kept.is_set
	|| lives_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_operation() const
{
    return is_set(operation)
	|| is_set(buckets_kept.operation)
	|| is_set(distributions_of_statistics_kept.operation)
	|| is_set(filter.operation)
	|| is_set(hours_of_statistics_kept.operation)
	|| is_set(lives_kept.operation)
	|| is_set(statistics_distribution_interval.operation)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::IcmpEcho::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_kept.is_set || is_set(buckets_kept.operation)) leaf_name_data.push_back(buckets_kept.get_name_leafdata());
    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.operation)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (filter.is_set || is_set(filter.operation)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.operation)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (lives_kept.is_set || is_set(lives_kept.operation)) leaf_name_data.push_back(lives_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.operation)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept = value;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
    }
    if(value_path == "filter")
    {
        filter = value;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
    }
    if(value_path == "lives-kept")
    {
        lives_kept = value;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
    }
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::Enhanced()
    :
    buckets{YType::uint8, "buckets"},
    interval{YType::uint32, "interval"}
{
    yang_name = "enhanced"; yang_parent_name = "history";
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_data() const
{
    return buckets.is_set
	|| interval.is_set;
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_operation() const
{
    return is_set(operation)
	|| is_set(buckets.operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enhanced' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets.is_set || is_set(buckets.operation)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buckets")
    {
        buckets = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Sla::Entry::PathEcho::PathEcho()
    :
    dst_ip{YType::str, "dst-ip"},
    hops_of_statistics_kept{YType::uint8, "hops-of-statistics-kept"},
    paths_of_statistics_kept{YType::uint8, "paths-of-statistics-kept"},
    samples_of_history_kept{YType::uint8, "samples-of-history-kept"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "path-echo"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::PathEcho::~PathEcho()
{
}

bool Native::Ip::Sla::Entry::PathEcho::has_data() const
{
    return dst_ip.is_set
	|| hops_of_statistics_kept.is_set
	|| paths_of_statistics_kept.is_set
	|| samples_of_history_kept.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::PathEcho::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_ip.operation)
	|| is_set(hops_of_statistics_kept.operation)
	|| is_set(paths_of_statistics_kept.operation)
	|| is_set(samples_of_history_kept.operation)
	|| is_set(source_ip.operation);
}

std::string Native::Ip::Sla::Entry::PathEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::PathEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.operation)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (hops_of_statistics_kept.is_set || is_set(hops_of_statistics_kept.operation)) leaf_name_data.push_back(hops_of_statistics_kept.get_name_leafdata());
    if (paths_of_statistics_kept.is_set || is_set(paths_of_statistics_kept.operation)) leaf_name_data.push_back(paths_of_statistics_kept.get_name_leafdata());
    if (samples_of_history_kept.is_set || is_set(samples_of_history_kept.operation)) leaf_name_data.push_back(samples_of_history_kept.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::PathEcho::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept = value;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept = value;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
}

Native::Ip::Sla::Entry::PathJitter::PathJitter()
    :
    dst_ip{YType::str, "dst-ip"},
    frequency{YType::uint32, "frequency"},
    lsr_path{YType::str, "lsr-path"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default_>())
{
    default_->parent = this;

    yang_name = "path-jitter"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::PathJitter::~PathJitter()
{
}

bool Native::Ip::Sla::Entry::PathJitter::has_data() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dst_ip.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::Sla::Entry::PathJitter::has_operation() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dst_ip.operation)
	|| is_set(frequency.operation)
	|| is_set(lsr_path.operation)
	|| is_set(owner.operation)
	|| is_set(request_data_size.operation)
	|| is_set(source_ip.operation)
	|| is_set(tag.operation)
	|| is_set(threshold.operation)
	|| is_set(timeout.operation)
	|| is_set(tos.operation)
	|| is_set(verify_data.operation)
	|| is_set(vrf.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::Sla::Entry::PathJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-jitter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::PathJitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathJitter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.operation)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.operation)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.operation)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto lsr_path_name_datas = lsr_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsr_path_name_datas.begin(), lsr_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::Sla::Entry::PathJitter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
    }
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.append(value);
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Sla::Entry::PathJitter::Default_::Default_()
    :
    frequency{YType::empty, "frequency"},
    lsr_path{YType::empty, "lsr-path"},
    owner{YType::empty, "owner"},
    request_data_size{YType::empty, "request-data-size"},
    tag{YType::empty, "tag"},
    threshold{YType::empty, "threshold"},
    timeout{YType::empty, "timeout"},
    tos{YType::empty, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::empty, "vrf"}
{
    yang_name = "default"; yang_parent_name = "path-jitter";
}

Native::Ip::Sla::Entry::PathJitter::Default_::~Default_()
{
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_data() const
{
    return frequency.is_set
	|| lsr_path.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set;
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(lsr_path.operation)
	|| is_set(owner.operation)
	|| is_set(request_data_size.operation)
	|| is_set(tag.operation)
	|| is_set(threshold.operation)
	|| is_set(timeout.operation)
	|| is_set(tos.operation)
	|| is_set(verify_data.operation)
	|| is_set(vrf.operation);
}

std::string Native::Ip::Sla::Entry::PathJitter::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::PathJitter::Default_::get_entity_path(Entity* ancestor) const
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

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (lsr_path.is_set || is_set(lsr_path.operation)) leaf_name_data.push_back(lsr_path.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.operation)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.operation)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::PathJitter::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "lsr-path")
    {
        lsr_path = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Sla::Entry::UdpEcho::UdpEcho()
    :
    dest_addr{YType::str, "dest-addr"},
    dest_port{YType::uint16, "dest-port"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-echo"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Entry::UdpEcho::has_data() const
{
    return dest_addr.is_set
	|| dest_port.is_set
	|| source_ip.is_set
	|| source_port.is_set;
}

bool Native::Ip::Sla::Entry::UdpEcho::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_addr.operation)
	|| is_set(dest_port.operation)
	|| is_set(source_ip.operation)
	|| is_set(source_port.operation);
}

std::string Native::Ip::Sla::Entry::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.operation)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.operation)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::UdpEcho::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

Native::Ip::Sla::Entry::UdpJitter::UdpJitter()
    :
    dest_addr{YType::str, "dest-addr"},
    interval{YType::uint16, "interval"},
    num_packets{YType::uint16, "num-packets"},
    owner{YType::str, "owner"},
    portno{YType::uint16, "portno"},
    request_data_size{YType::uint16, "request-data-size"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint16, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    traffic_class{YType::uint8, "traffic-class"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>())
{
    history->parent = this;

    yang_name = "udp-jitter"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::UdpJitter::~UdpJitter()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::has_data() const
{
    return dest_addr.is_set
	|| interval.is_set
	|| num_packets.is_set
	|| owner.is_set
	|| portno.is_set
	|| request_data_size.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| traffic_class.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_addr.operation)
	|| is_set(interval.operation)
	|| is_set(num_packets.operation)
	|| is_set(owner.operation)
	|| is_set(portno.operation)
	|| is_set(request_data_size.operation)
	|| is_set(source_ip.operation)
	|| is_set(tag.operation)
	|| is_set(threshold.operation)
	|| is_set(timeout.operation)
	|| is_set(tos.operation)
	|| is_set(traffic_class.operation)
	|| is_set(vrf.operation)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpJitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpJitter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.operation)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (num_packets.is_set || is_set(num_packets.operation)) leaf_name_data.push_back(num_packets.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (portno.is_set || is_set(portno.operation)) leaf_name_data.push_back(portno.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.operation)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "num-packets")
    {
        num_packets = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "portno")
    {
        portno = value;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Sla::Entry::UdpJitter::History::History()
    :
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "udp-jitter";
}

Native::Ip::Sla::Entry::UdpJitter::History::~History()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_data() const
{
    return distributions_of_statistics_kept.is_set
	|| hours_of_statistics_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_operation() const
{
    return is_set(operation)
	|| is_set(distributions_of_statistics_kept.operation)
	|| is_set(hours_of_statistics_kept.operation)
	|| is_set(statistics_distribution_interval.operation)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpJitter::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.operation)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.operation)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.operation)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
    }
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::Enhanced()
    :
    buckets{YType::uint8, "buckets"},
    interval{YType::uint16, "interval"}
{
    yang_name = "enhanced"; yang_parent_name = "history";
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_data() const
{
    return buckets.is_set
	|| interval.is_set;
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_operation() const
{
    return is_set(operation)
	|| is_set(buckets.operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enhanced' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets.is_set || is_set(buckets.operation)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buckets")
    {
        buckets = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Sla::Entry::Http::Http()
    :
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    vrf{YType::str, "vrf"}
    	,
    get(std::make_shared<Native::Ip::Sla::Entry::Http::Get>())
	,raw(std::make_shared<Native::Ip::Sla::Entry::Http::Raw>())
{
    get->parent = this;

    raw->parent = this;

    yang_name = "http"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::Http::~Http()
{
}

bool Native::Ip::Sla::Entry::Http::has_data() const
{
    return owner.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (get !=  nullptr && get->has_data())
	|| (raw !=  nullptr && raw->has_data());
}

bool Native::Ip::Sla::Entry::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(owner.operation)
	|| is_set(tag.operation)
	|| is_set(vrf.operation)
	|| (get !=  nullptr && get->has_operation())
	|| (raw !=  nullptr && raw->has_operation());
}

std::string Native::Ip::Sla::Entry::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Http' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "get")
    {
        if(get == nullptr)
        {
            get = std::make_shared<Native::Ip::Sla::Entry::Http::Get>();
        }
        return get;
    }

    if(child_yang_name == "raw")
    {
        if(raw == nullptr)
        {
            raw = std::make_shared<Native::Ip::Sla::Entry::Http::Raw>();
        }
        return raw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(get != nullptr)
    {
        children["get"] = get;
    }

    if(raw != nullptr)
    {
        children["raw"] = raw;
    }

    return children;
}

void Native::Ip::Sla::Entry::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Sla::Entry::Http::Get::Get()
    :
    name_server{YType::str, "name-server"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    url{YType::str, "url"}
{
    yang_name = "get"; yang_parent_name = "http";
}

Native::Ip::Sla::Entry::Http::Get::~Get()
{
}

bool Native::Ip::Sla::Entry::Http::Get::has_data() const
{
    return name_server.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| url.is_set;
}

bool Native::Ip::Sla::Entry::Http::Get::has_operation() const
{
    return is_set(operation)
	|| is_set(name_server.operation)
	|| is_set(source_ip.operation)
	|| is_set(source_port.operation)
	|| is_set(url.operation);
}

std::string Native::Ip::Sla::Entry::Http::Get::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "get";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Http::Get::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Get' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.operation)) leaf_name_data.push_back(name_server.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Get::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Get::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Http::Get::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-server")
    {
        name_server = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

Native::Ip::Sla::Entry::Http::Raw::Raw()
    :
    name_server{YType::str, "name-server"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    url{YType::str, "url"}
{
    yang_name = "raw"; yang_parent_name = "http";
}

Native::Ip::Sla::Entry::Http::Raw::~Raw()
{
}

bool Native::Ip::Sla::Entry::Http::Raw::has_data() const
{
    return name_server.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| url.is_set;
}

bool Native::Ip::Sla::Entry::Http::Raw::has_operation() const
{
    return is_set(operation)
	|| is_set(name_server.operation)
	|| is_set(source_ip.operation)
	|| is_set(source_port.operation)
	|| is_set(url.operation);
}

std::string Native::Ip::Sla::Entry::Http::Raw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Http::Raw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Raw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.operation)) leaf_name_data.push_back(name_server.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Raw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Raw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Http::Raw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-server")
    {
        name_server = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

Native::Ip::Sla::Entry::Dhcp::Dhcp()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "dhcp"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::Dhcp::~Dhcp()
{
}

bool Native::Ip::Sla::Entry::Dhcp::has_data() const
{
    return dst_ip.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_ip.operation)
	|| is_set(source_ip.operation);
}

std::string Native::Ip::Sla::Entry::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.operation)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
}

Native::Ip::Sla::Enable::Enable()
    :
    reaction_alerts{YType::empty, "reaction-alerts"}
{
    yang_name = "enable"; yang_parent_name = "sla";
}

Native::Ip::Sla::Enable::~Enable()
{
}

bool Native::Ip::Sla::Enable::has_data() const
{
    return reaction_alerts.is_set;
}

bool Native::Ip::Sla::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(reaction_alerts.operation);
}

std::string Native::Ip::Sla::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reaction_alerts.is_set || is_set(reaction_alerts.operation)) leaf_name_data.push_back(reaction_alerts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts = value;
    }
}

Native::Ip::Sla::Responder::Responder()
    :
    tcp_connect(std::make_shared<Native::Ip::Sla::Responder::TcpConnect>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Responder::UdpEcho>())
{
    tcp_connect->parent = this;

    udp_echo->parent = this;

    yang_name = "responder"; yang_parent_name = "sla";
}

Native::Ip::Sla::Responder::~Responder()
{
}

bool Native::Ip::Sla::Responder::has_data() const
{
    return (tcp_connect !=  nullptr && tcp_connect->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::Ip::Sla::Responder::has_operation() const
{
    return is_set(operation)
	|| (tcp_connect !=  nullptr && tcp_connect->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::Ip::Sla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-connect")
    {
        if(tcp_connect == nullptr)
        {
            tcp_connect = std::make_shared<Native::Ip::Sla::Responder::TcpConnect>();
        }
        return tcp_connect;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Responder::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_connect != nullptr)
    {
        children["tcp-connect"] = tcp_connect;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::Ip::Sla::Responder::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::Responder::UdpEcho::UdpEcho()
    :
    port{YType::uint16, "port"}
{
    yang_name = "udp-echo"; yang_parent_name = "responder";
}

Native::Ip::Sla::Responder::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(port.operation);
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::UdpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        for(auto const & c : ipaddress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Responder::UdpEcho::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{
    yang_name = "ipaddress"; yang_parent_name = "udp-echo";
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(port.operation);
}

std::string Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress" <<"[host='" <<host <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/udp-echo/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Ip::Sla::Responder::TcpConnect::TcpConnect()
    :
    port{YType::uint16, "port"}
{
    yang_name = "tcp-connect"; yang_parent_name = "responder";
}

Native::Ip::Sla::Responder::TcpConnect::~TcpConnect()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(port.operation);
}

std::string Native::Ip::Sla::Responder::TcpConnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-connect";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::TcpConnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::TcpConnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        for(auto const & c : ipaddress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Responder::TcpConnect::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::TcpConnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::TcpConnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{
    yang_name = "ipaddress"; yang_parent_name = "tcp-connect";
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(port.operation);
}

std::string Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress" <<"[host='" <<host <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/tcp-connect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Ip::Sla::Logging::Logging()
    :
    traps{YType::empty, "traps"}
{
    yang_name = "logging"; yang_parent_name = "sla";
}

Native::Ip::Sla::Logging::~Logging()
{
}

bool Native::Ip::Sla::Logging::has_data() const
{
    return traps.is_set;
}

bool Native::Ip::Sla::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(traps.operation);
}

std::string Native::Ip::Sla::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traps.is_set || is_set(traps.operation)) leaf_name_data.push_back(traps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traps")
    {
        traps = value;
    }
}

Native::Ip::Sla::Group::Group()
{
    yang_name = "group"; yang_parent_name = "sla";
}

Native::Ip::Sla::Group::~Group()
{
}

bool Native::Ip::Sla::Group::has_data() const
{
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Sla::Group::has_operation() const
{
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Sla::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        for(auto const & c : schedule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Group::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schedule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Group::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::Group::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"}
{
    yang_name = "schedule"; yang_parent_name = "group";
}

Native::Ip::Sla::Group::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Group::Schedule::has_data() const
{
    for (std::size_t index=0; index<probe_ids.size(); index++)
    {
        if(probe_ids[index]->has_data())
            return true;
    }
    return entry_number.is_set;
}

bool Native::Ip::Sla::Group::Schedule::has_operation() const
{
    for (std::size_t index=0; index<probe_ids.size(); index++)
    {
        if(probe_ids[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(entry_number.operation);
}

std::string Native::Ip::Sla::Group::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule" <<"[entry-number='" <<entry_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.operation)) leaf_name_data.push_back(entry_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-ids")
    {
        for(auto const & c : probe_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds>();
        c->parent = this;
        probe_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : probe_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
    }
}

Native::Ip::Sla::Group::Schedule::ProbeIds::ProbeIds()
    :
    word{YType::str, "word"}
    	,
    schedule_period(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>())
{
    schedule_period->parent = this;

    yang_name = "probe-ids"; yang_parent_name = "schedule";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::~ProbeIds()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_data() const
{
    return word.is_set
	|| (schedule_period !=  nullptr && schedule_period->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| (schedule_period !=  nullptr && schedule_period->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-ids" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProbeIds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule-period")
    {
        if(schedule_period == nullptr)
        {
            schedule_period = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>();
        }
        return schedule_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(schedule_period != nullptr)
    {
        children["schedule-period"] = schedule_period;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::SchedulePeriod()
    :
    life{YType::str, "life"},
    seconds{YType::uint32, "seconds"}
    	,
    frequency(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>())
	,start_time(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>())
{
    frequency->parent = this;

    start_time->parent = this;

    yang_name = "schedule-period"; yang_parent_name = "probe-ids";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::~SchedulePeriod()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_data() const
{
    return life.is_set
	|| seconds.is_set
	|| (frequency !=  nullptr && frequency->has_data())
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(life.operation)
	|| is_set(seconds.operation)
	|| (frequency !=  nullptr && frequency->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-period";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SchedulePeriod' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (life.is_set || is_set(life.operation)) leaf_name_data.push_back(life.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency")
    {
        if(frequency == nullptr)
        {
            frequency = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>();
        }
        return frequency;
    }

    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frequency != nullptr)
    {
        children["frequency"] = frequency;
    }

    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "life")
    {
        life = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::Frequency()
    :
    frequency_val{YType::uint32, "frequency-val"},
    range{YType::str, "range"}
{
    yang_name = "frequency"; yang_parent_name = "schedule-period";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::~Frequency()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_data() const
{
    return frequency_val.is_set
	|| range.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency_val.operation)
	|| is_set(range.operation);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frequency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency_val.is_set || is_set(frequency_val.operation)) leaf_name_data.push_back(frequency_val.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency-val")
    {
        frequency_val = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::StartTime()
    :
    now{YType::empty, "now"}
{
    yang_name = "start-time"; yang_parent_name = "schedule-period";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_data() const
{
    return now.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(now.operation);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (now.is_set || is_set(now.operation)) leaf_name_data.push_back(now.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "now")
    {
        now = value;
    }
}

Native::Ip::Sla::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"},
    ageout{YType::uint32, "ageout"},
    life{YType::str, "life"},
    recurring{YType::empty, "recurring"}
    	,
    start_time(std::make_shared<Native::Ip::Sla::Schedule::StartTime>())
{
    start_time->parent = this;

    yang_name = "schedule"; yang_parent_name = "sla";
}

Native::Ip::Sla::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Schedule::has_data() const
{
    return entry_number.is_set
	|| ageout.is_set
	|| life.is_set
	|| recurring.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Schedule::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_number.operation)
	|| is_set(ageout.operation)
	|| is_set(life.operation)
	|| is_set(recurring.operation)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule" <<"[entry-number='" <<entry_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.operation)) leaf_name_data.push_back(entry_number.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.operation)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (life.is_set || is_set(life.operation)) leaf_name_data.push_back(life.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.operation)) leaf_name_data.push_back(recurring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Schedule::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Native::Ip::Sla::Schedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
    }
    if(value_path == "ageout")
    {
        ageout = value;
    }
    if(value_path == "life")
    {
        life = value;
    }
    if(value_path == "recurring")
    {
        recurring = value;
    }
}

Native::Ip::Sla::Schedule::StartTime::StartTime()
    :
    after{YType::str, "after"},
    hour_min{YType::str, "hour-min"},
    hour_min_sec{YType::str, "hour-min-sec"},
    now{YType::empty, "now"},
    pending{YType::empty, "pending"},
    random{YType::uint32, "random"}
{
    yang_name = "start-time"; yang_parent_name = "schedule";
}

Native::Ip::Sla::Schedule::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Schedule::StartTime::has_data() const
{
    return after.is_set
	|| hour_min.is_set
	|| hour_min_sec.is_set
	|| now.is_set
	|| pending.is_set
	|| random.is_set;
}

bool Native::Ip::Sla::Schedule::StartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(after.operation)
	|| is_set(hour_min.operation)
	|| is_set(hour_min_sec.operation)
	|| is_set(now.operation)
	|| is_set(pending.operation)
	|| is_set(random.operation);
}

std::string Native::Ip::Sla::Schedule::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Schedule::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after.is_set || is_set(after.operation)) leaf_name_data.push_back(after.get_name_leafdata());
    if (hour_min.is_set || is_set(hour_min.operation)) leaf_name_data.push_back(hour_min.get_name_leafdata());
    if (hour_min_sec.is_set || is_set(hour_min_sec.operation)) leaf_name_data.push_back(hour_min_sec.get_name_leafdata());
    if (now.is_set || is_set(now.operation)) leaf_name_data.push_back(now.get_name_leafdata());
    if (pending.is_set || is_set(pending.operation)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (random.is_set || is_set(random.operation)) leaf_name_data.push_back(random.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Schedule::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Schedule::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Schedule::StartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "after")
    {
        after = value;
    }
    if(value_path == "hour-min")
    {
        hour_min = value;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec = value;
    }
    if(value_path == "now")
    {
        now = value;
    }
    if(value_path == "pending")
    {
        pending = value;
    }
    if(value_path == "random")
    {
        random = value;
    }
}

Native::Ip::Sla::ReactionConfiguration::ReactionConfiguration()
    :
    entry_number{YType::uint64, "entry-number"}
    	,
    react(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>())
{
    react->parent = this;

    yang_name = "reaction-configuration"; yang_parent_name = "sla";
}

Native::Ip::Sla::ReactionConfiguration::~ReactionConfiguration()
{
}

bool Native::Ip::Sla::ReactionConfiguration::has_data() const
{
    return entry_number.is_set
	|| (react !=  nullptr && react->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_number.operation)
	|| (react !=  nullptr && react->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-configuration" <<"[entry-number='" <<entry_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.operation)) leaf_name_data.push_back(entry_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "react")
    {
        if(react == nullptr)
        {
            react = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>();
        }
        return react;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(react != nullptr)
    {
        children["react"] = react;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
    }
}

Native::Ip::Sla::ReactionConfiguration::React::React()
    :
    connectionloss(nullptr) // presence node
	,rtt(nullptr) // presence node
{
    yang_name = "react"; yang_parent_name = "reaction-configuration";
}

Native::Ip::Sla::ReactionConfiguration::React::~React()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_data() const
{
    return (connectionloss !=  nullptr && connectionloss->has_data())
	|| (rtt !=  nullptr && rtt->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_operation() const
{
    return is_set(operation)
	|| (connectionloss !=  nullptr && connectionloss->has_operation())
	|| (rtt !=  nullptr && rtt->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'React' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connectionLoss")
    {
        if(connectionloss == nullptr)
        {
            connectionloss = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss>();
        }
        return connectionloss;
    }

    if(child_yang_name == "rtt")
    {
        if(rtt == nullptr)
        {
            rtt = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt>();
        }
        return rtt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connectionloss != nullptr)
    {
        children["connectionLoss"] = connectionloss;
    }

    if(rtt != nullptr)
    {
        children["rtt"] = rtt;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::Connectionloss()
    :
    threshold_type(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType>())
{
    threshold_type->parent = this;

    yang_name = "connectionLoss"; yang_parent_name = "react";
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::~Connectionloss()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::has_data() const
{
    return (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::has_operation() const
{
    return is_set(operation)
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connectionLoss";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connectionloss' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_type != nullptr)
    {
        children["threshold-type"] = threshold_type;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::ThresholdType()
    :
    xofy(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy>())
{
    xofy->parent = this;

    yang_name = "threshold-type"; yang_parent_name = "connectionLoss";
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::~ThresholdType()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::has_data() const
{
    return (xofy !=  nullptr && xofy->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::has_operation() const
{
    return is_set(operation)
	|| (xofy !=  nullptr && xofy->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xOfy")
    {
        if(xofy == nullptr)
        {
            xofy = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy>();
        }
        return xofy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xofy != nullptr)
    {
        children["xOfy"] = xofy;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::Xofy()
    :
    action_type{YType::enumeration, "action-type"},
    x_val{YType::uint8, "x-val"},
    y_val{YType::uint8, "y-val"}
{
    yang_name = "xOfy"; yang_parent_name = "threshold-type";
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::~Xofy()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::has_data() const
{
    return action_type.is_set
	|| x_val.is_set
	|| y_val.is_set;
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::has_operation() const
{
    return is_set(operation)
	|| is_set(action_type.operation)
	|| is_set(x_val.operation)
	|| is_set(y_val.operation);
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xOfy";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xofy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (x_val.is_set || is_set(x_val.operation)) leaf_name_data.push_back(x_val.get_name_leafdata());
    if (y_val.is_set || is_set(y_val.operation)) leaf_name_data.push_back(y_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
    if(value_path == "x-val")
    {
        x_val = value;
    }
    if(value_path == "y-val")
    {
        y_val = value;
    }
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::Rtt()
    :
    threshold_value(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue>())
{
    threshold_value->parent = this;

    yang_name = "rtt"; yang_parent_name = "react";
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::~Rtt()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_data() const
{
    return (threshold_value !=  nullptr && threshold_value->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_operation() const
{
    return is_set(operation)
	|| (threshold_value !=  nullptr && threshold_value->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtt";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-value")
    {
        if(threshold_value == nullptr)
        {
            threshold_value = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue>();
        }
        return threshold_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_value != nullptr)
    {
        children["threshold-value"] = threshold_value;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdValue()
    :
    action_type{YType::enumeration, "action-type"},
    lower_limit_val{YType::uint32, "lower-limit-val"},
    threshold_type{YType::enumeration, "threshold-type"},
    upper_limit_val{YType::uint32, "upper-limit-val"}
{
    yang_name = "threshold-value"; yang_parent_name = "rtt";
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::~ThresholdValue()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_data() const
{
    return action_type.is_set
	|| lower_limit_val.is_set
	|| threshold_type.is_set
	|| upper_limit_val.is_set;
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(action_type.operation)
	|| is_set(lower_limit_val.operation)
	|| is_set(threshold_type.operation)
	|| is_set(upper_limit_val.operation);
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-value";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdValue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (lower_limit_val.is_set || is_set(lower_limit_val.operation)) leaf_name_data.push_back(lower_limit_val.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.operation)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (upper_limit_val.is_set || is_set(upper_limit_val.operation)) leaf_name_data.push_back(upper_limit_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
    if(value_path == "lower-limit-val")
    {
        lower_limit_val = value;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
    }
    if(value_path == "upper-limit-val")
    {
        upper_limit_val = value;
    }
}

Native::Ip::Sla::Server::Server()
    :
    twamp(nullptr) // presence node
{
    yang_name = "server"; yang_parent_name = "sla";
}

Native::Ip::Sla::Server::~Server()
{
}

bool Native::Ip::Sla::Server::has_data() const
{
    return (twamp !=  nullptr && twamp->has_data());
}

bool Native::Ip::Sla::Server::has_operation() const
{
    return is_set(operation)
	|| (twamp !=  nullptr && twamp->has_operation());
}

std::string Native::Ip::Sla::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "twamp")
    {
        if(twamp == nullptr)
        {
            twamp = std::make_shared<Native::Ip::Sla::Server::Twamp>();
        }
        return twamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(twamp != nullptr)
    {
        children["twamp"] = twamp;
    }

    return children;
}

void Native::Ip::Sla::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Sla::Server::Twamp::Twamp()
{
    yang_name = "twamp"; yang_parent_name = "server";
}

Native::Ip::Sla::Server::Twamp::~Twamp()
{
}

bool Native::Ip::Sla::Server::Twamp::has_data() const
{
    return false;
}

bool Native::Ip::Sla::Server::Twamp::has_operation() const
{
    return is_set(operation);
}

std::string Native::Ip::Sla::Server::Twamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twamp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Server::Twamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Server::Twamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Server::Twamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Server::Twamp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Wccp::Wccp()
    :
    source_interface{YType::str, "source-interface"}
    	,
    check(std::make_shared<Native::Ip::Wccp::Check>())
	,web_cache(std::make_shared<Native::Ip::Wccp::WebCache>())
{
    check->parent = this;

    web_cache->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip";
}

Native::Ip::Wccp::~Wccp()
{
}

bool Native::Ip::Wccp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return source_interface.is_set
	|| (check !=  nullptr && check->has_data())
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| (check !=  nullptr && check->has_operation())
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Wccp::Check>();
        }
        return check;
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
        auto c = std::make_shared<Native::Ip::Wccp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Wccp::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Ip::Wccp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
    	,
    password(std::make_shared<Native::Ip::Wccp::WccpList::Password>())
{
    password->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp";
}

Native::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Ip::Wccp::WccpList::has_data() const
{
    return id.is_set
	|| group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group_address.operation)
	|| is_set(group_list.operation)
	|| is_set(mode.operation)
	|| is_set(redirect_list.operation)
	|| is_set(snmp_disabled.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::WccpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.operation)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.operation)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.operation)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::WccpList::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Wccp::WccpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-list")
    {
        group_list = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
    }
}

Native::Ip::Wccp::WccpList::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "password"; yang_parent_name = "wccp-list";
}

Native::Ip::Wccp::WccpList::Password::~Password()
{
}

bool Native::Ip::Wccp::WccpList::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Ip::Wccp::WccpList::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_key.operation)
	|| is_set(encryption.operation);
}

std::string Native::Ip::Wccp::WccpList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::WccpList::Password::get_entity_path(Entity* ancestor) const
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

    if (clear_key.is_set || is_set(clear_key.operation)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WccpList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WccpList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::WccpList::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
}

Native::Ip::Wccp::WebCache::WebCache()
    :
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
    	,
    password(std::make_shared<Native::Ip::Wccp::WebCache::Password>())
{
    password->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp";
}

Native::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Ip::Wccp::WebCache::has_data() const
{
    return group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_list.operation)
	|| is_set(mode.operation)
	|| is_set(redirect_list.operation)
	|| is_set(snmp_disabled.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::WebCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.operation)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.operation)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.operation)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::WebCache::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Wccp::WebCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-list")
    {
        group_list = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
    }
}

Native::Ip::Wccp::WebCache::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "password"; yang_parent_name = "web-cache";
}

Native::Ip::Wccp::WebCache::Password::~Password()
{
}

bool Native::Ip::Wccp::WebCache::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Ip::Wccp::WebCache::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_key.operation)
	|| is_set(encryption.operation);
}

std::string Native::Ip::Wccp::WebCache::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::WebCache::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/web-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.operation)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WebCache::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WebCache::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::WebCache::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
}

Native::Ip::Wccp::Check::Check()
    :
    acl(std::make_shared<Native::Ip::Wccp::Check::Acl>())
	,services(std::make_shared<Native::Ip::Wccp::Check::Services>())
{
    acl->parent = this;

    services->parent = this;

    yang_name = "check"; yang_parent_name = "wccp";
}

Native::Ip::Wccp::Check::~Check()
{
}

bool Native::Ip::Wccp::Check::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (services !=  nullptr && services->has_data());
}

bool Native::Ip::Wccp::Check::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (services !=  nullptr && services->has_operation());
}

std::string Native::Ip::Wccp::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Check::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Ip::Wccp::Check::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Ip::Wccp::Check::Services>();
        }
        return services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    return children;
}

void Native::Ip::Wccp::Check::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Wccp::Check::Acl::Acl()
    :
    outbound{YType::empty, "outbound"}
{
    yang_name = "acl"; yang_parent_name = "check";
}

Native::Ip::Wccp::Check::Acl::~Acl()
{
}

bool Native::Ip::Wccp::Check::Acl::has_data() const
{
    return outbound.is_set;
}

bool Native::Ip::Wccp::Check::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(outbound.operation);
}

std::string Native::Ip::Wccp::Check::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Check::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/check/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outbound.is_set || is_set(outbound.operation)) leaf_name_data.push_back(outbound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Check::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Check::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::Check::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outbound")
    {
        outbound = value;
    }
}

Native::Ip::Wccp::Check::Services::Services()
    :
    all{YType::empty, "all"}
{
    yang_name = "services"; yang_parent_name = "check";
}

Native::Ip::Wccp::Check::Services::~Services()
{
}

bool Native::Ip::Wccp::Check::Services::has_data() const
{
    return all.is_set;
}

bool Native::Ip::Wccp::Check::Services::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Ip::Wccp::Check::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Check::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/check/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Wccp::Check::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Check::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::Check::Services::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

const Enum::YLeaf Native::Ip::Msdp::RpfEnum::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Msdp::Vrf::RpfEnum::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Nat::Pool::TypeEnum::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::TypeEnum::rotary {1, "rotary"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::ProtoEnum::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::ProtoEnum::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::ProtoEnum::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::ProtoEnum::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::aol_group {0, "aol-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::apple_group {1, "apple-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::apple_talk_group {2, "apple-talk-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::banyan_group {3, "banyan-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::bittorrent_group {4, "bittorrent-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::capwap_group {5, "capwap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::cisco_jabber_group {6, "cisco-jabber-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::cisco_phone_group {7, "cisco-phone-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::corba_group {8, "corba-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::dameware_group {9, "dameware-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::edonkey_emule_group {10, "edonkey-emule-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::espn_group {11, "espn-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::fasttrack_group {12, "fasttrack-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::flash_group {13, "flash-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::fring_group {14, "fring-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::ftp_group {15, "ftp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::gnutella_group {16, "gnutella-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::google_group {17, "google-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::gtalk_group {18, "gtalk-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::icq_group {19, "icq-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::imap_group {20, "imap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::ipsec_group {21, "ipsec-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::irc_group {22, "irc-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::kakao_group {23, "kakao-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::kerberos_group {24, "kerberos-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::ldap_group {25, "ldap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::ms_cloud_group {26, "ms-cloud-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::ms_crm_group {27, "ms-crm-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::ms_lync_group {28, "ms-lync-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::msn_messenger_group {29, "msn-messenger-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::netbios_group {30, "netbios-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::nntp_group {31, "nntp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::npmp_group {32, "npmp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::other {33, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::pop3_group {34, "pop3-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::prm_group {35, "prm-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::qq_group {36, "qq-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::skype_group {37, "skype-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::smtp_group {38, "smtp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::snmp_group {39, "snmp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::sqlsvr_group {40, "sqlsvr-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::stun_group {41, "stun-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::telepresence_group {42, "telepresence-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::tftp_group {43, "tftp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::vmware_group {44, "vmware-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::vnc_group {45, "vnc-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::wap_group {46, "wap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::webex_group {47, "webex-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::xns_xerox_group {48, "xns-xerox-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::xunlei_group {49, "xunlei-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::yahoo_group {50, "yahoo-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum::yahoo_messenger_group {51, "yahoo-messenger-group"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevanceEnum::business_irrelevant {0, "business-irrelevant"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevanceEnum::business_relevant {1, "business-relevant"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevanceEnum::default_ {2, "default"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::anonymizers {0, "anonymizers"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::backup_and_storage {1, "backup-and-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::browsing {2, "browsing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::business_and_productivity_tools {3, "business-and-productivity-tools"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::consumer_file_sharing {4, "consumer-file-sharing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::consumer_internet {5, "consumer-internet"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::consumer_messaging {6, "consumer-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::consumer_streaming {7, "consumer-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::database {8, "database"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::email {9, "email"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::epayement {10, "epayement"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::file_sharing {11, "file-sharing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::gaming {12, "gaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::industrial_protocols {13, "industrial-protocols"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::instant_messaging {14, "instant-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::inter_process_rpc {15, "inter-process-rpc"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::internet_security {16, "internet-security"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::layer3_over_ip {17, "layer3-over-ip"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::location_based_services {18, "location-based-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::net_admin {19, "net-admin"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::newsgroup {20, "newsgroup"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::other {21, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::social_networking {22, "social-networking"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::software_updates {23, "software-updates"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::trojan {24, "trojan"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum::voice_and_video {25, "voice-and-video"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::EncryptedEnum::encrypted_no {0, "encrypted-no"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::EncryptedEnum::encrypted_unassigned {1, "encrypted-unassigned"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::EncryptedEnum::encrypted_yes {2, "encrypted-yes"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::authentication_services {0, "authentication-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::backup_systems {1, "backup-systems"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::consumer_audio_streaming {2, "consumer-audio-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::consumer_cloud_storage {3, "consumer-cloud-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::consumer_multimedia_messaging {4, "consumer-multimedia-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::consumer_video_streaming {5, "consumer-video-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::consumer_web_browsing {6, "consumer-web-browsing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::control_and_signaling {7, "control-and-signaling"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::desktop_virtualization {8, "desktop-virtualization"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_cloud_data_storage {9, "enterprise-cloud-data-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_cloud_services {10, "enterprise-cloud-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_data_center_storage {11, "enterprise-data-center-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_media_conferencing {12, "enterprise-media-conferencing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_realtime_apps {13, "enterprise-realtime-apps"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_rich_media_content {14, "enterprise-rich-media-content"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_sw_deployment_tools {15, "enterprise-sw-deployment-tools"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_transactional_apps {16, "enterprise-transactional-apps"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_video_broadcast {17, "enterprise-video-broadcast"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::enterprise_voice_collaboration {18, "enterprise-voice-collaboration"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::file_transfer {19, "file-transfer"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::naming_services {20, "naming-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::network_management {21, "network-management"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::os_updates {22, "os-updates"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::other {23, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::p2p_file_transfer {24, "p2p-file-transfer"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::p2p_networking {25, "p2p-networking"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::remote_access_terminal {26, "remote-access-terminal"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::routing_protocol {27, "routing-protocol"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum::tunneling_protocols {28, "tunneling-protocols"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::broadcast_video {0, "broadcast-video"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::multimedia_conferencing {2, "multimedia-conferencing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::multimedia_streaming {3, "multimedia-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::network_control {4, "network-control"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::ops_admin_mgmt {5, "ops-admin-mgmt"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::real_time_interactive {6, "real-time-interactive"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::signaling {7, "signaling"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::transactional_data {8, "transactional-data"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum::voip_telephony {9, "voip-telephony"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TunnelEnum::tunnel_no {0, "tunnel-no"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TunnelEnum::tunnel_unassigned {1, "tunnel-unassigned"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TunnelEnum::tunnel_yes {2, "tunnel-yes"};

const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::FilterEnum::all {0, "all"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::FilterEnum::failures {1, "failures"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::FilterEnum::none {2, "none"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::FilterEnum::overThreshold {3, "overThreshold"};

const Enum::YLeaf Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::LifeEnum::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Sla::Schedule::LifeEnum::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionTypeEnum::none {0, "none"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionTypeEnum::trapAndTrigger {1, "trapAndTrigger"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionTypeEnum::trapOnly {2, "trapOnly"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionTypeEnum::triggerOnly {3, "triggerOnly"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdTypeEnum::immediate {0, "immediate"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionTypeEnum::none {0, "none"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionTypeEnum::trapAndTrigger {1, "trapAndTrigger"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionTypeEnum::trapOnly {2, "trapOnly"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionTypeEnum::triggerOnly {3, "triggerOnly"};

const Enum::YLeaf Native::Ip::Wccp::WccpList::ModeEnum::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::WccpList::ModeEnum::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::WccpList::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::WccpList::Password::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::WebCache::ModeEnum::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::WebCache::ModeEnum::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::WebCache::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::WebCache::Password::EncryptionEnum::Y_7 {1, "7"};


}
}

