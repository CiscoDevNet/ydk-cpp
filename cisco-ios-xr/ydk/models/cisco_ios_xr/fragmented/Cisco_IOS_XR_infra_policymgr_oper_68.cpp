
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_68.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::VendorId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "vendor-id"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::~VendorId()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::VendorIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "vendor-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::~VendorIdRegex()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id-regex";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::AccessInterface()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "access-interface"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::~AccessInterface()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::InputInterface()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "input-interface"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::~InputInterface()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::InputIntfhdl()
    :
    uint64_array{YType::uint64, "uint64_array"}
{
    yang_name = "input-intfhdl"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::~InputIntfhdl()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_data() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_operation() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint64_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-intfhdl";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint64_array")
    {
        uint64_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Ethertype()
{
    yang_name = "ethertype"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::~Ethertype()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethertype";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ethertype";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeyData()
    :
    idle_timeout{YType::uint16, "idle-timeout"},
    max_count{YType::uint16, "max-count"}
    	,
    flow_keys(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>())
{
    flow_keys->parent = this;

    yang_name = "flow-key-data"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::~FlowKeyData()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_data() const
{
    return idle_timeout.is_set
	|| max_count.is_set
	|| (flow_keys !=  nullptr && flow_keys->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_operation() const
{
    return is_set(operation)
	|| is_set(idle_timeout.operation)
	|| is_set(max_count.operation)
	|| (flow_keys !=  nullptr && flow_keys->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-key-data";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-keys")
    {
        if(flow_keys == nullptr)
        {
            flow_keys = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>();
        }
        return flow_keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_keys != nullptr)
    {
        children["flow-keys"] = flow_keys;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::FlowKeys()
    :
    keys{YType::str, "keys"},
    num{YType::uint8, "num"}
{
    yang_name = "flow-keys"; yang_parent_name = "flow-key-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::~FlowKeys()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_data() const
{
    return keys.is_set
	|| num.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_operation() const
{
    return is_set(operation)
	|| is_set(keys.operation)
	|| is_set(num.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-keys";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::DhcpClientId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dhcp-client-id"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::CircuitId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "circuit-id"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::~CircuitId()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::CircuitIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "circuit-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::~CircuitIdRegex()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-regex";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::RemoteId()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "remote-id"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::~RemoteId()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::RemoteIdRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "remote-id-regex"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::~RemoteIdRegex()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-regex";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::SrcPort()
{
    yang_name = "src-port"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::~SrcPort()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "src-port";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::DstPort()
{
    yang_name = "dst-port"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::~DstPort()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Shape()
    :
    be(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be>())
	,bw(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw>())
{
    be->parent = this;

    bw->parent = this;

    yang_name = "shape"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::~Shape()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::has_data() const
{
    return (be !=  nullptr && be->has_data())
	|| (bw !=  nullptr && bw->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::has_operation() const
{
    return is_set(operation)
	|| (be !=  nullptr && be->has_operation())
	|| (bw !=  nullptr && bw->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "be")
    {
        if(be == nullptr)
        {
            be = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be>();
        }
        return be;
    }

    if(child_yang_name == "bw")
    {
        if(bw == nullptr)
        {
            bw = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw>();
        }
        return bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(be != nullptr)
    {
        children["be"] = be;
    }

    if(bw != nullptr)
    {
        children["bw"] = bw;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::Bw()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bw"; yang_parent_name = "shape";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::~Bw()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::Be()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "be"; yang_parent_name = "shape";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::~Be()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "be";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Be' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::ChildPolicy()
    :
    enc{YType::enumeration, "enc"}
    	,
    hd_info(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo>())
	,info(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info>())
{
    hd_info->parent = this;

    info->parent = this;

    yang_name = "child-policy"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::~ChildPolicy()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_data() const
{
    return enc.is_set
	|| (hd_info !=  nullptr && hd_info->has_data())
	|| (info !=  nullptr && info->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(enc.operation)
	|| (hd_info !=  nullptr && hd_info->has_operation())
	|| (info !=  nullptr && info->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enc.is_set || is_set(enc.operation)) leaf_name_data.push_back(enc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hd-info")
    {
        if(hd_info == nullptr)
        {
            hd_info = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo>();
        }
        return hd_info;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hd_info != nullptr)
    {
        children["hd-info"] = hd_info;
    }

    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enc")
    {
        enc = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::Info()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
{
    yang_name = "info"; yang_parent_name = "child-policy";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::~Info()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_data() const
{
    return name.is_set
	|| type.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::HdInfo()
    :
    hd{YType::uint64, "hd"}
    	,
    data_hd(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd>())
{
    data_hd->parent = this;

    yang_name = "hd-info"; yang_parent_name = "child-policy";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::~HdInfo()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_data() const
{
    return hd.is_set
	|| (data_hd !=  nullptr && data_hd->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(hd.operation)
	|| (data_hd !=  nullptr && data_hd->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hd-info";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HdInfo' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hd.is_set || is_set(hd.operation)) leaf_name_data.push_back(hd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-hd")
    {
        if(data_hd == nullptr)
        {
            data_hd = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd>();
        }
        return data_hd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_hd != nullptr)
    {
        children["data-hd"] = data_hd;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hd")
    {
        hd = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::DataHd()
{
    yang_name = "data-hd"; yang_parent_name = "hd-info";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::~DataHd()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_data() const
{
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_operation() const
{
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-hd";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataHd' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Cac()
    :
    cac_type{YType::uint8, "cac-type"},
    idle_timeout{YType::uint16, "idle-timeout"}
    	,
    flow_rate(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate>())
	,rate(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate>())
{
    flow_rate->parent = this;

    rate->parent = this;

    yang_name = "cac"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::~Cac()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_data() const
{
    return cac_type.is_set
	|| idle_timeout.is_set
	|| (flow_rate !=  nullptr && flow_rate->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_operation() const
{
    return is_set(operation)
	|| is_set(cac_type.operation)
	|| is_set(idle_timeout.operation)
	|| (flow_rate !=  nullptr && flow_rate->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_type.is_set || is_set(cac_type.operation)) leaf_name_data.push_back(cac_type.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-rate")
    {
        if(flow_rate == nullptr)
        {
            flow_rate = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate>();
        }
        return flow_rate;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_rate != nullptr)
    {
        children["flow-rate"] = flow_rate;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-type")
    {
        cac_type = value;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::FlowRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "flow-rate"; yang_parent_name = "cac";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::~FlowRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::Rate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "rate"; yang_parent_name = "cac";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::~Rate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::Pfc()
    :
    buffer_size_flag{YType::uint32, "buffer-size-flag"},
    pfc_pause_set{YType::uint32, "pfc-pause-set"}
    	,
    buffer_size(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>())
	,pause_threshold(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>())
	,resume_threshold(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>())
{
    buffer_size->parent = this;

    pause_threshold->parent = this;

    resume_threshold->parent = this;

    yang_name = "pfc"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::~Pfc()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_data() const
{
    return buffer_size_flag.is_set
	|| pfc_pause_set.is_set
	|| (buffer_size !=  nullptr && buffer_size->has_data())
	|| (pause_threshold !=  nullptr && pause_threshold->has_data())
	|| (resume_threshold !=  nullptr && resume_threshold->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size_flag.operation)
	|| is_set(pfc_pause_set.operation)
	|| (buffer_size !=  nullptr && buffer_size->has_operation())
	|| (pause_threshold !=  nullptr && pause_threshold->has_operation())
	|| (resume_threshold !=  nullptr && resume_threshold->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfc' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size_flag.is_set || is_set(buffer_size_flag.operation)) leaf_name_data.push_back(buffer_size_flag.get_name_leafdata());
    if (pfc_pause_set.is_set || is_set(pfc_pause_set.operation)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>();
        }
        return buffer_size;
    }

    if(child_yang_name == "pause-threshold")
    {
        if(pause_threshold == nullptr)
        {
            pause_threshold = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>();
        }
        return pause_threshold;
    }

    if(child_yang_name == "resume-threshold")
    {
        if(resume_threshold == nullptr)
        {
            resume_threshold = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>();
        }
        return resume_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    if(pause_threshold != nullptr)
    {
        children["pause-threshold"] = pause_threshold;
    }

    if(resume_threshold != nullptr)
    {
        children["resume-threshold"] = resume_threshold;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag = value;
    }
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::BufferSize()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "buffer-size"; yang_parent_name = "pfc";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::~BufferSize()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BufferSize' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::PauseThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pause-threshold"; yang_parent_name = "pfc";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::~PauseThreshold()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-threshold";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PauseThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::ResumeThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "resume-threshold"; yang_parent_name = "pfc";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::~ResumeThreshold()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume-threshold";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResumeThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::FlowParm()
    :
    flow_timeout{YType::uint32, "flow-timeout"},
    intvl_hist{YType::uint32, "intvl-hist"},
    max_mon_flows{YType::uint32, "max-mon-flows"},
    mon_interval{YType::uint32, "mon-interval"}
{
    yang_name = "flow-parm"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::~FlowParm()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_data() const
{
    return flow_timeout.is_set
	|| intvl_hist.is_set
	|| max_mon_flows.is_set
	|| mon_interval.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_timeout.operation)
	|| is_set(intvl_hist.operation)
	|| is_set(max_mon_flows.operation)
	|| is_set(mon_interval.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-parm";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowParm' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_timeout.is_set || is_set(flow_timeout.operation)) leaf_name_data.push_back(flow_timeout.get_name_leafdata());
    if (intvl_hist.is_set || is_set(intvl_hist.operation)) leaf_name_data.push_back(intvl_hist.get_name_leafdata());
    if (max_mon_flows.is_set || is_set(max_mon_flows.operation)) leaf_name_data.push_back(max_mon_flows.get_name_leafdata());
    if (mon_interval.is_set || is_set(mon_interval.operation)) leaf_name_data.push_back(mon_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-timeout")
    {
        flow_timeout = value;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist = value;
    }
    if(value_path == "max-mon-flows")
    {
        max_mon_flows = value;
    }
    if(value_path == "mon-interval")
    {
        mon_interval = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::Ipcbr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    media_pkt_size{YType::uint32, "media-pkt-size"},
    media_pkts_per_ip{YType::uint32, "media-pkts-per-ip"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>())
	,media_bit_rate(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>())
{
    ip_bit_rate->parent = this;

    media_bit_rate->parent = this;

    yang_name = "ipcbr"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::~Ipcbr()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_data() const
{
    return action_metric_type.is_set
	|| ip_pkt_rate.is_set
	|| media_pkt_size.is_set
	|| media_pkts_per_ip.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_operation() const
{
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(ip_pkt_rate.operation)
	|| is_set(media_pkt_size.operation)
	|| is_set(media_pkts_per_ip.operation)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcbr";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipcbr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.operation)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());
    if (media_pkt_size.is_set || is_set(media_pkt_size.operation)) leaf_name_data.push_back(media_pkt_size.get_name_leafdata());
    if (media_pkts_per_ip.is_set || is_set(media_pkts_per_ip.operation)) leaf_name_data.push_back(media_pkts_per_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>();
        }
        return ip_bit_rate;
    }

    if(child_yang_name == "media-bit-rate")
    {
        if(media_bit_rate == nullptr)
        {
            media_bit_rate = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>();
        }
        return media_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    if(media_bit_rate != nullptr)
    {
        children["media-bit-rate"] = media_bit_rate;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size = value;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ip-bit-rate"; yang_parent_name = "ipcbr";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::MediaBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "media-bit-rate"; yang_parent_name = "ipcbr";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::~MediaBitRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-bit-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::Rtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::~Rtp()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::~ClockRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::RtpMmr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp-mmr"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::~RtpMmr()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-mmr";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtpMmr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp-mmr";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::~ClockRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::RtpJ2K()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp-j2k"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::~RtpJ2K()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-j2k";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtpJ2K' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp-j2k";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::~ClockRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::RtpVoice()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp-voice"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::~RtpVoice()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-voice";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtpVoice' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp-voice";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::~ClockRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::Mdi()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::~Mdi()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(filtered_pkt_rate.operation)
	|| is_set(ip_pkt_rate.operation)
	|| is_set(pids.operation)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mdi' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.operation)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.operation)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ip-bit-rate"; yang_parent_name = "mdi";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::MdiRtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi-rtp"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::~MdiRtp()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(filtered_pkt_rate.operation)
	|| is_set(ip_pkt_rate.operation)
	|| is_set(pids.operation)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi-rtp";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MdiRtp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.operation)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.operation)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ip-bit-rate"; yang_parent_name = "mdi-rtp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::Fmm()
    :
    fmm_name{YType::str, "fmm-name"}
{
    yang_name = "fmm"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::~Fmm()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_data() const
{
    return fmm_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_operation() const
{
    return is_set(operation)
	|| is_set(fmm_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmm";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fmm' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fmm_name.is_set || is_set(fmm_name.operation)) leaf_name_data.push_back(fmm_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fmm-name")
    {
        fmm_name = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::Pbf()
{
    yang_name = "pbf"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::~Pbf()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_data() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_operation() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbf";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbf' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-pbf-info-array")
    {
        for(auto const & c : action_pbf_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray>();
        c->parent = this;
        action_pbf_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_pbf_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::ActionPbfInfoArray()
    :
    addr{YType::str, "addr"},
    rt{YType::str, "rt"},
    rt_type{YType::uint8, "rt-type"},
    vrf{YType::str, "vrf"}
{
    yang_name = "action-pbf-info-array"; yang_parent_name = "pbf";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::~ActionPbfInfoArray()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_data() const
{
    return addr.is_set
	|| rt.is_set
	|| rt_type.is_set
	|| vrf.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(rt.operation)
	|| is_set(rt_type.operation)
	|| is_set(vrf.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-pbf-info-array";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionPbfInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "rt")
    {
        rt = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::Ipv4Nh()
{
    yang_name = "ipv4-nh"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::~Ipv4Nh()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-nh";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Nh' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv4-nh-info-array")
    {
        for(auto const & c : action_ipv4_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray>();
        c->parent = this;
        action_ipv4_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv4_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::ActionIpv4NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "action-ipv4-nh-info-array"; yang_parent_name = "ipv4-nh";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::~ActionIpv4NhInfoArray()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(nh_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv4-nh-info-array";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionIpv4NhInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.operation)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::Ipv6Nh()
{
    yang_name = "ipv6-nh"; yang_parent_name = "actp";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::~Ipv6Nh()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-nh";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Nh' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv6-nh-info-array")
    {
        for(auto const & c : action_ipv6_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray>();
        c->parent = this;
        action_ipv6_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv6_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::ActionIpv6NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "action-ipv6-nh-info-array"; yang_parent_name = "ipv6-nh";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::~ActionIpv6NhInfoArray()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(nh_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv6-nh-info-array";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionIpv6NhInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.operation)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetails()
{
    yang_name = "policy-map-details"; yang_parent_name = "policy-map-type";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::~PolicyMapDetails()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::has_data() const
{
    for (std::size_t index=0; index<policy_map_detail.size(); index++)
    {
        if(policy_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::has_operation() const
{
    for (std::size_t index=0; index<policy_map_detail.size(); index++)
    {
        if(policy_map_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-details";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapDetails' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-detail")
    {
        for(auto const & c : policy_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail>();
        c->parent = this;
        policy_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::PolicyMapDetail()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "policy-map-detail"; yang_parent_name = "policy-map-details";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::~PolicyMapDetail()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_map_name.operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-detail" <<"[policy-map-name='" <<policy_map_name <<"']";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapDetail' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "policy-map-detail";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::~Reference()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "policy-map-detail";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::~Object()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "policy-map-detail";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
}

PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapTypes()
{
    yang_name = "transient-policy-map-types"; yang_parent_name = "policy-map";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::~TransientPolicyMapTypes()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::has_data() const
{
    for (std::size_t index=0; index<transient_policy_map_type.size(); index++)
    {
        if(transient_policy_map_type[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::has_operation() const
{
    for (std::size_t index=0; index<transient_policy_map_type.size(); index++)
    {
        if(transient_policy_map_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-types";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransientPolicyMapTypes' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-policy-map-type")
    {
        for(auto const & c : transient_policy_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType>();
        c->parent = this;
        transient_policy_map_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transient_policy_map_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientPolicyMapType()
    :
    type{YType::enumeration, "type"}
    	,
    transient_list_unuseds(std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>())
{
    transient_list_unuseds->parent = this;

    yang_name = "transient-policy-map-type"; yang_parent_name = "transient-policy-map-types";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::~TransientPolicyMapType()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_data() const
{
    return type.is_set
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_data());
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_operation());
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-type" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransientPolicyMapType' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-list-unuseds")
    {
        if(transient_list_unuseds == nullptr)
        {
            transient_list_unuseds = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>();
        }
        return transient_list_unuseds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transient_list_unuseds != nullptr)
    {
        children["transient-list-unuseds"] = transient_list_unuseds;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnuseds()
{
    yang_name = "transient-list-unuseds"; yang_parent_name = "transient-policy-map-type";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::~TransientListUnuseds()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_data() const
{
    for (std::size_t index=0; index<transient_list_unused.size(); index++)
    {
        if(transient_list_unused[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_operation() const
{
    for (std::size_t index=0; index<transient_list_unused.size(); index++)
    {
        if(transient_list_unused[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unuseds";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransientListUnuseds' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-list-unused")
    {
        for(auto const & c : transient_list_unused)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused>();
        c->parent = this;
        transient_list_unused.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transient_list_unused)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::TransientListUnused()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "transient-list-unused"; yang_parent_name = "transient-list-unuseds";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::~TransientListUnused()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_map_name.operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unused" <<"[policy-map-name='" <<policy_map_name <<"']";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransientListUnused' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "transient-list-unused";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::~Reference()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "transient-list-unused";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::~Object()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "transient-list-unused";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
}

PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Nodes::Node::Summary::Summary()
    :
    total_class_map_types{YType::uint32, "total-class-map-types"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_policy_map_types{YType::uint32, "total-policy-map-types"},
    total_policy_maps{YType::uint32, "total-policy-maps"}
{
    yang_name = "summary"; yang_parent_name = "node";
}

PolicyManager::Nodes::Node::Summary::~Summary()
{
}

bool PolicyManager::Nodes::Node::Summary::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return total_class_map_types.is_set
	|| total_class_maps.is_set
	|| total_policy_map_types.is_set
	|| total_policy_maps.is_set;
}

bool PolicyManager::Nodes::Node::Summary::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_class_map_types.operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_policy_map_types.operation)
	|| is_set(total_policy_maps.operation);
}

std::string PolicyManager::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_map_types.is_set || is_set(total_class_map_types.operation)) leaf_name_data.push_back(total_class_map_types.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_policy_map_types.is_set || is_set(total_policy_map_types.operation)) leaf_name_data.push_back(total_policy_map_types.get_name_leafdata());
    if (total_policy_maps.is_set || is_set(total_policy_maps.operation)) leaf_name_data.push_back(total_policy_maps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-map")
    {
        for(auto const & c : policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::PolicyMap>();
        c->parent = this;
        policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : policy_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-map-types")
    {
        total_class_map_types = value;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-policy-map-types")
    {
        total_policy_map_types = value;
    }
    if(value_path == "total-policy-maps")
    {
        total_policy_maps = value;
    }
}

PolicyManager::Nodes::Node::Summary::ClassMap::ClassMap()
    :
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "class-map"; yang_parent_name = "summary";
}

PolicyManager::Nodes::Node::Summary::ClassMap::~ClassMap()
{
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Nodes::Node::Summary::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMap' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::ClassMap::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::ClassMap::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::Summary::ClassMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Nodes::Node::Summary::ClassMap::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "class-map";
}

PolicyManager::Nodes::Node::Summary::ClassMap::Reference::~Reference()
{
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::Summary::ClassMap::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::ClassMap::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::ClassMap::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::ClassMap::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::Summary::ClassMap::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::Summary::ClassMap::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "class-map";
}

PolicyManager::Nodes::Node::Summary::ClassMap::Object::~Object()
{
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Nodes::Node::Summary::ClassMap::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::ClassMap::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::ClassMap::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::ClassMap::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::Summary::ClassMap::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "class-map";
}

PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
}

PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::Summary::ClassMap::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Nodes::Node::Summary::PolicyMap::PolicyMap()
    :
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "policy-map"; yang_parent_name = "summary";
}

PolicyManager::Nodes::Node::Summary::PolicyMap::~PolicyMap()
{
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Nodes::Node::Summary::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::PolicyMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMap' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::PolicyMap::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::PolicyMap::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::Summary::PolicyMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "policy-map";
}

PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::~Reference()
{
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::Summary::PolicyMap::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::Summary::PolicyMap::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "policy-map";
}

PolicyManager::Nodes::Node::Summary::PolicyMap::Object::~Object()
{
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Nodes::Node::Summary::PolicyMap::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::PolicyMap::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::PolicyMap::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::PolicyMap::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::Summary::PolicyMap::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "policy-map";
}

PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
}

PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

const EntityPath PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::Summary::PolicyMap::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}


}
}

