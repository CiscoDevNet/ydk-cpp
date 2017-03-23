
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_1.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_5.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::DiscardClass()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "discard-class"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::~DiscardClass()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscardClass' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::QosGroup()
{
    yang_name = "qos-group"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::~QosGroup()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroup' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "qos-group";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::TrafficClass()
{
    yang_name = "traffic-class"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::~TrafficClass()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "traffic-class";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Proto()
{
    yang_name = "proto"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::~Proto()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proto' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "proto";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{
    yang_name = "icmp-v4"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpV4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{
    yang_name = "icmp-v6"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpV6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
{
    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::~Ipv4PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
{
    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::~Ipv6PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::PacketLen()
{
    yang_name = "packet-len"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::~PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "packet-len";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
{
    yang_name = "flow-tag"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::~FlowTag()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::TcpFlag()
    :
    match_any{YType::boolean, "match-any"},
    value_{YType::uint16, "value"}
{
    yang_name = "tcp-flag"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::~TcpFlag()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_data() const
{
    return match_any.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_operation() const
{
    return is_set(operation)
	|| is_set(match_any.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flag";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpFlag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_any.is_set || is_set(match_any.operation)) leaf_name_data.push_back(match_any.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-any")
    {
        match_any = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
{
    yang_name = "icmpv4-type"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::~Icmpv4Type()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv4Type' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
{
    yang_name = "icmpv4-code"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::~Icmpv4Code()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv4Code' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
{
    yang_name = "icmpv6-type"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::~Icmpv6Type()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv6Type' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
{
    yang_name = "icmpv6-code"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::~Icmpv6Code()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv6Code' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::MplsExp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "mpls-exp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::~MplsExp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::MplsExpImp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "mpls-exp-imp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::~MplsExpImp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpImp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::MplsDispIpv4Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "mpls-disp-ipv4-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::~MplsDispIpv4Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv4-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsDispIpv4Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::MplsDispIpv6Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "mpls-disp-ipv6-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::~MplsDispIpv6Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv6-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsDispIpv6Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::MplsTopLabel()
{
    yang_name = "mpls-top-label"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::~MplsTopLabel()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_data() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_operation() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-top-label";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTopLabel' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint32_rng_array")
    {
        for(auto const & c : uint32_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array>();
        c->parent = this;
        uint32_rng_array.push_back(std::move(c));
        children[segment_path] = uint32_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_children()
{
    for (auto const & c : uint32_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::Uint32_Rng_Array()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "uint32_rng_array"; yang_parent_name = "mpls-top-label";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::~Uint32_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint32_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::Cos()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "cos"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::~Cos()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::CosInr()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "cos-inr"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::~CosInr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::Dei()
    :
    bit_value{YType::uint32, "bit-value"}
{
    yang_name = "dei"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::~Dei()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_value.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dei' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.operation)) leaf_name_data.push_back(bit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::DeiInr()
    :
    bit_value{YType::uint32, "bit-value"}
{
    yang_name = "dei-inr"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::~DeiInr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_value.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeiInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.operation)) leaf_name_data.push_back(bit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::Vlan()
{
    yang_name = "vlan"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::~Vlan()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-id-array")
    {
        for(auto const & c : vlan_id_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray>();
        c->parent = this;
        vlan_id_array.push_back(std::move(c));
        children[segment_path] = vlan_id_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_children()
{
    for (auto const & c : vlan_id_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::VlanIdArray()
    :
    mask{YType::uint16, "mask"},
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "vlan-id-array"; yang_parent_name = "vlan";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::~VlanIdArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_data() const
{
    return mask.is_set
	|| max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanIdArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::VlanInr()
{
    yang_name = "vlan-inr"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::~VlanInr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "vlan-inr";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
{
    yang_name = "fr-dlci"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::~FrDlci()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDlci' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::SrcMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "src-mac"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::~SrcMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "dst-mac"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::~DstMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::AtmClp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "atm-clp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::~AtmClp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-clp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmClp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "fr-de"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::~FrDe()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDe' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ipv4-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::~Ipv4Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ipv6-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::~Ipv6Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ether-service-acl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::~EtherServiceAcl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherServiceAcl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::AvailId()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "avail-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::~AvailId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avail-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvailId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "media-type"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::~MediaType()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::SubsProtocol()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "subs-protocol"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::~SubsProtocol()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-protocol";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubsProtocol' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::Dnis()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dnis"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::~Dnis()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dnis' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::DnisRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dnis-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::~DnisRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DnisRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::Domain()
{
    yang_name = "domain"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::~Domain()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray>();
        c->parent = this;
        domain_array.push_back(std::move(c));
        children[segment_path] = domain_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_children()
{
    for (auto const & c : domain_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{
    yang_name = "domain-array"; yang_parent_name = "domain";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(format_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainRegex()
{
    yang_name = "domain-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::~DomainRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray>();
        c->parent = this;
        domain_array.push_back(std::move(c));
        children[segment_path] = domain_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_children()
{
    for (auto const & c : domain_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{
    yang_name = "domain-array"; yang_parent_name = "domain-regex";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::~DomainArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(format_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPort()
{
    yang_name = "nas-port"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::~NasPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_data() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_operation() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NasPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nas-port-array")
    {
        for(auto const & c : nas_port_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray>();
        c->parent = this;
        nas_port_array.push_back(std::move(c));
        children[segment_path] = nas_port_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_children()
{
    for (auto const & c : nas_port_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::NasPortArray()
    :
    operator_{YType::enumeration, "operator"},
    sub_id{YType::enumeration, "sub-id"},
    value_{YType::uint32, "value"}
{
    yang_name = "nas-port-array"; yang_parent_name = "nas-port";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::~NasPortArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_data() const
{
    return operator_.is_set
	|| sub_id.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_operation() const
{
    return is_set(operation)
	|| is_set(operator_.operation)
	|| is_set(sub_id.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NasPortArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.operation)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::ServiceName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "service-name"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::~ServiceName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::ServiceNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "service-name-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::~ServiceNameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::SrcAddrIpv4()
{
    yang_name = "src-addr-ipv4"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::~SrcAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv4";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrIpv4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(std::move(c));
        children[segment_path] = ipv4_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_children()
{
    for (auto const & c : ipv4_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4-addr-array"; yang_parent_name = "src-addr-ipv4";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::DstAddrIpv4()
{
    yang_name = "dst-addr-ipv4"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::~DstAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv4";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstAddrIpv4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(std::move(c));
        children[segment_path] = ipv4_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_children()
{
    for (auto const & c : ipv4_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4-addr-array"; yang_parent_name = "dst-addr-ipv4";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::SrcAddrIpv6()
{
    yang_name = "src-addr-ipv6"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::~SrcAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv6";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrIpv6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(std::move(c));
        children[segment_path] = ipv6_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_children()
{
    for (auto const & c : ipv6_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6-addr-array"; yang_parent_name = "src-addr-ipv6";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::DstAddrIpv6()
{
    yang_name = "dst-addr-ipv6"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::~DstAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv6";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstAddrIpv6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(std::move(c));
        children[segment_path] = ipv6_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_children()
{
    for (auto const & c : ipv6_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6-addr-array"; yang_parent_name = "dst-addr-ipv6";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::SrcAddrMac()
{
    yang_name = "src-addr-mac"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::~SrcAddrMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_data() const
{
    for (std::size_t index=0; index<mac_addr_array.size(); index++)
    {
        if(mac_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_operation() const
{
    for (std::size_t index=0; index<mac_addr_array.size(); index++)
    {
        if(mac_addr_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-addr-array")
    {
        for(auto const & c : mac_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray>();
        c->parent = this;
        mac_addr_array.push_back(std::move(c));
        children[segment_path] = mac_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_children()
{
    for (auto const & c : mac_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::MacAddrArray()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "mac-addr-array"; yang_parent_name = "src-addr-mac";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::~MacAddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::Timer()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "timer"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::~Timer()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::TimerRegexp()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "timer-regexp"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::~TimerRegexp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-regexp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimerRegexp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::TunnelName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "tunnel-name"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::~TunnelName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::TunnelNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "tunnel-name-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::~TunnelNameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::UserName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "user-name"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::~UserName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UserName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::UserNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "user-name-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::~UserNameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UserNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::AuthUsername()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-username"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::~AuthUsername()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthUsername' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::AuthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-username-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::~AuthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-username-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthUsernameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::UnauthUsername()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-username"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::~UnauthUsername()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthUsername' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::UnauthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-username-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::~UnauthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthUsernameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::AuthDomain()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-domain"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::~AuthDomain()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthDomain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::AuthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "auth-domain-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::~AuthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthDomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::UnauthDomain()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-domain"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::~UnauthDomain()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthDomain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::UnauthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "unauth-domain-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::~UnauthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnauthDomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::VendorId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "vendor-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::~VendorId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VendorId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::VendorIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "vendor-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::~VendorIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VendorIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::AccessInterface()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "access-interface"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::~AccessInterface()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessInterface' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::InputInterface()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "input-interface"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::~InputInterface()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputInterface' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::InputIntfhdl()
    :
    uint64_array{YType::uint64, "uint64_array"}
{
    yang_name = "input-intfhdl"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::~InputIntfhdl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_data() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_operation() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint64_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-intfhdl";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputIntfhdl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint64_array_name_datas = uint64_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint64_array_name_datas.begin(), uint64_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint64_array")
    {
        uint64_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Ethertype()
{
    yang_name = "ethertype"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::~Ethertype()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethertype";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethertype' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ethertype";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeyData()
    :
    idle_timeout{YType::uint16, "idle-timeout"},
    max_count{YType::uint16, "max-count"}
    	,
    flow_keys(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>())
{
    flow_keys->parent = this;
    children["flow-keys"] = flow_keys;

    yang_name = "flow-key-data"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::~FlowKeyData()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_data() const
{
    return idle_timeout.is_set
	|| max_count.is_set
	|| (flow_keys !=  nullptr && flow_keys->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_operation() const
{
    return is_set(operation)
	|| is_set(idle_timeout.operation)
	|| is_set(max_count.operation)
	|| (flow_keys !=  nullptr && flow_keys->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-key-data";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowKeyData' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (max_count.is_set || is_set(max_count.operation)) leaf_name_data.push_back(max_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-keys")
    {
        if(flow_keys != nullptr)
        {
            children["flow-keys"] = flow_keys;
        }
        else
        {
            flow_keys = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>();
            flow_keys->parent = this;
            children["flow-keys"] = flow_keys;
        }
        return children.at("flow-keys");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_children()
{
    if(children.find("flow-keys") == children.end())
    {
        if(flow_keys != nullptr)
        {
            children["flow-keys"] = flow_keys;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
    if(value_path == "max-count")
    {
        max_count = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::FlowKeys()
    :
    keys{YType::str, "keys"},
    num{YType::uint8, "num"}
{
    yang_name = "flow-keys"; yang_parent_name = "flow-key-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::~FlowKeys()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_data() const
{
    return keys.is_set
	|| num.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_operation() const
{
    return is_set(operation)
	|| is_set(keys.operation)
	|| is_set(num.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-keys";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowKeys' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keys.is_set || is_set(keys.operation)) leaf_name_data.push_back(keys.get_name_leafdata());
    if (num.is_set || is_set(num.operation)) leaf_name_data.push_back(num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keys")
    {
        keys = value;
    }
    if(value_path == "num")
    {
        num = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::DhcpClientId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dhcp-client-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpClientId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpClientIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::CircuitId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "circuit-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::~CircuitId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::CircuitIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "circuit-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::~CircuitIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::RemoteId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "remote-id"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::~RemoteId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::RemoteIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "remote-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::~RemoteIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::SrcPort()
{
    yang_name = "src-port"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::~SrcPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "src-port";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::DstPort()
{
    yang_name = "dst-port"; yang_parent_name = "match-data";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::~DstPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::ActInfop()
{
    yang_name = "act-infop"; yang_parent_name = "policy-class-info-bg";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::~ActInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_data() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-infop";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActInfop' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-action-info-st")
    {
        for(auto const & c : policy_action_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt>();
        c->parent = this;
        policy_action_info_st.push_back(std::move(c));
        children[segment_path] = policy_action_info_st.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_children()
{
    for (auto const & c : policy_action_info_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::PolicyActionInfoSt()
    :
    flags{YType::uint16, "flags"},
    seq{YType::uint16, "seq"}
    	,
    actp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>())
{
    actp->parent = this;
    children["actp"] = actp;

    yang_name = "policy-action-info-st"; yang_parent_name = "act-infop";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::~PolicyActionInfoSt()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_data() const
{
    return flags.is_set
	|| seq.is_set
	|| (actp !=  nullptr && actp->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(seq.operation)
	|| (actp !=  nullptr && actp->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-action-info-st";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyActionInfoSt' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (seq.is_set || is_set(seq.operation)) leaf_name_data.push_back(seq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "actp")
    {
        if(actp != nullptr)
        {
            children["actp"] = actp;
        }
        else
        {
            actp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>();
            actp->parent = this;
            children["actp"] = actp;
        }
        return children.at("actp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_children()
{
    if(children.find("actp") == children.end())
    {
        if(actp != nullptr)
        {
            children["actp"] = actp;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "seq")
    {
        seq = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Actp()
    :
    data_p{YType::uint32, "data-p"},
    type{YType::enumeration, "type"}
    	,
    accounting_event_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>())
	,acct_aaa_list(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>())
	,act_template(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>())
	,afm_react(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>())
	,authen_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>())
	,authorize_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>())
	,bwrem(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>())
	,cac(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>())
	,child_policy(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>())
	,collect_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>())
	,copy(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>())
	,deact_template(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>())
	,decode_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>())
	,encap(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>())
	,flow_parm(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>())
	,fmm(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>())
	,httpr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>())
	,ipcbr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>())
	,ipv4_nh(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>())
	,ipv6_nh(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>())
	,mark(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>())
	,mark2(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>())
	,mdi(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>())
	,mdi_rtp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>())
	,min_bw(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>())
	,out_intf(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>())
	,pbf(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>())
	,pfc(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>())
	,police(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>())
	,prepaid_cfg(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>())
	,prio(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>())
	,proxy_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>())
	,punt(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>())
	,qlimit(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>())
	,query_ancp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>())
	,redirect(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>())
	,rtp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>())
	,rtp_j2k(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>())
	,rtp_mmr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>())
	,rtp_voice(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>())
	,serv_func(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>())
	,set_timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>())
	,sfrag(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>())
	,shape(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>())
	,stop_timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>())
	,timeout_idle(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>())
	,wred(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>())
{
    accounting_event_aaa->parent = this;
    children["accounting-event-aaa"] = accounting_event_aaa;

    acct_aaa_list->parent = this;
    children["acct-aaa-list"] = acct_aaa_list;

    act_template->parent = this;
    children["act-template"] = act_template;

    afm_react->parent = this;
    children["afm-react"] = afm_react;

    authen_aaa->parent = this;
    children["authen-aaa"] = authen_aaa;

    authorize_id->parent = this;
    children["authorize-id"] = authorize_id;

    bwrem->parent = this;
    children["bwrem"] = bwrem;

    cac->parent = this;
    children["cac"] = cac;

    child_policy->parent = this;
    children["child-policy"] = child_policy;

    collect_id->parent = this;
    children["collect-id"] = collect_id;

    copy->parent = this;
    children["copy"] = copy;

    deact_template->parent = this;
    children["deact-template"] = deact_template;

    decode_id->parent = this;
    children["decode-id"] = decode_id;

    encap->parent = this;
    children["encap"] = encap;

    flow_parm->parent = this;
    children["flow-parm"] = flow_parm;

    fmm->parent = this;
    children["fmm"] = fmm;

    httpr->parent = this;
    children["httpr"] = httpr;

    ipcbr->parent = this;
    children["ipcbr"] = ipcbr;

    ipv4_nh->parent = this;
    children["ipv4-nh"] = ipv4_nh;

    ipv6_nh->parent = this;
    children["ipv6-nh"] = ipv6_nh;

    mark->parent = this;
    children["mark"] = mark;

    mark2->parent = this;
    children["mark2"] = mark2;

    mdi->parent = this;
    children["mdi"] = mdi;

    mdi_rtp->parent = this;
    children["mdi-rtp"] = mdi_rtp;

    min_bw->parent = this;
    children["min-bw"] = min_bw;

    out_intf->parent = this;
    children["out-intf"] = out_intf;

    pbf->parent = this;
    children["pbf"] = pbf;

    pfc->parent = this;
    children["pfc"] = pfc;

    police->parent = this;
    children["police"] = police;

    prepaid_cfg->parent = this;
    children["prepaid-cfg"] = prepaid_cfg;

    prio->parent = this;
    children["prio"] = prio;

    proxy_aaa->parent = this;
    children["proxy-aaa"] = proxy_aaa;

    punt->parent = this;
    children["punt"] = punt;

    qlimit->parent = this;
    children["qlimit"] = qlimit;

    query_ancp->parent = this;
    children["query-ancp"] = query_ancp;

    redirect->parent = this;
    children["redirect"] = redirect;

    rtp->parent = this;
    children["rtp"] = rtp;

    rtp_j2k->parent = this;
    children["rtp-j2k"] = rtp_j2k;

    rtp_mmr->parent = this;
    children["rtp-mmr"] = rtp_mmr;

    rtp_voice->parent = this;
    children["rtp-voice"] = rtp_voice;

    serv_func->parent = this;
    children["serv-func"] = serv_func;

    set_timer->parent = this;
    children["set-timer"] = set_timer;

    sfrag->parent = this;
    children["sfrag"] = sfrag;

    shape->parent = this;
    children["shape"] = shape;

    stop_timer->parent = this;
    children["stop-timer"] = stop_timer;

    timeout_idle->parent = this;
    children["timeout-idle"] = timeout_idle;

    wred->parent = this;
    children["wred"] = wred;

    yang_name = "actp"; yang_parent_name = "policy-action-info-st";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::~Actp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_data() const
{
    return data_p.is_set
	|| type.is_set
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_data())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_data())
	|| (act_template !=  nullptr && act_template->has_data())
	|| (afm_react !=  nullptr && afm_react->has_data())
	|| (authen_aaa !=  nullptr && authen_aaa->has_data())
	|| (authorize_id !=  nullptr && authorize_id->has_data())
	|| (bwrem !=  nullptr && bwrem->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (collect_id !=  nullptr && collect_id->has_data())
	|| (copy !=  nullptr && copy->has_data())
	|| (deact_template !=  nullptr && deact_template->has_data())
	|| (decode_id !=  nullptr && decode_id->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (flow_parm !=  nullptr && flow_parm->has_data())
	|| (fmm !=  nullptr && fmm->has_data())
	|| (httpr !=  nullptr && httpr->has_data())
	|| (ipcbr !=  nullptr && ipcbr->has_data())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_data())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_data())
	|| (mark !=  nullptr && mark->has_data())
	|| (mark2 !=  nullptr && mark2->has_data())
	|| (mdi !=  nullptr && mdi->has_data())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_data())
	|| (min_bw !=  nullptr && min_bw->has_data())
	|| (out_intf !=  nullptr && out_intf->has_data())
	|| (pbf !=  nullptr && pbf->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_data())
	|| (prio !=  nullptr && prio->has_data())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (qlimit !=  nullptr && qlimit->has_data())
	|| (query_ancp !=  nullptr && query_ancp->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_data())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_data())
	|| (rtp_voice !=  nullptr && rtp_voice->has_data())
	|| (serv_func !=  nullptr && serv_func->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (sfrag !=  nullptr && sfrag->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data())
	|| (timeout_idle !=  nullptr && timeout_idle->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_operation() const
{
    return is_set(operation)
	|| is_set(data_p.operation)
	|| is_set(type.operation)
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_operation())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_operation())
	|| (act_template !=  nullptr && act_template->has_operation())
	|| (afm_react !=  nullptr && afm_react->has_operation())
	|| (authen_aaa !=  nullptr && authen_aaa->has_operation())
	|| (authorize_id !=  nullptr && authorize_id->has_operation())
	|| (bwrem !=  nullptr && bwrem->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (collect_id !=  nullptr && collect_id->has_operation())
	|| (copy !=  nullptr && copy->has_operation())
	|| (deact_template !=  nullptr && deact_template->has_operation())
	|| (decode_id !=  nullptr && decode_id->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (flow_parm !=  nullptr && flow_parm->has_operation())
	|| (fmm !=  nullptr && fmm->has_operation())
	|| (httpr !=  nullptr && httpr->has_operation())
	|| (ipcbr !=  nullptr && ipcbr->has_operation())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_operation())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_operation())
	|| (mark !=  nullptr && mark->has_operation())
	|| (mark2 !=  nullptr && mark2->has_operation())
	|| (mdi !=  nullptr && mdi->has_operation())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_operation())
	|| (min_bw !=  nullptr && min_bw->has_operation())
	|| (out_intf !=  nullptr && out_intf->has_operation())
	|| (pbf !=  nullptr && pbf->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_operation())
	|| (prio !=  nullptr && prio->has_operation())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (qlimit !=  nullptr && qlimit->has_operation())
	|| (query_ancp !=  nullptr && query_ancp->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_operation())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_operation())
	|| (rtp_voice !=  nullptr && rtp_voice->has_operation())
	|| (serv_func !=  nullptr && serv_func->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (sfrag !=  nullptr && sfrag->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation())
	|| (timeout_idle !=  nullptr && timeout_idle->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Actp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_p.is_set || is_set(data_p.operation)) leaf_name_data.push_back(data_p.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting-event-aaa")
    {
        if(accounting_event_aaa != nullptr)
        {
            children["accounting-event-aaa"] = accounting_event_aaa;
        }
        else
        {
            accounting_event_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>();
            accounting_event_aaa->parent = this;
            children["accounting-event-aaa"] = accounting_event_aaa;
        }
        return children.at("accounting-event-aaa");
    }

    if(child_yang_name == "acct-aaa-list")
    {
        if(acct_aaa_list != nullptr)
        {
            children["acct-aaa-list"] = acct_aaa_list;
        }
        else
        {
            acct_aaa_list = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>();
            acct_aaa_list->parent = this;
            children["acct-aaa-list"] = acct_aaa_list;
        }
        return children.at("acct-aaa-list");
    }

    if(child_yang_name == "act-template")
    {
        if(act_template != nullptr)
        {
            children["act-template"] = act_template;
        }
        else
        {
            act_template = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>();
            act_template->parent = this;
            children["act-template"] = act_template;
        }
        return children.at("act-template");
    }

    if(child_yang_name == "afm-react")
    {
        if(afm_react != nullptr)
        {
            children["afm-react"] = afm_react;
        }
        else
        {
            afm_react = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>();
            afm_react->parent = this;
            children["afm-react"] = afm_react;
        }
        return children.at("afm-react");
    }

    if(child_yang_name == "authen-aaa")
    {
        if(authen_aaa != nullptr)
        {
            children["authen-aaa"] = authen_aaa;
        }
        else
        {
            authen_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>();
            authen_aaa->parent = this;
            children["authen-aaa"] = authen_aaa;
        }
        return children.at("authen-aaa");
    }

    if(child_yang_name == "authorize-id")
    {
        if(authorize_id != nullptr)
        {
            children["authorize-id"] = authorize_id;
        }
        else
        {
            authorize_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>();
            authorize_id->parent = this;
            children["authorize-id"] = authorize_id;
        }
        return children.at("authorize-id");
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
        else
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>();
            bwrem->parent = this;
            children["bwrem"] = bwrem;
        }
        return children.at("bwrem");
    }

    if(child_yang_name == "cac")
    {
        if(cac != nullptr)
        {
            children["cac"] = cac;
        }
        else
        {
            cac = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>();
            cac->parent = this;
            children["cac"] = cac;
        }
        return children.at("cac");
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy != nullptr)
        {
            children["child-policy"] = child_policy;
        }
        else
        {
            child_policy = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>();
            child_policy->parent = this;
            children["child-policy"] = child_policy;
        }
        return children.at("child-policy");
    }

    if(child_yang_name == "collect-id")
    {
        if(collect_id != nullptr)
        {
            children["collect-id"] = collect_id;
        }
        else
        {
            collect_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>();
            collect_id->parent = this;
            children["collect-id"] = collect_id;
        }
        return children.at("collect-id");
    }

    if(child_yang_name == "copy")
    {
        if(copy != nullptr)
        {
            children["copy"] = copy;
        }
        else
        {
            copy = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>();
            copy->parent = this;
            children["copy"] = copy;
        }
        return children.at("copy");
    }

    if(child_yang_name == "deact-template")
    {
        if(deact_template != nullptr)
        {
            children["deact-template"] = deact_template;
        }
        else
        {
            deact_template = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>();
            deact_template->parent = this;
            children["deact-template"] = deact_template;
        }
        return children.at("deact-template");
    }

    if(child_yang_name == "decode-id")
    {
        if(decode_id != nullptr)
        {
            children["decode-id"] = decode_id;
        }
        else
        {
            decode_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>();
            decode_id->parent = this;
            children["decode-id"] = decode_id;
        }
        return children.at("decode-id");
    }

    if(child_yang_name == "encap")
    {
        if(encap != nullptr)
        {
            children["encap"] = encap;
        }
        else
        {
            encap = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>();
            encap->parent = this;
            children["encap"] = encap;
        }
        return children.at("encap");
    }

    if(child_yang_name == "flow-parm")
    {
        if(flow_parm != nullptr)
        {
            children["flow-parm"] = flow_parm;
        }
        else
        {
            flow_parm = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>();
            flow_parm->parent = this;
            children["flow-parm"] = flow_parm;
        }
        return children.at("flow-parm");
    }

    if(child_yang_name == "fmm")
    {
        if(fmm != nullptr)
        {
            children["fmm"] = fmm;
        }
        else
        {
            fmm = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>();
            fmm->parent = this;
            children["fmm"] = fmm;
        }
        return children.at("fmm");
    }

    if(child_yang_name == "httpr")
    {
        if(httpr != nullptr)
        {
            children["httpr"] = httpr;
        }
        else
        {
            httpr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>();
            httpr->parent = this;
            children["httpr"] = httpr;
        }
        return children.at("httpr");
    }

    if(child_yang_name == "ipcbr")
    {
        if(ipcbr != nullptr)
        {
            children["ipcbr"] = ipcbr;
        }
        else
        {
            ipcbr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>();
            ipcbr->parent = this;
            children["ipcbr"] = ipcbr;
        }
        return children.at("ipcbr");
    }

    if(child_yang_name == "ipv4-nh")
    {
        if(ipv4_nh != nullptr)
        {
            children["ipv4-nh"] = ipv4_nh;
        }
        else
        {
            ipv4_nh = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>();
            ipv4_nh->parent = this;
            children["ipv4-nh"] = ipv4_nh;
        }
        return children.at("ipv4-nh");
    }

    if(child_yang_name == "ipv6-nh")
    {
        if(ipv6_nh != nullptr)
        {
            children["ipv6-nh"] = ipv6_nh;
        }
        else
        {
            ipv6_nh = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>();
            ipv6_nh->parent = this;
            children["ipv6-nh"] = ipv6_nh;
        }
        return children.at("ipv6-nh");
    }

    if(child_yang_name == "mark")
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
        else
        {
            mark = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>();
            mark->parent = this;
            children["mark"] = mark;
        }
        return children.at("mark");
    }

    if(child_yang_name == "mark2")
    {
        if(mark2 != nullptr)
        {
            children["mark2"] = mark2;
        }
        else
        {
            mark2 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>();
            mark2->parent = this;
            children["mark2"] = mark2;
        }
        return children.at("mark2");
    }

    if(child_yang_name == "mdi")
    {
        if(mdi != nullptr)
        {
            children["mdi"] = mdi;
        }
        else
        {
            mdi = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>();
            mdi->parent = this;
            children["mdi"] = mdi;
        }
        return children.at("mdi");
    }

    if(child_yang_name == "mdi-rtp")
    {
        if(mdi_rtp != nullptr)
        {
            children["mdi-rtp"] = mdi_rtp;
        }
        else
        {
            mdi_rtp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>();
            mdi_rtp->parent = this;
            children["mdi-rtp"] = mdi_rtp;
        }
        return children.at("mdi-rtp");
    }

    if(child_yang_name == "min-bw")
    {
        if(min_bw != nullptr)
        {
            children["min-bw"] = min_bw;
        }
        else
        {
            min_bw = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>();
            min_bw->parent = this;
            children["min-bw"] = min_bw;
        }
        return children.at("min-bw");
    }

    if(child_yang_name == "out-intf")
    {
        if(out_intf != nullptr)
        {
            children["out-intf"] = out_intf;
        }
        else
        {
            out_intf = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>();
            out_intf->parent = this;
            children["out-intf"] = out_intf;
        }
        return children.at("out-intf");
    }

    if(child_yang_name == "pbf")
    {
        if(pbf != nullptr)
        {
            children["pbf"] = pbf;
        }
        else
        {
            pbf = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>();
            pbf->parent = this;
            children["pbf"] = pbf;
        }
        return children.at("pbf");
    }

    if(child_yang_name == "pfc")
    {
        if(pfc != nullptr)
        {
            children["pfc"] = pfc;
        }
        else
        {
            pfc = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>();
            pfc->parent = this;
            children["pfc"] = pfc;
        }
        return children.at("pfc");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
        else
        {
            police = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>();
            police->parent = this;
            children["police"] = police;
        }
        return children.at("police");
    }

    if(child_yang_name == "prepaid-cfg")
    {
        if(prepaid_cfg != nullptr)
        {
            children["prepaid-cfg"] = prepaid_cfg;
        }
        else
        {
            prepaid_cfg = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>();
            prepaid_cfg->parent = this;
            children["prepaid-cfg"] = prepaid_cfg;
        }
        return children.at("prepaid-cfg");
    }

    if(child_yang_name == "prio")
    {
        if(prio != nullptr)
        {
            children["prio"] = prio;
        }
        else
        {
            prio = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>();
            prio->parent = this;
            children["prio"] = prio;
        }
        return children.at("prio");
    }

    if(child_yang_name == "proxy-aaa")
    {
        if(proxy_aaa != nullptr)
        {
            children["proxy-aaa"] = proxy_aaa;
        }
        else
        {
            proxy_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>();
            proxy_aaa->parent = this;
            children["proxy-aaa"] = proxy_aaa;
        }
        return children.at("proxy-aaa");
    }

    if(child_yang_name == "punt")
    {
        if(punt != nullptr)
        {
            children["punt"] = punt;
        }
        else
        {
            punt = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>();
            punt->parent = this;
            children["punt"] = punt;
        }
        return children.at("punt");
    }

    if(child_yang_name == "qlimit")
    {
        if(qlimit != nullptr)
        {
            children["qlimit"] = qlimit;
        }
        else
        {
            qlimit = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>();
            qlimit->parent = this;
            children["qlimit"] = qlimit;
        }
        return children.at("qlimit");
    }

    if(child_yang_name == "query-ancp")
    {
        if(query_ancp != nullptr)
        {
            children["query-ancp"] = query_ancp;
        }
        else
        {
            query_ancp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>();
            query_ancp->parent = this;
            children["query-ancp"] = query_ancp;
        }
        return children.at("query-ancp");
    }

    if(child_yang_name == "redirect")
    {
        if(redirect != nullptr)
        {
            children["redirect"] = redirect;
        }
        else
        {
            redirect = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>();
            redirect->parent = this;
            children["redirect"] = redirect;
        }
        return children.at("redirect");
    }

    if(child_yang_name == "rtp")
    {
        if(rtp != nullptr)
        {
            children["rtp"] = rtp;
        }
        else
        {
            rtp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>();
            rtp->parent = this;
            children["rtp"] = rtp;
        }
        return children.at("rtp");
    }

    if(child_yang_name == "rtp-j2k")
    {
        if(rtp_j2k != nullptr)
        {
            children["rtp-j2k"] = rtp_j2k;
        }
        else
        {
            rtp_j2k = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>();
            rtp_j2k->parent = this;
            children["rtp-j2k"] = rtp_j2k;
        }
        return children.at("rtp-j2k");
    }

    if(child_yang_name == "rtp-mmr")
    {
        if(rtp_mmr != nullptr)
        {
            children["rtp-mmr"] = rtp_mmr;
        }
        else
        {
            rtp_mmr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>();
            rtp_mmr->parent = this;
            children["rtp-mmr"] = rtp_mmr;
        }
        return children.at("rtp-mmr");
    }

    if(child_yang_name == "rtp-voice")
    {
        if(rtp_voice != nullptr)
        {
            children["rtp-voice"] = rtp_voice;
        }
        else
        {
            rtp_voice = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>();
            rtp_voice->parent = this;
            children["rtp-voice"] = rtp_voice;
        }
        return children.at("rtp-voice");
    }

    if(child_yang_name == "serv-func")
    {
        if(serv_func != nullptr)
        {
            children["serv-func"] = serv_func;
        }
        else
        {
            serv_func = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>();
            serv_func->parent = this;
            children["serv-func"] = serv_func;
        }
        return children.at("serv-func");
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer != nullptr)
        {
            children["set-timer"] = set_timer;
        }
        else
        {
            set_timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>();
            set_timer->parent = this;
            children["set-timer"] = set_timer;
        }
        return children.at("set-timer");
    }

    if(child_yang_name == "sfrag")
    {
        if(sfrag != nullptr)
        {
            children["sfrag"] = sfrag;
        }
        else
        {
            sfrag = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>();
            sfrag->parent = this;
            children["sfrag"] = sfrag;
        }
        return children.at("sfrag");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer != nullptr)
        {
            children["stop-timer"] = stop_timer;
        }
        else
        {
            stop_timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>();
            stop_timer->parent = this;
            children["stop-timer"] = stop_timer;
        }
        return children.at("stop-timer");
    }

    if(child_yang_name == "timeout-idle")
    {
        if(timeout_idle != nullptr)
        {
            children["timeout-idle"] = timeout_idle;
        }
        else
        {
            timeout_idle = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>();
            timeout_idle->parent = this;
            children["timeout-idle"] = timeout_idle;
        }
        return children.at("timeout-idle");
    }

    if(child_yang_name == "wred")
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
        else
        {
            wred = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>();
            wred->parent = this;
            children["wred"] = wred;
        }
        return children.at("wred");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_children()
{
    if(children.find("accounting-event-aaa") == children.end())
    {
        if(accounting_event_aaa != nullptr)
        {
            children["accounting-event-aaa"] = accounting_event_aaa;
        }
    }

    if(children.find("acct-aaa-list") == children.end())
    {
        if(acct_aaa_list != nullptr)
        {
            children["acct-aaa-list"] = acct_aaa_list;
        }
    }

    if(children.find("act-template") == children.end())
    {
        if(act_template != nullptr)
        {
            children["act-template"] = act_template;
        }
    }

    if(children.find("afm-react") == children.end())
    {
        if(afm_react != nullptr)
        {
            children["afm-react"] = afm_react;
        }
    }

    if(children.find("authen-aaa") == children.end())
    {
        if(authen_aaa != nullptr)
        {
            children["authen-aaa"] = authen_aaa;
        }
    }

    if(children.find("authorize-id") == children.end())
    {
        if(authorize_id != nullptr)
        {
            children["authorize-id"] = authorize_id;
        }
    }

    if(children.find("bwrem") == children.end())
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
    }

    if(children.find("cac") == children.end())
    {
        if(cac != nullptr)
        {
            children["cac"] = cac;
        }
    }

    if(children.find("child-policy") == children.end())
    {
        if(child_policy != nullptr)
        {
            children["child-policy"] = child_policy;
        }
    }

    if(children.find("collect-id") == children.end())
    {
        if(collect_id != nullptr)
        {
            children["collect-id"] = collect_id;
        }
    }

    if(children.find("copy") == children.end())
    {
        if(copy != nullptr)
        {
            children["copy"] = copy;
        }
    }

    if(children.find("deact-template") == children.end())
    {
        if(deact_template != nullptr)
        {
            children["deact-template"] = deact_template;
        }
    }

    if(children.find("decode-id") == children.end())
    {
        if(decode_id != nullptr)
        {
            children["decode-id"] = decode_id;
        }
    }

    if(children.find("encap") == children.end())
    {
        if(encap != nullptr)
        {
            children["encap"] = encap;
        }
    }

    if(children.find("flow-parm") == children.end())
    {
        if(flow_parm != nullptr)
        {
            children["flow-parm"] = flow_parm;
        }
    }

    if(children.find("fmm") == children.end())
    {
        if(fmm != nullptr)
        {
            children["fmm"] = fmm;
        }
    }

    if(children.find("httpr") == children.end())
    {
        if(httpr != nullptr)
        {
            children["httpr"] = httpr;
        }
    }

    if(children.find("ipcbr") == children.end())
    {
        if(ipcbr != nullptr)
        {
            children["ipcbr"] = ipcbr;
        }
    }

    if(children.find("ipv4-nh") == children.end())
    {
        if(ipv4_nh != nullptr)
        {
            children["ipv4-nh"] = ipv4_nh;
        }
    }

    if(children.find("ipv6-nh") == children.end())
    {
        if(ipv6_nh != nullptr)
        {
            children["ipv6-nh"] = ipv6_nh;
        }
    }

    if(children.find("mark") == children.end())
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
    }

    if(children.find("mark2") == children.end())
    {
        if(mark2 != nullptr)
        {
            children["mark2"] = mark2;
        }
    }

    if(children.find("mdi") == children.end())
    {
        if(mdi != nullptr)
        {
            children["mdi"] = mdi;
        }
    }

    if(children.find("mdi-rtp") == children.end())
    {
        if(mdi_rtp != nullptr)
        {
            children["mdi-rtp"] = mdi_rtp;
        }
    }

    if(children.find("min-bw") == children.end())
    {
        if(min_bw != nullptr)
        {
            children["min-bw"] = min_bw;
        }
    }

    if(children.find("out-intf") == children.end())
    {
        if(out_intf != nullptr)
        {
            children["out-intf"] = out_intf;
        }
    }

    if(children.find("pbf") == children.end())
    {
        if(pbf != nullptr)
        {
            children["pbf"] = pbf;
        }
    }

    if(children.find("pfc") == children.end())
    {
        if(pfc != nullptr)
        {
            children["pfc"] = pfc;
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
    }

    if(children.find("prepaid-cfg") == children.end())
    {
        if(prepaid_cfg != nullptr)
        {
            children["prepaid-cfg"] = prepaid_cfg;
        }
    }

    if(children.find("prio") == children.end())
    {
        if(prio != nullptr)
        {
            children["prio"] = prio;
        }
    }

    if(children.find("proxy-aaa") == children.end())
    {
        if(proxy_aaa != nullptr)
        {
            children["proxy-aaa"] = proxy_aaa;
        }
    }

    if(children.find("punt") == children.end())
    {
        if(punt != nullptr)
        {
            children["punt"] = punt;
        }
    }

    if(children.find("qlimit") == children.end())
    {
        if(qlimit != nullptr)
        {
            children["qlimit"] = qlimit;
        }
    }

    if(children.find("query-ancp") == children.end())
    {
        if(query_ancp != nullptr)
        {
            children["query-ancp"] = query_ancp;
        }
    }

    if(children.find("redirect") == children.end())
    {
        if(redirect != nullptr)
        {
            children["redirect"] = redirect;
        }
    }

    if(children.find("rtp") == children.end())
    {
        if(rtp != nullptr)
        {
            children["rtp"] = rtp;
        }
    }

    if(children.find("rtp-j2k") == children.end())
    {
        if(rtp_j2k != nullptr)
        {
            children["rtp-j2k"] = rtp_j2k;
        }
    }

    if(children.find("rtp-mmr") == children.end())
    {
        if(rtp_mmr != nullptr)
        {
            children["rtp-mmr"] = rtp_mmr;
        }
    }

    if(children.find("rtp-voice") == children.end())
    {
        if(rtp_voice != nullptr)
        {
            children["rtp-voice"] = rtp_voice;
        }
    }

    if(children.find("serv-func") == children.end())
    {
        if(serv_func != nullptr)
        {
            children["serv-func"] = serv_func;
        }
    }

    if(children.find("set-timer") == children.end())
    {
        if(set_timer != nullptr)
        {
            children["set-timer"] = set_timer;
        }
    }

    if(children.find("sfrag") == children.end())
    {
        if(sfrag != nullptr)
        {
            children["sfrag"] = sfrag;
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    if(children.find("stop-timer") == children.end())
    {
        if(stop_timer != nullptr)
        {
            children["stop-timer"] = stop_timer;
        }
    }

    if(children.find("timeout-idle") == children.end())
    {
        if(timeout_idle != nullptr)
        {
            children["timeout-idle"] = timeout_idle;
        }
    }

    if(children.find("wred") == children.end())
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-p")
    {
        data_p = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::Mark()
{
    yang_name = "mark"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::~Mark()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_data() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_operation() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-mark-info")
    {
        for(auto const & c : action_mark_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo>();
        c->parent = this;
        action_mark_info.push_back(std::move(c));
        children[segment_path] = action_mark_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_children()
{
    for (auto const & c : action_mark_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::ActionMarkInfo()
    :
    mark_flags{YType::uint32, "mark-flags"},
    type{YType::enumeration, "type"},
    value_{YType::uint16, "value"}
{
    yang_name = "action-mark-info"; yang_parent_name = "mark";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::~ActionMarkInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_flags.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionMarkInfo' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.operation)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::Mark2()
{
    yang_name = "mark2"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::~Mark2()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_data() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_operation() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark2";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark2' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-mark2-info")
    {
        for(auto const & c : action_mark2_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info>();
        c->parent = this;
        action_mark2_info.push_back(std::move(c));
        children[segment_path] = action_mark2_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_children()
{
    for (auto const & c : action_mark2_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::ActionMark2Info()
    :
    mark_flags{YType::uint8, "mark-flags"},
    type{YType::uint8, "type"},
    value_{YType::uint32, "value"},
    value_overflow{YType::uint16, "value-overflow"}
{
    yang_name = "action-mark2-info"; yang_parent_name = "mark2";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::~ActionMark2Info()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set
	|| value_overflow.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_flags.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation)
	|| is_set(value_overflow.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark2-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionMark2Info' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.operation)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_overflow.is_set || is_set(value_overflow.operation)) leaf_name_data.push_back(value_overflow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "value-overflow")
    {
        value_overflow = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::Wred()
{
    yang_name = "wred"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::~Wred()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_data() const
{
    for (std::size_t index=0; index<action_wred_info.size(); index++)
    {
        if(action_wred_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::has_operation() const
{
    for (std::size_t index=0; index<action_wred_info.size(); index++)
    {
        if(action_wred_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wred' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-wred-info")
    {
        for(auto const & c : action_wred_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo>();
        c->parent = this;
        action_wred_info.push_back(std::move(c));
        children[segment_path] = action_wred_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::get_children()
{
    for (auto const & c : action_wred_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::ActionWredInfo()
    :
    probability{YType::uint32, "probability"},
    type{YType::enumeration, "type"},
    wred_flags{YType::uint32, "wred-flags"}
    	,
    match_ranges(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges>())
	,max_threshold(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold>())
	,min_threshold(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold>())
{
    match_ranges->parent = this;
    children["match-ranges"] = match_ranges;

    max_threshold->parent = this;
    children["max-threshold"] = max_threshold;

    min_threshold->parent = this;
    children["min-threshold"] = min_threshold;

    yang_name = "action-wred-info"; yang_parent_name = "wred";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::~ActionWredInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_data() const
{
    return probability.is_set
	|| type.is_set
	|| wred_flags.is_set
	|| (match_ranges !=  nullptr && match_ranges->has_data())
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(probability.operation)
	|| is_set(type.operation)
	|| is_set(wred_flags.operation)
	|| (match_ranges !=  nullptr && match_ranges->has_operation())
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-wred-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionWredInfo' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probability.is_set || is_set(probability.operation)) leaf_name_data.push_back(probability.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (wred_flags.is_set || is_set(wred_flags.operation)) leaf_name_data.push_back(wred_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match-ranges")
    {
        if(match_ranges != nullptr)
        {
            children["match-ranges"] = match_ranges;
        }
        else
        {
            match_ranges = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges>();
            match_ranges->parent = this;
            children["match-ranges"] = match_ranges;
        }
        return children.at("match-ranges");
    }

    if(child_yang_name == "max-threshold")
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
        else
        {
            max_threshold = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold>();
            max_threshold->parent = this;
            children["max-threshold"] = max_threshold;
        }
        return children.at("max-threshold");
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
        else
        {
            min_threshold = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold>();
            min_threshold->parent = this;
            children["min-threshold"] = min_threshold;
        }
        return children.at("min-threshold");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::get_children()
{
    if(children.find("match-ranges") == children.end())
    {
        if(match_ranges != nullptr)
        {
            children["match-ranges"] = match_ranges;
        }
    }

    if(children.find("max-threshold") == children.end())
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
    }

    if(children.find("min-threshold") == children.end())
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probability")
    {
        probability = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "wred-flags")
    {
        wred_flags = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::MatchRanges()
{
    yang_name = "match-ranges"; yang_parent_name = "action-wred-info";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::~MatchRanges()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-ranges";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchRanges' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "match-ranges";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MatchRanges::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold"; yang_parent_name = "action-wred-info";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::~MinThreshold()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold"; yang_parent_name = "action-wred-info";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::~MaxThreshold()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred::ActionWredInfo::MaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::Encap()
    :
    seq{YType::uint8, "seq"}
{
    yang_name = "encap"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::~Encap()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_data() const
{
    return seq.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_operation() const
{
    return is_set(operation)
	|| is_set(seq.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encap' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq.is_set || is_set(seq.operation)) leaf_name_data.push_back(seq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seq")
    {
        seq = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::Prio()
    :
    prio_lvl{YType::uint32, "prio-lvl"}
{
    yang_name = "prio"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::~Prio()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_data() const
{
    return prio_lvl.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::has_operation() const
{
    return is_set(operation)
	|| is_set(prio_lvl.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prio' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prio_lvl.is_set || is_set(prio_lvl.operation)) leaf_name_data.push_back(prio_lvl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prio-lvl")
    {
        prio_lvl = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem()
    :
    bwrem(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>())
{
    bwrem->parent = this;
    children["bwrem"] = bwrem;

    yang_name = "bwrem"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::~Bwrem()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_data() const
{
    return (bwrem !=  nullptr && bwrem->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_operation() const
{
    return is_set(operation)
	|| (bwrem !=  nullptr && bwrem->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bwrem' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
        else
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>();
            bwrem->parent = this;
            children["bwrem"] = bwrem;
        }
        return children.at("bwrem");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_children()
{
    if(children.find("bwrem") == children.end())
    {
        if(bwrem != nullptr)
        {
            children["bwrem"] = bwrem;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::Bwrem_()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bwrem"; yang_parent_name = "bwrem";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::~Bwrem_()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bwrem_' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::MinBw()
    :
    bw(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>())
{
    bw->parent = this;
    children["bw"] = bw;

    yang_name = "min-bw"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::~MinBw()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_data() const
{
    return (bw !=  nullptr && bw->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_operation() const
{
    return is_set(operation)
	|| (bw !=  nullptr && bw->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bw";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinBw' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw")
    {
        if(bw != nullptr)
        {
            children["bw"] = bw;
        }
        else
        {
            bw = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>();
            bw->parent = this;
            children["bw"] = bw;
        }
        return children.at("bw");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_children()
{
    if(children.find("bw") == children.end())
    {
        if(bw != nullptr)
        {
            children["bw"] = bw;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::Bw()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bw"; yang_parent_name = "min-bw";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::~Bw()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bw' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::AuthenAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    authen_password{YType::str, "authen-password"}
{
    yang_name = "authen-aaa"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::~AuthenAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_data() const
{
    return aaa_list_name.is_set
	|| authen_password.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(authen_password.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-aaa";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenAaa' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (authen_password.is_set || is_set(authen_password.operation)) leaf_name_data.push_back(authen_password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "authen-password")
    {
        authen_password = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::CollectId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    id{YType::enumeration, "id"}
{
    yang_name = "collect-id"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::~CollectId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_data() const
{
    return aaa_list_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(id.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CollectId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::DecodeId()
    :
    format_name{YType::str, "format-name"},
    id{YType::enumeration, "id"}
{
    yang_name = "decode-id"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::~DecodeId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_data() const
{
    return format_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_operation() const
{
    return is_set(operation)
	|| is_set(format_name.operation)
	|| is_set(id.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decode-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DecodeId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format-name")
    {
        format_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::SetTimer()
    :
    absolute_time{YType::str, "absolute-time"},
    duration{YType::uint32, "duration"},
    timer_name{YType::str, "timer-name"}
{
    yang_name = "set-timer"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::~SetTimer()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_data() const
{
    return absolute_time.is_set
	|| duration.is_set
	|| timer_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_time.operation)
	|| is_set(duration.operation)
	|| is_set(timer_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-timer";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetTimer' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_time.is_set || is_set(absolute_time.operation)) leaf_name_data.push_back(absolute_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-time")
    {
        absolute_time = value;
    }
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::StopTimer()
    :
    timer_name{YType::str, "timer-name"}
{
    yang_name = "stop-timer"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::~StopTimer()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_data() const
{
    return timer_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-timer";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StopTimer' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::AcctAaaList()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    secs{YType::uint32, "secs"}
{
    yang_name = "acct-aaa-list"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::~AcctAaaList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_data() const
{
    return aaa_list_name.is_set
	|| secs.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(secs.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-aaa-list";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcctAaaList' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (secs.is_set || is_set(secs.operation)) leaf_name_data.push_back(secs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "secs")
    {
        secs = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::QueryAncp()
    :
    enable{YType::uint8, "enable"}
{
    yang_name = "query-ancp"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::~QueryAncp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_data() const
{
    return enable.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-ancp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueryAncp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::PrepaidCfg()
    :
    prepaid_config_profile_name{YType::str, "prepaid-config-profile-name"}
{
    yang_name = "prepaid-cfg"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::~PrepaidCfg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_data() const
{
    return prepaid_config_profile_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(prepaid_config_profile_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-cfg";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrepaidCfg' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_config_profile_name.is_set || is_set(prepaid_config_profile_name.operation)) leaf_name_data.push_back(prepaid_config_profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prepaid-config-profile-name")
    {
        prepaid_config_profile_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::TimeoutIdle()
    :
    secs{YType::uint32, "secs"}
{
    yang_name = "timeout-idle"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::~TimeoutIdle()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_data() const
{
    return secs.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::has_operation() const
{
    return is_set(operation)
	|| is_set(secs.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-idle";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeoutIdle' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secs.is_set || is_set(secs.operation)) leaf_name_data.push_back(secs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secs")
    {
        secs = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::ProxyAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"}
{
    yang_name = "proxy-aaa"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::~ProxyAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_data() const
{
    return aaa_list_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-aaa";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyAaa' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::ActTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{
    yang_name = "act-template"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::~ActTemplate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(flags.operation)
	|| is_set(template_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-template";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActTemplate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::DeactTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{
    yang_name = "deact-template"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::~DeactTemplate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(flags.operation)
	|| is_set(template_name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deact-template";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeactTemplate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::Qlimit()
{
    yang_name = "qlimit"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::~Qlimit()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::has_data() const
{
    for (std::size_t index=0; index<action_qlimit_info_array.size(); index++)
    {
        if(action_qlimit_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::has_operation() const
{
    for (std::size_t index=0; index<action_qlimit_info_array.size(); index++)
    {
        if(action_qlimit_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qlimit' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-qlimit-info-array")
    {
        for(auto const & c : action_qlimit_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray>();
        c->parent = this;
        action_qlimit_info_array.push_back(std::move(c));
        children[segment_path] = action_qlimit_info_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::get_children()
{
    for (auto const & c : action_qlimit_info_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::ActionQlimitInfoArray()
    :
    qlimit_flags{YType::uint32, "qlimit-flags"},
    type{YType::enumeration, "type"}
    	,
    atmclp_qlim(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim>())
	,match_values(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues>())
	,qlim(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim>())
{
    atmclp_qlim->parent = this;
    children["atmclp-qlim"] = atmclp_qlim;

    match_values->parent = this;
    children["match-values"] = match_values;

    qlim->parent = this;
    children["qlim"] = qlim;

    yang_name = "action-qlimit-info-array"; yang_parent_name = "qlimit";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::~ActionQlimitInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::has_data() const
{
    return qlimit_flags.is_set
	|| type.is_set
	|| (atmclp_qlim !=  nullptr && atmclp_qlim->has_data())
	|| (match_values !=  nullptr && match_values->has_data())
	|| (qlim !=  nullptr && qlim->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(qlimit_flags.operation)
	|| is_set(type.operation)
	|| (atmclp_qlim !=  nullptr && atmclp_qlim->has_operation())
	|| (match_values !=  nullptr && match_values->has_operation())
	|| (qlim !=  nullptr && qlim->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-qlimit-info-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionQlimitInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qlimit_flags.is_set || is_set(qlimit_flags.operation)) leaf_name_data.push_back(qlimit_flags.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atmclp-qlim")
    {
        if(atmclp_qlim != nullptr)
        {
            children["atmclp-qlim"] = atmclp_qlim;
        }
        else
        {
            atmclp_qlim = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim>();
            atmclp_qlim->parent = this;
            children["atmclp-qlim"] = atmclp_qlim;
        }
        return children.at("atmclp-qlim");
    }

    if(child_yang_name == "match-values")
    {
        if(match_values != nullptr)
        {
            children["match-values"] = match_values;
        }
        else
        {
            match_values = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues>();
            match_values->parent = this;
            children["match-values"] = match_values;
        }
        return children.at("match-values");
    }

    if(child_yang_name == "qlim")
    {
        if(qlim != nullptr)
        {
            children["qlim"] = qlim;
        }
        else
        {
            qlim = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim>();
            qlim->parent = this;
            children["qlim"] = qlim;
        }
        return children.at("qlim");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::get_children()
{
    if(children.find("atmclp-qlim") == children.end())
    {
        if(atmclp_qlim != nullptr)
        {
            children["atmclp-qlim"] = atmclp_qlim;
        }
    }

    if(children.find("match-values") == children.end())
    {
        if(match_values != nullptr)
        {
            children["match-values"] = match_values;
        }
    }

    if(children.find("qlim") == children.end())
    {
        if(qlim != nullptr)
        {
            children["qlim"] = qlim;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qlimit-flags")
    {
        qlimit_flags = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::Qlim()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "qlim"; yang_parent_name = "action-qlimit-info-array";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::~Qlim()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlim";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qlim' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::Qlim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::AtmclpQlim()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "atmclp-qlim"; yang_parent_name = "action-qlimit-info-array";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::~AtmclpQlim()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmclp-qlim";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmclpQlim' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::AtmclpQlim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::MatchValues()
{
    yang_name = "match-values"; yang_parent_name = "action-qlimit-info-array";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::~MatchValues()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-values";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchValues' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "match-values";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit::ActionQlimitInfoArray::MatchValues::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::AccountingEventAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    action{YType::enumeration, "action"}
{
    yang_name = "accounting-event-aaa"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::~AccountingEventAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_data() const
{
    return aaa_list_name.is_set
	|| action.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(action.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-event-aaa";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountingEventAaa' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::AuthorizeId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    format_name{YType::str, "format-name"},
    id{YType::uint8, "id"},
    password{YType::str, "password"}
{
    yang_name = "authorize-id"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::~AuthorizeId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_data() const
{
    return aaa_list_name.is_set
	|| format_name.is_set
	|| id.is_set
	|| password.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list_name.operation)
	|| is_set(format_name.operation)
	|| is_set(id.operation)
	|| is_set(password.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizeId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.operation)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::AfmReact()
{
    yang_name = "afm-react"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::~AfmReact()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_data() const
{
    for (std::size_t index=0; index<action_afmon_react_info.size(); index++)
    {
        if(action_afmon_react_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_operation() const
{
    for (std::size_t index=0; index<action_afmon_react_info.size(); index++)
    {
        if(action_afmon_react_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afm-react";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfmReact' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-afmon-react-info")
    {
        for(auto const & c : action_afmon_react_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo>();
        c->parent = this;
        action_afmon_react_info.push_back(std::move(c));
        children[segment_path] = action_afmon_react_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_children()
{
    for (auto const & c : action_afmon_react_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::ActionAfmonReactInfo()
    :
    alm_grp_thresh{YType::uint16, "alm-grp-thresh"},
    alm_severity{YType::uint8, "alm-severity"},
    alm_type{YType::uint8, "alm-type"},
    clone_ifh{YType::uint32, "clone-ifh"},
    criterion{YType::uint8, "criterion"},
    description{YType::str, "description"},
    notif_actns{YType::uint8, "notif-actns"},
    oper_id{YType::uint32, "oper-id"},
    trig_level_1{YType::str, "trig-level-1"},
    trig_level_2{YType::str, "trig-level-2"},
    trig_num_intvls{YType::uint32, "trig-num-intvls"},
    trig_relop{YType::uint8, "trig-relop"},
    trig_type{YType::uint8, "trig-type"}
{
    yang_name = "action-afmon-react-info"; yang_parent_name = "afm-react";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::~ActionAfmonReactInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_data() const
{
    return alm_grp_thresh.is_set
	|| alm_severity.is_set
	|| alm_type.is_set
	|| clone_ifh.is_set
	|| criterion.is_set
	|| description.is_set
	|| notif_actns.is_set
	|| oper_id.is_set
	|| trig_level_1.is_set
	|| trig_level_2.is_set
	|| trig_num_intvls.is_set
	|| trig_relop.is_set
	|| trig_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alm_grp_thresh.operation)
	|| is_set(alm_severity.operation)
	|| is_set(alm_type.operation)
	|| is_set(clone_ifh.operation)
	|| is_set(criterion.operation)
	|| is_set(description.operation)
	|| is_set(notif_actns.operation)
	|| is_set(oper_id.operation)
	|| is_set(trig_level_1.operation)
	|| is_set(trig_level_2.operation)
	|| is_set(trig_num_intvls.operation)
	|| is_set(trig_relop.operation)
	|| is_set(trig_type.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-afmon-react-info";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionAfmonReactInfo' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alm_grp_thresh.is_set || is_set(alm_grp_thresh.operation)) leaf_name_data.push_back(alm_grp_thresh.get_name_leafdata());
    if (alm_severity.is_set || is_set(alm_severity.operation)) leaf_name_data.push_back(alm_severity.get_name_leafdata());
    if (alm_type.is_set || is_set(alm_type.operation)) leaf_name_data.push_back(alm_type.get_name_leafdata());
    if (clone_ifh.is_set || is_set(clone_ifh.operation)) leaf_name_data.push_back(clone_ifh.get_name_leafdata());
    if (criterion.is_set || is_set(criterion.operation)) leaf_name_data.push_back(criterion.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (notif_actns.is_set || is_set(notif_actns.operation)) leaf_name_data.push_back(notif_actns.get_name_leafdata());
    if (oper_id.is_set || is_set(oper_id.operation)) leaf_name_data.push_back(oper_id.get_name_leafdata());
    if (trig_level_1.is_set || is_set(trig_level_1.operation)) leaf_name_data.push_back(trig_level_1.get_name_leafdata());
    if (trig_level_2.is_set || is_set(trig_level_2.operation)) leaf_name_data.push_back(trig_level_2.get_name_leafdata());
    if (trig_num_intvls.is_set || is_set(trig_num_intvls.operation)) leaf_name_data.push_back(trig_num_intvls.get_name_leafdata());
    if (trig_relop.is_set || is_set(trig_relop.operation)) leaf_name_data.push_back(trig_relop.get_name_leafdata());
    if (trig_type.is_set || is_set(trig_type.operation)) leaf_name_data.push_back(trig_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alm-grp-thresh")
    {
        alm_grp_thresh = value;
    }
    if(value_path == "alm-severity")
    {
        alm_severity = value;
    }
    if(value_path == "alm-type")
    {
        alm_type = value;
    }
    if(value_path == "clone-ifh")
    {
        clone_ifh = value;
    }
    if(value_path == "criterion")
    {
        criterion = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "notif-actns")
    {
        notif_actns = value;
    }
    if(value_path == "oper-id")
    {
        oper_id = value;
    }
    if(value_path == "trig-level-1")
    {
        trig_level_1 = value;
    }
    if(value_path == "trig-level-2")
    {
        trig_level_2 = value;
    }
    if(value_path == "trig-num-intvls")
    {
        trig_num_intvls = value;
    }
    if(value_path == "trig-relop")
    {
        trig_relop = value;
    }
    if(value_path == "trig-type")
    {
        trig_type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::Httpr()
    :
    redirect_url{YType::str, "redirect-url"}
{
    yang_name = "httpr"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::~Httpr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_data() const
{
    return redirect_url.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_operation() const
{
    return is_set(operation)
	|| is_set(redirect_url.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "httpr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Httpr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect_url.is_set || is_set(redirect_url.operation)) leaf_name_data.push_back(redirect_url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redirect-url")
    {
        redirect_url = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::Punt()
    :
    app_id{YType::uint32, "app-id"},
    local_id{YType::uint32, "local-id"},
    sn_index{YType::uint32, "sn-index"},
    sn_name{YType::str, "sn-name"},
    sn_type{YType::enumeration, "sn-type"},
    vsnode_type{YType::enumeration, "vsnode-type"}
{
    yang_name = "punt"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::~Punt()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::has_data() const
{
    return app_id.is_set
	|| local_id.is_set
	|| sn_index.is_set
	|| sn_name.is_set
	|| sn_type.is_set
	|| vsnode_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::has_operation() const
{
    return is_set(operation)
	|| is_set(app_id.operation)
	|| is_set(local_id.operation)
	|| is_set(sn_index.operation)
	|| is_set(sn_name.operation)
	|| is_set(sn_type.operation)
	|| is_set(vsnode_type.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Punt' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_id.is_set || is_set(app_id.operation)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (sn_index.is_set || is_set(sn_index.operation)) leaf_name_data.push_back(sn_index.get_name_leafdata());
    if (sn_name.is_set || is_set(sn_name.operation)) leaf_name_data.push_back(sn_name.get_name_leafdata());
    if (sn_type.is_set || is_set(sn_type.operation)) leaf_name_data.push_back(sn_type.get_name_leafdata());
    if (vsnode_type.is_set || is_set(vsnode_type.operation)) leaf_name_data.push_back(vsnode_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "app-id")
    {
        app_id = value;
    }
    if(value_path == "local-id")
    {
        local_id = value;
    }
    if(value_path == "sn-index")
    {
        sn_index = value;
    }
    if(value_path == "sn-name")
    {
        sn_name = value;
    }
    if(value_path == "sn-type")
    {
        sn_type = value;
    }
    if(value_path == "vsnode-type")
    {
        vsnode_type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::Copy()
    :
    app_id{YType::uint32, "app-id"},
    local_id{YType::uint32, "local-id"},
    num_byte{YType::uint32, "num-byte"},
    sn_index{YType::uint32, "sn-index"},
    sn_name{YType::str, "sn-name"},
    sn_type{YType::enumeration, "sn-type"},
    vsnode_type{YType::enumeration, "vsnode-type"}
{
    yang_name = "copy"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::~Copy()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_data() const
{
    return app_id.is_set
	|| local_id.is_set
	|| num_byte.is_set
	|| sn_index.is_set
	|| sn_name.is_set
	|| sn_type.is_set
	|| vsnode_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_operation() const
{
    return is_set(operation)
	|| is_set(app_id.operation)
	|| is_set(local_id.operation)
	|| is_set(num_byte.operation)
	|| is_set(sn_index.operation)
	|| is_set(sn_name.operation)
	|| is_set(sn_type.operation)
	|| is_set(vsnode_type.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copy";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Copy' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_id.is_set || is_set(app_id.operation)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (num_byte.is_set || is_set(num_byte.operation)) leaf_name_data.push_back(num_byte.get_name_leafdata());
    if (sn_index.is_set || is_set(sn_index.operation)) leaf_name_data.push_back(sn_index.get_name_leafdata());
    if (sn_name.is_set || is_set(sn_name.operation)) leaf_name_data.push_back(sn_name.get_name_leafdata());
    if (sn_type.is_set || is_set(sn_type.operation)) leaf_name_data.push_back(sn_type.get_name_leafdata());
    if (vsnode_type.is_set || is_set(vsnode_type.operation)) leaf_name_data.push_back(vsnode_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "app-id")
    {
        app_id = value;
    }
    if(value_path == "local-id")
    {
        local_id = value;
    }
    if(value_path == "num-byte")
    {
        num_byte = value;
    }
    if(value_path == "sn-index")
    {
        sn_index = value;
    }
    if(value_path == "sn-name")
    {
        sn_name = value;
    }
    if(value_path == "sn-type")
    {
        sn_type = value;
    }
    if(value_path == "vsnode-type")
    {
        vsnode_type = value;
    }
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::Sfrag()
    :
    name{YType::str, "name"}
{
    yang_name = "sfrag"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::~Sfrag()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::has_data() const
{
    return name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfrag";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sfrag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}


}
}

