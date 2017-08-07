
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_86.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::~Prefixes()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prnum")
    {
        for(auto const & c : prnum)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum>();
        c->parent = this;
        prnum.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prnum)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prnum")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::Prnum()
    :
    prnum{YType::uint32, "prnum"},
    applications{YType::uint16, "applications"}
{
    yang_name = "prnum"; yang_parent_name = "prefixes";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::~Prnum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::has_data() const
{
    return prnum.is_set
	|| applications.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prnum.yfilter)
	|| ydk::is_set(applications.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prnum" <<"[prnum='" <<prnum <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prnum.is_set || is_set(prnum.yfilter)) leaf_name_data.push_back(prnum.get_name_leafdata());
    if (applications.is_set || is_set(applications.yfilter)) leaf_name_data.push_back(applications.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prnum")
    {
        prnum = value;
        prnum.value_namespace = name_space;
        prnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applications")
    {
        applications = value;
        applications.value_namespace = name_space;
        applications.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prnum")
    {
        prnum.yfilter = yfilter;
    }
    if(value_path == "applications")
    {
        applications.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prnum" || name == "applications")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::TrafficClass()
    :
    aggregate(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate>())
	,filter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter>())
	,keys(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys>())
{
    aggregate->parent = this;

    filter->parent = this;

    keys->parent = this;

    yang_name = "traffic-class"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::~TrafficClass()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::has_data() const
{
    return (aggregate !=  nullptr && aggregate->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (keys !=  nullptr && keys->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (keys !=  nullptr && keys->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "keys")
    {
        if(keys == nullptr)
        {
            keys = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys>();
        }
        return keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(keys != nullptr)
    {
        children["keys"] = keys;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate" || name == "filter" || name == "keys")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::Aggregate()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "aggregate"; yang_parent_name = "traffic-class";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::~Aggregate()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::Filter()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "filter"; yang_parent_name = "traffic-class";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::~Filter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Keys()
    :
    dport(nullptr) // presence node
	,dscp(nullptr) // presence node
	,protocol(nullptr) // presence node
	,sport(nullptr) // presence node
{
    yang_name = "keys"; yang_parent_name = "traffic-class";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::~Keys()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::has_data() const
{
    return (dport !=  nullptr && dport->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::has_operation() const
{
    return is_set(yfilter)
	|| (dport !=  nullptr && dport->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keys";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dport")
    {
        if(dport == nullptr)
        {
            dport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport>();
        }
        return dport;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dport != nullptr)
    {
        children["dport"] = dport;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::Dport()
    :
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{
    yang_name = "dport"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::~Dport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::has_data() const
{
    return dscp.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(sport.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dport";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sport")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "sport")
    {
        sport.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::Dscp()
    :
    dport{YType::empty, "dport"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{
    yang_name = "dscp"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::~Dscp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::has_data() const
{
    return dport.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(sport.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sport")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "sport")
    {
        sport.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Protocol()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
    	,
    sport(nullptr) // presence node
{
    yang_name = "protocol"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sport" || name == "dport" || name == "dscp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "sport"; yang_parent_name = "protocol";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"}
{
    yang_name = "sport"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| protocol.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp" || name == "protocol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "loss"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Max()
    :
    prefix(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>())
	,range(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>())
{
    prefix->parent = this;

    range->parent = this;

    yang_name = "max"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::~Max()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "range")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Prefix()
    :
    total(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>())
{
    total->parent = this;

    yang_name = "prefix"; yang_parent_name = "max";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::~Prefix()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_data() const
{
    return (total !=  nullptr && total->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Total()
{
    yang_name = "total"; yang_parent_name = "prefix";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::~Total()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_data() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_operation() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxpr")
    {
        for(auto const & c : maxpr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr>();
        c->parent = this;
        maxpr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maxpr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpr")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::Maxpr()
    :
    maxpr{YType::uint32, "maxpr"},
    learn{YType::uint32, "learn"}
{
    yang_name = "maxpr"; yang_parent_name = "total";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::~Maxpr()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_data() const
{
    return maxpr.is_set
	|| learn.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxpr.yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxpr" <<"[maxpr='" <<maxpr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/total/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxpr.is_set || is_set(maxpr.yfilter)) leaf_name_data.push_back(maxpr.get_name_leafdata());
    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxpr")
    {
        maxpr = value;
        maxpr.value_namespace = name_space;
        maxpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxpr")
    {
        maxpr.yfilter = yfilter;
    }
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpr" || name == "learn")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Range()
    :
    receive(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>())
{
    receive->parent = this;

    yang_name = "range"; yang_parent_name = "max";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::~Range()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_data() const
{
    return (receive !=  nullptr && receive->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_operation() const
{
    return is_set(yfilter)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::Receive()
    :
    percent{YType::uint8, "percent"}
{
    yang_name = "receive"; yang_parent_name = "range";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::~Receive()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::MaxRangeUtilization()
    :
    percent{YType::uint8, "percent"}
{
    yang_name = "max-range-utilization"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::~MaxRangeUtilization()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-range-utilization";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::McPeer()
    :
    description{YType::str, "description"}
    	,
    domain(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>())
	,head_end(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>())
{
    domain->parent = this;

    eigrp->parent = this;

    head_end->parent = this;

    yang_name = "mc-peer"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::~McPeer()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return description.is_set
	|| (domain !=  nullptr && domain->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (head_end !=  nullptr && head_end->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (domain !=  nullptr && domain->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (head_end !=  nullptr && head_end->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-peer";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "head-end")
    {
        if(head_end == nullptr)
        {
            head_end = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>();
        }
        return head_end;
    }

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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(head_end != nullptr)
    {
        children["head-end"] = head_end;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "eigrp" || name == "head-end" || name == "ipv4" || name == "description")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "ipv4"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return ipv4.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{
    yang_name = "interface"; yang_parent_name = "ipv4";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Domain()
{
    yang_name = "domain"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::~Domain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_data() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_operation() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmval")
    {
        for(auto const & c : dmval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval>();
        c->parent = this;
        dmval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dmval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmval")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Dmval()
    :
    dmval{YType::uint16, "dmval"},
    description{YType::str, "description"},
    eigrp{YType::str, "eigrp"},
    head_end{YType::str, "head-end"}
{
    yang_name = "dmval"; yang_parent_name = "domain";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::~Dmval()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return dmval.is_set
	|| description.is_set
	|| eigrp.is_set
	|| head_end.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dmval.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(head_end.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmval" <<"[dmval='" <<dmval <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmval.is_set || is_set(dmval.yfilter)) leaf_name_data.push_back(dmval.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (head_end.is_set || is_set(head_end.yfilter)) leaf_name_data.push_back(head_end.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmval")
    {
        dmval = value;
        dmval.value_namespace = name_space;
        dmval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-end")
    {
        head_end = value;
        head_end.value_namespace = name_space;
        head_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmval")
    {
        dmval.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "head-end")
    {
        head_end.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "dmval" || name == "description" || name == "eigrp" || name == "head-end")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{
    yang_name = "ipv4"; yang_parent_name = "dmval";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_data() const
{
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{
    yang_name = "interface"; yang_parent_name = "eigrp";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/eigrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::HeadEnd()
{
    yang_name = "head-end"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::~HeadEnd()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{
    yang_name = "interface"; yang_parent_name = "head-end";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/head-end/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Mode()
    :
    monitor(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>())
	,route(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>())
	,verify(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>())
{
    monitor->parent = this;

    route->parent = this;

    verify->parent = this;

    yang_name = "mode"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::~Mode()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>();
        }
        return route;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "route" || name == "verify")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Monitor()
    :
    both{YType::empty, "both"},
    fast{YType::empty, "fast"},
    passive{YType::empty, "passive"}
    	,
    active(nullptr) // presence node
{
    yang_name = "monitor"; yang_parent_name = "mode";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::~Monitor()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_data() const
{
    return both.is_set
	|| fast.is_set
	|| passive.is_set
	|| (active !=  nullptr && active->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(fast.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (active !=  nullptr && active->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (fast.is_set || is_set(fast.yfilter)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast")
    {
        fast = value;
        fast.value_namespace = name_space;
        fast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "fast")
    {
        fast.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "both" || name == "fast" || name == "passive")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::Active()
    :
    throughput{YType::empty, "throughput"}
{
    yang_name = "active"; yang_parent_name = "monitor";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::~Active()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_data() const
{
    return throughput.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throughput.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throughput.is_set || is_set(throughput.yfilter)) leaf_name_data.push_back(throughput.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throughput")
    {
        throughput = value;
        throughput.value_namespace = name_space;
        throughput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throughput")
    {
        throughput.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throughput")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Route()
    :
    control{YType::empty, "control"},
    observe{YType::empty, "observe"}
    	,
    metric(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>())
	,protocol(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>())
{
    metric->parent = this;

    protocol->parent = this;

    yang_name = "route"; yang_parent_name = "mode";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::~Route()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_data() const
{
    return control.is_set
	|| observe.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(observe.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (observe.is_set || is_set(observe.yfilter)) leaf_name_data.push_back(observe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observe")
    {
        observe = value;
        observe.value_namespace = name_space;
        observe.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "observe")
    {
        observe.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "protocol" || name == "control" || name == "observe")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Metric()
    :
    bgp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>())
	,static_(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>())
{
    bgp->parent = this;

    eigrp->parent = this;

    static_->parent = this;

    yang_name = "metric"; yang_parent_name = "route";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::~Metric()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "static")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::Bgp()
    :
    local_pref{YType::uint16, "local-pref"}
{
    yang_name = "bgp"; yang_parent_name = "metric";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::~Bgp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_data() const
{
    return local_pref.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_pref.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-pref")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::Eigrp()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "eigrp"; yang_parent_name = "metric";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::Static_()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "static"; yang_parent_name = "metric";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::~Static_()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::Protocol()
    :
    pbr{YType::empty, "pbr"}
{
    yang_name = "protocol"; yang_parent_name = "route";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_data() const
{
    return pbr.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbr.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbr.is_set || is_set(pbr.yfilter)) leaf_name_data.push_back(pbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbr")
    {
        pbr = value;
        pbr.value_namespace = name_space;
        pbr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbr")
    {
        pbr.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbr")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::Verify()
    :
    bidirectional{YType::empty, "bidirectional"}
{
    yang_name = "verify"; yang_parent_name = "mode";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::~Verify()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_data() const
{
    return bidirectional.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidirectional.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidirectional.is_set || is_set(bidirectional.yfilter)) leaf_name_data.push_back(bidirectional.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidirectional")
    {
        bidirectional = value;
        bidirectional.value_namespace = name_space;
        bidirectional.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidirectional")
    {
        bidirectional.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Mos()
    :
    threshold(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>())
{
    threshold->parent = this;

    yang_name = "mos"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "mos";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::~Threshold()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_data() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_operation() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-thresh")
    {
        for(auto const & c : mos_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh>();
        c->parent = this;
        mos_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::MosThresh()
    :
    mos_thresh{YType::str, "mos-thresh"},
    percent{YType::uint8, "percent"}
{
    yang_name = "mos-thresh"; yang_parent_name = "threshold";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::~MosThresh()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_data() const
{
    return mos_thresh.is_set
	|| percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_thresh.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-thresh" <<"[mos-thresh='" <<mos_thresh <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_thresh.is_set || is_set(mos_thresh.yfilter)) leaf_name_data.push_back(mos_thresh.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh = value;
        mos_thresh.value_namespace = name_space;
        mos_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh" || name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::Probe()
    :
    packets{YType::uint8, "packets"}
{
    yang_name = "probe"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::~Probe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_data() const
{
    return packets.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Resolve()
    :
    cost{YType::empty, "cost"},
    equivalent_path_round_robin{YType::empty, "equivalent-path-round-robin"}
    	,
    delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>())
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>())
{
    delay->parent = this;

    jitter->parent = this;

    loss->parent = this;

    mos->parent = this;

    yang_name = "resolve"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::~Resolve()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_data() const
{
    return cost.is_set
	|| equivalent_path_round_robin.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (mos !=  nullptr && mos->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(equivalent_path_round_robin.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (mos !=  nullptr && mos->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolve";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (equivalent_path_round_robin.is_set || is_set(equivalent_path_round_robin.yfilter)) leaf_name_data.push_back(equivalent_path_round_robin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>();
        }
        return mos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin = value;
        equivalent_path_round_robin.value_namespace = name_space;
        equivalent_path_round_robin.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "jitter" || name == "loss" || name == "mos" || name == "cost" || name == "equivalent-path-round-robin")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Delay()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>())
{
    priority->parent = this;

    yang_name = "delay"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "delay";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_data() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_operation() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "del-pol")
    {
        for(auto const & c : del_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol>();
        c->parent = this;
        del_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : del_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::DelPol()
    :
    del_pol{YType::uint8, "del-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "del-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::~DelPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_data() const
{
    return del_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(del_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-pol" <<"[del-pol='" <<del_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_pol.is_set || is_set(del_pol.yfilter)) leaf_name_data.push_back(del_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "del-pol")
    {
        del_pol = value;
        del_pol.value_namespace = name_space;
        del_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "del-pol")
    {
        del_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Jitter()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>())
{
    priority->parent = this;

    yang_name = "jitter"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "jitter";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_data() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_operation() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jit-pol")
    {
        for(auto const & c : jit_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol>();
        c->parent = this;
        jit_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jit_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::JitPol()
    :
    jit_pol{YType::uint8, "jit-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "jit-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::~JitPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_data() const
{
    return jit_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jit_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jit-pol" <<"[jit-pol='" <<jit_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jit_pol.is_set || is_set(jit_pol.yfilter)) leaf_name_data.push_back(jit_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jit-pol")
    {
        jit_pol = value;
        jit_pol.value_namespace = name_space;
        jit_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jit-pol")
    {
        jit_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Loss()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>())
{
    priority->parent = this;

    yang_name = "loss"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "loss";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_data() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_operation() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-pol")
    {
        for(auto const & c : loss_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol>();
        c->parent = this;
        loss_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loss_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::LossPol()
    :
    loss_pol{YType::uint8, "loss-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "loss-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::~LossPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_data() const
{
    return loss_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-pol" <<"[loss-pol='" <<loss_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_pol.is_set || is_set(loss_pol.yfilter)) leaf_name_data.push_back(loss_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-pol")
    {
        loss_pol = value;
        loss_pol.value_namespace = name_space;
        loss_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-pol")
    {
        loss_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Mos()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>())
{
    priority->parent = this;

    yang_name = "mos"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "mos";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_data() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_operation() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-pol")
    {
        for(auto const & c : mos_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol>();
        c->parent = this;
        mos_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::MosPol()
    :
    mos_pol{YType::uint8, "mos-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "mos-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::~MosPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_data() const
{
    return mos_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-pol" <<"[mos-pol='" <<mos_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_pol.is_set || is_set(mos_pol.yfilter)) leaf_name_data.push_back(mos_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-pol")
    {
        mos_pol = value;
        mos_pol.value_namespace = name_space;
        mos_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-pol")
    {
        mos_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::Rsvp()
    :
    post_dial_delay{YType::uint16, "post-dial-delay"},
    signaling_retries{YType::uint8, "signaling-retries"}
{
    yang_name = "rsvp"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::~Rsvp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_data() const
{
    return post_dial_delay.is_set
	|| signaling_retries.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(post_dial_delay.yfilter)
	|| ydk::is_set(signaling_retries.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_dial_delay.is_set || is_set(post_dial_delay.yfilter)) leaf_name_data.push_back(post_dial_delay.get_name_leafdata());
    if (signaling_retries.is_set || is_set(signaling_retries.yfilter)) leaf_name_data.push_back(signaling_retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay = value;
        post_dial_delay.value_namespace = name_space;
        post_dial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries = value;
        signaling_retries.value_namespace = name_space;
        signaling_retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay.yfilter = yfilter;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "post-dial-delay" || name == "signaling-retries")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::TargetDiscovery()
    :
    responder_list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>())
{
    responder_list->parent = this;

    yang_name = "target-discovery"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::~TargetDiscovery()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_data() const
{
    return (responder_list !=  nullptr && responder_list->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (responder_list !=  nullptr && responder_list->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-discovery";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "responder-list")
    {
        if(responder_list == nullptr)
        {
            responder_list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>();
        }
        return responder_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(responder_list != nullptr)
    {
        children["responder-list"] = responder_list;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "responder-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::ResponderList()
{
    yang_name = "responder-list"; yang_parent_name = "target-discovery";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::~ResponderList()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_data() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_operation() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder-list";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "td-num")
    {
        for(auto const & c : td_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum>();
        c->parent = this;
        td_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : td_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::TdNum()
    :
    td_num{YType::str, "td-num"},
    inside_prefixes{YType::str, "inside-prefixes"}
{
    yang_name = "td-num"; yang_parent_name = "responder-list";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::~TdNum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_data() const
{
    return td_num.is_set
	|| inside_prefixes.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(td_num.yfilter)
	|| ydk::is_set(inside_prefixes.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "td-num" <<"[td-num='" <<td_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/responder-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (td_num.is_set || is_set(td_num.yfilter)) leaf_name_data.push_back(td_num.get_name_leafdata());
    if (inside_prefixes.is_set || is_set(inside_prefixes.yfilter)) leaf_name_data.push_back(inside_prefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "td-num")
    {
        td_num = value;
        td_num.value_namespace = name_space;
        td_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes = value;
        inside_prefixes.value_namespace = name_space;
        inside_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "td-num")
    {
        td_num.yfilter = yfilter;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num" || name == "inside-prefixes")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::Traceroute()
    :
    probe_delay{YType::uint16, "probe-delay"}
{
    yang_name = "traceroute"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::~Traceroute()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_data() const
{
    return probe_delay.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_delay.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_delay.is_set || is_set(probe_delay.yfilter)) leaf_name_data.push_back(probe_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-delay")
    {
        probe_delay = value;
        probe_delay.value_namespace = name_space;
        probe_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-delay")
    {
        probe_delay.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-delay")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::Unreachable()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "unreachable"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::~Unreachable()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::PfrMap()
    :
    pfr_tg{YType::str, "pfr-tg"}
    	,
    match(std::make_shared<Native::PfrMap::Match>())
	,set(std::make_shared<Native::PfrMap::Set>())
{
    match->parent = this;

    set->parent = this;

    yang_name = "pfr-map"; yang_parent_name = "native";
}

Native::PfrMap::~PfrMap()
{
}

bool Native::PfrMap::has_data() const
{
    return pfr_tg.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::PfrMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tg.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::PfrMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-map" <<"[pfr-tg='" <<pfr_tg <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::get_entity_path(Entity* ancestor) const
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

    if (pfr_tg.is_set || is_set(pfr_tg.yfilter)) leaf_name_data.push_back(pfr_tg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::PfrMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::PfrMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::PfrMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg = value;
        pfr_tg.value_namespace = name_space;
        pfr_tg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg.yfilter = yfilter;
    }
}

bool Native::PfrMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "set" || name == "pfr-tg")
        return true;
    return false;
}

Native::PfrMap::Match::Match()
    :
    ip(std::make_shared<Native::PfrMap::Match::Ip>())
	,pfr(std::make_shared<Native::PfrMap::Match::Pfr>())
	,traffic_class(std::make_shared<Native::PfrMap::Match::TrafficClass>())
{
    ip->parent = this;

    pfr->parent = this;

    traffic_class->parent = this;

    yang_name = "match"; yang_parent_name = "pfr-map";
}

Native::PfrMap::Match::~Match()
{
}

bool Native::PfrMap::Match::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::PfrMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::PfrMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:match";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PfrMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::PfrMap::Match::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::PfrMap::Match::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::PfrMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "pfr" || name == "traffic-class")
        return true;
    return false;
}

Native::PfrMap::Match::Ip::Ip()
    :
    address{YType::empty, "address"}
{
    yang_name = "ip"; yang_parent_name = "match";
}

Native::PfrMap::Match::Ip::~Ip()
{
}

bool Native::PfrMap::Match::Ip::has_data() const
{
    return address.is_set;
}

bool Native::PfrMap::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::PfrMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::Ip::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::PfrMap::Match::Pfr::Pfr()
    :
    learn{YType::empty, "learn"}
{
    yang_name = "pfr"; yang_parent_name = "match";
}

Native::PfrMap::Match::Pfr::~Pfr()
{
}

bool Native::PfrMap::Match::Pfr::has_data() const
{
    return learn.is_set;
}

bool Native::PfrMap::Match::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::PfrMap::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::Pfr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn")
        return true;
    return false;
}

Native::PfrMap::Match::TrafficClass::TrafficClass()
    :
    access_list{YType::empty, "access-list"},
    application{YType::empty, "application"},
    prefix_list{YType::empty, "prefix-list"}
{
    yang_name = "traffic-class"; yang_parent_name = "match";
}

Native::PfrMap::Match::TrafficClass::~TrafficClass()
{
}

bool Native::PfrMap::Match::TrafficClass::has_data() const
{
    return access_list.is_set
	|| application.is_set
	|| prefix_list.is_set;
}

bool Native::PfrMap::Match::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(application.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PfrMap::Match::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (application.is_set || is_set(application.yfilter)) leaf_name_data.push_back(application.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application")
    {
        application = value;
        application.value_namespace = name_space;
        application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "application")
    {
        application.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "application" || name == "prefix-list")
        return true;
    return false;
}

Native::PfrMap::Set::Set()
    :
    holddown{YType::uint16, "holddown"},
    interface{YType::str, "interface"},
    jitter{YType::empty, "jitter"},
    mode{YType::empty, "mode"},
    mos{YType::empty, "mos"},
    next_hop{YType::empty, "next-hop"},
    periodic{YType::empty, "periodic"},
    probe{YType::empty, "probe"},
    resolve{YType::empty, "resolve"},
    traceroute{YType::empty, "traceroute"},
    trap_enable{YType::empty, "trap-enable"},
    trigger_log_percentage{YType::empty, "trigger-log-percentage"},
    unreachable{YType::empty, "unreachable"}
    	,
    active_probe(std::make_shared<Native::PfrMap::Set::ActiveProbe>())
	,backoff(std::make_shared<Native::PfrMap::Set::Backoff>())
	,delay(std::make_shared<Native::PfrMap::Set::Delay>())
	,link_group(std::make_shared<Native::PfrMap::Set::LinkGroup>())
	,loss(std::make_shared<Native::PfrMap::Set::Loss>())
{
    active_probe->parent = this;

    backoff->parent = this;

    delay->parent = this;

    link_group->parent = this;

    loss->parent = this;

    yang_name = "set"; yang_parent_name = "pfr-map";
}

Native::PfrMap::Set::~Set()
{
}

bool Native::PfrMap::Set::has_data() const
{
    return holddown.is_set
	|| interface.is_set
	|| jitter.is_set
	|| mode.is_set
	|| mos.is_set
	|| next_hop.is_set
	|| periodic.is_set
	|| probe.is_set
	|| resolve.is_set
	|| traceroute.is_set
	|| trap_enable.is_set
	|| trigger_log_percentage.is_set
	|| unreachable.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (link_group !=  nullptr && link_group->has_data())
	|| (loss !=  nullptr && loss->has_data());
}

bool Native::PfrMap::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mos.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(resolve.yfilter)
	|| ydk::is_set(traceroute.yfilter)
	|| ydk::is_set(trap_enable.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (link_group !=  nullptr && link_group->has_operation())
	|| (loss !=  nullptr && loss->has_operation());
}

std::string Native::PfrMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:set";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mos.is_set || is_set(mos.yfilter)) leaf_name_data.push_back(mos.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (resolve.is_set || is_set(resolve.yfilter)) leaf_name_data.push_back(resolve.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.yfilter)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (trap_enable.is_set || is_set(trap_enable.yfilter)) leaf_name_data.push_back(trap_enable.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::PfrMap::Set::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::PfrMap::Set::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::PfrMap::Set::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "link-group")
    {
        if(link_group == nullptr)
        {
            link_group = std::make_shared<Native::PfrMap::Set::LinkGroup>();
        }
        return link_group;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::PfrMap::Set::Loss>();
        }
        return loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(link_group != nullptr)
    {
        children["link-group"] = link_group;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    return children;
}

void Native::PfrMap::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mos")
    {
        mos = value;
        mos.value_namespace = name_space;
        mos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolve")
    {
        resolve = value;
        resolve.value_namespace = name_space;
        resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
        traceroute.value_namespace = name_space;
        traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-enable")
    {
        trap_enable = value;
        trap_enable.value_namespace = name_space;
        trap_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mos")
    {
        mos.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "resolve")
    {
        resolve.yfilter = yfilter;
    }
    if(value_path == "traceroute")
    {
        traceroute.yfilter = yfilter;
    }
    if(value_path == "trap-enable")
    {
        trap_enable.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "backoff" || name == "delay" || name == "link-group" || name == "loss" || name == "holddown" || name == "interface" || name == "jitter" || name == "mode" || name == "mos" || name == "next-hop" || name == "periodic" || name == "probe" || name == "resolve" || name == "traceroute" || name == "trap-enable" || name == "trigger-log-percentage" || name == "unreachable")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::ActiveProbe()
    :
    echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>())
	,jitter(std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>())
{
    echo->parent = this;

    jitter->parent = this;

    tcp_conn->parent = this;

    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "set";
}

Native::PfrMap::Set::ActiveProbe::~ActiveProbe()
{
}

bool Native::PfrMap::Set::ActiveProbe::has_data() const
{
    return (echo !=  nullptr && echo->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::PfrMap::Set::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (echo !=  nullptr && echo->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::PfrMap::Set::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveProbe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(echo != nullptr)
    {
        children["echo"] = echo;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "jitter" || name == "tcp-conn" || name == "udp-echo")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Echo()
{
    yang_name = "echo"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::Echo::~Echo()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Echo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Echo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "echo";
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| dscp.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "dscp")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Jitter()
{
    yang_name = "jitter"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Jitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Jitter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter";
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::TcpConn()
{
    yang_name = "tcp-conn"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::TcpConn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpConn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn";
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::UdpEcho()
{
    yang_name = "udp-echo"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::UdpEcho::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo";
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::Backoff()
{
    yang_name = "backoff"; yang_parent_name = "set";
}

Native::PfrMap::Set::Backoff::~Backoff()
{
}

bool Native::PfrMap::Set::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoff' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t")
    {
        for(auto const & c : boff_t)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT>();
        c->parent = this;
        boff_t.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT()
    :
    boff_t{YType::uint16, "boff-t"}
{
    yang_name = "boff-t"; yang_parent_name = "backoff";
}

Native::PfrMap::Set::Backoff::BoffT::~BoffT()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::has_data() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_data())
            return true;
    }
    return boff_t.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::has_operation() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff_t.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t" <<"[boff-t='" <<boff_t <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Backoff::BoffT::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BoffT' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t.is_set || is_set(boff_t.yfilter)) leaf_name_data.push_back(boff_t.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t0")
    {
        for(auto const & c : boff_t0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT::BoffT0>();
        c->parent = this;
        boff_t0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t")
    {
        boff_t = value;
        boff_t.value_namespace = name_space;
        boff_t.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t")
    {
        boff_t.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::BoffT0()
    :
    boff_t0{YType::uint16, "boff-t0"},
    boff_rng{YType::uint16, "boff-rng"}
{
    yang_name = "boff-t0"; yang_parent_name = "boff-t";
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::~BoffT0()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_data() const
{
    return boff_t0.is_set
	|| boff_rng.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff_t0.yfilter)
	|| ydk::is_set(boff_rng.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t0" <<"[boff-t0='" <<boff_t0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BoffT0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t0.is_set || is_set(boff_t0.yfilter)) leaf_name_data.push_back(boff_t0.get_name_leafdata());
    if (boff_rng.is_set || is_set(boff_rng.yfilter)) leaf_name_data.push_back(boff_rng.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t0")
    {
        boff_t0 = value;
        boff_t0.value_namespace = name_space;
        boff_t0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boff-rng")
    {
        boff_rng = value;
        boff_rng.value_namespace = name_space;
        boff_rng.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t0")
    {
        boff_t0.yfilter = yfilter;
    }
    if(value_path == "boff-rng")
    {
        boff_rng.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-rng")
        return true;
    return false;
}

Native::PfrMap::Set::Delay::Delay()
    :
    relative{YType::empty, "relative"},
    threshold{YType::empty, "threshold"}
{
    yang_name = "delay"; yang_parent_name = "set";
}

Native::PfrMap::Set::Delay::~Delay()
{
}

bool Native::PfrMap::Set::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LinkGroup()
{
    yang_name = "link-group"; yang_parent_name = "set";
}

Native::PfrMap::Set::LinkGroup::~LinkGroup()
{
}

bool Native::PfrMap::Set::LinkGroup::has_data() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::LinkGroup::has_operation() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::LinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lg-name")
    {
        for(auto const & c : lg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName>();
        c->parent = this;
        lg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::LinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::LinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::LgName()
    :
    lg_name{YType::str, "lg-name"}
    	,
    fallback(nullptr) // presence node
{
    yang_name = "lg-name"; yang_parent_name = "link-group";
}

Native::PfrMap::Set::LinkGroup::LgName::~LgName()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_data() const
{
    return lg_name.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lg_name.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::PfrMap::Set::LinkGroup::LgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lg-name" <<"[lg-name='" <<lg_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::LinkGroup::LgName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LgName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lg_name.is_set || is_set(lg_name.yfilter)) leaf_name_data.push_back(lg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lg-name")
    {
        lg_name = value;
        lg_name.value_namespace = name_space;
        lg_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lg-name")
    {
        lg_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::Fallback()
    :
    fall_name{YType::str, "fall-name"}
{
    yang_name = "fallback"; yang_parent_name = "lg-name";
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::~Fallback()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_data() const
{
    return fall_name.is_set;
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fall_name.yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fallback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fall_name.is_set || is_set(fall_name.yfilter)) leaf_name_data.push_back(fall_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fall-name")
    {
        fall_name = value;
        fall_name.value_namespace = name_space;
        fall_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fall-name")
    {
        fall_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fall-name")
        return true;
    return false;
}

Native::PfrMap::Set::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "loss"; yang_parent_name = "set";
}

Native::PfrMap::Set::Loss::~Loss()
{
}

bool Native::PfrMap::Set::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Loss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loss' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::FacilityAlarm::FacilityAlarm()
    :
    exceed_action{YType::enumeration, "exceed-action"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "facility-alarm"; yang_parent_name = "native";
}

Native::FacilityAlarm::~FacilityAlarm()
{
}

bool Native::FacilityAlarm::has_data() const
{
    return exceed_action.is_set
	|| severity.is_set;
}

bool Native::FacilityAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exceed_action.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::FacilityAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "facility-alarm";

    return path_buffer.str();

}

const EntityPath Native::FacilityAlarm::get_entity_path(Entity* ancestor) const
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

    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::FacilityAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FacilityAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::FacilityAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FacilityAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::FacilityAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action" || name == "severity")
        return true;
    return false;
}

Native::Setup::Setup()
    :
    express{YType::boolean, "Cisco-IOS-XE-switch:express"}
{
    yang_name = "setup"; yang_parent_name = "native";
}

Native::Setup::~Setup()
{
}

bool Native::Setup::has_data() const
{
    return express.is_set;
}

bool Native::Setup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(express.yfilter);
}

std::string Native::Setup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup";

    return path_buffer.str();

}

const EntityPath Native::Setup::get_entity_path(Entity* ancestor) const
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

    if (express.is_set || is_set(express.yfilter)) leaf_name_data.push_back(express.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Setup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Setup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Setup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "express")
    {
        express = value;
        express.value_namespace = name_space;
        express.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Setup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "express")
    {
        express.yfilter = yfilter;
    }
}

bool Native::Setup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "express")
        return true;
    return false;
}

Native::TodClock::TodClock()
    :
    input_source(std::make_shared<Native::TodClock::InputSource>())
{
    input_source->parent = this;

    yang_name = "tod-clock"; yang_parent_name = "native";
}

Native::TodClock::~TodClock()
{
}

bool Native::TodClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data());
}

bool Native::TodClock::has_operation() const
{
    return is_set(yfilter)
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::TodClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tod-clock";

    return path_buffer.str();

}

const EntityPath Native::TodClock::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::TodClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::TodClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    return children;
}

void Native::TodClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TodClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TodClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-source")
        return true;
    return false;
}

Native::TodClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    ptp(std::make_shared<Native::TodClock::InputSource::Ptp>())
{
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "tod-clock";
}

Native::TodClock::InputSource::~InputSource()
{
}

bool Native::TodClock::InputSource::has_data() const
{
    return priority.is_set
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::TodClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::TodClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";

    return path_buffer.str();

}

const EntityPath Native::TodClock::InputSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/tod-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::TodClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::TodClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::TodClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{
    yang_name = "ptp"; yang_parent_name = "input-source";
}

Native::TodClock::InputSource::Ptp::~Ptp()
{
}

bool Native::TodClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::TodClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::TodClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";

    return path_buffer.str();

}

const EntityPath Native::TodClock::InputSource::Ptp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/tod-clock/input-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TodClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::NetworkClock::NetworkClock()
    :
    input_source(std::make_shared<Native::NetworkClock::InputSource>())
	,synchronization(std::make_shared<Native::NetworkClock::Synchronization>())
	,wait_to_restore(std::make_shared<Native::NetworkClock::WaitToRestore>())
{
    input_source->parent = this;

    synchronization->parent = this;

    wait_to_restore->parent = this;

    yang_name = "network-clock"; yang_parent_name = "native";
}

Native::NetworkClock::~NetworkClock()
{
}

bool Native::NetworkClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data())
	|| (synchronization !=  nullptr && synchronization->has_data())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_data());
}

bool Native::NetworkClock::has_operation() const
{
    return is_set(yfilter)
	|| (input_source !=  nullptr && input_source->has_operation())
	|| (synchronization !=  nullptr && synchronization->has_operation())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_operation());
}

std::string Native::NetworkClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-clock";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::NetworkClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::NetworkClock::InputSource>();
        }
        return input_source;
    }

    if(child_yang_name == "synchronization")
    {
        if(synchronization == nullptr)
        {
            synchronization = std::make_shared<Native::NetworkClock::Synchronization>();
        }
        return synchronization;
    }

    if(child_yang_name == "wait-to-restore")
    {
        if(wait_to_restore == nullptr)
        {
            wait_to_restore = std::make_shared<Native::NetworkClock::WaitToRestore>();
        }
        return wait_to_restore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    if(synchronization != nullptr)
    {
        children["synchronization"] = synchronization;
    }

    if(wait_to_restore != nullptr)
    {
        children["wait-to-restore"] = wait_to_restore;
    }

    return children;
}

void Native::NetworkClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::NetworkClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::NetworkClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-source" || name == "synchronization" || name == "wait-to-restore")
        return true;
    return false;
}

Native::NetworkClock::Synchronization::Synchronization()
    :
    automatic{YType::empty, "automatic"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "synchronization"; yang_parent_name = "network-clock";
}

Native::NetworkClock::Synchronization::~Synchronization()
{
}

bool Native::NetworkClock::Synchronization::has_data() const
{
    return automatic.is_set
	|| mode.is_set;
}

bool Native::NetworkClock::Synchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(automatic.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::NetworkClock::Synchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronization";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::Synchronization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (automatic.is_set || is_set(automatic.yfilter)) leaf_name_data.push_back(automatic.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::Synchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::Synchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::Synchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "automatic")
    {
        automatic = value;
        automatic.value_namespace = name_space;
        automatic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::Synchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "automatic")
    {
        automatic.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::NetworkClock::Synchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "automatic" || name == "mode")
        return true;
    return false;
}

Native::NetworkClock::WaitToRestore::WaitToRestore()
    :
    global{YType::empty, "global"},
    time{YType::uint32, "time"}
{
    yang_name = "wait-to-restore"; yang_parent_name = "network-clock";
}

Native::NetworkClock::WaitToRestore::~WaitToRestore()
{
}

bool Native::NetworkClock::WaitToRestore::has_data() const
{
    return global.is_set
	|| time.is_set;
}

bool Native::NetworkClock::WaitToRestore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::NetworkClock::WaitToRestore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-to-restore";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::WaitToRestore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::WaitToRestore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::WaitToRestore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::WaitToRestore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::WaitToRestore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::NetworkClock::WaitToRestore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "time")
        return true;
    return false;
}

Native::NetworkClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    interface(std::make_shared<Native::NetworkClock::InputSource::Interface>())
	,ptp(std::make_shared<Native::NetworkClock::InputSource::Ptp>())
{
    interface->parent = this;

    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "network-clock";
}

Native::NetworkClock::InputSource::~InputSource()
{
}

bool Native::NetworkClock::InputSource::has_data() const
{
    return priority.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::NetworkClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::NetworkClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::NetworkClock::InputSource::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::NetworkClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::NetworkClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::Interface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "input-source";
}

Native::NetworkClock::InputSource::Interface::~Interface()
{
}

bool Native::NetworkClock::InputSource::Interface::has_data() const
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

bool Native::NetworkClock::InputSource::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::NetworkClock::InputSource::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::get_children() const
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

void Native::NetworkClock::InputSource::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::NetworkClock::InputSource::Interface::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::NetworkClock::InputSource::Interface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{
    yang_name = "ptp"; yang_parent_name = "input-source";
}

Native::NetworkClock::InputSource::Ptp::~Ptp()
{
}

bool Native::NetworkClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::NetworkClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::NetworkClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Ptp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::L2Vpn::L2Vpn()
    :
    pseudowire(std::make_shared<Native::L2Vpn::Pseudowire>())
	,vfi(std::make_shared<Native::L2Vpn::Vfi>())
	,xconnect(std::make_shared<Native::L2Vpn::Xconnect>())
{
    pseudowire->parent = this;

    vfi->parent = this;

    xconnect->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "native";
}

Native::L2Vpn::~L2Vpn()
{
}

bool Native::L2Vpn::has_data() const
{
    return (pseudowire !=  nullptr && pseudowire->has_data())
	|| (vfi !=  nullptr && vfi->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (vfi !=  nullptr && vfi->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2Vpn::Pseudowire>();
        }
        return pseudowire;
    }

    if(child_yang_name == "vfi")
    {
        if(vfi == nullptr)
        {
            vfi = std::make_shared<Native::L2Vpn::Vfi>();
        }
        return vfi;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::L2Vpn::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    if(vfi != nullptr)
    {
        children["vfi"] = vfi;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "vfi" || name == "xconnect")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Pseudowire()
    :
    routing{YType::empty, "routing"}
    	,
    group(std::make_shared<Native::L2Vpn::Pseudowire::Group>())
	,static_oam(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>())
	,tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv>())
{
    group->parent = this;

    static_oam->parent = this;

    tlv->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "l2vpn";
}

Native::L2Vpn::Pseudowire::~Pseudowire()
{
}

bool Native::L2Vpn::Pseudowire::has_data() const
{
    return routing.is_set
	|| (group !=  nullptr && group->has_data())
	|| (static_oam !=  nullptr && static_oam->has_data())
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (static_oam !=  nullptr && static_oam->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:pseudowire";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::L2Vpn::Pseudowire::Group>();
        }
        return group;
    }

    if(child_yang_name == "static-oam")
    {
        if(static_oam == nullptr)
        {
            static_oam = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>();
        }
        return static_oam;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(static_oam != nullptr)
    {
        children["static-oam"] = static_oam;
    }

    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "static-oam" || name == "tlv" || name == "routing")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::StaticOam()
{
    yang_name = "static-oam"; yang_parent_name = "pseudowire";
}

Native::L2Vpn::Pseudowire::StaticOam::~StaticOam()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-oam";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Class_()
    :
    pw_nm{YType::str, "pw-nm"}
    	,
    timeout(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>())
{
    timeout->parent = this;

    yang_name = "class"; yang_parent_name = "static-oam";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::~Class_()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_data() const
{
    return pw_nm.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_nm.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[pw-nm='" <<pw_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/static-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_nm.is_set || is_set(pw_nm.yfilter)) leaf_name_data.push_back(pw_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-nm")
    {
        pw_nm = value;
        pw_nm.value_namespace = name_space;
        pw_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-nm")
    {
        pw_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "pw-nm")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Timeout()
    :
    refresh(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>())
{
    refresh->parent = this;

    yang_name = "timeout"; yang_parent_name = "class";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::~Timeout()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_data() const
{
    return (refresh !=  nullptr && refresh->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Refresh()
    :
    send(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>())
{
    send->parent = this;

    yang_name = "refresh"; yang_parent_name = "timeout";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::~Refresh()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Refresh' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::Send()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "send"; yang_parent_name = "refresh";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::~Send()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_data() const
{
    return interval.is_set;
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_entity_path(Entity* ancestor) const
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

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Tlv()
{
    yang_name = "tlv"; yang_parent_name = "pseudowire";
}

Native::L2Vpn::Pseudowire::Tlv::~Tlv()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::Tlv::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Template_()
    :
    tlv_nm{YType::str, "tlv-nm"}
    	,
    tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>())
{
    tlv->parent = this;

    yang_name = "template"; yang_parent_name = "tlv";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::~Template_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_data() const
{
    return tlv_nm.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_nm.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[tlv-nm='" <<tlv_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/tlv/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_nm.is_set || is_set(tlv_nm.yfilter)) leaf_name_data.push_back(tlv_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm = value;
        tlv_nm.value_namespace = name_space;
        tlv_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "tlv-nm")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::Tlv_()
    :
    tlv_description(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>())
	,tlv_type(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>())
{
    tlv_description->parent = this;

    tlv_type->parent = this;

    yang_name = "tlv"; yang_parent_name = "template";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::~Tlv_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_data() const
{
    return (tlv_description !=  nullptr && tlv_description->has_data())
	|| (tlv_type !=  nullptr && tlv_type->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_operation() const
{
    return is_set(yfilter)
	|| (tlv_description !=  nullptr && tlv_description->has_operation())
	|| (tlv_type !=  nullptr && tlv_type->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-description")
    {
        if(tlv_description == nullptr)
        {
            tlv_description = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>();
        }
        return tlv_description;
    }

    if(child_yang_name == "tlv-type")
    {
        if(tlv_type == nullptr)
        {
            tlv_type = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>();
        }
        return tlv_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv_description != nullptr)
    {
        children["tlv-description"] = tlv_description;
    }

    if(tlv_type != nullptr)
    {
        children["tlv-type"] = tlv_type;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-description" || name == "tlv-type")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::TlvType()
    :
    type{YType::uint8, "type"}
{
    yang_name = "tlv-type"; yang_parent_name = "tlv";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::~TlvType()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_data() const
{
    return type.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-type";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlvType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::TlvDescription()
    :
    description{YType::str, "description"}
{
    yang_name = "tlv-description"; yang_parent_name = "tlv";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::~TlvDescription()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_data() const
{
    return description.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-description";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlvDescription' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Group::Group()
    :
    status{YType::empty, "status"}
{
    yang_name = "group"; yang_parent_name = "pseudowire";
}

Native::L2Vpn::Pseudowire::Group::~Group()
{
}

bool Native::L2Vpn::Pseudowire::Group::has_data() const
{
    return status.is_set;
}

bool Native::L2Vpn::Pseudowire::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Vfi()
{
    yang_name = "vfi"; yang_parent_name = "l2vpn";
}

Native::L2Vpn::Vfi::~Vfi()
{
}

bool Native::L2Vpn::Vfi::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Vfi::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Vfi::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Context()
    :
    vfi_nm{YType::str, "vfi-nm"}
    	,
    autodiscovery(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>())
	,vpn(std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>())
{
    autodiscovery->parent = this;

    vpn->parent = this;

    yang_name = "context"; yang_parent_name = "vfi";
}

Native::L2Vpn::Vfi::Context::~Context()
{
}

bool Native::L2Vpn::Vfi::Context::has_data() const
{
    return vfi_nm.is_set
	|| (autodiscovery !=  nullptr && autodiscovery->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2Vpn::Vfi::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vfi_nm.yfilter)
	|| (autodiscovery !=  nullptr && autodiscovery->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[vfi-nm='" <<vfi_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:vfi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_nm.is_set || is_set(vfi_nm.yfilter)) leaf_name_data.push_back(vfi_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autodiscovery")
    {
        if(autodiscovery == nullptr)
        {
            autodiscovery = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>();
        }
        return autodiscovery;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autodiscovery != nullptr)
    {
        children["autodiscovery"] = autodiscovery;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm = value;
        vfi_nm.value_namespace = name_space;
        vfi_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autodiscovery" || name == "vpn" || name == "vfi-nm")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Autodiscovery()
    :
    bgp(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>())
{
    bgp->parent = this;

    yang_name = "autodiscovery"; yang_parent_name = "context";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::~Autodiscovery()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autodiscovery";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autodiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Bgp()
    :
    signaling(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>())
{
    signaling->parent = this;

    yang_name = "bgp"; yang_parent_name = "autodiscovery";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::~Bgp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_data() const
{
    return (signaling !=  nullptr && signaling->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signaling != nullptr)
    {
        children["signaling"] = signaling;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Signaling()
    :
    bgp(nullptr) // presence node
	,ldp(nullptr) // presence node
{
    yang_name = "signaling"; yang_parent_name = "bgp";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::~Signaling()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signaling' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "ldp")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::Bgp_()
    :
    template_{YType::str, "template"}
{
    yang_name = "bgp"; yang_parent_name = "signaling";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::~Bgp_()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_entity_path(Entity* ancestor) const
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

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::Ldp()
    :
    template_{YType::str, "template"}
{
    yang_name = "ldp"; yang_parent_name = "signaling";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::~Ldp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Vpn::Vpn()
    :
    id{YType::uint32, "id"}
{
    yang_name = "vpn"; yang_parent_name = "context";
}

Native::L2Vpn::Vfi::Context::Vpn::~Vpn()
{
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Xconnect()
{
    yang_name = "xconnect"; yang_parent_name = "l2vpn";
}

Native::L2Vpn::Xconnect::~Xconnect()
{
}

bool Native::L2Vpn::Xconnect::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::Context()
    :
    xc_name{YType::str, "xc-name"}
    	,
    xc_mode_config_xconnect(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>())
{
    xc_mode_config_xconnect->parent = this;

    yang_name = "context"; yang_parent_name = "xconnect";
}

Native::L2Vpn::Xconnect::Context::~Context()
{
}

bool Native::L2Vpn::Xconnect::Context::has_data() const
{
    return xc_name.is_set
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_data());
}

bool Native::L2Vpn::Xconnect::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xc_name.yfilter)
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[xc-name='" <<xc_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:xconnect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_name.is_set || is_set(xc_name.yfilter)) leaf_name_data.push_back(xc_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xc-Mode-config-xconnect")
    {
        if(xc_mode_config_xconnect == nullptr)
        {
            xc_mode_config_xconnect = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>();
        }
        return xc_mode_config_xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xc_mode_config_xconnect != nullptr)
    {
        children["xc-Mode-config-xconnect"] = xc_mode_config_xconnect;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xc-name")
    {
        xc_name = value;
        xc_name.value_namespace = name_space;
        xc_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xc-name")
    {
        xc_name.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xc-Mode-config-xconnect" || name == "xc-name")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::XcModeConfigXconnect()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
    	,
    interworking(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>())
	,match(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>())
	,member(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>())
	,redundancy(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>())
	,remote(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>())
{
    interworking->parent = this;

    match->parent = this;

    member->parent = this;

    redundancy->parent = this;

    remote->parent = this;

    yang_name = "xc-Mode-config-xconnect"; yang_parent_name = "context";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::~XcModeConfigXconnect()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_data() const
{
    return description.is_set
	|| shutdown.is_set
	|| (interworking !=  nullptr && interworking->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (interworking !=  nullptr && interworking->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-Mode-config-xconnect";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XcModeConfigXconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interworking")
    {
        if(interworking == nullptr)
        {
            interworking = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>();
        }
        return interworking;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>();
        }
        return match;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>();
        }
        return member;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interworking != nullptr)
    {
        children["interworking"] = interworking;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interworking" || name == "match" || name == "member" || name == "redundancy" || name == "remote" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::Interworking()
    :
    ethernet{YType::empty, "ethernet"},
    ip{YType::empty, "ip"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "interworking"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::~Interworking()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_data() const
{
    return ethernet.is_set
	|| ip.is_set
	|| vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interworking";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interworking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ip" || name == "vlan")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Match()
    :
    protocol(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>())
{
    protocol->parent = this;

    yang_name = "match"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::~Match()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::Protocol()
    :
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "protocol"; yang_parent_name = "match";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::~Protocol()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_data() const
{
    return ipv6.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Member()
    :
    vlan{YType::uint16, "Vlan"}
{
    yang_name = "member"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::~Member()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4" || name == "Vlan")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mem_vcid{YType::uint32, "mem-vcid"}
{
    yang_name = "ipv4"; yang_parent_name = "member";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::~Ipv4()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mem_vcid.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mem_vcid.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mem-vcid")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::Interface()
    :
    interface{YType::str, "interface"},
    group{YType::empty, "group"},
    service_instance{YType::empty, "service-instance"}
{
    yang_name = "interface"; yang_parent_name = "member";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::~Interface()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_data() const
{
    return interface.is_set
	|| group.is_set
	|| service_instance.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(service_instance.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "group" || name == "service-instance")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Redundancy()
    :
    delay{YType::uint8, "delay"}
    	,
    predictive(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::~Redundancy()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_data() const
{
    return delay.is_set
	|| (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_entity_path(Entity* ancestor) const
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

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive" || name == "delay")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::Predictive()
    :
    disabled{YType::empty, "disabled"},
    enabled{YType::empty, "enabled"}
{
    yang_name = "predictive"; yang_parent_name = "redundancy";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_data() const
{
    return disabled.is_set
	|| enabled.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Predictive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Remote()
    :
    circuit(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>())
	,link(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>())
{
    circuit->parent = this;

    link->parent = this;

    yang_name = "remote"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::~Remote()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_data() const
{
    return (circuit !=  nullptr && circuit->has_data())
	|| (link !=  nullptr && link->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (circuit !=  nullptr && circuit->has_operation())
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit")
    {
        if(circuit == nullptr)
        {
            circuit = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>();
        }
        return circuit;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit != nullptr)
    {
        children["circuit"] = circuit;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit" || name == "link")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::Circuit()
    :
    id{YType::empty, "id"}
{
    yang_name = "circuit"; yang_parent_name = "remote";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::~Circuit()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Circuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::Link()
    :
    failure{YType::empty, "failure"}
{
    yang_name = "link"; yang_parent_name = "remote";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::~Link()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_data() const
{
    return failure.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::L2VpnConfig::L2VpnConfig()
    :
    l2vpn(nullptr) // presence node
{
    yang_name = "l2vpn-config"; yang_parent_name = "native";
}

Native::L2VpnConfig::~L2VpnConfig()
{
}

bool Native::L2VpnConfig::has_data() const
{
    return (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::L2VpnConfig::has_operation() const
{
    return is_set(yfilter)
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::L2VpnConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-config";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::L2VpnConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::L2VpnConfig::L2Vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    return children;
}

void Native::L2VpnConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2VpnConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2VpnConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::L2Vpn()
    :
    router_id{YType::str, "router-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    logging(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>())
	,redundancy(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>())
{
    logging->parent = this;

    redundancy->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "l2vpn-config";
}

Native::L2VpnConfig::L2Vpn::~L2Vpn()
{
}

bool Native::L2VpnConfig::L2Vpn::has_data() const
{
    return router_id.is_set
	|| shutdown.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::L2VpnConfig::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:l2vpn";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "redundancy" || name == "router-id" || name == "shutdown")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "l2vpn";
}

Native::L2VpnConfig::L2Vpn::Logging::~Logging()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{
    yang_name = "pseudowire"; yang_parent_name = "logging";
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Redundancy()
    :
    predictive(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "l2vpn";
}

Native::L2VpnConfig::L2Vpn::Redundancy::~Redundancy()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_data() const
{
    return (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::Predictive()
    :
    enabled{YType::empty, "enabled"}
{
    yang_name = "predictive"; yang_parent_name = "redundancy";
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_data() const
{
    return enabled.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::L3Vpn::L3Vpn()
    :
    encapsulation(std::make_shared<Native::L3Vpn::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "l3vpn"; yang_parent_name = "native";
}

Native::L3Vpn::~L3Vpn()
{
}

bool Native::L3Vpn::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::L3Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::L3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::L3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::L3Vpn::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::L3Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Encapsulation()
{
    yang_name = "encapsulation"; yang_parent_name = "l3vpn";
}

Native::L3Vpn::Encapsulation::~Encapsulation()
{
}

bool Native::L3Vpn::Encapsulation::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L3Vpn::Encapsulation::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L3Vpn::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l3vpn:encapsulation";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l3vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L3Vpn::Encapsulation::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Ip()
    :
    profile_name{YType::str, "profile-name"}
    	,
    mpls(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>())
	,protocol(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>())
	,transport(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>())
{
    mpls->parent = this;

    protocol->parent = this;

    transport->parent = this;

    yang_name = "ip"; yang_parent_name = "encapsulation";
}

Native::L3Vpn::Encapsulation::Ip::~Ip()
{
}

bool Native::L3Vpn::Encapsulation::Ip::has_data() const
{
    return profile_name.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l3vpn/Cisco-IOS-XE-l3vpn:encapsulation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "protocol" || name == "transport" || name == "profile-name")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Transport()
    :
    ipv4(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "ip";
}

Native::L3Vpn::Encapsulation::Ip::Transport::~Transport()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Transport::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::Ipv4()
    :
    source{YType::str, "source"}
{
    yang_name = "ipv4"; yang_parent_name = "transport";
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::~Ipv4()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_data() const
{
    return source.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Protocol()
    :
    gre(nullptr) // presence node
{
    yang_name = "protocol"; yang_parent_name = "ip";
}

Native::L3Vpn::Encapsulation::Ip::Protocol::~Protocol()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_data() const
{
    return (gre !=  nullptr && gre->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::Gre()
    :
    key{YType::uint32, "key"}
{
    yang_name = "gre"; yang_parent_name = "protocol";
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::~Gre()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_data() const
{
    return key.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gre' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Mpls::Mpls()
    :
    mtu{YType::str, "mtu"}
{
    yang_name = "mpls"; yang_parent_name = "ip";
}

Native::L3Vpn::Encapsulation::Ip::Mpls::~Mpls()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_data() const
{
    return mtu.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Mpls::Mpls()
    :
    cos_map{YType::uint8, "Cisco-IOS-XE-mpls:cos-map"}
    	,
    atm(std::make_shared<Native::Mpls::Atm>())
	,ip(std::make_shared<Native::Mpls::Ip>())
	,label(std::make_shared<Native::Mpls::Label>())
	,ldp(std::make_shared<Native::Mpls::Ldp>())
	,prefix_map(std::make_shared<Native::Mpls::PrefixMap>())
	,static_(nullptr) // presence node
	,tp(nullptr) // presence node
	,traffic_eng(std::make_shared<Native::Mpls::TrafficEng>())
{
    atm->parent = this;

    ip->parent = this;

    label->parent = this;

    ldp->parent = this;

    prefix_map->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "native";
}

Native::Mpls::~Mpls()
{
}

bool Native::Mpls::has_data() const
{
    return cos_map.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (prefix_map !=  nullptr && prefix_map->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (tp !=  nullptr && tp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_map.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (prefix_map !=  nullptr && prefix_map->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (tp !=  nullptr && tp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Mpls::get_entity_path(Entity* ancestor) const
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

    if (cos_map.is_set || is_set(cos_map.yfilter)) leaf_name_data.push_back(cos_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Mpls::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "prefix-map")
    {
        if(prefix_map == nullptr)
        {
            prefix_map = std::make_shared<Native::Mpls::PrefixMap>();
        }
        return prefix_map;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "tp")
    {
        if(tp == nullptr)
        {
            tp = std::make_shared<Native::Mpls::Tp>();
        }
        return tp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(prefix_map != nullptr)
    {
        children["prefix-map"] = prefix_map;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(tp != nullptr)
    {
        children["tp"] = tp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-map")
    {
        cos_map = value;
        cos_map.value_namespace = name_space;
        cos_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-map")
    {
        cos_map.yfilter = yfilter;
    }
}

bool Native::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ip" || name == "label" || name == "ldp" || name == "prefix-map" || name == "static" || name == "tp" || name == "traffic-eng" || name == "cos-map")
        return true;
    return false;
}

const Enum::YLeaf Native::FacilityAlarm::Severity::critical {0, "critical"};

const Enum::YLeaf Native::FacilityAlarm::ExceedAction::shutdown {0, "shutdown"};

const Enum::YLeaf Native::NetworkClock::Synchronization::Mode::QL_enabled {0, "QL-enabled"};

const Enum::YLeaf Native::L3Vpn::Encapsulation::Ip::Mpls::Mtu::max {0, "max"};


}
}

